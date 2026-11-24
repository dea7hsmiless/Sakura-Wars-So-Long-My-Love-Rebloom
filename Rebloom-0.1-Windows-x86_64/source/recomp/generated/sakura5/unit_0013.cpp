#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0013[4096] = {
    1, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0,
    0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0,
    0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0,
    0, 69, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 80,
    0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0,
    0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0,
    0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0,
    0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0,
    152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0,
    0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0,
    0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0,
    177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0,
    195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0,
    201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0,
    205, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0,
    0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227,
    0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0,
    0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0,
    0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283,
    0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0,
    293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0,
    298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0,
    0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 313, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0,
    0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0,
    0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0,
    342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0,
    351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0,
    0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 367, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0,
    0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    375, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0,
    0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0,
    0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0,
    393, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0,
};

void unit_0013(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0016C000;
    case 2u: goto L_0016C008;
    case 3u: goto L_0016C01C;
    case 4u: goto L_0016C048;
    case 5u: goto L_0016C060;
    case 6u: goto L_0016C0A8;
    case 7u: goto L_0016C0B0;
    case 8u: goto L_0016C0C0;
    case 9u: goto L_0016C118;
    case 10u: goto L_0016C138;
    case 11u: goto L_0016C140;
    case 12u: goto L_0016C1B4;
    case 13u: goto L_0016C1EC;
    case 14u: goto L_0016C204;
    case 15u: goto L_0016C214;
    case 16u: goto L_0016C234;
    case 17u: goto L_0016C248;
    case 18u: goto L_0016C25C;
    case 19u: goto L_0016C370;
    case 20u: goto L_0016C400;
    case 21u: goto L_0016C438;
    case 22u: goto L_0016C440;
    case 23u: goto L_0016C450;
    case 24u: goto L_0016C4A4;
    case 25u: goto L_0016C4BC;
    case 26u: goto L_0016C4C8;
    case 27u: goto L_0016C510;
    case 28u: goto L_0016C550;
    case 29u: goto L_0016C560;
    case 30u: goto L_0016C590;
    case 31u: goto L_0016C5B0;
    case 32u: goto L_0016C5C0;
    case 33u: goto L_0016C798;
    case 34u: goto L_0016C7B0;
    case 35u: goto L_0016C7C8;
    case 36u: goto L_0016C7D4;
    case 37u: goto L_0016C820;
    case 38u: goto L_0016C858;
    case 39u: goto L_0016C864;
    case 40u: goto L_0016C890;
    case 41u: goto L_0016C95C;
    case 42u: goto L_0016C9BC;
    case 43u: goto L_0016CA14;
    case 44u: goto L_0016CA54;
    case 45u: goto L_0016CA5C;
    case 46u: goto L_0016CA68;
    case 47u: goto L_0016CA98;
    case 48u: goto L_0016CB18;
    case 49u: goto L_0016CC28;
    case 50u: goto L_0016CC60;
    case 51u: goto L_0016CC6C;
    case 52u: goto L_0016CCA0;
    case 53u: goto L_0016CD68;
    case 54u: goto L_0016CD84;
    case 55u: goto L_0016CDA8;
    case 56u: goto L_0016CDC0;
    case 57u: goto L_0016CE20;
    case 58u: goto L_0016CE6C;
    case 59u: goto L_0016CEC4;
    case 60u: goto L_0016CEE8;
    case 61u: goto L_0016CEF0;
    case 62u: goto L_0016CF1C;
    case 63u: goto L_0016CF24;
    case 64u: goto L_0016CF44;
    case 65u: goto L_0016CF5C;
    case 66u: goto L_0016CF68;
    case 67u: goto L_0016CFD8;
    case 68u: goto L_0016CFEC;
    case 69u: goto L_0016D004;
    case 70u: goto L_0016D014;
    case 71u: goto L_0016D020;
    case 72u: goto L_0016D070;
    case 73u: goto L_0016D098;
    case 74u: goto L_0016D0A8;
    case 75u: goto L_0016D0C0;
    case 76u: goto L_0016D164;
    case 77u: goto L_0016D1C8;
    case 78u: goto L_0016D1DC;
    case 79u: goto L_0016D1F4;
    case 80u: goto L_0016D1FC;
    case 81u: goto L_0016D218;
    case 82u: goto L_0016D224;
    case 83u: goto L_0016D240;
    case 84u: goto L_0016D2B0;
    case 85u: goto L_0016D2C0;
    case 86u: goto L_0016D2D8;
    case 87u: goto L_0016D2F0;
    case 88u: goto L_0016D328;
    case 89u: goto L_0016D354;
    case 90u: goto L_0016D360;
    case 91u: goto L_0016D368;
    case 92u: goto L_0016D394;
    case 93u: goto L_0016D3E0;
    case 94u: goto L_0016D410;
    case 95u: goto L_0016D428;
    case 96u: goto L_0016D43C;
    case 97u: goto L_0016D44C;
    case 98u: goto L_0016D470;
    case 99u: goto L_0016D4B4;
    case 100u: goto L_0016D4CC;
    case 101u: goto L_0016D4E0;
    case 102u: goto L_0016D504;
    case 103u: goto L_0016D524;
    case 104u: goto L_0016D538;
    case 105u: goto L_0016D570;
    case 106u: goto L_0016D580;
    case 107u: goto L_0016D590;
    case 108u: goto L_0016D5B8;
    case 109u: goto L_0016D5D4;
    case 110u: goto L_0016D628;
    case 111u: goto L_0016D670;
    case 112u: goto L_0016D690;
    case 113u: goto L_0016D6C0;
    case 114u: goto L_0016D6E8;
    case 115u: goto L_0016D70C;
    case 116u: goto L_0016D764;
    case 117u: goto L_0016D790;
    case 118u: goto L_0016D7A0;
    case 119u: goto L_0016D7F0;
    case 120u: goto L_0016D820;
    case 121u: goto L_0016D864;
    case 122u: goto L_0016D8A0;
    case 123u: goto L_0016D8BC;
    case 124u: goto L_0016D8CC;
    case 125u: goto L_0016D8E0;
    case 126u: goto L_0016D910;
    case 127u: goto L_0016D920;
    case 128u: goto L_0016D930;
    case 129u: goto L_0016D94C;
    case 130u: goto L_0016D95C;
    case 131u: goto L_0016D970;
    case 132u: goto L_0016D98C;
    case 133u: goto L_0016D99C;
    case 134u: goto L_0016D9B0;
    case 135u: goto L_0016D9D0;
    case 136u: goto L_0016D9E0;
    case 137u: goto L_0016DA00;
    case 138u: goto L_0016DA10;
    case 139u: goto L_0016DA38;
    case 140u: goto L_0016DA50;
    case 141u: goto L_0016DA78;
    case 142u: goto L_0016DA90;
    case 143u: goto L_0016DAE8;
    case 144u: goto L_0016DB08;
    case 145u: goto L_0016DB20;
    case 146u: goto L_0016DB80;
    case 147u: goto L_0016DBA0;
    case 148u: goto L_0016DBC0;
    case 149u: goto L_0016DBD0;
    case 150u: goto L_0016DBE0;
    case 151u: goto L_0016DBF0;
    case 152u: goto L_0016DC00;
    case 153u: goto L_0016DC10;
    case 154u: goto L_0016DC20;
    case 155u: goto L_0016DC34;
    case 156u: goto L_0016DC40;
    case 157u: goto L_0016DC74;
    case 158u: goto L_0016DC88;
    case 159u: goto L_0016DCA4;
    case 160u: goto L_0016DCB4;
    case 161u: goto L_0016DCE4;
    case 162u: goto L_0016DD20;
    case 163u: goto L_0016DD4C;
    case 164u: goto L_0016DD6C;
    case 165u: goto L_0016DD80;
    case 166u: goto L_0016DDBC;
    case 167u: goto L_0016DDD0;
    case 168u: goto L_0016DE1C;
    case 169u: goto L_0016DE30;
    case 170u: goto L_0016DE74;
    case 171u: goto L_0016DE88;
    case 172u: goto L_0016DEA0;
    case 173u: goto L_0016DEB0;
    case 174u: goto L_0016DED0;
    case 175u: goto L_0016DEE0;
    case 176u: goto L_0016DEF0;
    case 177u: goto L_0016DF00;
    case 178u: goto L_0016DF34;
    case 179u: goto L_0016DF44;
    case 180u: goto L_0016DF60;
    case 181u: goto L_0016DF80;
    case 182u: goto L_0016DFC8;
    case 183u: goto L_0016DFD4;
    case 184u: goto L_0016DFDC;
    case 185u: goto L_0016DFEC;
    case 186u: goto L_0016E010;
    case 187u: goto L_0016E040;
    case 188u: goto L_0016E058;
    case 189u: goto L_0016E070;
    case 190u: goto L_0016E08C;
    case 191u: goto L_0016E0A0;
    case 192u: goto L_0016E0C0;
    case 193u: goto L_0016E0D4;
    case 194u: goto L_0016E0EC;
    case 195u: goto L_0016E100;
    case 196u: goto L_0016E114;
    case 197u: goto L_0016E130;
    case 198u: goto L_0016E150;
    case 199u: goto L_0016E15C;
    case 200u: goto L_0016E164;
    case 201u: goto L_0016E180;
    case 202u: goto L_0016E188;
    case 203u: goto L_0016E1B0;
    case 204u: goto L_0016E1F8;
    case 205u: goto L_0016E200;
    case 206u: goto L_0016E20C;
    case 207u: goto L_0016E218;
    case 208u: goto L_0016E370;
    case 209u: goto L_0016E3CC;
    case 210u: goto L_0016E3EC;
    case 211u: goto L_0016E470;
    case 212u: goto L_0016E484;
    case 213u: goto L_0016E48C;
    case 214u: goto L_0016E4D0;
    case 215u: goto L_0016E534;
    case 216u: goto L_0016E554;
    case 217u: goto L_0016E598;
    case 218u: goto L_0016E62C;
    case 219u: goto L_0016E68C;
    case 220u: goto L_0016E6F0;
    case 221u: goto L_0016E74C;
    case 222u: goto L_0016E758;
    case 223u: goto L_0016E7A0;
    case 224u: goto L_0016E7CC;
    case 225u: goto L_0016E7D4;
    case 226u: goto L_0016E7E0;
    case 227u: goto L_0016E87C;
    case 228u: goto L_0016E8A0;
    case 229u: goto L_0016E8F8;
    case 230u: goto L_0016E920;
    case 231u: goto L_0016E978;
    case 232u: goto L_0016E98C;
    case 233u: goto L_0016E9A8;
    case 234u: goto L_0016E9B8;
    case 235u: goto L_0016E9C0;
    case 236u: goto L_0016EA10;
    case 237u: goto L_0016EA1C;
    case 238u: goto L_0016EA38;
    case 239u: goto L_0016EA44;
    case 240u: goto L_0016EA50;
    case 241u: goto L_0016EA5C;
    case 242u: goto L_0016EA90;
    case 243u: goto L_0016EAA8;
    case 244u: goto L_0016EB2C;
    case 245u: goto L_0016EB84;
    case 246u: goto L_0016EBC8;
    case 247u: goto L_0016EC14;
    case 248u: goto L_0016EC44;
    case 249u: goto L_0016EC78;
    case 250u: goto L_0016ECCC;
    case 251u: goto L_0016ED24;
    case 252u: goto L_0016ED68;
    case 253u: goto L_0016EDB4;
    case 254u: goto L_0016EDE4;
    case 255u: goto L_0016EE18;
    case 256u: goto L_0016EE80;
    case 257u: goto L_0016EE90;
    case 258u: goto L_0016EEA0;
    case 259u: goto L_0016EEB0;
    case 260u: goto L_0016EEC0;
    case 261u: goto L_0016EED0;
    case 262u: goto L_0016EEE0;
    case 263u: goto L_0016EEF0;
    case 264u: goto L_0016EF24;
    case 265u: goto L_0016EF34;
    case 266u: goto L_0016EF50;
    case 267u: goto L_0016EF84;
    case 268u: goto L_0016EF94;
    case 269u: goto L_0016EFB0;
    case 270u: goto L_0016EFE4;
    case 271u: goto L_0016EFF4;
    case 272u: goto L_0016F010;
    case 273u: goto L_0016F024;
    case 274u: goto L_0016F044;
    case 275u: goto L_0016F080;
    case 276u: goto L_0016F0A4;
    case 277u: goto L_0016F0D0;
    case 278u: goto L_0016F114;
    case 279u: goto L_0016F120;
    case 280u: goto L_0016F138;
    case 281u: goto L_0016F150;
    case 282u: goto L_0016F160;
    case 283u: goto L_0016F17C;
    case 284u: goto L_0016F190;
    case 285u: goto L_0016F1C0;
    case 286u: goto L_0016F1D4;
    case 287u: goto L_0016F214;
    case 288u: goto L_0016F230;
    case 289u: goto L_0016F280;
    case 290u: goto L_0016F2BC;
    case 291u: goto L_0016F2CC;
    case 292u: goto L_0016F2E4;
    case 293u: goto L_0016F300;
    case 294u: goto L_0016F310;
    case 295u: goto L_0016F338;
    case 296u: goto L_0016F350;
    case 297u: goto L_0016F370;
    case 298u: goto L_0016F380;
    case 299u: goto L_0016F390;
    case 300u: goto L_0016F3B0;
    case 301u: goto L_0016F3C0;
    case 302u: goto L_0016F3E4;
    case 303u: goto L_0016F3F4;
    case 304u: goto L_0016F408;
    case 305u: goto L_0016F424;
    case 306u: goto L_0016F440;
    case 307u: goto L_0016F470;
    case 308u: goto L_0016F488;
    case 309u: goto L_0016F4A0;
    case 310u: goto L_0016F4BC;
    case 311u: goto L_0016F4D8;
    case 312u: goto L_0016F4E4;
    case 313u: goto L_0016F4EC;
    case 314u: goto L_0016F520;
    case 315u: goto L_0016F53C;
    case 316u: goto L_0016F550;
    case 317u: goto L_0016F560;
    case 318u: goto L_0016F580;
    case 319u: goto L_0016F5B0;
    case 320u: goto L_0016F5C0;
    case 321u: goto L_0016F5D0;
    case 322u: goto L_0016F5F4;
    case 323u: goto L_0016F604;
    case 324u: goto L_0016F610;
    case 325u: goto L_0016F670;
    case 326u: goto L_0016F6A8;
    case 327u: goto L_0016F6B4;
    case 328u: goto L_0016F6CC;
    case 329u: goto L_0016F710;
    case 330u: goto L_0016F748;
    case 331u: goto L_0016F770;
    case 332u: goto L_0016F790;
    case 333u: goto L_0016F800;
    case 334u: goto L_0016F830;
    case 335u: goto L_0016F870;
    case 336u: goto L_0016F8E0;
    case 337u: goto L_0016F918;
    case 338u: goto L_0016F92C;
    case 339u: goto L_0016F944;
    case 340u: goto L_0016F958;
    case 341u: goto L_0016F964;
    case 342u: goto L_0016F980;
    case 343u: goto L_0016F9AC;
    case 344u: goto L_0016F9C0;
    case 345u: goto L_0016F9D4;
    case 346u: goto L_0016FA10;
    case 347u: goto L_0016FA2C;
    case 348u: goto L_0016FA3C;
    case 349u: goto L_0016FA50;
    case 350u: goto L_0016FA5C;
    case 351u: goto L_0016FA80;
    case 352u: goto L_0016FA9C;
    case 353u: goto L_0016FAB0;
    case 354u: goto L_0016FAC0;
    case 355u: goto L_0016FAEC;
    case 356u: goto L_0016FAF8;
    case 357u: goto L_0016FB18;
    case 358u: goto L_0016FB44;
    case 359u: goto L_0016FB60;
    case 360u: goto L_0016FB90;
    case 361u: goto L_0016FBA0;
    case 362u: goto L_0016FBBC;
    case 363u: goto L_0016FC10;
    case 364u: goto L_0016FC34;
    case 365u: goto L_0016FC40;
    case 366u: goto L_0016FC5C;
    case 367u: goto L_0016FC84;
    case 368u: goto L_0016FC90;
    case 369u: goto L_0016FCA0;
    case 370u: goto L_0016FCC8;
    case 371u: goto L_0016FCDC;
    case 372u: goto L_0016FCEC;
    case 373u: goto L_0016FD10;
    case 374u: goto L_0016FD34;
    case 375u: goto L_0016FD80;
    case 376u: goto L_0016FDA4;
    case 377u: goto L_0016FDD0;
    case 378u: goto L_0016FDE4;
    case 379u: goto L_0016FDF8;
    case 380u: goto L_0016FE10;
    case 381u: goto L_0016FE2C;
    case 382u: goto L_0016FE40;
    case 383u: goto L_0016FE70;
    case 384u: goto L_0016FEAC;
    case 385u: goto L_0016FEC8;
    case 386u: goto L_0016FED4;
    case 387u: goto L_0016FEEC;
    case 388u: goto L_0016FF10;
    case 389u: goto L_0016FF20;
    case 390u: goto L_0016FF3C;
    case 391u: goto L_0016FF50;
    case 392u: goto L_0016FF74;
    case 393u: goto L_0016FF80;
    case 394u: goto L_0016FFA4;
    case 395u: goto L_0016FFC0;
    case 396u: goto L_0016FFE8;
    default: bad_entry(c, 0x0016C000u); return;
    }
L_0016C000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C008u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_001D(c, 98u, depth + 1u); else { c.pc = 0x001952B0u; return; } if (c.pc != 0x0016C008u) [[unlikely]] return; }
L_0016C008:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C01Cu); c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_001D(c, 108u, depth + 1u); else { c.pc = 0x00195450u; return; } if (c.pc != 0x0016C01Cu) [[unlikely]] return; }
L_0016C01C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0016C04C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u - 8193u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C048u); st32((c.r[4].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 295u, depth + 1u); else { c.pc = 0x0015F910u; return; } if (c.pc != 0x0016C048u) [[unlikely]] return; }
L_0016C048:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0016C04C:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016C060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016C0A8; } }
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[29].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C0A8u); st32((c.r[29].w[0] + 24u), c.f[0]);  if (depth < kMaxDepth) unit_001D(c, 165u, depth + 1u); else { c.pc = 0x00195D50u; return; } if (c.pc != 0x0016C0A8u) [[unlikely]] return; }
L_0016C0A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C0B0u);  if (depth < kMaxDepth) unit_001D(c, 156u, depth + 1u); else { c.pc = 0x00195C20u; return; } if (c.pc != 0x0016C0B0u) [[unlikely]] return; }
L_0016C0B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016C0C0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[9].w[0] + 64u)));
    c.budget -= 20;
    { const bool t = c.r[4].d[0] == 0ull; c.r[19].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_0016C1F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C118u);  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0015FE50u; return; } if (c.pc != 0x0016C118u) [[unlikely]] return; }
L_0016C118:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[3].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF3000000u);
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], 0u + 3u);  goto L_0016C1FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C138u);  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x001647B0u; return; } if (c.pc != 0x0016C138u) [[unlikely]] return; }
L_0016C138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C140u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0011(c, 73u, depth + 1u); else { c.pc = 0x001647C0u; return; } if (c.pc != 0x0016C140u) [[unlikely]] return; }
L_0016C140:
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_0016C16C; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[17].d[0] & 255ull;  if (t) { goto L_0016C184; } }
L_0016C16C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 6;
L_0016C184:
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 17u);  goto L_0016C19C; }
    set32(c.r[17], c.r[4].w[0] << 2);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0016C1AC; } }
L_0016C19C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016C1F8; } }
    set32(c.r[17], c.r[4].w[0] << 1);
    set32(c.r[18], 0u + 1u);
    c.budget -= 2;
L_0016C1AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C1B4u);  if (depth < kMaxDepth) unit_0011(c, 74u, depth + 1u); else { c.pc = 0x001647D0u; return; } if (c.pc != 0x0016C1B4u) [[unlikely]] return; }
L_0016C1B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016C1C0; } }
    set32(c.r[17], c.r[17].w[0] >> 1);
    c.budget -= 1;
L_0016C1C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], ld32((c.r[20].w[0] + 64u)));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 19760u));
    c.r[2].d[0] = c.r[2].d[0] >> 16;
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 13);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C1ECu); set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 316u, depth + 1u); else { c.pc = 0x0015FE70u; return; } if (c.pc != 0x0016C1ECu) [[unlikely]] return; }
L_0016C1EC:
    c.r[1].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], 0u + 144u);  goto L_0016C20C; }
L_0016C1F8:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_0016C1FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C204u); set32(c.r[5], 0u + 96u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0016C204u) [[unlikely]] return; }
L_0016C204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016C330; } }
L_0016C20C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C214u);  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x001646D0u; return; } if (c.pc != 0x0016C214u) [[unlikely]] return; }
L_0016C214:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0016C228; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016C330; } }
L_0016C228:
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C234u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 163u, depth + 1u); else { c.pc = 0x001616E0u; return; } if (c.pc != 0x0016C234u) [[unlikely]] return; }
L_0016C234:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C248u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0010(c, 163u, depth + 1u); else { c.pc = 0x001616E0u; return; } if (c.pc != 0x0016C248u) [[unlikely]] return; }
L_0016C248:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C25Cu); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0010(c, 163u, depth + 1u); else { c.pc = 0x001616E0u; return; } if (c.pc != 0x0016C25Cu) [[unlikely]] return; }
L_0016C25C:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0016C330; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0016C274; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[17].w[0]), c.r[21].w[0]);  goto L_0016C280; }
L_0016C274:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016C330; } }
L_0016C280:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00170000u);
    st32((c.r[17].w[0] + 4u), c.r[20].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00170000u);
    st32((c.r[17].w[0] + 8u), c.r[18].w[0]);
    set32(c.r[6], c.r[6].w[0] - 16592u);
    st32((c.r[17].w[0] + 12u), c.r[30].w[0]);
    set32(c.r[5], c.r[5].w[0] - 16400u);
    st32((c.r[17].w[0] + 32u), c.r[23].w[0]);
    set32(c.r[4], c.r[17].w[0] + 48u);
    st32((c.r[17].w[0] + 48u), c.r[21].w[0]);
    st32((c.r[17].w[0] + 52u), c.r[20].w[0]);
    st32((c.r[17].w[0] + 56u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[30].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[23].w[0]);
    st32((c.r[17].w[0] + 96u), c.r[21].w[0]);
    st32((c.r[17].w[0] + 100u), c.r[20].w[0]);
    st32((c.r[17].w[0] + 104u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 108u), c.r[30].w[0]);
    st32((c.r[17].w[0] + 128u), c.r[23].w[0]);
    set32(c.r[3], ld32((c.r[22].w[0] + 8u)));
    st32((c.r[3].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[22].w[0] + 8u)));
    st32((c.r[3].w[0]), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 28;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_0016C310; } }
    c.f[0] = ld32((c.r[19].w[0]));
    st32((c.r[17].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    st32((c.r[17].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[17].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[17].w[0] + 124u), c.f[0]);
    c.budget -= 8;
L_0016C310:
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00170000u);
    set32(c.r[5], c.r[5].w[0] - 16288u);
    set32(c.r[3], c.r[17].w[0] + 96u);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 8;
L_0016C330:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0016C370:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0] + 188u), c.r[5].w[0]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[18], ld32((c.r[28].w[0] - 31436u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016C3C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016C4D4; } }
L_0016C3C4:
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[16].w[0] + 4u));  goto L_0016C3E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016C4D4; } }
L_0016C3E4:
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[30], c.r[2].w[0] + 1u);  goto L_0016C3F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016C4D4; } }
L_0016C3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C400u); set32(c.r[4], c.r[30].w[0] << 4);  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x001646D0u; return; } if (c.pc != 0x0016C400u) [[unlikely]] return; }
L_0016C400:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[21].d[0] != 0ull) { set32(c.r[22], ld32((c.r[16].w[0] + 24u)));  goto L_0016C414; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016C4D4; } }
L_0016C414:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.f[21] = ld32((c.r[16].w[0]));
    c.r[20].d[0] = c.r[21].d[0] + 0ull;
    c.f[20] = ld32((c.r[16].w[0] + 4u));
    mmi::div(c, 0, c.r[2].w[0], c.r[22].w[0]);
    c.r[23].d[0] = c.lo.d[0];
    c.budget -= 8;
    { const bool t = c.r[22].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0016C470; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016C438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C440u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x0016C440u) [[unlikely]] return; }
L_0016C440:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C450u); st32((c.r[20].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 8u, depth + 1u); else { c.pc = 0x00184140u; return; } if (c.pc != 0x0016C450u) [[unlikely]] return; }
L_0016C450:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + c.r[23].w[0]);
    st32((c.r[20].w[0] + 4u), c.f[0]);
    st32((c.r[20].w[0] + 8u), 0u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C438u | kUnwind; return; } goto L_0016C438; } }
L_0016C470:
    c.f[0] = ld32((c.r[21].w[0]));
    st32((c.r[20].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    st32((c.r[20].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 12u));
    st32((c.r[20].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    set32(c.r[16], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C4A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0016C4A4u) [[unlikely]] return; }
L_0016C4A4:
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 188u)));
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C4BCu); st32((c.r[2].w[0] + 40u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_000E(c, 339u, depth + 1u); else { c.pc = 0x0015AE90u; return; } if (c.pc != 0x0016C4BCu) [[unlikely]] return; }
L_0016C4BC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C4C8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0016C4C8u) [[unlikely]] return; }
L_0016C4C8:
    set32(c.r[3], ld32((c.r[18].w[0] + 352u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0] + 40u), c.r[17].w[0]);
    c.budget -= 3;
L_0016C4D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0016C510:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[29].w[0] + 20u), c.f[0]);
    st32((c.r[29].w[0] + 28u), 0u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[2], ld32((c.r[2].w[0] + 352u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    st32((c.r[29].w[0] + 40u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C550u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 19u, depth + 1u); else { c.pc = 0x0016C370u; return; } if (c.pc != 0x0016C550u) [[unlikely]] return; }
L_0016C550:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016C560:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C590u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x001646D0u; return; } if (c.pc != 0x0016C590u) [[unlikely]] return; }
L_0016C590:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_0016C5A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016C7F4; } }
L_0016C5A4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C5B0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0016C5B0u) [[unlikely]] return; }
L_0016C5B0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C5C0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0016C5C0u) [[unlikely]] return; }
L_0016C5C0:
    c.f[2] = ld32((c.r[29].w[0] + 120u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[18].w[0]), c.f[0]);
    st32((c.r[18].w[0] + 4u), c.f[1]);
    st32((c.r[18].w[0] + 8u), c.f[2]);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    st32((c.r[18].w[0] + 20u), c.f[1]);
    st32((c.r[18].w[0] + 24u), c.f[2]);
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[18].w[0] + 32u), c.f[0]);
    st32((c.r[18].w[0] + 36u), c.f[1]);
    st32((c.r[18].w[0] + 40u), c.f[2]);
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 120u));
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[18].w[0] + 48u), c.f[0]);
    st32((c.r[18].w[0] + 52u), c.f[1]);
    st32((c.r[18].w[0] + 56u), c.f[2]);
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 120u));
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[18].w[0] + 64u), c.f[0]);
    st32((c.r[18].w[0] + 68u), c.f[1]);
    st32((c.r[18].w[0] + 72u), c.f[2]);
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 120u));
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[18].w[0] + 80u), c.f[0]);
    st32((c.r[18].w[0] + 84u), c.f[1]);
    st32((c.r[18].w[0] + 88u), c.f[2]);
    st32((c.r[18].w[0] + 92u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[18].w[0] + 96u), c.f[0]);
    st32((c.r[18].w[0] + 100u), c.f[1]);
    st32((c.r[18].w[0] + 104u), c.f[2]);
    st32((c.r[18].w[0] + 108u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[18].w[0] + 112u), c.f[0]);
    st32((c.r[18].w[0] + 116u), c.f[1]);
    st32((c.r[18].w[0] + 120u), c.f[2]);
    st32((c.r[18].w[0] + 124u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 120u));
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[18].w[0] + 128u), c.f[0]);
    st32((c.r[18].w[0] + 132u), c.f[1]);
    st32((c.r[18].w[0] + 136u), c.f[2]);
    st32((c.r[18].w[0] + 140u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 120u));
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[18].w[0] + 144u), c.f[0]);
    st32((c.r[18].w[0] + 148u), c.f[1]);
    st32((c.r[18].w[0] + 152u), c.f[2]);
    st32((c.r[18].w[0] + 156u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[18].w[0] + 160u), c.f[0]);
    st32((c.r[18].w[0] + 164u), c.f[1]);
    st32((c.r[18].w[0] + 168u), c.f[2]);
    st32((c.r[18].w[0] + 172u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[18].w[0] + 176u), c.f[0]);
    st32((c.r[18].w[0] + 180u), c.f[1]);
    st32((c.r[18].w[0] + 184u), c.f[2]);
    st32((c.r[18].w[0] + 188u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 120u));
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[18].w[0] + 192u), c.f[0]);
    st32((c.r[18].w[0] + 196u), c.f[1]);
    st32((c.r[18].w[0] + 200u), c.f[2]);
    st32((c.r[18].w[0] + 204u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 120u));
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[18].w[0] + 208u), c.f[0]);
    st32((c.r[18].w[0] + 212u), c.f[1]);
    st32((c.r[18].w[0] + 216u), c.f[2]);
    st32((c.r[18].w[0] + 220u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[18].w[0] + 224u), c.f[0]);
    st32((c.r[18].w[0] + 228u), c.f[1]);
    st32((c.r[18].w[0] + 232u), c.f[2]);
    st32((c.r[18].w[0] + 236u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[18].w[0] + 240u), c.f[0]);
    st32((c.r[18].w[0] + 244u), c.f[1]);
    st32((c.r[18].w[0] + 248u), c.f[2]);
    st32((c.r[18].w[0] + 252u), c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 118;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C798u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0016C798u) [[unlikely]] return; }
L_0016C798:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C7B0u); st32((c.r[2].w[0] + 40u), c.r[20].w[0]);  if (depth < kMaxDepth) unit_000E(c, 339u, depth + 1u); else { c.pc = 0x0015AE90u; return; } if (c.pc != 0x0016C7B0u) [[unlikely]] return; }
L_0016C7B0:
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 160u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C7C8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_000E(c, 338u, depth + 1u); else { c.pc = 0x0015AE80u; return; } if (c.pc != 0x0016C7C8u) [[unlikely]] return; }
L_0016C7C8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C7D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0016C7D4u) [[unlikely]] return; }
L_0016C7D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[2].w[0] + 40u), c.r[16].w[0]);  if (t) { goto L_0016C7F0; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0016C7F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0016C7F4; } }
L_0016C7F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016C7F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0016C820:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 352u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C858u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0013(c, 40u, depth + 1u); else { c.pc = 0x0016C890u; return; } if (c.pc != 0x0016C858u) [[unlikely]] return; }
L_0016C858:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C864u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0016C864u) [[unlikely]] return; }
L_0016C864:
    set32(c.r[3], ld32((c.r[17].w[0] + 352u)));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[3].w[0] + 40u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016C890:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 284u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 280u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[18], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 25;
    { const bool t = c.r[2].sd[0] > 0; c.f[23] = c.f[12];  if (t) { goto L_0016C8FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016CDDC; } }
L_0016C8FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { c.f[0] = ld32((c.r[16].w[0]));  goto L_0016C910; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016CDDC; } }
L_0016C910:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[16].w[0] + 4u));  goto L_0016C92C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016CDDC; } }
L_0016C92C:
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[16].w[0] + 8u));  goto L_0016C940; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016CDDC; } }
L_0016C940:
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[17], ld32((c.r[16].w[0] + 16u)));  goto L_0016C954; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016CDDC; } }
L_0016C954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C95Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0016C95Cu) [[unlikely]] return; }
L_0016C95C:
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[19], c.r[30].w[0] - c.r[22].w[0]);
    st32((c.r[2].w[0] + 40u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.f[22] = ld32((c.r[16].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.f[21] = ld32((c.r[16].w[0] + 4u));
    c.f[20] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[16], c.r[5].w[0] + 1u);
    mmi::div(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    mmi::div(c, 0, c.r[4].w[0], c.r[16].w[0]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.r[23].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[19].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C9BCu); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x001646D0u; return; } if (c.pc != 0x0016C9BCu) [[unlikely]] return; }
L_0016C9BC:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[21].d[0] != 0ull) { st32((c.r[29].w[0] + 240u), c.r[19].w[0]);  goto L_0016C9D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016CDDC; } }
L_0016C9D0:
    c.budget -= 2;
    if (c.r[22].d[0] != 0ull) { ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);  goto L_0016C9E4; }
    set32(c.r[2], c.r[19].w[0] - 1u);
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.budget -= 3;
L_0016C9E4:
    c.budget -= 2;
    if (c.r[30].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 240u)));  goto L_0016C9FC; }
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 4;
L_0016C9FC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0016CA80; } }
    set32(c.r[3], c.r[16].w[0] + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CA14u); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x001646D0u; return; } if (c.pc != 0x0016CA14u) [[unlikely]] return; }
L_0016CA14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 276u), c.r[2].w[0]);  if (t) { goto L_0016CA24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016CDDC; } }
L_0016CA24:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.r[20].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[16].w[0] + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[16].sd[0] <= 0; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0016CA80; } }
L_0016CA54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CA5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x0016CA5Cu) [[unlikely]] return; }
L_0016CA5C:
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CA68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 8u, depth + 1u); else { c.pc = 0x00184140u; return; } if (c.pc != 0x0016CA68u) [[unlikely]] return; }
L_0016CA68:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + c.r[23].w[0]);
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016CA54u | kUnwind; return; } goto L_0016CA54; } }
L_0016CA80:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[20], ld32((c.r[29].w[0] + 276u)));
    c.r[1].d[0] = c.r[22].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.r[17].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; mmi::mult(c, 0, c.r[2].w[0], c.r[22].w[0]); c.r[23].d[0] = c.lo.d[0];  if (t) { goto L_0016CD38; } }
L_0016CA98:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[18], c.r[17].w[0] - c.r[22].w[0]);  if (t) { goto L_0016CAB0; } }
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0016CC58; } }
L_0016CAB0:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], 0u - 1u);  goto L_0016CABC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0016CABC:
    c.f[0] = c.r[2].w[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[23]);
    c.budget -= 8;
    { const bool t = c.r[16].sd[0] <= 0; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[1]);  if (t) { goto L_0016CD20; } }
    c.r[1].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], c.r[16].w[0] - 8u);  if (t) { goto L_0016CC08; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016CB08; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[16].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016CB08; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0016CB08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016CC08; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_0016CB18:
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[9], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[18].w[0] + c.r[19].w[0]);
    st32((c.r[9].w[0]), 0u);
    set32(c.r[2], c.r[3].w[0] << 4);
    st32((c.r[9].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[9].w[0] + 8u), c.f[0]);
    set32(c.r[10], c.r[21].w[0] + c.r[2].w[0]);
    st32((c.r[9].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[2], c.r[3].w[0] << 4);
    st32((c.r[10].w[0]), 0u);
    set32(c.r[4], c.r[21].w[0] + c.r[2].w[0]);
    st32((c.r[10].w[0] + 4u), 0u);
    set32(c.r[8], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[10].w[0] + 8u), c.f[0]);
    set32(c.r[2], c.r[8].w[0] << 4);
    st32((c.r[10].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[19].w[0]);
    st32((c.r[4].w[0]), 0u);
    set32(c.r[3], c.r[21].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[2], c.r[8].w[0] << 4);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    set32(c.r[9], c.r[8].w[0] + c.r[19].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[8], c.r[9].w[0] << 4);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[11], c.r[21].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[9], c.r[9].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[8], c.r[9].w[0] << 4);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[9], c.r[9].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[10], c.r[21].w[0] + c.r[8].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[8], c.r[9].w[0] << 4);
    st32((c.r[11].w[0]), 0u);
    set32(c.r[8], c.r[21].w[0] + c.r[8].w[0]);
    st32((c.r[11].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    st32((c.r[11].w[0] + 8u), c.f[0]);
    set32(c.r[18], c.r[9].w[0] + c.r[19].w[0]);
    st32((c.r[11].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[10].w[0]), 0u);
    st32((c.r[10].w[0] + 4u), 0u);
    st32((c.r[10].w[0] + 8u), c.f[0]);
    st32((c.r[10].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[8].w[0]), 0u);
    st32((c.r[8].w[0] + 4u), 0u);
    st32((c.r[8].w[0] + 8u), c.f[0]);
    c.budget -= 59;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[8].w[0] + 12u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016CB18u | kUnwind; return; } goto L_0016CB18; } }
    c.budget -= 1;
L_0016CC08:
    c.r[1].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016CD20; } }
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[4], c.r[19].w[0] << 4);
    set32(c.r[5], c.r[21].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 5;
L_0016CC28:
    st32((c.r[5].w[0]), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + c.r[19].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016CC28u | kUnwind; return; } goto L_0016CC28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016CD20; } }
    c.budget -= 1;
L_0016CC58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CC60u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x0016CC60u) [[unlikely]] return; }
L_0016CC60:
    c.f[24] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CC6Cu); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 8u, depth + 1u); else { c.pc = 0x00184140u; return; } if (c.pc != 0x0016CC6Cu) [[unlikely]] return; }
L_0016CC6C:
    c.f[1] = 0u;
    set32(c.r[6], ld32((c.r[29].w[0] + 256u)));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[23]);
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0016CCF8; } }
    c.f[3] = fp::ee::mul(c.fcr31, c.f[21], c.f[24]);
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[4], c.r[19].w[0] << 4);
    set32(c.r[7], c.r[21].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[22], c.f[24]);
    c.budget -= 6;
L_0016CCA0:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[0] = ld32((c.r[6].w[0]));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    st32((c.r[20].w[0]), c.f[0]);
    st32((c.r[20].w[0] + 4u), c.f[1]);
    st32((c.r[20].w[0] + 8u), c.f[4]);
    st32((c.r[20].w[0] + 12u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[20].w[0]));
    st32((c.r[7].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    st32((c.r[7].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 12u));
    st32((c.r[7].w[0] + 12u), c.f[0]);
    set32(c.r[20], c.r[20].w[0] + 16u);
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016CCA0u | kUnwind; return; } goto L_0016CCA0; } }
L_0016CCF8:
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[20].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    st32((c.r[20].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 12u));
    st32((c.r[20].w[0] + 12u), c.f[0]);
    set32(c.r[20], c.r[20].w[0] + 16u);
    c.budget -= 10;
L_0016CD20:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[23], c.r[23].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016CA98u | kUnwind; return; } goto L_0016CA98; } }
L_0016CD38:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { set32(c.r[16], 0u + 1u);  goto L_0016CD88; }
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 240u)));  goto L_0016CD70; }
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[6], c.r[16].w[0] + 1u);
    set32(c.r[4], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 284u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CD68u); mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]); c.r[5].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_000E(c, 342u, depth + 1u); else { c.pc = 0x0015AEC0u; return; } if (c.pc != 0x0016CD68u) [[unlikely]] return; }
L_0016CD68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0016CD88; } }
L_0016CD70:
    set32(c.r[6], c.r[16].w[0] + 1u);
    set32(c.r[4], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 284u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CD84u); mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]); c.r[5].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_000E(c, 338u, depth + 1u); else { c.pc = 0x0015AE80u; return; } if (c.pc != 0x0016CD84u) [[unlikely]] return; }
L_0016CD84:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0016CD88:
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 224u)));  goto L_0016CDB0; }
    set32(c.r[5], ld32((c.r[29].w[0] + 224u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 284u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CDA8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 342u, depth + 1u); else { c.pc = 0x0015AEC0u; return; } if (c.pc != 0x0016CDA8u) [[unlikely]] return; }
L_0016CDA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016CDC0; } }
L_0016CDB0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 284u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CDC0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 338u, depth + 1u); else { c.pc = 0x0015AE80u; return; } if (c.pc != 0x0016CDC0u) [[unlikely]] return; }
L_0016CDC0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0016CDDC; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016CDD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0016CDDC; } }
L_0016CDD8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016CDDC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_0016CE20:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[22], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CE6Cu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x001646D0u; return; } if (c.pc != 0x0016CE6Cu) [[unlikely]] return; }
L_0016CE6C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[2] = ld32((c.r[17].w[0] + 8u));  goto L_0016CE7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016CEC4; } }
L_0016CE7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    st32((c.r[2].w[0]), c.f[0]);
    st32((c.r[2].w[0] + 4u), c.f[1]);
    st32((c.r[2].w[0] + 8u), c.f[2]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    st32((c.r[2].w[0] + 20u), c.f[1]);
    st32((c.r[2].w[0] + 24u), c.f[2]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CEC4u); st32((c.r[2].w[0] + 28u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 339u, depth + 1u); else { c.pc = 0x0015AE90u; return; } if (c.pc != 0x0016CEC4u) [[unlikely]] return; }
L_0016CEC4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[22].w[0] + 352u)));  goto L_0016CED4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_0016D034; } }
L_0016CED4:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[17], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CEE8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 282u, depth + 1u); else { c.pc = 0x00156C40u; return; } if (c.pc != 0x0016CEE8u) [[unlikely]] return; }
L_0016CEE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CEF0u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000D(c, 284u, depth + 1u); else { c.pc = 0x00156C70u; return; } if (c.pc != 0x0016CEF0u) [[unlikely]] return; }
L_0016CEF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[22] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CF1Cu); c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000D(c, 285u, depth + 1u); else { c.pc = 0x00156C80u; return; } if (c.pc != 0x0016CF1Cu) [[unlikely]] return; }
L_0016CF1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CF24u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x001646D0u; return; } if (c.pc != 0x0016CF24u) [[unlikely]] return; }
L_0016CF24:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[21].d[0] != 0ull) { c.f[20] = c.f[20] ^ fp::kSign;  goto L_0016CF38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016D030; } }
L_0016CF38:
    c.r[20].d[0] = c.r[21].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0016CF44:
    st32((c.r[20].w[0]), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[20].w[0] + 4u), 0u);
    st32((c.r[20].w[0] + 8u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CF5Cu); st32((c.r[20].w[0] + 12u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0019(c, 8u, depth + 1u); else { c.pc = 0x00184140u; return; } if (c.pc != 0x0016CF5Cu) [[unlikely]] return; }
L_0016CF5C:
    c.f[21] = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CF68u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x0016CF68u) [[unlikely]] return; }
L_0016CF68:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 16384u);
    st32((c.r[20].w[0] + 16u), c.f[0]);
    st32((c.r[20].w[0] + 20u), c.f[21]);
    st32((c.r[20].w[0] + 24u), c.f[20]);
    st32((c.r[20].w[0] + 28u), c.r[17].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016CF44u | kUnwind; return; } goto L_0016CF44; } }
    c.f[0] = ld32((c.r[21].w[0]));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[20].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    st32((c.r[20].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[21].w[0] + 16u));
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 20u));
    st32((c.r[20].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 24u));
    st32((c.r[20].w[0] + 24u), c.f[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CFD8u); st32((c.r[20].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x0016CFD8u) [[unlikely]] return; }
L_0016CFD8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CFECu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0016CFECu) [[unlikely]] return; }
L_0016CFEC:
    set32(c.r[6], ld32((c.r[29].w[0] + 160u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D004u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x0016D004u) [[unlikely]] return; }
L_0016D004:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D014u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_000E(c, 332u, depth + 1u); else { c.pc = 0x0015AE20u; return; } if (c.pc != 0x0016D014u) [[unlikely]] return; }
L_0016D014:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D020u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x0016D020u) [[unlikely]] return; }
L_0016D020:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0016D02C; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_0016D02C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0016D030:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0016D034:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0016D070:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D098u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 294u, depth + 1u); else { c.pc = 0x00156DA0u; return; } if (c.pc != 0x0016D098u) [[unlikely]] return; }
L_0016D098:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D0A8u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0013(c, 57u, depth + 1u); else { c.pc = 0x0016CE20u; return; } if (c.pc != 0x0016D0A8u) [[unlikely]] return; }
L_0016D0A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016D0C0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[21], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[23], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[22], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 352u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 200u)));
    st32((c.r[29].w[0] + 188u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    st32((c.r[29].w[0] + 184u), c.r[7].w[0]);
    c.budget -= 22;
    { const bool t = c.r[6].d[0] != 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (t) { goto L_0016D140; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 17288u)));
    set32(c.r[3], ld32((c.r[3].w[0] - 17284u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[29].w[0] + 224u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 17280u)));
    st32((c.r[29].w[0] + 228u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 232u), c.r[2].w[0]);  if (t) { goto L_0016D158; } }
L_0016D140:
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    st32((c.r[29].w[0] + 224u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 228u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    c.budget -= 6;
L_0016D158:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[29].w[0] + 224u);
    set32(c.r[16], c.r[29].w[0] + 208u);
    c.budget -= 3;
L_0016D164:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0016D1B0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0016D1A0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0016D190; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016D1C0; } }
    c.budget -= 1;
L_0016D190:
    set32(c.r[23], 0u + 16384u);
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0016D1C0; } }
L_0016D1A0:
    c.r[23].d[0] = 0ull + 0ull;
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0016D1C0; } }
L_0016D1B0:
    c.r[23].d[0] = 0ull + 0ull;
    set32(c.r[22], 0u + 16384u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0016D1C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D1C8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x0016D1C8u) [[unlikely]] return; }
L_0016D1C8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D1DCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0016D1DCu) [[unlikely]] return; }
L_0016D1DC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D1F4u); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x0016D1F4u) [[unlikely]] return; }
L_0016D1F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D1FCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0016D1FCu) [[unlikely]] return; }
L_0016D1FC:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[5], 0u + 16u);
    set32(c.r[2], ld32((c.r[21].w[0] + 352u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D218u); st32((c.r[2].w[0] + 40u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0013(c, 27u, depth + 1u); else { c.pc = 0x0016C510u; return; } if (c.pc != 0x0016D218u) [[unlikely]] return; }
L_0016D218:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D224u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x0016D224u) [[unlikely]] return; }
L_0016D224:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016D164u | kUnwind; return; } goto L_0016D164; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D240u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0016D240u) [[unlikely]] return; }
L_0016D240:
    set32(c.r[4], ld32((c.r[21].w[0] + 352u)));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_0016D274; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0016D278; }
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016D274; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0016D278; } }
L_0016D274:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016D278:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0016D2B0:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[6].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016D0C0u | kUnwind; return; } goto L_0016D0C0; }
L_0016D2C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0016D2D8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D2D8u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0013(c, 87u, depth + 1u); else { c.pc = 0x0016D2F0u; return; } if (c.pc != 0x0016D2D8u) [[unlikely]] return; }
L_0016D2D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016D2F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] != 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016D320; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016D3BC; } }
L_0016D320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D328u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x001646D0u; return; } if (c.pc != 0x0016D328u) [[unlikely]] return; }
L_0016D328:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0016D33C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016D3BC; } }
L_0016D33C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_0016D348; }
    set32(c.r[6], 0u + 2u);
    c.budget -= 1;
L_0016D348:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D354u); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_001A(c, 343u, depth + 1u); else { c.pc = 0x0018BE90u; return; } if (c.pc != 0x0016D354u) [[unlikely]] return; }
L_0016D354:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D360u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 85u, depth + 1u); else { c.pc = 0x0019D220u; return; } if (c.pc != 0x0016D360u) [[unlikely]] return; }
L_0016D360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D368u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 344u, depth + 1u); else { c.pc = 0x0018BEF0u; return; } if (c.pc != 0x0016D368u) [[unlikely]] return; }
L_0016D368:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 356u), c.r[2].w[0]);
    set32(c.r[5], 0u + 7u);
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    set32(c.r[6], 0u + 2u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D394u); st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 163u, depth + 1u); else { c.pc = 0x001616E0u; return; } if (c.pc != 0x0016D394u) [[unlikely]] return; }
L_0016D394:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 8u)));  goto L_0016D3A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016D3BC; } }
L_0016D3A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    set32(c.r[4], c.r[4].w[0] - 11296u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[2].w[0]), c.r[16].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
L_0016D3BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016D3E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D410u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 181u, depth + 1u); else { c.pc = 0x00161970u; return; } if (c.pc != 0x0016D410u) [[unlikely]] return; }
L_0016D410:
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  goto L_0016D42C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D428u); set32(c.r[6], 0u + 1023u);  if (depth < kMaxDepth) unit_0010(c, 187u, depth + 1u); else { c.pc = 0x001619F0u; return; } if (c.pc != 0x0016D428u) [[unlikely]] return; }
L_0016D428:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_0016D42C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_0016D440; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D43Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 300u, depth + 1u); else { c.pc = 0x0015FA40u; return; } if (c.pc != 0x0016D43Cu) [[unlikely]] return; }
L_0016D43C:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_0016D440:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D44Cu); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_001A(c, 346u, depth + 1u); else { c.pc = 0x0018BF30u; return; } if (c.pc != 0x0016D44Cu) [[unlikely]] return; }
L_0016D44C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016D470:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016D4A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016D54C; } }
L_0016D4A8:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D4B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 181u, depth + 1u); else { c.pc = 0x00161970u; return; } if (c.pc != 0x0016D4B4u) [[unlikely]] return; }
L_0016D4B4:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[19], ld32((c.r[17].w[0] + 4u)));  goto L_0016D4D0; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D4CCu); set32(c.r[6], 0u + 1023u);  if (depth < kMaxDepth) unit_0010(c, 187u, depth + 1u); else { c.pc = 0x001619F0u; return; } if (c.pc != 0x0016D4CCu) [[unlikely]] return; }
L_0016D4CC:
    set32(c.r[19], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0016D4D0:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0016D548; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 1;
L_0016D4E0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0016D510; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[18].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0016D528; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016D528; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D504u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 300u, depth + 1u); else { c.pc = 0x0015FA40u; return; } if (c.pc != 0x0016D504u) [[unlikely]] return; }
L_0016D504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016D528; } }
    c.budget -= 1;
L_0016D510:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[17].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0016D528; } }
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D524u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 175u, depth + 1u); else { c.pc = 0x0015DCC0u; return; } if (c.pc != 0x0016D524u) [[unlikely]] return; }
L_0016D524:
    c.budget -= 1;
L_0016D528:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D538u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_001A(c, 346u, depth + 1u); else { c.pc = 0x0018BF30u; return; } if (c.pc != 0x0016D538u) [[unlikely]] return; }
L_0016D538:
    set32(c.r[19], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[19].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016D4E0u | kUnwind; return; } goto L_0016D4E0; }
    c.budget -= 1;
L_0016D548:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0016D54C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016D570:
    st32((c.r[28].w[0] - 31316u), 0u);
    st32((c.r[28].w[0] - 31312u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 31308u), 0u);  c.pc = t; return; }
L_0016D580:
    st32((c.r[28].w[0] - 31316u), 0u);
    st32((c.r[28].w[0] - 31312u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 31308u), 0u);  c.pc = t; return; }
L_0016D590:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 7u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[6], 0u + 2u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D5B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 163u, depth + 1u); else { c.pc = 0x001616E0u; return; } if (c.pc != 0x0016D5B8u) [[unlikely]] return; }
L_0016D5B8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], 0u + 24u);  goto L_0016D5CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016D650; } }
L_0016D5CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D5D4u);  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x001646D0u; return; } if (c.pc != 0x0016D5D4u) [[unlikely]] return; }
L_0016D5D4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_0016D5F8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), 0u);  if (t) { goto L_0016D650; } }
L_0016D5F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    set32(c.r[4], c.r[4].w[0] - 11152u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[2].w[0]), c.r[18].w[0]);
    st32((c.r[17].w[0] + 356u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 452u), c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D628u); set32(c.r[4], ld32((c.r[17].w[0] + 448u)));  if (depth < kMaxDepth) unit_000F(c, 11u, depth + 1u); else { c.pc = 0x0015C0D0u; return; } if (c.pc != 0x0016D628u) [[unlikely]] return; }
L_0016D628:
    set32(c.r[3], ld32((c.r[17].w[0] + 448u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[18].w[0]), 0u);
    st32((c.r[18].w[0] + 4u), 0u);
    st32((c.r[18].w[0] + 16u), 0u);
    st32((c.r[18].w[0] + 20u), 0u);
    st32((c.r[28].w[0] - 31312u), c.r[18].w[0]);
    st32((c.r[28].w[0] - 31316u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 31308u), 0u);
    c.budget -= 10;
L_0016D650:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016D670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 31308u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[28].w[0] - 31312u)));  if (t) { goto L_0016D698; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D690u);  if (depth < kMaxDepth) unit_001A(c, 344u, depth + 1u); else { c.pc = 0x0018BEF0u; return; } if (c.pc != 0x0016D690u) [[unlikely]] return; }
L_0016D690:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0016D698:
    st32((c.r[28].w[0] - 31316u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[28].w[0] - 31312u), 0u);
    st32((c.r[28].w[0] - 31308u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016D6C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D6E8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x001646D0u; return; } if (c.pc != 0x0016D6E8u) [[unlikely]] return; }
L_0016D6E8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[19], ld32((c.r[28].w[0] - 31308u)));  goto L_0016D6FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016D768; } }
L_0016D6FC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 31312u)));  if (t) { goto L_0016D724; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D70Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 344u, depth + 1u); else { c.pc = 0x0018BEF0u; return; } if (c.pc != 0x0016D70Cu) [[unlikely]] return; }
L_0016D70C:
    st32((c.r[19].w[0] + 16u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0016D738; } }
L_0016D724:
    st32((c.r[3].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_0016D738:
    st32((c.r[28].w[0] - 31308u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 16u), 0u);  if (t) { goto L_0016D754; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 2u);  if (t) { goto L_0016D758; } }
L_0016D754:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016D758:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D764u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 343u, depth + 1u); else { c.pc = 0x0018BE90u; return; } if (c.pc != 0x0016D764u) [[unlikely]] return; }
L_0016D764:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0016D768:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016D790:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016D6C0u | kUnwind; return; } goto L_0016D6C0; }
L_0016D7A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 31308u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[16], ld32((c.r[2].w[0])));  if (t) { goto L_0016D7D8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 31312u)));
    st32((c.r[2].w[0] + 16u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31312u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 20u), 0u);  if (t) { goto L_0016D80C; } }
L_0016D7D8:
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0016D810; }
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D7F0u); set32(c.r[5], ld32((c.r[5].w[0] + 32u)));  if (depth < kMaxDepth) unit_0013(c, 113u, depth + 1u); else { c.pc = 0x0016D6C0u; return; } if (c.pc != 0x0016D7F0u) [[unlikely]] return; }
L_0016D7F0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 31308u)));  goto L_0016D800; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016D810; } }
L_0016D800:
    st32((c.r[2].w[0] + 20u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31308u)));
    st32((c.r[2].w[0] + 24u), 0u);
    c.budget -= 3;
L_0016D80C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0016D810:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016D820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 31308u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 64u)));  if (t) { goto L_0016D84C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 31312u)));
    st32((c.r[2].w[0] + 16u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31312u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 20u), 0u);  if (t) { goto L_0016D880; } }
L_0016D84C:
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0016D884; }
    set32(c.r[5], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D864u); set32(c.r[4], ld32((c.r[3].w[0] + 28u)));  if (depth < kMaxDepth) unit_0013(c, 113u, depth + 1u); else { c.pc = 0x0016D6C0u; return; } if (c.pc != 0x0016D864u) [[unlikely]] return; }
L_0016D864:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 31308u)));  goto L_0016D874; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016D884; } }
L_0016D874:
    st32((c.r[2].w[0] + 20u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31308u)));
    st32((c.r[2].w[0] + 24u), 0u);
    c.budget -= 3;
L_0016D880:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0016D884:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016D8A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31308u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016D8C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D8BCu);  if (depth < kMaxDepth) unit_001A(c, 305u, depth + 1u); else { c.pc = 0x0018B800u; return; } if (c.pc != 0x0016D8BCu) [[unlikely]] return; }
L_0016D8BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0016D8D0; } }
L_0016D8C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D8CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 311u, depth + 1u); else { c.pc = 0x0018B8C0u; return; } if (c.pc != 0x0016D8CCu) [[unlikely]] return; }
L_0016D8CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0016D8D0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016D8E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31316u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016D8FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016D924; } }
L_0016D8FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 31308u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_0016D918; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D910u);  if (depth < kMaxDepth) unit_001A(c, 304u, depth + 1u); else { c.pc = 0x0018B7D0u; return; } if (c.pc != 0x0016D910u) [[unlikely]] return; }
L_0016D910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0016D924; } }
L_0016D918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D920u);  if (depth < kMaxDepth) unit_001A(c, 310u, depth + 1u); else { c.pc = 0x0018B8A0u; return; } if (c.pc != 0x0016D920u) [[unlikely]] return; }
L_0016D920:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0016D924:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016D930:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31308u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016D954; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D94Cu);  if (depth < kMaxDepth) unit_001A(c, 307u, depth + 1u); else { c.pc = 0x0018B840u; return; } if (c.pc != 0x0016D94Cu) [[unlikely]] return; }
L_0016D94C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0016D960; } }
L_0016D954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D95Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 312u, depth + 1u); else { c.pc = 0x0018B8E0u; return; } if (c.pc != 0x0016D95Cu) [[unlikely]] return; }
L_0016D95C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0016D960:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016D970:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31308u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016D994; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D98Cu);  if (depth < kMaxDepth) unit_001A(c, 308u, depth + 1u); else { c.pc = 0x0018B870u; return; } if (c.pc != 0x0016D98Cu) [[unlikely]] return; }
L_0016D98C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0016D9A0; } }
L_0016D994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D99Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 313u, depth + 1u); else { c.pc = 0x0018B900u; return; } if (c.pc != 0x0016D99Cu) [[unlikely]] return; }
L_0016D99C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0016D9A0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016D9B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 31308u)));
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D9D0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 6u, depth + 1u); else { c.pc = 0x0018C1F0u; return; } if (c.pc != 0x0016D9D0u) [[unlikely]] return; }
L_0016D9D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016D9E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 31308u)));
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DA00u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 9u, depth + 1u); else { c.pc = 0x0018C3B0u; return; } if (c.pc != 0x0016DA00u) [[unlikely]] return; }
L_0016DA00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016DA10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 31308u)));
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DA38u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 12u, depth + 1u); else { c.pc = 0x0018C580u; return; } if (c.pc != 0x0016DA38u) [[unlikely]] return; }
L_0016DA38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016DA50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 31308u)));
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DA78u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 15u, depth + 1u); else { c.pc = 0x0018C760u; return; } if (c.pc != 0x0016DA78u) [[unlikely]] return; }
L_0016DA78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016DA90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[28].w[0] - 31308u)));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_0016DADC; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 28u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], 0u + 3u);  goto L_0016DAE0; }
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0016DADC; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0016DAFC; }
L_0016DADC:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_0016DAE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DAE8u);  if (depth < kMaxDepth) unit_0013(c, 113u, depth + 1u); else { c.pc = 0x0016D6C0u; return; } if (c.pc != 0x0016DAE8u) [[unlikely]] return; }
L_0016DAE8:
    set32(c.r[6], ld32((c.r[28].w[0] - 31308u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    st32((c.r[6].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[6].w[0] + 20u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
L_0016DAFC:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DB08u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0014(c, 28u, depth + 1u); else { c.pc = 0x00170370u; return; } if (c.pc != 0x0016DB08u) [[unlikely]] return; }
L_0016DB08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016DB20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[28].w[0] - 31308u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_0016DB74; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[6].d[0] + 0ull;  goto L_0016DB78; }
    set32(c.r[2], ld32((c.r[5].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0016DB74; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0016DB94; }
L_0016DB74:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_0016DB78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DB80u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0013(c, 113u, depth + 1u); else { c.pc = 0x0016D6C0u; return; } if (c.pc != 0x0016DB80u) [[unlikely]] return; }
L_0016DB80:
    set32(c.r[5], ld32((c.r[28].w[0] - 31308u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    st32((c.r[5].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 20u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
L_0016DB94:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DBA0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0014(c, 36u, depth + 1u); else { c.pc = 0x00170460u; return; } if (c.pc != 0x0016DBA0u) [[unlikely]] return; }
L_0016DBA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016DBC0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 31308u)));  [[clang::musttail]] return unit_001B(c, 19u, depth); }
L_0016DBD0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 31308u)));  [[clang::musttail]] return unit_001B(c, 20u, depth); }
L_0016DBE0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_001B(c, 30u, depth); }
L_0016DBF0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_001B(c, 31u, depth); }
L_0016DC00:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_001B(c, 21u, depth); }
L_0016DC10:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_001B(c, 23u, depth); }
L_0016DC20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DC34u); st32((c.r[29].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 26u, depth + 1u); else { c.pc = 0x0018CCA0u; return; } if (c.pc != 0x0016DC34u) [[unlikely]] return; }
L_0016DC34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016DC40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31304u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016DC64; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 31300u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 640u);  goto L_0016DC6C; }
L_0016DC64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016DD10; } }
L_0016DC6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DC74u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0016DC74u) [[unlikely]] return; }
L_0016DC74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 31304u), c.r[2].w[0]);  goto L_0016DC8C; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DC88u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 180u, depth + 1u); else { c.pc = 0x0016DF60u; return; } if (c.pc != 0x0016DC88u) [[unlikely]] return; }
L_0016DC88:
    st32((c.r[28].w[0] - 31304u), c.r[2].w[0]);
    c.budget -= 1;
L_0016DC8C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 144u);  goto L_0016DC9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016DD10; } }
L_0016DC9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DCA4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0016DCA4u) [[unlikely]] return; }
L_0016DCA4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 31300u), c.r[2].w[0]);  goto L_0016DCB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DCB4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0015C180u; return; } if (c.pc != 0x0016DCB4u) [[unlikely]] return; }
L_0016DCB4:
    st32((c.r[28].w[0] - 31300u), c.r[2].w[0]);
    c.budget -= 1;
L_0016DCB8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31304u)));  goto L_0016DCF4; }
    set32(c.r[4], ld32((c.r[28].w[0] - 31304u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0016DD10; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 31304u), 0u);  goto L_0016DCE8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DCE4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016DCE4u) [[unlikely]] return; }
L_0016DCE4:
    st32((c.r[28].w[0] - 31304u), 0u);
    c.budget -= 1;
L_0016DCE8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016DD10; } }
L_0016DCF4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[4].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31304u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
L_0016DD10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016DD20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 31304u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31300u)));  goto L_0016DD54; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 31304u), 0u);  goto L_0016DD50; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DD4Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016DD4Cu) [[unlikely]] return; }
L_0016DD4C:
    st32((c.r[28].w[0] - 31304u), 0u);
    c.budget -= 1;
L_0016DD50:
    set32(c.r[4], ld32((c.r[28].w[0] - 31300u)));
    c.budget -= 1;
L_0016DD54:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0016DD74; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DD6Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016DD6Cu) [[unlikely]] return; }
L_0016DD6C:
    st32((c.r[28].w[0] - 31300u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0016DD74:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016DD80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 31304u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0016DDC0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016DDBC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 580u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016DDBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DDBCu);  if (depth < kMaxDepth) unit_0013(c, 189u, depth + 1u); else { c.pc = 0x0016E070u; return; } if (c.pc != 0x0016DDBCu) [[unlikely]] return; }
L_0016DDBC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0016DDC0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016DDD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 31304u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016DE20; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0016DE24; }
    set32(c.r[3], ld32((c.r[4].w[0] + 580u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016DE20; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DE1Cu); st32((c.r[28].w[0] - 31436u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0013(c, 230u, depth + 1u); else { c.pc = 0x0016E920u; return; } if (c.pc != 0x0016DE1Cu) [[unlikely]] return; }
L_0016DE1C:
    st32((c.r[28].w[0] - 31436u), c.r[16].w[0]);
    c.budget -= 1;
L_0016DE20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0016DE24:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016DE30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 31304u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0016DE90; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016DE8C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 580u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016DE8C; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DE74u); st32((c.r[28].w[0] - 31436u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0013(c, 191u, depth + 1u); else { c.pc = 0x0016E0A0u; return; } if (c.pc != 0x0016DE74u) [[unlikely]] return; }
L_0016DE74:
    set32(c.r[4], ld32((c.r[28].w[0] - 31304u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DE88u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016DE88u) [[unlikely]] return; }
L_0016DE88:
    st32((c.r[28].w[0] - 31436u), c.r[16].w[0]);
    c.budget -= 1;
L_0016DE8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0016DE90:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016DEA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 31304u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 616u), c.f[12]);  c.pc = t; return; }
L_0016DEB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 31304u)));
    st32((c.r[3].w[0] + 604u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 31304u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 608u), c.r[5].w[0]);  c.pc = t; return; }
L_0016DED0:
    set32(c.r[3], ld32((c.r[28].w[0] - 31304u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 612u), c.r[4].w[0]);  c.pc = t; return; }
L_0016DEE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 31304u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 580u), 0u);  c.pc = t; return; }
L_0016DEF0:
    set32(c.r[3], ld32((c.r[28].w[0] - 31304u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 580u), c.r[4].w[0]);  c.pc = t; return; }
L_0016DF00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016DF28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016DF48; } }
L_0016DF28:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DF34u); set32(c.r[5], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0010(c, 181u, depth + 1u); else { c.pc = 0x00161970u; return; } if (c.pc != 0x0016DF34u) [[unlikely]] return; }
L_0016DF34:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DF44u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_001A(c, 346u, depth + 1u); else { c.pc = 0x0018BF30u; return; } if (c.pc != 0x0016DF44u) [[unlikely]] return; }
L_0016DF44:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0016DF48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016DF60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DF80u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x001610E0u; return; } if (c.pc != 0x0016DF80u) [[unlikely]] return; }
L_0016DF80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 9120u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 580u), c.r[2].w[0]);
    set32(c.r[3], 0u + 6u);
    st32((c.r[17].w[0] + 592u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[17].w[0] + 596u), 0u);
    st32((c.r[17].w[0] + 600u), 0u);
    st32((c.r[17].w[0] + 604u), 0u);
    st32((c.r[17].w[0] + 608u), 0u);
    st32((c.r[17].w[0] + 620u), 0u);
    st32((c.r[17].w[0] + 628u), 0u);
    st32((c.r[17].w[0] + 612u), c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DFC8u); st32((c.r[17].w[0] + 616u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0013(c, 195u, depth + 1u); else { c.pc = 0x0016E100u; return; } if (c.pc != 0x0016DFC8u) [[unlikely]] return; }
L_0016DFC8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DFD4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 203u, depth + 1u); else { c.pc = 0x0016E1B0u; return; } if (c.pc != 0x0016DFD4u) [[unlikely]] return; }
L_0016DFD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DFDCu);  if (depth < kMaxDepth) unit_0011(c, 70u, depth + 1u); else { c.pc = 0x00164790u; return; } if (c.pc != 0x0016DFDCu) [[unlikely]] return; }
L_0016DFDC:
    st32((c.r[17].w[0] + 620u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DFECu); st32((c.r[17].w[0] + 624u), 0u);  if (depth < kMaxDepth) unit_0013(c, 197u, depth + 1u); else { c.pc = 0x0016E130u; return; } if (c.pc != 0x0016DFECu) [[unlikely]] return; }
L_0016DFEC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016E010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016E058; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 9120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E040u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 121u, depth + 1u); else { c.pc = 0x001611C0u; return; } if (c.pc != 0x0016E040u) [[unlikely]] return; }
L_0016E040:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0016E05C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E058u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0016E058u) [[unlikely]] return; }
L_0016E058:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0016E05C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016E070:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0016E090; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E08Cu);  if (depth < kMaxDepth) unit_0013(c, 195u, depth + 1u); else { c.pc = 0x0016E100u; return; } if (c.pc != 0x0016E08Cu) [[unlikely]] return; }
L_0016E08C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0016E090:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016E0A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 580u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016E0EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E0C0u);  if (depth < kMaxDepth) unit_0013(c, 223u, depth + 1u); else { c.pc = 0x0016E7A0u; return; } if (c.pc != 0x0016E0C0u) [[unlikely]] return; }
L_0016E0C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 255ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E0D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 230u, depth + 1u); else { c.pc = 0x0016E920u; return; } if (c.pc != 0x0016E0D4u) [[unlikely]] return; }
L_0016E0D4:
    st32((c.r[16].w[0] + 632u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E0ECu); c.r[5].d[0] = c.r[2].d[0] | 65535ull;  if (depth < kMaxDepth) unit_0013(c, 230u, depth + 1u); else { c.pc = 0x0016E920u; return; } if (c.pc != 0x0016E0ECu) [[unlikely]] return; }
L_0016E0EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016E100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E114u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0015(c, 202u, depth + 1u); else { c.pc = 0x00175D20u; return; } if (c.pc != 0x0016E114u) [[unlikely]] return; }
L_0016E114:
    st64((c.r[16].w[0] + 584u), c.r[2].d[0]);
    st32((c.r[16].w[0] + 624u), 0u);
    st32((c.r[16].w[0] + 592u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016E130:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E150u); set32(c.r[4], ld32((c.r[4].w[0] + 620u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0016E150u) [[unlikely]] return; }
L_0016E150:
    set32(c.r[4], ld32((c.r[16].w[0] + 596u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E15Cu); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0016E15Cu) [[unlikely]] return; }
L_0016E15C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E164u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0011(c, 69u, depth + 1u); else { c.pc = 0x00164780u; return; } if (c.pc != 0x0016E164u) [[unlikely]] return; }
L_0016E164:
    c.f[21] = fp::ee::div(c.fcr31, c.f[0], c.f[21]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E180u);  if (depth < kMaxDepth) unit_0015(c, 201u, depth + 1u); else { c.pc = 0x00175CF0u; return; } if (c.pc != 0x0016E180u) [[unlikely]] return; }
L_0016E180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E188u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 29u, depth + 1u); else { c.pc = 0x001203C0u; return; } if (c.pc != 0x0016E188u) [[unlikely]] return; }
L_0016E188:
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[21]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 628u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016E1B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_0016E1D8; } }
    c.r[2].d[0] = c.r[5].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016E1DC; } }
L_0016E1D8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016E1DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 4972u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E1F8u); st16((c.r[16].w[0] + 576u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0011(c, 73u, depth + 1u); else { c.pc = 0x001647C0u; return; } if (c.pc != 0x0016E1F8u) [[unlikely]] return; }
L_0016E1F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E200u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x001647B0u; return; } if (c.pc != 0x0016E200u) [[unlikely]] return; }
L_0016E200:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E20Cu); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x0016E20Cu) [[unlikely]] return; }
L_0016E20C:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E218u); st32((c.r[16].w[0] + 596u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x0016E218u) [[unlikely]] return; }
L_0016E218:
    st32((c.r[16].w[0] + 600u), c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[16].w[0] + 576u));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 2ull;  goto L_0016E254; }
    set32(c.r[4], ld32((c.r[16].w[0] + 596u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 608u), c.r[3].w[0]);  if (t) { goto L_0016E288; } }
L_0016E254:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = ld16((c.r[16].w[0] + 576u));  goto L_0016E28C; }
    set32(c.r[5], ld32((c.r[16].w[0] + 596u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] >> 31);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 608u), c.r[3].w[0]);
    c.budget -= 11;
L_0016E288:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 576u));
    c.budget -= 1;
L_0016E28C:
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 8ull;  goto L_0016E2C0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 600u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 604u), c.r[3].w[0]);  if (t) { goto L_0016E2F4; } }
L_0016E2C0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = ld16((c.r[16].w[0] + 576u));  goto L_0016E2F8; }
    set32(c.r[5], ld32((c.r[16].w[0] + 600u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] >> 31);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 604u), c.r[3].w[0]);
    c.budget -= 11;
L_0016E2F4:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 576u));
    c.budget -= 1;
L_0016E2F8:
    c.r[3].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0016E350; }
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 12ull;  goto L_0016E32C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 600u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_0016E324; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_0016E324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 604u), c.r[3].w[0]);  if (t) { goto L_0016E34C; } }
L_0016E32C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016E34C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 596u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_0016E348; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_0016E348:
    st32((c.r[16].w[0] + 608u), c.r[3].w[0]);
    c.budget -= 1;
L_0016E34C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0016E350:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016E370:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[19], ld32((c.r[28].w[0] - 31436u)));
    c.f[23] = c.f[12];
    c.f[22] = c.f[13];
    c.f[21] = c.f[14];
    c.budget -= 19;
    { const bool t = c.r[19].d[0] != 0ull; c.f[20] = c.f[15];  if (t) { goto L_0016E3C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0016E414; } }
L_0016E3C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E3CCu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x001646D0u; return; } if (c.pc != 0x0016E3CCu) [[unlikely]] return; }
L_0016E3CC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0016E3E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0016E414; } }
L_0016E3E0:
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E3ECu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0010(c, 163u, depth + 1u); else { c.pc = 0x001616E0u; return; } if (c.pc != 0x0016E3ECu) [[unlikely]] return; }
L_0016E3EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 8u)));  goto L_0016E3FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0016E414; } }
L_0016E3FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    set32(c.r[4], c.r[4].w[0] - 8448u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.budget -= 6;
L_0016E414:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0016E424; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016E49C; } }
L_0016E424:
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 96u), c.f[23]);
    st32((c.r[29].w[0] + 108u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 128u), c.f[23]);
    st32((c.r[29].w[0] + 120u), 0u);
    st32((c.r[29].w[0] + 100u), c.f[22]);
    st32((c.r[29].w[0] + 124u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 116u), c.f[22]);
    st32((c.r[29].w[0] + 136u), 0u);
    st32((c.r[29].w[0] + 112u), c.f[21]);
    st32((c.r[29].w[0] + 140u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 144u), c.f[21]);
    st32((c.r[29].w[0] + 156u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 132u), c.f[20]);
    st32((c.r[29].w[0] + 152u), 0u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E470u); st32((c.r[29].w[0] + 148u), c.f[20]);  if (depth < kMaxDepth) unit_001A(c, 343u, depth + 1u); else { c.pc = 0x0018BE90u; return; } if (c.pc != 0x0016E470u) [[unlikely]] return; }
L_0016E470:
    set32(c.r[6], 0u + 4u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E484u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 9u, depth + 1u); else { c.pc = 0x0018C3B0u; return; } if (c.pc != 0x0016E484u) [[unlikely]] return; }
L_0016E484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E48Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 344u, depth + 1u); else { c.pc = 0x0018BEF0u; return; } if (c.pc != 0x0016E48Cu) [[unlikely]] return; }
L_0016E48C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 356u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 352u)));
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 4;
L_0016E49C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0016E4D0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[25]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[19], ld32((c.r[28].w[0] - 31436u)));
    c.f[23] = c.f[12];
    c.f[22] = c.f[13];
    c.f[24] = c.f[14];
    c.budget -= 21;
    { const bool t = c.r[19].d[0] != 0ull; c.f[21] = c.f[15];  if (t) { goto L_0016E52C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0016E57C; } }
L_0016E52C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E534u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x001646D0u; return; } if (c.pc != 0x0016E534u) [[unlikely]] return; }
L_0016E534:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0016E548; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0016E57C; } }
L_0016E548:
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E554u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0010(c, 163u, depth + 1u); else { c.pc = 0x001616E0u; return; } if (c.pc != 0x0016E554u) [[unlikely]] return; }
L_0016E554:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 8u)));  goto L_0016E564; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0016E57C; } }
L_0016E564:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    set32(c.r[4], c.r[4].w[0] - 8448u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.budget -= 6;
L_0016E57C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0016E58C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016E768; } }
L_0016E58C:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E598u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 343u, depth + 1u); else { c.pc = 0x0018BE90u; return; } if (c.pc != 0x0016E598u) [[unlikely]] return; }
L_0016E598:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 576u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[20] = c.r[2].w[0];
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 32ull;  goto L_0016E5C4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 5;
L_0016E5C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0016E694; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[6], 0u + 4u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[23], c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.f[2] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    c.f[25] = fp::ee::add(c.fcr31, c.f[22], c.f[24]);
    c.f[1] = c.r[2].w[0];
    c.f[24] = fp::ee::add(c.fcr31, c.f[1], c.f[25]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[22], c.f[1]);
    st32((c.r[29].w[0] + 112u), c.f[2]);
    st32((c.r[29].w[0] + 160u), c.f[2]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    st32((c.r[29].w[0] + 132u), c.f[22]);
    st32((c.r[29].w[0] + 148u), c.f[25]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E62Cu); st32((c.r[29].w[0] + 164u), c.f[24]);  if (depth < kMaxDepth) unit_001B(c, 12u, depth + 1u); else { c.pc = 0x0018C580u; return; } if (c.pc != 0x0016E62Cu) [[unlikely]] return; }
L_0016E62C:
    c.f[1] = fp::ee::add(c.fcr31, c.f[23], c.f[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[22], c.f[0]);
    st32((c.r[29].w[0] + 112u), c.f[1]);
    st32((c.r[29].w[0] + 160u), c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[25]);
    st32((c.r[29].w[0] + 164u), c.f[24]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E68Cu); st32((c.r[29].w[0] + 132u), c.f[22]);  if (depth < kMaxDepth) unit_001B(c, 12u, depth + 1u); else { c.pc = 0x0018C580u; return; } if (c.pc != 0x0016E68Cu) [[unlikely]] return; }
L_0016E68C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0016E750; } }
L_0016E694:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[6], 0u + 4u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[22], c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.f[25] = fp::ee::add(c.fcr31, c.f[23], c.f[24]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[23], c.f[2]);
    c.f[24] = fp::ee::add(c.fcr31, c.f[2], c.f[25]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 112u), c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    st32((c.r[29].w[0] + 164u), c.f[0]);
    st32((c.r[29].w[0] + 128u), c.f[23]);
    st32((c.r[29].w[0] + 144u), c.f[25]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E6F0u); st32((c.r[29].w[0] + 160u), c.f[24]);  if (depth < kMaxDepth) unit_001B(c, 12u, depth + 1u); else { c.pc = 0x0018C580u; return; } if (c.pc != 0x0016E6F0u) [[unlikely]] return; }
L_0016E6F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[6], 0u + 4u);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[23], c.f[0]);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[22], c.f[21]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[20]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    st32((c.r[29].w[0] + 164u), c.f[0]);
    st32((c.r[29].w[0] + 144u), c.f[25]);
    st32((c.r[29].w[0] + 160u), c.f[24]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E74Cu); st32((c.r[29].w[0] + 128u), c.f[23]);  if (depth < kMaxDepth) unit_001B(c, 12u, depth + 1u); else { c.pc = 0x0018C580u; return; } if (c.pc != 0x0016E74Cu) [[unlikely]] return; }
L_0016E74C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0016E750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E758u);  if (depth < kMaxDepth) unit_001A(c, 344u, depth + 1u); else { c.pc = 0x0018BEF0u; return; } if (c.pc != 0x0016E758u) [[unlikely]] return; }
L_0016E758:
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 356u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 352u)));
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 4;
L_0016E768:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0016E7A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 580u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016E8F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E7CCu);  if (depth < kMaxDepth) unit_0011(c, 66u, depth + 1u); else { c.pc = 0x00164750u; return; } if (c.pc != 0x0016E7CCu) [[unlikely]] return; }
L_0016E7CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E7D4u); set32(c.r[4], ld32((c.r[2].w[0] + 24u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0016E7D4u) [[unlikely]] return; }
L_0016E7D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 620u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E7E0u); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0016E7E0u) [[unlikely]] return; }
L_0016E7E0:
    c.f[1] = ld32((c.r[16].w[0] + 608u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46820000u);
    c.f[2] = ld32((c.r[16].w[0] + 604u));
    set32(c.r[5], ld32((c.r[16].w[0] + 612u)));
    c.r[4].d[0] = c.r[2].d[0] | 13653ull;
    c.r[3].d[0] = ld16((c.r[16].w[0] + 576u));
    c.f[20] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[5], 0u - c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.f[1] = c.r[5].w[0];
    c.f[3] = fp::cvt_s_w(c.f[1]);
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[22], c.f[0]);
    c.f[21] = fp::cvt_s_w(c.f[2]);
    c.f[2] = ld32((c.r[16].w[0] + 596u));
    c.f[1] = ld32((c.r[16].w[0] + 616u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 24;
    { const bool t = c.r[2].d[0] == 0ull; c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_0016E850; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 4;
L_0016E850:
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[14] = fp::ee::add(c.fcr31, c.f[21], c.f[3]);  goto L_0016E884; }
    c.f[14] = fp::ee::add(c.fcr31, c.f[21], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 255ull;
    c.f[15] = fp::ee::add(c.fcr31, c.f[20], c.f[3]);
    c.f[12] = c.f[21];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E87Cu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0013(c, 208u, depth + 1u); else { c.pc = 0x0016E370u; return; } if (c.pc != 0x0016E87Cu) [[unlikely]] return; }
L_0016E87C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[16].w[0] + 596u));  if (t) { goto L_0016E8A4; } }
L_0016E884:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 255ull;
    c.f[15] = fp::ee::add(c.fcr31, c.f[20], c.f[1]);
    c.f[12] = c.f[21];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E8A0u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0013(c, 208u, depth + 1u); else { c.pc = 0x0016E370u; return; } if (c.pc != 0x0016E8A0u) [[unlikely]] return; }
L_0016E8A0:
    c.f[1] = ld32((c.r[16].w[0] + 596u));
    c.budget -= 1;
L_0016E8A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 624u)));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 576u));
    c.f[0] = ld32((c.r[16].w[0] + 616u));
    set32(c.r[3], ld32((c.r[16].w[0] + 612u)));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.f[15] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.f[14] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0016E8E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.f[15] = fp::ee::mul(c.fcr31, c.f[15], c.f[0]);
    c.budget -= 4;
L_0016E8E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.f[12] = c.f[21];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E8F8u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0013(c, 214u, depth + 1u); else { c.pc = 0x0016E4D0u; return; } if (c.pc != 0x0016E8F8u) [[unlikely]] return; }
L_0016E8F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016E920:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 580u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016EE34; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0016E9B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E978u);  if (depth < kMaxDepth) unit_0015(c, 202u, depth + 1u); else { c.pc = 0x00175D20u; return; } if (c.pc != 0x0016E978u) [[unlikely]] return; }
L_0016E978:
    c.r[3].d[0] = ld64((c.r[21].w[0] + 584u));
    c.r[2].d[0] = c.r[2].d[0] - c.r[3].d[0];
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E98Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x0016E98Cu) [[unlikely]] return; }
L_0016E98C:
    c.f[1] = ld32((c.r[21].w[0] + 628u));
    c.f[12] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E9A8u);  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x0016E9A8u) [[unlikely]] return; }
L_0016E9A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0016EA3C; } }
L_0016E9B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E9B8u);  if (depth < kMaxDepth) unit_0015(c, 201u, depth + 1u); else { c.pc = 0x00175CF0u; return; } if (c.pc != 0x0016E9B8u) [[unlikely]] return; }
L_0016E9B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E9C0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 66u, depth + 1u); else { c.pc = 0x00164750u; return; } if (c.pc != 0x0016E9C0u) [[unlikely]] return; }
L_0016E9C0:
    c.r[6].d[0] = ld64((c.r[2].w[0]));
    c.r[7].d[0] = c.r[16].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[4].d[0] = c.r[6].d[0] << 32;
    c.r[5].d[0] = c.r[2].d[0] | 16960ull;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    mmi::mult(c, 1, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::multu(c, 0, c.r[4].w[0], c.r[7].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[4], c.r[4], c.r[6]);
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EA10u); c.r[4].d[0] = c.r[2].d[0] + c.r[4].d[0];  if (depth < kMaxDepth) unit_000B(c, 11u, depth + 1u); else { c.pc = 0x0014CEF8u; return; } if (c.pc != 0x0016EA10u) [[unlikely]] return; }
L_0016EA10:
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EA1Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x0016EA1Cu) [[unlikely]] return; }
L_0016EA1C:
    c.f[1] = ld32((c.r[21].w[0] + 628u));
    c.f[12] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EA38u);  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x0016EA38u) [[unlikely]] return; }
L_0016EA38:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0016EA3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EA44u); set32(c.r[4], ld32((c.r[21].w[0] + 604u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0016EA44u) [[unlikely]] return; }
L_0016EA44:
    set32(c.r[4], ld32((c.r[21].w[0] + 608u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EA50u); c.f[25] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0016EA50u) [[unlikely]] return; }
L_0016EA50:
    set32(c.r[4], ld32((c.r[21].w[0] + 596u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EA5Cu); c.f[24] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0016EA5Cu) [[unlikely]] return; }
L_0016EA5C:
    set32(c.r[18], ld32((c.r[21].w[0] + 596u)));
    c.f[1] = ld32((c.r[21].w[0] + 612u));
    set32(c.r[2], ld32((c.r[21].w[0] + 592u)));
    c.f[2] = ld32((c.r[21].w[0] + 616u));
    c.f[22] = fp::cvt_s_w(c.f[1]);
    mmi::divu(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    mmi::divu(c, 0, c.r[19].w[0], c.r[18].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    mmi::divu(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EA90u); c.f[23] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0016EA90u) [[unlikely]] return; }
L_0016EA90:
    mmi::divu(c, 0, c.r[19].w[0], c.r[18].w[0]);
    c.f[1] = ld32((c.r[21].w[0] + 616u));
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EAA8u); c.f[21] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0016EAA8u) [[unlikely]] return; }
L_0016EAA8:
    c.f[1] = ld32((c.r[21].w[0] + 616u));
    c.r[3].d[0] = ld16((c.r[21].w[0] + 576u));
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_0016EAD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.f[23] = fp::ee::mul(c.fcr31, c.f[23], c.f[0]);
    c.budget -= 6;
L_0016EAD4:
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016EC80; } }
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[16].d[0]) { set32(c.r[3], c.r[16].w[0] - c.r[17].w[0]);  goto L_0016EB34; }
    c.f[0] = c.r[17].w[0];
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[24]);
    c.f[13] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[24]);
    c.f[12] = fp::ee::add(c.fcr31, c.f[25], c.f[21]);
    c.f[14] = fp::ee::add(c.fcr31, c.f[25], c.f[20]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EB2Cu); c.f[15] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 208u, depth + 1u); else { c.pc = 0x0016E370u; return; } if (c.pc != 0x0016EB2Cu) [[unlikely]] return; }
L_0016EB2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[21].w[0] + 596u)));  if (t) { goto L_0016EE1C; } }
L_0016EB34:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 1u);  goto L_0016EBD0; }
    c.f[0] = c.r[17].w[0];
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[24]);
    c.f[13] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[24]);
    c.f[12] = fp::ee::add(c.fcr31, c.f[25], c.f[21]);
    c.f[14] = fp::ee::add(c.fcr31, c.f[25], c.f[23]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EB84u); c.f[15] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 208u, depth + 1u); else { c.pc = 0x0016E370u; return; } if (c.pc != 0x0016EB84u) [[unlikely]] return; }
L_0016EB84:
    c.f[0] = c.r[16].w[0];
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[24]);
    c.f[13] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[24]);
    c.f[14] = fp::ee::add(c.fcr31, c.f[24], c.f[20]);
    c.f[12] = c.f[25];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EBC8u); c.f[15] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 208u, depth + 1u); else { c.pc = 0x0016E370u; return; } if (c.pc != 0x0016EBC8u) [[unlikely]] return; }
L_0016EBC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016EE18; } }
L_0016EBD0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[17].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[23] = fp::ee::add(c.fcr31, c.f[25], c.f[23]);
    c.f[1] = 0u;
    c.f[12] = fp::ee::add(c.fcr31, c.f[25], c.f[21]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[24]);
    c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[24]);
    c.f[14] = c.f[23];
    c.f[15] = c.f[21];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EC14u); c.f[13] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 208u, depth + 1u); else { c.pc = 0x0016E370u; return; } if (c.pc != 0x0016EC14u) [[unlikely]] return; }
L_0016EC14:
    c.f[0] = c.r[16].w[0];
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = 0u;
    c.f[13] = c.f[21];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[24]);
    c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[1]);
    c.f[14] = c.f[23];
    c.f[12] = c.f[25];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EC44u); c.f[15] = c.f[21];  if (depth < kMaxDepth) unit_0013(c, 208u, depth + 1u); else { c.pc = 0x0016E370u; return; } if (c.pc != 0x0016EC44u) [[unlikely]] return; }
L_0016EC44:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[24]);
    c.f[14] = fp::ee::add(c.fcr31, c.f[24], c.f[20]);
    c.f[12] = c.f[25];
    c.f[13] = c.f[21];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EC78u); c.f[15] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[1]);  if (depth < kMaxDepth) unit_0013(c, 208u, depth + 1u); else { c.pc = 0x0016E370u; return; } if (c.pc != 0x0016EC78u) [[unlikely]] return; }
L_0016EC78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016EE18; } }
L_0016EC80:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[16].d[0]) { set32(c.r[3], c.r[16].w[0] - c.r[17].w[0]);  goto L_0016ECD4; }
    c.f[0] = c.r[17].w[0];
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[25]);
    c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[25]);
    c.f[13] = fp::ee::add(c.fcr31, c.f[24], c.f[21]);
    c.f[15] = fp::ee::add(c.fcr31, c.f[24], c.f[20]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ECCCu); c.f[14] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 208u, depth + 1u); else { c.pc = 0x0016E370u; return; } if (c.pc != 0x0016ECCCu) [[unlikely]] return; }
L_0016ECCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016EE18; } }
L_0016ECD4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 1u);  goto L_0016ED70; }
    c.f[0] = c.r[17].w[0];
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[25]);
    c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[25]);
    c.f[13] = fp::ee::add(c.fcr31, c.f[24], c.f[21]);
    c.f[15] = fp::ee::add(c.fcr31, c.f[24], c.f[23]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ED24u); c.f[14] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 208u, depth + 1u); else { c.pc = 0x0016E370u; return; } if (c.pc != 0x0016ED24u) [[unlikely]] return; }
L_0016ED24:
    c.f[0] = c.r[16].w[0];
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[25]);
    c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[25]);
    c.f[15] = fp::ee::add(c.fcr31, c.f[24], c.f[20]);
    c.f[13] = c.f[24];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ED68u); c.f[14] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 208u, depth + 1u); else { c.pc = 0x0016E370u; return; } if (c.pc != 0x0016ED68u) [[unlikely]] return; }
L_0016ED68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016EE18; } }
L_0016ED70:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[17].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[23] = fp::ee::add(c.fcr31, c.f[24], c.f[23]);
    c.f[1] = 0u;
    c.f[13] = fp::ee::add(c.fcr31, c.f[24], c.f[21]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[25]);
    c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[25]);
    c.f[15] = c.f[23];
    c.f[14] = c.f[21];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EDB4u); c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 208u, depth + 1u); else { c.pc = 0x0016E370u; return; } if (c.pc != 0x0016EDB4u) [[unlikely]] return; }
L_0016EDB4:
    c.f[0] = c.r[16].w[0];
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = 0u;
    c.f[12] = c.f[21];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[25]);
    c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[1]);
    c.f[15] = c.f[23];
    c.f[13] = c.f[24];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EDE4u); c.f[14] = c.f[21];  if (depth < kMaxDepth) unit_0013(c, 208u, depth + 1u); else { c.pc = 0x0016E370u; return; } if (c.pc != 0x0016EDE4u) [[unlikely]] return; }
L_0016EDE4:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[25]);
    c.f[15] = fp::ee::add(c.fcr31, c.f[24], c.f[20]);
    c.f[12] = c.f[21];
    c.f[13] = c.f[24];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EE18u); c.f[14] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[1]);  if (depth < kMaxDepth) unit_0013(c, 208u, depth + 1u); else { c.pc = 0x0016E370u; return; } if (c.pc != 0x0016EE18u) [[unlikely]] return; }
L_0016EE18:
    set32(c.r[3], ld32((c.r[21].w[0] + 596u)));
    c.budget -= 1;
L_0016EE1C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    mmi::divu(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[21].w[0] + 624u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 592u), c.r[19].w[0]);  if (t) { goto L_0016EE38; } }
L_0016EE34:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016EE38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0016EE80:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_001F(c, 123u, depth); }
L_0016EE90:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_001F(c, 124u, depth); }
L_0016EEA0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_001F(c, 125u, depth); }
L_0016EEB0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_001F(c, 126u, depth); }
L_0016EEC0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_001F(c, 127u, depth); }
L_0016EED0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_001F(c, 128u, depth); }
L_0016EEE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 31012u), c.r[4].w[0]);  c.pc = t; return; }
L_0016EEF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0016EF1C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[5].w[0] - 4864u);
    c.budget -= 2;
L_0016EF1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EF24u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 9u, depth + 1u); else { c.pc = 0x001883A0u; return; } if (c.pc != 0x0016EF24u) [[unlikely]] return; }
L_0016EF24:
    set32(c.r[4], c.r[18].w[0] + 80u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EF34u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 286u, depth + 1u); else { c.pc = 0x0019FE00u; return; } if (c.pc != 0x0016EF34u) [[unlikely]] return; }
L_0016EF34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016EF50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0016EF7C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[5].w[0] - 4864u);
    c.budget -= 2;
L_0016EF7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EF84u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 9u, depth + 1u); else { c.pc = 0x001883A0u; return; } if (c.pc != 0x0016EF84u) [[unlikely]] return; }
L_0016EF84:
    set32(c.r[4], c.r[18].w[0] + 80u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EF94u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 46u, depth + 1u); else { c.pc = 0x001A0AE0u; return; } if (c.pc != 0x0016EF94u) [[unlikely]] return; }
L_0016EF94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016EFB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0016EFDC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[5].w[0] - 4864u);
    c.budget -= 2;
L_0016EFDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EFE4u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 9u, depth + 1u); else { c.pc = 0x001883A0u; return; } if (c.pc != 0x0016EFE4u) [[unlikely]] return; }
L_0016EFE4:
    set32(c.r[4], c.r[18].w[0] + 80u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EFF4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 75u, depth + 1u); else { c.pc = 0x001A1100u; return; } if (c.pc != 0x0016EFF4u) [[unlikely]] return; }
L_0016EFF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016F010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F024u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x0016F024u) [[unlikely]] return; }
L_0016F024:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D430000u);
    set32(c.r[3], c.r[3].w[0] + 9152u);
    c.r[2].d[0] = c.r[2].d[0] | 21320ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F044u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 110u, depth + 1u); else { c.pc = 0x0019D540u; return; } if (c.pc != 0x0016F044u) [[unlikely]] return; }
L_0016F044:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 72u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 32u)));  goto L_0016F078; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0016F0C0; } }
L_0016F078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F080u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001F(c, 111u, depth + 1u); else { c.pc = 0x0019D550u; return; } if (c.pc != 0x0016F080u) [[unlikely]] return; }
L_0016F080:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 28u), 0u);  goto L_0016F0AC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u + 81u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F0A4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0016F0A4u) [[unlikely]] return; }
L_0016F0A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0016F0C0; } }
L_0016F0AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_0016F0C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016F0D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016F138; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], c.r[3].w[0] + 9152u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0016F118; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F114u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001F(c, 116u, depth + 1u); else { c.pc = 0x0019D600u; return; } if (c.pc != 0x0016F114u) [[unlikely]] return; }
L_0016F114:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0016F118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F120u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 240u, depth + 1u); else { c.pc = 0x00166010u; return; } if (c.pc != 0x0016F120u) [[unlikely]] return; }
L_0016F120:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0016F13C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F138u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0016F138u) [[unlikely]] return; }
L_0016F138:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0016F13C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016F150:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016F160:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0016F17C; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0016F180; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F17Cu); set32(c.r[4], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_001F(c, 117u, depth + 1u); else { c.pc = 0x0019D610u; return; } if (c.pc != 0x0016F17Cu) [[unlikely]] return; }
L_0016F17C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0016F180:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016F190:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.f[0] = 0u;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016F1B0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 2;
L_0016F1B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016F1C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F1D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x0016F1D4u) [[unlikely]] return; }
L_0016F1D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x544D0000u);
    set32(c.r[3], c.r[3].w[0] + 9184u);
    c.r[2].d[0] = c.r[2].d[0] | 19784ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 352u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 32u)));  goto L_0016F20C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0016F264; } }
L_0016F20C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F214u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001D(c, 249u, depth + 1u); else { c.pc = 0x00196890u; return; } if (c.pc != 0x0016F214u) [[unlikely]] return; }
L_0016F214:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 3u);  goto L_0016F228; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 352u), c.r[2].w[0]);  if (t) { goto L_0016F248; } }
L_0016F228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F230u); set32(c.r[5], 0u + 69u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0016F230u) [[unlikely]] return; }
L_0016F230:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0016F264; } }
L_0016F248:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
L_0016F264:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016F280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016F2E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 9184u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0016F2C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F2BCu); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_001D(c, 258u, depth + 1u); else { c.pc = 0x001969D0u; return; } if (c.pc != 0x0016F2BCu) [[unlikely]] return; }
L_0016F2BC:
    st32((c.r[17].w[0] + 352u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0016F2C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F2CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 240u, depth + 1u); else { c.pc = 0x00166010u; return; } if (c.pc != 0x0016F2CCu) [[unlikely]] return; }
L_0016F2CC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0016F2E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F2E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0016F2E4u) [[unlikely]] return; }
L_0016F2E4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0016F2E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016F300:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016F310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0016F338; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0016F33C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 352u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016F338; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F338u); set32(c.r[4], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_001D(c, 240u, depth + 1u); else { c.pc = 0x00196760u; return; } if (c.pc != 0x0016F338u) [[unlikely]] return; }
L_0016F338:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0016F33C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016F350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = 0u;
    set32(c.r[2], ld32((c.r[4].w[0] + 352u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0016F374; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F370u); set32(c.r[4], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_001D(c, 272u, depth + 1u); else { c.pc = 0x00196B60u; return; } if (c.pc != 0x0016F370u) [[unlikely]] return; }
L_0016F370:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0016F374:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016F380:
    st32((c.r[28].w[0] - 31296u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0016F390:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31296u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0016F3B4; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F3B0u); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0016F3B0u) [[unlikely]] return; }
L_0016F3B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016F3B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016F3C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31296u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016F3EC; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F3E4u); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0016F3E4u) [[unlikely]] return; }
L_0016F3E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016F428; } }
L_0016F3EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F3F4u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0016F3F4u) [[unlikely]] return; }
L_0016F3F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 31296u), c.r[2].w[0]);  goto L_0016F40C; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F408u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 324u, depth + 1u); else { c.pc = 0x0016F610u; return; } if (c.pc != 0x0016F408u) [[unlikely]] return; }
L_0016F408:
    st32((c.r[28].w[0] - 31296u), c.r[2].w[0]);
    c.budget -= 1;
L_0016F40C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 4u);  goto L_0016F41C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0016F428; } }
L_0016F41C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F424u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0016F424u) [[unlikely]] return; }
L_0016F424:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016F428:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016F440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 31296u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0016F47C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 31296u), 0u);  goto L_0016F474; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F470u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016F470u) [[unlikely]] return; }
L_0016F470:
    st32((c.r[28].w[0] - 31296u), 0u);
    c.budget -= 1;
L_0016F474:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0016F488; } }
L_0016F47C:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F488u); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0016F488u) [[unlikely]] return; }
L_0016F488:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016F4A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 31296u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016F514; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F4BCu);  if (depth < kMaxDepth) unit_0013(c, 331u, depth + 1u); else { c.pc = 0x0016F770u; return; } if (c.pc != 0x0016F4BCu) [[unlikely]] return; }
L_0016F4BC:
    set32(c.r[3], ld32((c.r[28].w[0] - 31296u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31296u)));  goto L_0016F4DC; }
    st32((c.r[3].w[0] + 32u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F4D8u); set32(c.r[4], ld32((c.r[28].w[0] - 31296u)));  if (depth < kMaxDepth) unit_0013(c, 365u, depth + 1u); else { c.pc = 0x0016FC40u; return; } if (c.pc != 0x0016F4D8u) [[unlikely]] return; }
L_0016F4D8:
    set32(c.r[4], ld32((c.r[28].w[0] - 31296u)));
    c.budget -= 1;
L_0016F4DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F4E4u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0013(c, 351u, depth + 1u); else { c.pc = 0x0016FA80u; return; } if (c.pc != 0x0016F4E4u) [[unlikely]] return; }
L_0016F4E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F4ECu);  if (depth < kMaxDepth) unit_0011(c, 68u, depth + 1u); else { c.pc = 0x00164770u; return; } if (c.pc != 0x0016F4ECu) [[unlikely]] return; }
L_0016F4EC:
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    st32((c.r[2].w[0] + 112u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    st32((c.r[2].w[0] + 116u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 31296u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    st32((c.r[2].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 10;
L_0016F514:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016F520:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 31296u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016F53C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F53Cu);  if (depth < kMaxDepth) unit_0013(c, 349u, depth + 1u); else { c.pc = 0x0016FA50u; return; } if (c.pc != 0x0016F53Cu) [[unlikely]] return; }
L_0016F53C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016F550:
    set32(c.r[2], ld32((c.r[28].w[0] - 31296u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 20u)));  c.pc = t; return; }
L_0016F560:
    set32(c.r[4], ld32((c.r[28].w[0] - 31296u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016F574; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 2;
L_0016F574:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016F580:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 31296u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016F5C0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0016F5B8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F5B0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x0016F5B0u) [[unlikely]] return; }
L_0016F5B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016F5C0; } }
L_0016F5B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F5C0u);  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x0016F5C0u) [[unlikely]] return; }
L_0016F5C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016F5D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31296u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016F5FC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F5F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x0016F5F4u) [[unlikely]] return; }
L_0016F5F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0016F608; } }
L_0016F5FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F604u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0016F604u) [[unlikely]] return; }
L_0016F604:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0016F608:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016F610:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[7], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].d[0] = c.r[2].d[0] | 16706ull;
    set32(c.r[6], c.r[6].w[0] + 9216u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4E4D0000u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[3].d[0] = c.r[2].d[0] | 20296ull;
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st64((c.r[4].w[0] + 40u), 0ull);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), 0u);  c.pc = t; return; }
L_0016F670:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016F748; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 9216u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F6A8u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 378u, depth + 1u); else { c.pc = 0x00123888u; return; } if (c.pc != 0x0016F6A8u) [[unlikely]] return; }
L_0016F6A8:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016F6E8; } }
L_0016F6B4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], ld32((c.r[4].w[0] + 24u)));  if (t) { goto L_0016F6D0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F6CCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016F6CCu) [[unlikely]] return; }
L_0016F6CC:
    c.budget -= 1;
L_0016F6D0:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 40u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != 0ull; st64((c.r[17].w[0] + 40u), c.r[2].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016F6B4u | kUnwind; return; } goto L_0016F6B4; } }
    c.budget -= 1;
L_0016F6E8:
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 3u);  goto L_0016F708; }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 40u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016F710; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_0016F708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F710u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0016F710u) [[unlikely]] return; }
L_0016F710:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0016F734; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 7;
L_0016F734:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0016F74C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F748u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0016F748u) [[unlikely]] return; }
L_0016F748:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0016F74C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016F770:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016F818; } }
L_0016F790:
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016F810; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0016F7C8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0016F7D0; } }
    c.budget -= 1;
L_0016F7C8:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 2;
L_0016F7D0:
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0016F7E8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[5].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 3;
L_0016F7E8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016F800; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F800u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016F800u) [[unlikely]] return; }
L_0016F800:
    c.r[3].d[0] = ld64((c.r[17].w[0] + 40u));
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(-1ll);
    st64((c.r[17].w[0] + 40u), c.r[3].d[0]);
    c.budget -= 4;
L_0016F810:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016F790u | kUnwind; return; } goto L_0016F790; } }
L_0016F818:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016F830:
    set32(c.r[3], ld32((c.r[5].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016F868; } }
    st32((c.r[5].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[5].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0016F850; } }
    st32((c.r[3].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 1;
L_0016F850:
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[5].w[0] + 40u), c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 40u));
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(1ll);
    st64((c.r[4].w[0] + 40u), c.r[3].d[0]);
    c.budget -= 6;
L_0016F868:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016F870:
    set32(c.r[6], ld32((c.r[5].w[0] + 40u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0016F8D0; } }
    set32(c.r[6], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 24u)));  goto L_0016F898; }
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0016F89C; } }
L_0016F898:
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 1;
L_0016F89C:
    set32(c.r[6], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { st32((c.r[5].w[0] + 20u), 0u);  goto L_0016F8B4; }
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    st32((c.r[6].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 20u), 0u);
    c.budget -= 3;
L_0016F8B4:
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[5].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0016F8C4; } }
    st32((c.r[3].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 1;
L_0016F8C4:
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[5].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 3;
L_0016F8D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016F8E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0016F920; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F918u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x0016F918u) [[unlikely]] return; }
L_0016F918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0016F930; } }
L_0016F920:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F92Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x0016F92Cu) [[unlikely]] return; }
L_0016F92C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0016F930:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_0016F94C; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F944u); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0016F944u) [[unlikely]] return; }
L_0016F944:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016F968; } }
L_0016F94C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F958u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0016F958u) [[unlikely]] return; }
L_0016F958:
    set32(c.r[5], c.r[16].w[0] + c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F964u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 217u, depth + 1u); else { c.pc = 0x00125858u; return; } if (c.pc != 0x0016F964u) [[unlikely]] return; }
L_0016F964:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0016F968:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016F980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], c.r[5].w[0] + 15u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.r[16].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 16u);  if (t) { goto L_0016F9B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F9ACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x0016F9ACu) [[unlikely]] return; }
L_0016F9AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016F9C0; } }
L_0016F9B4:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F9C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x0016F9C0u) [[unlikely]] return; }
L_0016F9C0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x454D0000u);  goto L_0016F9DC; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F9D4u); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0016F9D4u) [[unlikely]] return; }
L_0016F9D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016F9F8; } }
L_0016F9DC:
    set32(c.r[3], 0u + 16u);
    c.r[4].d[0] = c.r[4].d[0] | 20564ull;
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(0u));
    c.budget -= 7;
L_0016F9F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016FA10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_0016FA34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FA2Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x0016FA2Cu) [[unlikely]] return; }
L_0016FA2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0016FA40; } }
L_0016FA34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FA3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0016FA3Cu) [[unlikely]] return; }
L_0016FA3C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0016FA40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016FA50:
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016FA78; } }
L_0016FA5C:
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016FA5Cu | kUnwind; return; } goto L_0016FA5C; } }
L_0016FA78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FA80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_0016FAA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FA9Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 252u, depth + 1u); else { c.pc = 0x001721D0u; return; } if (c.pc != 0x0016FA9Cu) [[unlikely]] return; }
L_0016FA9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0016FAB4; } }
L_0016FAA4:
    set32(c.r[6], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FAB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0016FAB0u) [[unlikely]] return; }
L_0016FAB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0016FAB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016FAC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 56u);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 11;
L_0016FAEC:
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0016FB28; } }
L_0016FAF8:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[17], ld32((c.r[17].w[0] + 24u)));  goto L_0016FB20; }
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FB18u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016FB18u) [[unlikely]] return; }
L_0016FB18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 32u), c.r[16].w[0]);  if (t) { goto L_0016FB44; } }
L_0016FB20:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016FAF8u | kUnwind; return; } goto L_0016FAF8; } }
L_0016FB28:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016FAECu | kUnwind; return; } goto L_0016FAEC; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FB44u); set32(c.r[5], 0u + 108u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0016FB44u) [[unlikely]] return; }
L_0016FB44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016FB60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31296u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016FBF4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[29].w[0] + 24u);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 6;
L_0016FB90:
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016FBD0; } }
    c.budget -= 1;
L_0016FBA0:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[8].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 24u)));  goto L_0016FBC4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FBBCu); c.r[5].d[0] = c.r[8].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016FBBCu) [[unlikely]] return; }
L_0016FBBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0016FBE4; } }
L_0016FBC4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016FBA0u | kUnwind; return; } goto L_0016FBA0; } }
    c.budget -= 1;
L_0016FBD0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016FB90u | kUnwind; return; } goto L_0016FB90; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016FBE4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 9u);  goto L_0016FBF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_0016FBF8; } }
L_0016FBF4:
    set32(c.r[2], 0u + 9u);
    c.budget -= 1;
L_0016FBF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016FC10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 31296u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0016FC34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FC34u); c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 354u, depth + 1u); else { c.pc = 0x0016FAC0u; return; } if (c.pc != 0x0016FC34u) [[unlikely]] return; }
L_0016FC34:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016FC40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FC5Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 378u, depth + 1u); else { c.pc = 0x00123888u; return; } if (c.pc != 0x0016FC5Cu) [[unlikely]] return; }
L_0016FC5C:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0016FC88; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00170000u);
    set32(c.r[5], c.r[5].w[0] - 1184u);
    set32(c.r[6], c.r[6].w[0] - 1008u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FC84u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 257u, depth + 1u); else { c.pc = 0x001722B0u; return; } if (c.pc != 0x0016FC84u) [[unlikely]] return; }
L_0016FC84:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016FC88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FC90u);  if (depth < kMaxDepth) unit_0001(c, 147u, depth + 1u); else { c.pc = 0x001251E0u; return; } if (c.pc != 0x0016FC90u) [[unlikely]] return; }
L_0016FC90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016FCA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FCC8u); set32(c.r[5], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0010(c, 181u, depth + 1u); else { c.pc = 0x00161970u; return; } if (c.pc != 0x0016FCC8u) [[unlikely]] return; }
L_0016FCC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_0016FCE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FCDCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 175u, depth + 1u); else { c.pc = 0x0015DCC0u; return; } if (c.pc != 0x0016FCDCu) [[unlikely]] return; }
L_0016FCDC:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_0016FCE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FCECu); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_001A(c, 346u, depth + 1u); else { c.pc = 0x0018BF30u; return; } if (c.pc != 0x0016FCECu) [[unlikely]] return; }
L_0016FCEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016FD10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x52500000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21320ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FD34u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001F(c, 129u, depth + 1u); else { c.pc = 0x0019D790u; return; } if (c.pc != 0x0016FD34u) [[unlikely]] return; }
L_0016FD34:
    st32((c.r[16].w[0] + 112u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 116u), 0u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[16].w[0] + 108u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[16].w[0] + 96u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 104u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 120u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 124u), 0u);
    st32((c.r[16].w[0] + 92u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 16;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0016FDC0; }
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FD80u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001F(c, 130u, depth + 1u); else { c.pc = 0x0019D7A0u; return; } if (c.pc != 0x0016FD80u) [[unlikely]] return; }
L_0016FD80:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 28u), 0u);  goto L_0016FDAC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u + 112u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FDA4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0016FDA4u) [[unlikely]] return; }
L_0016FDA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016FDBC; } }
L_0016FDAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_0016FDBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0016FDC0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016FDD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FDE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x0016FDE4u) [[unlikely]] return; }
L_0016FDE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 9232u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FDF8u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0013(c, 373u, depth + 1u); else { c.pc = 0x0016FD10u; return; } if (c.pc != 0x0016FDF8u) [[unlikely]] return; }
L_0016FDF8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016FE10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FE2Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x0016FE2Cu) [[unlikely]] return; }
L_0016FE2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 9232u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FE40u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0013(c, 373u, depth + 1u); else { c.pc = 0x0016FD10u; return; } if (c.pc != 0x0016FE40u) [[unlikely]] return; }
L_0016FE40:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0016FE5C; }
    st32((c.r[17].w[0] + 92u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0016FE5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016FE70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016FEEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 9232u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_0016FEB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FEACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0016FEACu) [[unlikely]] return; }
L_0016FEAC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0016FEB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0016FECC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FEC8u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001F(c, 135u, depth + 1u); else { c.pc = 0x0019D870u; return; } if (c.pc != 0x0016FEC8u) [[unlikely]] return; }
L_0016FEC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0016FECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FED4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 240u, depth + 1u); else { c.pc = 0x00166010u; return; } if (c.pc != 0x0016FED4u) [[unlikely]] return; }
L_0016FED4:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0016FEF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FEECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0016FEECu) [[unlikely]] return; }
L_0016FEEC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0016FEF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016FF10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FF20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0016FF3C; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0016FF40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FF3Cu); set32(c.r[4], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_001F(c, 136u, depth + 1u); else { c.pc = 0x0019D880u; return; } if (c.pc != 0x0016FF3Cu) [[unlikely]] return; }
L_0016FF3C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0016FF40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016FF50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0016FF74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FF74u); set32(c.r[4], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_001F(c, 138u, depth + 1u); else { c.pc = 0x0019D8F0u; return; } if (c.pc != 0x0016FF74u) [[unlikely]] return; }
L_0016FF74:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016FF80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 120u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FFA4u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001F(c, 139u, depth + 1u); else { c.pc = 0x0019D900u; return; } if (c.pc != 0x0016FFA4u) [[unlikely]] return; }
L_0016FFA4:
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016FFC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016FFF0; } }
    set32(c.r[4], c.r[5].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FFE8u); set32(c.r[5], ld32((c.r[5].w[0] + 116u)));  if (depth < kMaxDepth) unit_001F(c, 139u, depth + 1u); else { c.pc = 0x0019D900u; return; } if (c.pc != 0x0016FFE8u) [[unlikely]] return; }
L_0016FFE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0016FFF8; } }
L_0016FFF0:
    c.f[0] = 0u;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0016FFF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
}

}
