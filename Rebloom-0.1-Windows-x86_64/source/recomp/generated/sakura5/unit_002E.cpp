#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002E[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0,
    0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0,
    0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0,
    0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0,
    0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0,
    0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0,
    0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0,
    0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0,
    0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0,
    0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0,
    154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0,
    0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0,
    0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 194,
    0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0,
    0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0,
    0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0,
    240, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0,
    0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0,
    267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0,
    0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0,
    0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0,
    0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0,
    0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0,
    0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0,
    293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0,
    0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302,
    0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306,
    0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0,
    0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    320, 0, 321, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0,
    0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_002E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001D8000;
    case 2u: goto L_001D8004;
    case 3u: goto L_001D8040;
    case 4u: goto L_001D8054;
    case 5u: goto L_001D8098;
    case 6u: goto L_001D80C4;
    case 7u: goto L_001D80E8;
    case 8u: goto L_001D811C;
    case 9u: goto L_001D8144;
    case 10u: goto L_001D8158;
    case 11u: goto L_001D8160;
    case 12u: goto L_001D8184;
    case 13u: goto L_001D819C;
    case 14u: goto L_001D81D8;
    case 15u: goto L_001D81F4;
    case 16u: goto L_001D8204;
    case 17u: goto L_001D8210;
    case 18u: goto L_001D8228;
    case 19u: goto L_001D8248;
    case 20u: goto L_001D8250;
    case 21u: goto L_001D8270;
    case 22u: goto L_001D82B0;
    case 23u: goto L_001D82BC;
    case 24u: goto L_001D82D4;
    case 25u: goto L_001D82F4;
    case 26u: goto L_001D8320;
    case 27u: goto L_001D8330;
    case 28u: goto L_001D8340;
    case 29u: goto L_001D8370;
    case 30u: goto L_001D83A8;
    case 31u: goto L_001D83B8;
    case 32u: goto L_001D83E0;
    case 33u: goto L_001D83F8;
    case 34u: goto L_001D8430;
    case 35u: goto L_001D8464;
    case 36u: goto L_001D8474;
    case 37u: goto L_001D8490;
    case 38u: goto L_001D84A8;
    case 39u: goto L_001D84D0;
    case 40u: goto L_001D84F0;
    case 41u: goto L_001D8520;
    case 42u: goto L_001D855C;
    case 43u: goto L_001D857C;
    case 44u: goto L_001D85C0;
    case 45u: goto L_001D85E4;
    case 46u: goto L_001D860C;
    case 47u: goto L_001D8628;
    case 48u: goto L_001D8650;
    case 49u: goto L_001D8658;
    case 50u: goto L_001D8680;
    case 51u: goto L_001D86A0;
    case 52u: goto L_001D86D0;
    case 53u: goto L_001D86F4;
    case 54u: goto L_001D87B0;
    case 55u: goto L_001D87D0;
    case 56u: goto L_001D8840;
    case 57u: goto L_001D8864;
    case 58u: goto L_001D8880;
    case 59u: goto L_001D889C;
    case 60u: goto L_001D88F0;
    case 61u: goto L_001D8938;
    case 62u: goto L_001D895C;
    case 63u: goto L_001D8970;
    case 64u: goto L_001D898C;
    case 65u: goto L_001D89BC;
    case 66u: goto L_001D89E0;
    case 67u: goto L_001D89F4;
    case 68u: goto L_001D8A00;
    case 69u: goto L_001D8B90;
    case 70u: goto L_001D8BB4;
    case 71u: goto L_001D8BCC;
    case 72u: goto L_001D8BF8;
    case 73u: goto L_001D8C1C;
    case 74u: goto L_001D8C30;
    case 75u: goto L_001D8C48;
    case 76u: goto L_001D8C74;
    case 77u: goto L_001D8C98;
    case 78u: goto L_001D8CAC;
    case 79u: goto L_001D8CD0;
    case 80u: goto L_001D8CF4;
    case 81u: goto L_001D8D10;
    case 82u: goto L_001D8D2C;
    case 83u: goto L_001D8D88;
    case 84u: goto L_001D8DCC;
    case 85u: goto L_001D8DDC;
    case 86u: goto L_001D8DF8;
    case 87u: goto L_001D8ECC;
    case 88u: goto L_001D8F08;
    case 89u: goto L_001D8F2C;
    case 90u: goto L_001D8F40;
    case 91u: goto L_001D8F90;
    case 92u: goto L_001D8FC4;
    case 93u: goto L_001D8FEC;
    case 94u: goto L_001D8FF4;
    case 95u: goto L_001D900C;
    case 96u: goto L_001D9024;
    case 97u: goto L_001D902C;
    case 98u: goto L_001D90EC;
    case 99u: goto L_001D911C;
    case 100u: goto L_001D9140;
    case 101u: goto L_001D9160;
    case 102u: goto L_001D91B0;
    case 103u: goto L_001D91E4;
    case 104u: goto L_001D920C;
    case 105u: goto L_001D9214;
    case 106u: goto L_001D922C;
    case 107u: goto L_001D9244;
    case 108u: goto L_001D924C;
    case 109u: goto L_001D930C;
    case 110u: goto L_001D933C;
    case 111u: goto L_001D9360;
    case 112u: goto L_001D9380;
    case 113u: goto L_001D93D0;
    case 114u: goto L_001D9404;
    case 115u: goto L_001D942C;
    case 116u: goto L_001D9434;
    case 117u: goto L_001D944C;
    case 118u: goto L_001D9464;
    case 119u: goto L_001D946C;
    case 120u: goto L_001D952C;
    case 121u: goto L_001D955C;
    case 122u: goto L_001D9580;
    case 123u: goto L_001D95A0;
    case 124u: goto L_001D95F0;
    case 125u: goto L_001D9624;
    case 126u: goto L_001D964C;
    case 127u: goto L_001D9654;
    case 128u: goto L_001D966C;
    case 129u: goto L_001D9684;
    case 130u: goto L_001D968C;
    case 131u: goto L_001D9720;
    case 132u: goto L_001D9750;
    case 133u: goto L_001D9774;
    case 134u: goto L_001D9790;
    case 135u: goto L_001D97E8;
    case 136u: goto L_001D9828;
    case 137u: goto L_001D9924;
    case 138u: goto L_001D994C;
    case 139u: goto L_001D9954;
    case 140u: goto L_001D996C;
    case 141u: goto L_001D9984;
    case 142u: goto L_001D998C;
    case 143u: goto L_001D9A3C;
    case 144u: goto L_001D9A6C;
    case 145u: goto L_001D9A90;
    case 146u: goto L_001D9AB0;
    case 147u: goto L_001D9BC0;
    case 148u: goto L_001D9BE4;
    case 149u: goto L_001D9C08;
    case 150u: goto L_001D9C1C;
    case 151u: goto L_001D9C44;
    case 152u: goto L_001D9C50;
    case 153u: goto L_001D9C68;
    case 154u: goto L_001D9C80;
    case 155u: goto L_001D9C8C;
    case 156u: goto L_001D9CDC;
    case 157u: goto L_001D9CEC;
    case 158u: goto L_001D9D20;
    case 159u: goto L_001D9D44;
    case 160u: goto L_001D9D60;
    case 161u: goto L_001D9E70;
    case 162u: goto L_001D9E94;
    case 163u: goto L_001D9EB8;
    case 164u: goto L_001D9F1C;
    case 165u: goto L_001D9F78;
    case 166u: goto L_001D9FA0;
    case 167u: goto L_001D9FAC;
    case 168u: goto L_001D9FC4;
    case 169u: goto L_001D9FDC;
    case 170u: goto L_001D9FE8;
    case 171u: goto L_001DA02C;
    case 172u: goto L_001DA040;
    case 173u: goto L_001DA050;
    case 174u: goto L_001DA084;
    case 175u: goto L_001DA0A8;
    case 176u: goto L_001DA0D0;
    case 177u: goto L_001DA1B4;
    case 178u: goto L_001DA1D8;
    case 179u: goto L_001DA1FC;
    case 180u: goto L_001DA210;
    case 181u: goto L_001DA238;
    case 182u: goto L_001DA244;
    case 183u: goto L_001DA25C;
    case 184u: goto L_001DA274;
    case 185u: goto L_001DA28C;
    case 186u: goto L_001DA2B0;
    case 187u: goto L_001DA2E0;
    case 188u: goto L_001DA304;
    case 189u: goto L_001DA330;
    case 190u: goto L_001DA3A8;
    case 191u: goto L_001DA3B8;
    case 192u: goto L_001DA3DC;
    case 193u: goto L_001DA3E4;
    case 194u: goto L_001DA3FC;
    case 195u: goto L_001DA414;
    case 196u: goto L_001DA41C;
    case 197u: goto L_001DA42C;
    case 198u: goto L_001DA43C;
    case 199u: goto L_001DA44C;
    case 200u: goto L_001DA480;
    case 201u: goto L_001DA4A4;
    case 202u: goto L_001DA4D0;
    case 203u: goto L_001DA4E8;
    case 204u: goto L_001DA52C;
    case 205u: goto L_001DA540;
    case 206u: goto L_001DA564;
    case 207u: goto L_001DA588;
    case 208u: goto L_001DA5EC;
    case 209u: goto L_001DA618;
    case 210u: goto L_001DA63C;
    case 211u: goto L_001DA644;
    case 212u: goto L_001DA670;
    case 213u: goto L_001DA694;
    case 214u: goto L_001DA69C;
    case 215u: goto L_001DA6C4;
    case 216u: goto L_001DA6E8;
    case 217u: goto L_001DA6F0;
    case 218u: goto L_001DA71C;
    case 219u: goto L_001DA740;
    case 220u: goto L_001DA748;
    case 221u: goto L_001DA774;
    case 222u: goto L_001DA798;
    case 223u: goto L_001DA7A0;
    case 224u: goto L_001DA7CC;
    case 225u: goto L_001DA7F0;
    case 226u: goto L_001DA7F8;
    case 227u: goto L_001DA824;
    case 228u: goto L_001DA848;
    case 229u: goto L_001DA850;
    case 230u: goto L_001DA8B4;
    case 231u: goto L_001DA8D8;
    case 232u: goto L_001DA8E0;
    case 233u: goto L_001DA93C;
    case 234u: goto L_001DA960;
    case 235u: goto L_001DA968;
    case 236u: goto L_001DA9CC;
    case 237u: goto L_001DA9F0;
    case 238u: goto L_001DA9F8;
    case 239u: goto L_001DAA5C;
    case 240u: goto L_001DAA80;
    case 241u: goto L_001DAA88;
    case 242u: goto L_001DAAEC;
    case 243u: goto L_001DAB10;
    case 244u: goto L_001DAB18;
    case 245u: goto L_001DAB74;
    case 246u: goto L_001DAB98;
    case 247u: goto L_001DABA0;
    case 248u: goto L_001DAC04;
    case 249u: goto L_001DAC28;
    case 250u: goto L_001DAC30;
    case 251u: goto L_001DAC94;
    case 252u: goto L_001DACB8;
    case 253u: goto L_001DACC0;
    case 254u: goto L_001DAD24;
    case 255u: goto L_001DAD48;
    case 256u: goto L_001DAD50;
    case 257u: goto L_001DADAC;
    case 258u: goto L_001DADD0;
    case 259u: goto L_001DADD8;
    case 260u: goto L_001DAE3C;
    case 261u: goto L_001DAE60;
    case 262u: goto L_001DAE68;
    case 263u: goto L_001DAECC;
    case 264u: goto L_001DAEF0;
    case 265u: goto L_001DAEF8;
    case 266u: goto L_001DAF5C;
    case 267u: goto L_001DAF80;
    case 268u: goto L_001DAF88;
    case 269u: goto L_001DAFE4;
    case 270u: goto L_001DB008;
    case 271u: goto L_001DB010;
    case 272u: goto L_001DB074;
    case 273u: goto L_001DB098;
    case 274u: goto L_001DB0A0;
    case 275u: goto L_001DB104;
    case 276u: goto L_001DB128;
    case 277u: goto L_001DB13C;
    case 278u: goto L_001DB160;
    case 279u: goto L_001DB184;
    case 280u: goto L_001DB1A0;
    case 281u: goto L_001DB1BC;
    case 282u: goto L_001DB21C;
    case 283u: goto L_001DB25C;
    case 284u: goto L_001DB2A4;
    case 285u: goto L_001DB3EC;
    case 286u: goto L_001DB410;
    case 287u: goto L_001DB434;
    case 288u: goto L_001DB484;
    case 289u: goto L_001DB5E0;
    case 290u: goto L_001DB604;
    case 291u: goto L_001DB628;
    case 292u: goto L_001DB66C;
    case 293u: goto L_001DB680;
    case 294u: goto L_001DB698;
    case 295u: goto L_001DB6C8;
    case 296u: goto L_001DB6EC;
    case 297u: goto L_001DB710;
    case 298u: goto L_001DB720;
    case 299u: goto L_001DB73C;
    case 300u: goto L_001DB794;
    case 301u: goto L_001DB7D8;
    case 302u: goto L_001DB7FC;
    case 303u: goto L_001DB810;
    case 304u: goto L_001DB828;
    case 305u: goto L_001DB858;
    case 306u: goto L_001DB87C;
    case 307u: goto L_001DB8A0;
    case 308u: goto L_001DB8B0;
    case 309u: goto L_001DB8C8;
    case 310u: goto L_001DB970;
    case 311u: goto L_001DB994;
    case 312u: goto L_001DB9B8;
    case 313u: goto L_001DB9D0;
    case 314u: goto L_001DB9E8;
    case 315u: goto L_001DBA40;
    case 316u: goto L_001DBA64;
    case 317u: goto L_001DBA88;
    case 318u: goto L_001DBAA0;
    case 319u: goto L_001DBACC;
    case 320u: goto L_001DBB00;
    case 321u: goto L_001DBB08;
    case 322u: goto L_001DBB10;
    case 323u: goto L_001DBB28;
    case 324u: goto L_001DBB6C;
    case 325u: goto L_001DBB7C;
    case 326u: goto L_001DBBBC;
    case 327u: goto L_001DBBEC;
    case 328u: goto L_001DBC10;
    case 329u: goto L_001DBC40;
    case 330u: goto L_001DBC6C;
    case 331u: goto L_001DBCA0;
    case 332u: goto L_001DBCA8;
    case 333u: goto L_001DBCB0;
    case 334u: goto L_001DBCC8;
    case 335u: goto L_001DBD0C;
    case 336u: goto L_001DBD1C;
    case 337u: goto L_001DBD5C;
    case 338u: goto L_001DBD8C;
    case 339u: goto L_001DBDB0;
    case 340u: goto L_001DBDE0;
    case 341u: goto L_001DBE08;
    case 342u: goto L_001DBE3C;
    case 343u: goto L_001DBE44;
    case 344u: goto L_001DBE4C;
    case 345u: goto L_001DBE60;
    case 346u: goto L_001DBF30;
    case 347u: goto L_001DBF40;
    case 348u: goto L_001DBF80;
    case 349u: goto L_001DBFB0;
    case 350u: goto L_001DBFD4;
    default: bad_entry(c, 0x001D8000u); return;
    }
L_001D8000:
    set32(c.r[4], 0u + 88u);
    c.budget -= 1;
L_001D8004:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[19].w[0] + 228u)));  goto L_001D80BC; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  goto L_001D8020; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001D83BC; } }
L_001D8020:
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[19].w[0] + 212u)));  goto L_001D80A4; }
    set32(c.r[2], ld32((c.r[19].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D8048; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8040u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001D8040u) [[unlikely]] return; }
L_001D8040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D83B8; } }
L_001D8048:
    set32(c.r[6], ld32((c.r[19].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D80A4; } }
L_001D8054:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[6], ld32((c.r[6].w[0] + 16u)));  goto L_001D80A4; }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_001D80A0; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 88u)));  goto L_001D80B0; }
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8098u); st32((c.r[6].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001D8098u) [[unlikely]] return; }
L_001D8098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D83B8; } }
L_001D80A0:
    set32(c.r[6], ld32((c.r[6].w[0] + 16u)));
    c.budget -= 1;
L_001D80A4:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[2], ld32((c.r[6].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8054u | kUnwind; return; } goto L_001D8054; }
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    c.budget -= 1;
L_001D80B0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 228u)));
    c.budget -= 3;
L_001D80BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_001D8124; } }
L_001D80C4:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 232u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_001D8124; }
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 12u);  if (t) { goto L_001D80FC; } }
L_001D80E8:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001D8108; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001D80FC:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[6].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D80E8u | kUnwind; return; } goto L_001D80E8; }
L_001D8108:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_001D8130; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D811Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001D811Cu) [[unlikely]] return; }
L_001D811C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D83B8; } }
L_001D8124:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D80C4u | kUnwind; return; } goto L_001D80C4; }
L_001D8130:
    c.budget -= 2;
    if (c.r[7].d[0] != c.r[5].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 88u)));  goto L_001D814C; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8144u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001D8144u) [[unlikely]] return; }
L_001D8144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D83B8; } }
L_001D814C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], 0u + 88u);
    c.budget -= 3;
L_001D8158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8160u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D8160u) [[unlikely]] return; }
L_001D8160:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 1336u), c.r[4].w[0]);  goto L_001D818C; }
    set32(c.r[8], ld32((c.r[19].w[0] + 156u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[7], ld32((c.r[19].w[0] + 152u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8184u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0029(c, 365u, depth + 1u); else { c.pc = 0x001C63E0u; return; } if (c.pc != 0x001D8184u) [[unlikely]] return; }
L_001D8184:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[19].w[0] + 1336u), c.r[4].w[0]);
    c.budget -= 2;
L_001D818C:
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 1336u)));
    c.budget -= 4;
L_001D819C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D83B8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D81C8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D820C; } }
L_001D81C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D81D8u); set32(c.r[5], c.r[5].w[0] + 18630u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001D81D8u) [[unlikely]] return; }
L_001D81D8:
    set32(c.r[4], ld32((c.r[19].w[0] + 1336u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001D81FC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D81F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D81F4u) [[unlikely]] return; }
L_001D81F4:
    st32((c.r[19].w[0] + 1336u), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_001D81FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8204u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001D8204u) [[unlikely]] return; }
L_001D8204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D83B8; } }
L_001D820C:
    set32(c.r[3], 0u + 10u);
    c.budget -= 1;
L_001D8210:
    st32((c.r[19].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 1336u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 88u)));  goto L_001D8364; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8228u);  if (depth < kMaxDepth) unit_0029(c, 425u, depth + 1u); else { c.pc = 0x001C7020u; return; } if (c.pc != 0x001D8228u) [[unlikely]] return; }
L_001D8228:
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4D4E0000u);
    c.r[5].d[0] = c.r[3].d[0] | 17217ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8248u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x001D8248u) [[unlikely]] return; }
L_001D8248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001D82F4; } }
L_001D8250:
    set32(c.r[8], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[8].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[17].d[0]) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_001D82E0; }
    set32(c.r[3], ld32((c.r[8].w[0] + 8u)));
    set32(c.r[4], c.r[8].w[0] + 12u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001D8284; } }
L_001D8270:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001D8290; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001D8284:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[6].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8270u | kUnwind; return; } goto L_001D8270; }
L_001D8290:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001D82FC; } }
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D440000u);
    c.r[5].d[0] = c.r[2].d[0] | 17223ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D82B0u); set32(c.r[4], c.r[8].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0038(c, 285u, depth + 1u); else { c.pc = 0x00202DF0u; return; } if (c.pc != 0x001D82B0u) [[unlikely]] return; }
L_001D82B0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D82BCu); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D82BCu) [[unlikely]] return; }
L_001D82BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = c.r[2].d[0] + 0ull;  goto L_001D82FC; }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D82D4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 179u, depth + 1u); else { c.pc = 0x00205F60u; return; } if (c.pc != 0x001D82D4u) [[unlikely]] return; }
L_001D82D4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D82FC; } }
L_001D82E0:
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D4E0000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D82F4u); c.r[5].d[0] = c.r[2].d[0] | 17217ull;  if (depth < kMaxDepth) unit_0038(c, 285u, depth + 1u); else { c.pc = 0x00202DF0u; return; } if (c.pc != 0x001D82F4u) [[unlikely]] return; }
L_001D82F4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8250u | kUnwind; return; } goto L_001D8250; }
L_001D82FC:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[4], 0u + 20u);  goto L_001D8338; }
    set32(c.r[4], ld32((c.r[19].w[0] + 1336u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001D8328; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D8320u) [[unlikely]] return; }
L_001D8320:
    st32((c.r[19].w[0] + 1336u), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_001D8328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8330u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001D8330u) [[unlikely]] return; }
L_001D8330:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D83B8; } }
L_001D8338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8340u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001D8340u) [[unlikely]] return; }
L_001D8340:
    st32((c.r[2].w[0]), c.r[17].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    c.budget -= 9;
L_001D8364:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001D83B8; } }
L_001D8370:
    set32(c.r[4], ld32((c.r[19].w[0] + 212u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D83B8; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 1336u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001D83B0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D83A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D83A8u) [[unlikely]] return; }
L_001D83A8:
    st32((c.r[19].w[0] + 1336u), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_001D83B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D83B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001D83B8u) [[unlikely]] return; }
L_001D83B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001D83BC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001D83E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 266u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D83F8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x001D83F8u) [[unlikely]] return; }
L_001D83F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 14192u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 148u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 152u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D8430:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D84A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 14192u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 148u)));  if (t) { goto L_001D8478; } }
L_001D8464:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8474u); set32(c.r[16], ld32((c.r[4].w[0] + 1356u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D8474u) [[unlikely]] return; }
L_001D8474:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001D8478:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8464u | kUnwind; return; } goto L_001D8464; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8490u); st32((c.r[18].w[0] + 148u), 0u);  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x001D8490u) [[unlikely]] return; }
L_001D8490:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_001D84AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D84A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001D84A8u) [[unlikely]] return; }
L_001D84A8:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001D84AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D84D0:
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  c.pc = t; return; }
L_001D84F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001D8544; } }
L_001D8520:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 1356u)));  goto L_001D8544; }
    set32(c.r[3], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_001D8540; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_001D854C; } }
L_001D8540:
    set32(c.r[2], ld32((c.r[2].w[0] + 1356u)));
    c.budget -= 1;
L_001D8544:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 148u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8520u | kUnwind; return; } goto L_001D8520; }
L_001D854C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 1352u)));  goto L_001D8598; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D855Cu); set32(c.r[4], 0u + 1360u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D855Cu) [[unlikely]] return; }
L_001D855C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[2].w[0] + 148u), c.r[18].w[0]);  goto L_001D8580; }
    set32(c.r[6], ld32((c.r[19].w[0] + 152u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D857Cu); st32((c.r[19].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002D(c, 273u, depth + 1u); else { c.pc = 0x001D7070u; return; } if (c.pc != 0x001D857Cu) [[unlikely]] return; }
L_001D857C:
    st32((c.r[2].w[0] + 148u), c.r[18].w[0]);
    c.budget -= 1;
L_001D8580:
    st32((c.r[2].w[0] + 152u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 156u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 148u)));
    st32((c.r[2].w[0] + 1356u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 1352u)));
    c.budget -= 6;
L_001D8598:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 1352u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001D85C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 1352u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[5].w[0] + 1352u), c.r[3].w[0]);  if (t) { goto L_001D863C; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001D8634; } }
L_001D85E4:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[5].d[0]) { c.r[3].d[0] = c.r[6].d[0] + 0ull;  goto L_001D8630; }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[6].w[0] + 1356u)));  goto L_001D8614; }
    set32(c.r[2], ld32((c.r[6].w[0] + 1356u)));
    st32((c.r[4].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D860Cu); c.r[4].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D860Cu) [[unlikely]] return; }
L_001D860C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D8628; } }
L_001D8614:
    st32((c.r[3].w[0] + 1356u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8628u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D8628u) [[unlikely]] return; }
L_001D8628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001D8640; } }
L_001D8630:
    set32(c.r[6], ld32((c.r[6].w[0] + 1356u)));
    c.budget -= 1;
L_001D8634:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D85E4u | kUnwind; return; } goto L_001D85E4; } }
L_001D863C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001D8640:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001D8650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 148u)));  if (t) { goto L_001D8668; } }
L_001D8658:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 1356u)));  goto L_001D8668; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001D8674; } }
L_001D8668:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8658u | kUnwind; return; } goto L_001D8658; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D8674:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D8680:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 261u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D86A0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001D86A0u) [[unlikely]] return; }
L_001D86A0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 36u)));  goto L_001D8700; }
    st32((c.r[29].w[0] + 100u), 0u);
    set32(c.r[4], c.r[18].w[0] + 668u);
    st32((c.r[29].w[0] + 96u), 0u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 112u), 0u);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D86D0u); st16((c.r[18].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001D86D0u) [[unlikely]] return; }
L_001D86D0:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001D8868; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001D8864; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D86F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D86F4u) [[unlikely]] return; }
L_001D86F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D8864; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_001D8700:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001D8714; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[18].w[0] + 20u)));  if (t) { goto L_001D8734; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D8714:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001D8734; }
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 56u)));  if (t) { goto L_001D8738; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D8734:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 1;
L_001D8738:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001D874C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[18].w[0] + 40u)));  if (t) { goto L_001D876C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D874C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001D876C; }
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 76u)));  if (t) { goto L_001D8770; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D876C:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_001D8770:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001D8784; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[18].w[0] + 60u)));  if (t) { goto L_001D87A4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D8784:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_001D87A4; }
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D87A8; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D87A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D87A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D87B0u);  if (depth < kMaxDepth) unit_002A(c, 320u, depth + 1u); else { c.pc = 0x001CAA60u; return; } if (c.pc != 0x001D87B0u) [[unlikely]] return; }
L_001D87B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 64u), c.r[16].w[0]);  goto L_001D8820; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D87D0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 329u, depth + 1u); else { c.pc = 0x001CABB0u; return; } if (c.pc != 0x001D87D0u) [[unlikely]] return; }
L_001D87D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D881C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001D87F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 80u)));  if (t) { goto L_001D8810; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001D87F0:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_001D8810; }
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] << 56;  if (t) { goto L_001D8814; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D8810:
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.budget -= 1;
L_001D8814:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st32((c.r[2].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 2;
L_001D881C:
    st32((c.r[29].w[0] + 64u), c.r[16].w[0]);
    c.budget -= 1;
L_001D8820:
    set32(c.r[4], c.r[18].w[0] + 668u);
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8840u); st16((c.r[18].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001D8840u) [[unlikely]] return; }
L_001D8840:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D8864; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001D8864; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8864u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D8864u) [[unlikely]] return; }
L_001D8864:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001D8868:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001D8880:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D889Cu); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001D889Cu) [[unlikely]] return; }
L_001D889C:
    set32(c.r[4], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D88FC; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 36u)));  goto L_001D88BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001D8960; } }
L_001D88BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D88CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_001D88E0; } }
L_001D88CC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001D88E0; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_001D88E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D88F0u); c.r[5].d[0] = c.r[2].d[0] | 4100ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x001D88F0u) [[unlikely]] return; }
L_001D88F0:
    set32(c.r[3], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 3;
L_001D88FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D895C; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 668u);
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8938u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001D8938u) [[unlikely]] return; }
L_001D8938:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D895C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001D895C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D895Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D895Cu) [[unlikely]] return; }
L_001D895C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001D8960:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001D8970:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D898Cu); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001D898Cu) [[unlikely]] return; }
L_001D898C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001D89EC; }
    st32((c.r[29].w[0] + 116u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    st32((c.r[29].w[0] + 112u), 0u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D89BCu); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001D89BCu) [[unlikely]] return; }
L_001D89BC:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001D8C20; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001D8C1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D89E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D89E0u) [[unlikely]] return; }
L_001D89E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D8C1C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001D89EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D89F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001D89F4u) [[unlikely]] return; }
L_001D89F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D8BCC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_001D8A00:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 148u)));  if (t) { goto L_001D8A10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_001D8A34; } }
L_001D8A10:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_001D8A34; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D8A34; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D8A34:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001D8BC0; }
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 152u)));  if (t) { goto L_001D8A50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 40u)));  if (t) { goto L_001D8A74; } }
L_001D8A50:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_001D8A74; }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D8A74; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D8A74:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001D8BBC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 156u)));  if (t) { goto L_001D8A90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 60u)));  if (t) { goto L_001D8AB4; } }
L_001D8A90:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_001D8AB4; }
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D8AB4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D8AB4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001D8BBC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 160u)));  goto L_001D8B6C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001D8AE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 80u)));  if (t) { goto L_001D8B04; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001D8AE4:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_001D8B04; }
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D8B04; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D8B04:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D8B1C; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D8B68; } }
L_001D8B1C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001D8B30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 80u)));  if (t) { goto L_001D8B50; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001D8B30:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_001D8B50; }
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D8B50; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D8B50:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D8BBC; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D8BBC; } }
L_001D8B68:
    set32(c.r[2], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 1;
L_001D8B6C:
    set32(c.r[4], c.r[17].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8B90u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001D8B90u) [[unlikely]] return; }
L_001D8B90:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D8C1C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001D8C1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8BB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D8BB4u) [[unlikely]] return; }
L_001D8BB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D8C1C; } }
L_001D8BBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001D8BC0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8BCCu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001D8BCCu) [[unlikely]] return; }
L_001D8BCC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8A00u | kUnwind; return; } goto L_001D8A00; }
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8BF8u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001D8BF8u) [[unlikely]] return; }
L_001D8BF8:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D8C1C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001D8C1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8C1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D8C1Cu) [[unlikely]] return; }
L_001D8C1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001D8C20:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001D8C30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8C48u); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001D8C48u) [[unlikely]] return; }
L_001D8C48:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_001D8CA4; }
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8C74u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001D8C74u) [[unlikely]] return; }
L_001D8C74:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001D8CF8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001D8CF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8C98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D8C98u) [[unlikely]] return; }
L_001D8C98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D8CF4; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D8CA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8CACu);  if (depth < kMaxDepth) unit_002A(c, 341u, depth + 1u); else { c.pc = 0x001CAD50u; return; } if (c.pc != 0x001D8CACu) [[unlikely]] return; }
L_001D8CAC:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8CD0u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001D8CD0u) [[unlikely]] return; }
L_001D8CD0:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D8CF4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001D8CF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8CF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D8CF4u) [[unlikely]] return; }
L_001D8CF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001D8CF8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001D8D10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8D2Cu); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001D8D2Cu) [[unlikely]] return; }
L_001D8D2C:
    set32(c.r[4], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D8E08; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_001D8D4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001D8F30; } }
L_001D8D4C:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_001D8D90; }
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 44u), 0u);  goto L_001D8D8C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001D8D88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8D88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D8D88u) [[unlikely]] return; }
L_001D8D88:
    st32((c.r[17].w[0] + 44u), 0u);
    c.budget -= 1;
L_001D8D8C:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_001D8D90:
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001D8DD4; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 76u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 64u), 0u);  goto L_001D8DD0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001D8DCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8DCCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D8DCCu) [[unlikely]] return; }
L_001D8DCC:
    st32((c.r[17].w[0] + 64u), 0u);
    c.budget -= 1;
L_001D8DD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001D8DD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8DDCu);  if (depth < kMaxDepth) unit_002A(c, 341u, depth + 1u); else { c.pc = 0x001CAD50u; return; } if (c.pc != 0x001D8DDCu) [[unlikely]] return; }
L_001D8DDC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_001D8E0C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8DF8u); c.r[5].d[0] = c.r[2].d[0] | 4100ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x001D8DF8u) [[unlikely]] return; }
L_001D8DF8:
    set32(c.r[3], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 704u), c.r[3].w[0]);  if (t) { goto L_001D8F2C; } }
L_001D8E08:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_001D8E0C:
    st32((c.r[17].w[0] + 704u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 660u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 1616u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D8F2C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D8E40; } }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001D8E54; } }
L_001D8E40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_001D8E50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0] + 20u));  if (t) { goto L_001D8E54; } }
L_001D8E50:
    c.f[0] = 0u;
    c.budget -= 1;
L_001D8E54:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_001D8E68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 40u)));  if (t) { goto L_001D8E80; } }
L_001D8E68:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001D8E80; }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_001D8E80:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001D8E94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[17].w[0] + 60u)));  if (t) { goto L_001D8EA8; } }
L_001D8E94:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[8].d[0] = 0ull + 0ull;  goto L_001D8EA8; }
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[0]);
    c.budget -= 3;
L_001D8EA8:
    set32(c.r[10], ld32((c.r[4].w[0] + 20u)));
    c.r[7].d[0] = c.r[5].d[0] << 32;
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    set32(c.r[9], 0u - 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8ECCu); c.r[5].d[0] = c.r[2].d[0] | 4098ull;  if (depth < kMaxDepth) unit_002B(c, 415u, depth + 1u); else { c.pc = 0x001CFBB0u; return; } if (c.pc != 0x001D8ECCu) [[unlikely]] return; }
L_001D8ECC:
    set32(c.r[3], ld32((c.r[17].w[0] + 660u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], ld32((c.r[3].w[0] + 1616u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[6].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8F08u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001D8F08u) [[unlikely]] return; }
L_001D8F08:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D8F2C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001D8F2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8F2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D8F2Cu) [[unlikely]] return; }
L_001D8F2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001D8F30:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001D8F40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D8F94; } }
    st32((c.r[18].w[0] + 80u), 0u);
    st32((c.r[18].w[0] + 96u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 84u), 0u);  goto L_001D8F94; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001D8F90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8F90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D8F90u) [[unlikely]] return; }
L_001D8F90:
    st32((c.r[18].w[0] + 84u), 0u);
    c.budget -= 1;
L_001D8F94:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001D8FA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 20u)));  if (t) { goto L_001D8FBC; } }
L_001D8FA8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_001D8FBC; }
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_001D8FBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8FC4u); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001D8FC4u) [[unlikely]] return; }
L_001D8FC4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 660u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1616u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001D901C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8FECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001D8FECu) [[unlikely]] return; }
L_001D8FEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D9010; } }
L_001D8FF4:
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001D9144; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D900Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001D900Cu) [[unlikely]] return; }
L_001D900C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D9010:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8FF4u | kUnwind; return; } goto L_001D8FF4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D901C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9024u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001D9024u) [[unlikely]] return; }
L_001D9024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D90EC; } }
L_001D902C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001D903C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 80u)));  if (t) { goto L_001D9050; } }
L_001D903C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_001D9050; }
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_001D9050:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[8], ld32((c.r[2].w[0] + 188u)));  goto L_001D905C; }
    set32(c.r[8], ld32((c.r[2].w[0] + 184u)));
    c.budget -= 1;
L_001D905C:
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001D9074; }
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001D9088; } }
L_001D9074:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D9084; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[18].w[0] + 40u));  if (t) { goto L_001D9088; } }
L_001D9084:
    c.f[0] = 0u;
    c.budget -= 1;
L_001D9088:
    st32((c.r[8].w[0] + 208u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[8].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[8].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 8;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001D90B4; }
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001D90C8; } }
L_001D90B4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D90C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[18].w[0] + 60u));  if (t) { goto L_001D90C8; } }
L_001D90C4:
    c.f[0] = 0u;
    c.budget -= 1;
L_001D90C8:
    st32((c.r[8].w[0] + 212u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[7], ld32((c.r[8].w[0] + 292u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D90ECu); st32((c.r[8].w[0] + 292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001D90ECu) [[unlikely]] return; }
L_001D90EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D902Cu | kUnwind; return; } goto L_001D902C; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 668u);
    st32((c.r[29].w[0] + 80u), 0u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D911Cu); st16((c.r[18].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001D911Cu) [[unlikely]] return; }
L_001D911C:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D9140; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001D9140; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9140u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D9140u) [[unlikely]] return; }
L_001D9140:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001D9144:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001D9160:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D91B4; } }
    st32((c.r[18].w[0] + 80u), 0u);
    st32((c.r[18].w[0] + 96u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 84u), 0u);  goto L_001D91B4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001D91B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D91B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D91B0u) [[unlikely]] return; }
L_001D91B0:
    st32((c.r[18].w[0] + 84u), 0u);
    c.budget -= 1;
L_001D91B4:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001D91C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 20u)));  if (t) { goto L_001D91DC; } }
L_001D91C8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_001D91DC; }
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_001D91DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D91E4u); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001D91E4u) [[unlikely]] return; }
L_001D91E4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 660u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1616u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001D923C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D920Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001D920Cu) [[unlikely]] return; }
L_001D920C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D9230; } }
L_001D9214:
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001D9364; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D922Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001D922Cu) [[unlikely]] return; }
L_001D922C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D9230:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9214u | kUnwind; return; } goto L_001D9214; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D923C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9244u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001D9244u) [[unlikely]] return; }
L_001D9244:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D930C; } }
L_001D924C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001D925C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 80u)));  if (t) { goto L_001D9270; } }
L_001D925C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_001D9270; }
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_001D9270:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[8], ld32((c.r[2].w[0] + 188u)));  goto L_001D927C; }
    set32(c.r[8], ld32((c.r[2].w[0] + 184u)));
    c.budget -= 1;
L_001D927C:
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001D9294; }
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001D92A8; } }
L_001D9294:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D92A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[18].w[0] + 40u));  if (t) { goto L_001D92A8; } }
L_001D92A4:
    c.f[0] = 0u;
    c.budget -= 1;
L_001D92A8:
    st32((c.r[8].w[0] + 224u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[8].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[8].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 8;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001D92D4; }
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001D92E8; } }
L_001D92D4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D92E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[18].w[0] + 60u));  if (t) { goto L_001D92E8; } }
L_001D92E4:
    c.f[0] = 0u;
    c.budget -= 1;
L_001D92E8:
    st32((c.r[8].w[0] + 228u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[7], ld32((c.r[8].w[0] + 292u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D930Cu); st32((c.r[8].w[0] + 292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001D930Cu) [[unlikely]] return; }
L_001D930C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D924Cu | kUnwind; return; } goto L_001D924C; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 668u);
    st32((c.r[29].w[0] + 80u), 0u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D933Cu); st16((c.r[18].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001D933Cu) [[unlikely]] return; }
L_001D933C:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D9360; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001D9360; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9360u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D9360u) [[unlikely]] return; }
L_001D9360:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001D9364:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001D9380:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D93D4; } }
    st32((c.r[18].w[0] + 80u), 0u);
    st32((c.r[18].w[0] + 96u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 84u), 0u);  goto L_001D93D4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001D93D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D93D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D93D0u) [[unlikely]] return; }
L_001D93D0:
    st32((c.r[18].w[0] + 84u), 0u);
    c.budget -= 1;
L_001D93D4:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001D93E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 20u)));  if (t) { goto L_001D93FC; } }
L_001D93E8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_001D93FC; }
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_001D93FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9404u); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001D9404u) [[unlikely]] return; }
L_001D9404:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 660u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1616u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001D945C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D942Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001D942Cu) [[unlikely]] return; }
L_001D942C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D9450; } }
L_001D9434:
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001D9584; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D944Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001D944Cu) [[unlikely]] return; }
L_001D944C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D9450:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9434u | kUnwind; return; } goto L_001D9434; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D945C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9464u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001D9464u) [[unlikely]] return; }
L_001D9464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D952C; } }
L_001D946C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001D947C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 80u)));  if (t) { goto L_001D9490; } }
L_001D947C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_001D9490; }
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_001D9490:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[8], ld32((c.r[2].w[0] + 188u)));  goto L_001D949C; }
    set32(c.r[8], ld32((c.r[2].w[0] + 184u)));
    c.budget -= 1;
L_001D949C:
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001D94B4; }
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001D94C8; } }
L_001D94B4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D94C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[18].w[0] + 40u));  if (t) { goto L_001D94C8; } }
L_001D94C4:
    c.f[0] = 0u;
    c.budget -= 1;
L_001D94C8:
    st32((c.r[8].w[0] + 240u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[8].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[8].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 8;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001D94F4; }
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001D9508; } }
L_001D94F4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D9504; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[18].w[0] + 60u));  if (t) { goto L_001D9508; } }
L_001D9504:
    c.f[0] = 0u;
    c.budget -= 1;
L_001D9508:
    st32((c.r[8].w[0] + 244u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[7], ld32((c.r[8].w[0] + 292u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D952Cu); st32((c.r[8].w[0] + 292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001D952Cu) [[unlikely]] return; }
L_001D952C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D946Cu | kUnwind; return; } goto L_001D946C; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 668u);
    st32((c.r[29].w[0] + 80u), 0u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D955Cu); st16((c.r[18].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001D955Cu) [[unlikely]] return; }
L_001D955C:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D9580; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001D9580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9580u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D9580u) [[unlikely]] return; }
L_001D9580:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001D9584:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001D95A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D95F4; } }
    st32((c.r[18].w[0] + 60u), 0u);
    st32((c.r[18].w[0] + 76u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 64u), 0u);  goto L_001D95F4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001D95F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D95F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D95F0u) [[unlikely]] return; }
L_001D95F0:
    st32((c.r[18].w[0] + 64u), 0u);
    c.budget -= 1;
L_001D95F4:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001D9608; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 20u)));  if (t) { goto L_001D961C; } }
L_001D9608:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_001D961C; }
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_001D961C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9624u); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001D9624u) [[unlikely]] return; }
L_001D9624:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 660u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1616u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001D967C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D964Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001D964Cu) [[unlikely]] return; }
L_001D964C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D9670; } }
L_001D9654:
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001D9778; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D966Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001D966Cu) [[unlikely]] return; }
L_001D966C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D9670:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9654u | kUnwind; return; } goto L_001D9654; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D967C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9684u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001D9684u) [[unlikely]] return; }
L_001D9684:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D9720; } }
L_001D968C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001D969C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 60u)));  if (t) { goto L_001D96B0; } }
L_001D969C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_001D96B0; }
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_001D96B0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[7], ld32((c.r[2].w[0] + 188u)));  goto L_001D96BC; }
    set32(c.r[7], ld32((c.r[2].w[0] + 184u)));
    c.budget -= 1;
L_001D96BC:
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001D96D4; }
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001D96E8; } }
L_001D96D4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D96E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[18].w[0] + 40u));  if (t) { goto L_001D96E8; } }
L_001D96E4:
    c.f[1] = 0u;
    c.budget -= 1;
L_001D96E8:
    c.f[0] = ld32((c.r[28].w[0] - 32688u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[7].w[0] + 264u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9720u); st32((c.r[7].w[0] + 292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001D9720u) [[unlikely]] return; }
L_001D9720:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D968Cu | kUnwind; return; } goto L_001D968C; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 668u);
    st32((c.r[29].w[0] + 80u), 0u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9750u); st16((c.r[18].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001D9750u) [[unlikely]] return; }
L_001D9750:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D9774; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001D9774; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9774u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D9774u) [[unlikely]] return; }
L_001D9774:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001D9778:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001D9790:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D97EC; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[19].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 136u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 124u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 124u), 0u);  goto L_001D97EC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001D97E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D97E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D97E8u) [[unlikely]] return; }
L_001D97E8:
    st32((c.r[19].w[0] + 124u), 0u);
    c.budget -= 1;
L_001D97EC:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 36u)));  goto L_001D9830; }
    st32((c.r[19].w[0] + 140u), 0u);
    st32((c.r[19].w[0] + 156u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 144u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 144u), 0u);  goto L_001D982C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001D9828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9828u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D9828u) [[unlikely]] return; }
L_001D9828:
    st32((c.r[19].w[0] + 144u), 0u);
    c.budget -= 1;
L_001D982C:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 1;
L_001D9830:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001D9840; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_001D9854; } }
L_001D9840:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_001D9854; }
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_001D9854:
    set32(c.r[3], ld32((c.r[19].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001D9868; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[19].w[0] + 60u)));  if (t) { goto L_001D987C; } }
L_001D9868:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001D987C; }
    c.f[0] = ld32((c.r[19].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_001D987C:
    set32(c.r[3], ld32((c.r[19].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001D9890; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[19].w[0] + 80u)));  if (t) { goto L_001D98A4; } }
L_001D9890:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001D98A4; }
    c.f[0] = ld32((c.r[19].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_001D98A4:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001D98B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 40u)));  if (t) { goto L_001D98CC; } }
L_001D98B8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_001D98CC; }
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 3;
L_001D98CC:
    set32(c.r[3], ld32((c.r[19].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001D98E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 100u)));  if (t) { goto L_001D98F4; } }
L_001D98E0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001D98F4; }
    c.f[0] = ld32((c.r[19].w[0] + 100u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_001D98F4:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 24);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[4].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[4], 0u + 261u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9924u); c.r[18].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001D9924u) [[unlikely]] return; }
L_001D9924:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 660u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1616u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001D997C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D994Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001D994Cu) [[unlikely]] return; }
L_001D994C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D9970; } }
L_001D9954:
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_001D9A94; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D996Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001D996Cu) [[unlikely]] return; }
L_001D996C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D9970:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9954u | kUnwind; return; } goto L_001D9954; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D997C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9984u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001D9984u) [[unlikely]] return; }
L_001D9984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D9A3C; } }
L_001D998C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001D999C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 140u)));  if (t) { goto L_001D99B0; } }
L_001D999C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_001D99B0; }
    c.f[0] = ld32((c.r[19].w[0] + 140u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_001D99B0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[2].w[0] + 188u)));  goto L_001D99BC; }
    set32(c.r[5], ld32((c.r[2].w[0] + 184u)));
    c.budget -= 1;
L_001D99BC:
    set32(c.r[4], ld32((c.r[19].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001D99D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 120u)));  if (t) { goto L_001D99E4; } }
L_001D99D0:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_001D99E4; }
    c.f[0] = ld32((c.r[19].w[0] + 120u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_001D99E4:
    c.budget -= 2;
    if (c.r[3].sd[0] < 0) { st32((c.r[5].w[0] + 160u), c.r[18].w[0]);  goto L_001D9A20; }
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001D99FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 120u)));  if (t) { goto L_001D9A10; } }
L_001D99FC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_001D9A10; }
    c.f[0] = ld32((c.r[19].w[0] + 120u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_001D9A10:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 160u), c.r[18].w[0]);  if (t) { goto L_001D9A2C; } }
L_001D9A20:
    st32((c.r[5].w[0] + 164u), c.r[18].w[0]);
    st32((c.r[5].w[0] + 168u), c.r[18].w[0]);
    st32((c.r[5].w[0] + 172u), c.r[18].w[0]);
    c.budget -= 3;
L_001D9A2C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9A3Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001D9A3Cu) [[unlikely]] return; }
L_001D9A3C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 156u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D998Cu | kUnwind; return; } goto L_001D998C; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], c.r[19].w[0] + 668u);
    st32((c.r[29].w[0] + 96u), 0u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9A6Cu); st16((c.r[19].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001D9A6Cu) [[unlikely]] return; }
L_001D9A6C:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D9A90; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001D9A90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9A90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D9A90u) [[unlikely]] return; }
L_001D9A90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001D9A94:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001D9AB0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D9ADC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_001D9B00; } }
L_001D9ADC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_001D9B00; }
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 56u)));  if (t) { goto L_001D9B04; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D9B00:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 1;
L_001D9B04:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001D9B18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 40u)));  if (t) { goto L_001D9B38; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D9B18:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001D9B38; }
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D9B38; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D9B38:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001D9B80; } }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001D9B54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 40u)));  if (t) { goto L_001D9B74; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D9B54:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001D9B74; }
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;  if (t) { goto L_001D9B78; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D9B74:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 1;
L_001D9B78:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 261u);  goto L_001D9C14; }
L_001D9B80:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001D9B94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[19].w[0] + 40u)));  if (t) { goto L_001D9BB4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D9B94:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001D9BB4; }
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D9BB4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D9BB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9BC0u); set32(c.r[4], c.r[4].w[0] + 20560u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001D9BC0u) [[unlikely]] return; }
L_001D9BC0:
    st32((c.r[29].w[0] + 116u), 0u);
    set32(c.r[4], c.r[19].w[0] + 668u);
    st32((c.r[29].w[0] + 112u), 0u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9BE4u); st16((c.r[19].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001D9BE4u) [[unlikely]] return; }
L_001D9BE4:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_001D9D48; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001D9D44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9C08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D9C08u) [[unlikely]] return; }
L_001D9C08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D9D44; } }
    set32(c.r[4], 0u + 261u);
    c.budget -= 1;
L_001D9C14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9C1Cu);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001D9C1Cu) [[unlikely]] return; }
L_001D9C1C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 660u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1616u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001D9C78; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9C44u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001D9C44u) [[unlikely]] return; }
L_001D9C44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D9C6C; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 1;
L_001D9C50:
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D9D44; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9C68u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001D9C68u) [[unlikely]] return; }
L_001D9C68:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D9C6C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9C50u | kUnwind; return; } goto L_001D9C50; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001D9C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9C80u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001D9C80u) [[unlikely]] return; }
L_001D9C80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D9CF0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 1;
L_001D9C8C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001D9CA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 40u)));  if (t) { goto L_001D9CC0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D9CA0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001D9CC0; }
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_001D9CC4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D9CC0:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.budget -= 1;
L_001D9CC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 18800u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9CDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 48u, depth + 1u); else { c.pc = 0x001C8650u; return; } if (c.pc != 0x001D9CDCu) [[unlikely]] return; }
L_001D9CDC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9CECu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001D9CECu) [[unlikely]] return; }
L_001D9CEC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D9CF0:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9C8Cu | kUnwind; return; } goto L_001D9C8C; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], c.r[19].w[0] + 668u);
    st32((c.r[29].w[0] + 96u), 0u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9D20u); st16((c.r[19].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001D9D20u) [[unlikely]] return; }
L_001D9D20:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D9D44; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001D9D44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9D44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D9D44u) [[unlikely]] return; }
L_001D9D44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001D9D48:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001D9D60:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D9D8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 20u)));  if (t) { goto L_001D9DB0; } }
L_001D9D8C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_001D9DB0; }
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 56u)));  if (t) { goto L_001D9DB4; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D9DB0:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 1;
L_001D9DB4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001D9DC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 40u)));  if (t) { goto L_001D9DE8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D9DC8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001D9DE8; }
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D9DE8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D9DE8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001D9E30; } }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001D9E04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 40u)));  if (t) { goto L_001D9E24; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D9E04:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001D9E24; }
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;  if (t) { goto L_001D9E28; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D9E24:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 1;
L_001D9E28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D9EC0; } }
L_001D9E30:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001D9E44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[18].w[0] + 40u)));  if (t) { goto L_001D9E64; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D9E44:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001D9E64; }
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D9E64; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D9E64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9E70u); set32(c.r[4], c.r[4].w[0] + 20560u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001D9E70u) [[unlikely]] return; }
L_001D9E70:
    st32((c.r[29].w[0] + 116u), 0u);
    set32(c.r[4], c.r[18].w[0] + 668u);
    st32((c.r[29].w[0] + 112u), 0u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9E94u); st16((c.r[18].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001D9E94u) [[unlikely]] return; }
L_001D9E94:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_001DA0AC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DA0A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9EB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D9EB8u) [[unlikely]] return; }
L_001D9EB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DA0A8; } }
L_001D9EC0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001D9ED4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 40u)));  if (t) { goto L_001D9EF4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D9ED4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001D9EF4; }
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_001D9EF8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D9EF4:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.budget -= 1;
L_001D9EF8:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 18816u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u + 1u);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    c.budget -= 9;
L_001D9F1C:
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D9F40; } }
    c.f[1] = ld32((c.r[4].w[0] + 60u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_001D9F54; } }
L_001D9F40:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.f[1] = c.f[0];  goto L_001D9F54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[4].w[0] + 60u));  if (t) { goto L_001D9F54; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_001D9F54:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[2].w[0] + 148u), c.f[1]);
    c.r[2].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9F1Cu | kUnwind; return; } goto L_001D9F1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9F78u); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001D9F78u) [[unlikely]] return; }
L_001D9F78:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 660u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1616u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001D9FD4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9FA0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001D9FA0u) [[unlikely]] return; }
L_001D9FA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D9FC8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 1;
L_001D9FAC:
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DA0A8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9FC4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001D9FC4u) [[unlikely]] return; }
L_001D9FC4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D9FC8:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9FACu | kUnwind; return; } goto L_001D9FAC; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D9FD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9FDCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001D9FDCu) [[unlikely]] return; }
L_001D9FDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DA054; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 1;
L_001D9FE8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001D9FFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 40u)));  if (t) { goto L_001DA01C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D9FFC:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001DA01C; }
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DA01C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DA01C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001DA038; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA02Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 41u, depth + 1u); else { c.pc = 0x001C8540u; return; } if (c.pc != 0x001DA02Cu) [[unlikely]] return; }
L_001DA02C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001DA044; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001DA038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA040u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_002A(c, 36u, depth + 1u); else { c.pc = 0x001C84D0u; return; } if (c.pc != 0x001DA040u) [[unlikely]] return; }
L_001DA040:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001DA044:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA050u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001DA050u) [[unlikely]] return; }
L_001DA050:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DA054:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9FE8u | kUnwind; return; } goto L_001D9FE8; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 668u);
    st32((c.r[29].w[0] + 96u), 0u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA084u); st16((c.r[18].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DA084u) [[unlikely]] return; }
L_001DA084:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DA0A8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DA0A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA0A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DA0A8u) [[unlikely]] return; }
L_001DA0A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001DA0AC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001DA0D0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001DA100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 20u)));  if (t) { goto L_001DA124; } }
L_001DA100:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_001DA124; }
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 56u)));  if (t) { goto L_001DA128; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DA124:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 1;
L_001DA128:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DA13C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[18].w[0] + 40u)));  if (t) { goto L_001DA15C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DA13C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[20].d[0] = 0ull + 0ull;  goto L_001DA15C; }
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[20], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 76u)));  if (t) { goto L_001DA160; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DA15C:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_001DA160:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DA174; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[18].w[0] + 60u)));  if (t) { goto L_001DA194; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DA174:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[19].d[0] = 0ull + 0ull;  goto L_001DA194; }
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[19], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DA194; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DA194:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_001DA1A8; } }
    c.r[1].d[0] = c.r[20].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], 0u + 261u);  goto L_001DA208; }
L_001DA1A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA1B4u); set32(c.r[4], c.r[4].w[0] + 20582u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001DA1B4u) [[unlikely]] return; }
L_001DA1B4:
    st32((c.r[29].w[0] + 132u), 0u);
    set32(c.r[4], c.r[18].w[0] + 668u);
    st32((c.r[29].w[0] + 128u), 0u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 144u), 0u);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA1D8u); st16((c.r[18].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DA1D8u) [[unlikely]] return; }
L_001DA1D8:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_001DA308; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DA304; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA1FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DA1FCu) [[unlikely]] return; }
L_001DA1FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DA304; } }
    set32(c.r[4], 0u + 261u);
    c.budget -= 1;
L_001DA208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA210u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DA210u) [[unlikely]] return; }
L_001DA210:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 660u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1616u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001DA26C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA238u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001DA238u) [[unlikely]] return; }
L_001DA238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DA260; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 1;
L_001DA244:
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DA304; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA25Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001DA25Cu) [[unlikely]] return; }
L_001DA25C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DA260:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DA244u | kUnwind; return; } goto L_001DA244; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DA26C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA274u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001DA274u) [[unlikely]] return; }
L_001DA274:
    c.r[20].d[0] = c.r[20].d[0] << 48;
    c.r[19].d[0] = c.r[19].d[0] << 56;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);  if (t) { goto L_001DA2B0; } }
    st32((c.r[2].w[0] + 172u), c.r[20].w[0]);
    c.budget -= 1;
L_001DA28C:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001DA2A4; }
    st32((c.r[2].w[0] + 164u), c.r[19].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001DA2A4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA2B0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001DA2B0u) [[unlikely]] return; }
L_001DA2B0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0] + 172u), c.r[20].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DA28Cu | kUnwind; return; } goto L_001DA28C; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 668u);
    st32((c.r[29].w[0] + 112u), 0u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA2E0u); st16((c.r[18].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DA2E0u) [[unlikely]] return; }
L_001DA2E0:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DA304; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DA304; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA304u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DA304u) [[unlikely]] return; }
L_001DA304:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001DA308:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001DA330:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001DA360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_001DA378; } }
L_001DA360:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[18].d[0] = 0ull + 0ull;  goto L_001DA378; }
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[0]);
    c.budget -= 3;
L_001DA378:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DA38C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[19].w[0] + 40u)));  if (t) { goto L_001DA3A0; } }
L_001DA38C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_001DA3A0; }
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_001DA3A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA3A8u); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DA3A8u) [[unlikely]] return; }
L_001DA3A8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA3B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001DA3B8u) [[unlikely]] return; }
L_001DA3B8:
    set32(c.r[2], ld32((c.r[19].w[0] + 660u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1616u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001DA40C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA3DCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001DA3DCu) [[unlikely]] return; }
L_001DA3DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DA400; } }
L_001DA3E4:
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_001DA4A8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA3FCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001DA3FCu) [[unlikely]] return; }
L_001DA3FC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DA400:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DA3E4u | kUnwind; return; } goto L_001DA3E4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DA40C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA414u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001DA414u) [[unlikely]] return; }
L_001DA414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DA450; } }
L_001DA41C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001DA434; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA42Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 106u, depth + 1u); else { c.pc = 0x001C8E40u; return; } if (c.pc != 0x001DA42Cu) [[unlikely]] return; }
L_001DA42C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001DA440; } }
L_001DA434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA43Cu);  if (depth < kMaxDepth) unit_002A(c, 107u, depth + 1u); else { c.pc = 0x001C8EB0u; return; } if (c.pc != 0x001DA43Cu) [[unlikely]] return; }
L_001DA43C:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001DA440:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA44Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001DA44Cu) [[unlikely]] return; }
L_001DA44C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DA450:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DA41Cu | kUnwind; return; } goto L_001DA41C; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[4], c.r[19].w[0] + 668u);
    st32((c.r[29].w[0] + 112u), 0u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA480u); st16((c.r[19].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DA480u) [[unlikely]] return; }
L_001DA480:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DA4A4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DA4A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA4A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DA4A4u) [[unlikely]] return; }
L_001DA4A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001DA4A8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001DA4D0:
    set32(c.r[29], c.r[29].w[0] - 832u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA4E8u); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DA4E8u) [[unlikely]] return; }
L_001DA4E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DA500; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_001DA520; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001DA500:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DA520; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DA524; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DA520:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DA524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA52Cu);  if (depth < kMaxDepth) unit_002A(c, 329u, depth + 1u); else { c.pc = 0x001CABB0u; return; } if (c.pc != 0x001DA52Cu) [[unlikely]] return; }
L_001DA52C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  if (t) { goto L_001DA590; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA540u); set32(c.r[4], c.r[4].w[0] + 20611u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001DA540u) [[unlikely]] return; }
L_001DA540:
    st32((c.r[29].w[0] + 804u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 800u), 0u);
    set32(c.r[5], c.r[29].w[0] + 800u);
    st32((c.r[29].w[0] + 816u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA564u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DA564u) [[unlikely]] return; }
L_001DA564:
    set32(c.r[4], ld32((c.r[29].w[0] + 804u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001DB188; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA588u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DA588u) [[unlikely]] return; }
L_001DA588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB184; } }
L_001DA590:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 184u)));  if (t) { goto L_001DA5A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_001DA5C4; } }
L_001DA5A0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001DA5C4; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(23ll) ? 1ull : 0ull;  if (t) { goto L_001DA5C8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DA5C4:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(23ll) ? 1ull : 0ull;
    c.budget -= 1;
L_001DA5C8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001DB130; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 18848u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001D8000u < 16384u) { entry = entries_002E[(t - 0x001D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001DA5EC:
    c.f[0] = ld32((c.r[4].w[0] + 208u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 768u);
    st32((c.r[29].w[0] + 768u), c.f[0]);
    st32((c.r[29].w[0] + 784u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 772u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA618u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DA618u) [[unlikely]] return; }
L_001DA618:
    set32(c.r[4], ld32((c.r[29].w[0] + 772u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB184; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA63Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DA63Cu) [[unlikely]] return; }
L_001DA63C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB184; } }
L_001DA644:
    c.f[0] = ld32((c.r[4].w[0] + 212u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 736u);
    st32((c.r[29].w[0] + 736u), c.f[0]);
    st32((c.r[29].w[0] + 752u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 740u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA670u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DA670u) [[unlikely]] return; }
L_001DA670:
    set32(c.r[4], ld32((c.r[29].w[0] + 740u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB184; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA694u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DA694u) [[unlikely]] return; }
L_001DA694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB184; } }
L_001DA69C:
    set32(c.r[2], ld32((c.r[4].w[0] + 264u)));
    set32(c.r[5], c.r[29].w[0] + 704u);
    st32((c.r[29].w[0] + 704u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 708u), 0u);
    st32((c.r[29].w[0] + 720u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA6C4u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DA6C4u) [[unlikely]] return; }
L_001DA6C4:
    set32(c.r[4], ld32((c.r[29].w[0] + 708u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB184; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA6E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DA6E8u) [[unlikely]] return; }
L_001DA6E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB184; } }
L_001DA6F0:
    c.f[0] = ld32((c.r[4].w[0] + 240u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 672u);
    st32((c.r[29].w[0] + 672u), c.f[0]);
    st32((c.r[29].w[0] + 688u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 676u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA71Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DA71Cu) [[unlikely]] return; }
L_001DA71C:
    set32(c.r[4], ld32((c.r[29].w[0] + 676u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB184; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA740u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DA740u) [[unlikely]] return; }
L_001DA740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB184; } }
L_001DA748:
    c.f[0] = ld32((c.r[4].w[0] + 244u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 640u);
    st32((c.r[29].w[0] + 640u), c.f[0]);
    st32((c.r[29].w[0] + 656u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 644u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA774u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DA774u) [[unlikely]] return; }
L_001DA774:
    set32(c.r[4], ld32((c.r[29].w[0] + 644u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB184; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA798u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DA798u) [[unlikely]] return; }
L_001DA798:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB184; } }
L_001DA7A0:
    c.f[0] = ld32((c.r[4].w[0] + 224u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 608u);
    st32((c.r[29].w[0] + 608u), c.f[0]);
    st32((c.r[29].w[0] + 624u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 612u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA7CCu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DA7CCu) [[unlikely]] return; }
L_001DA7CC:
    set32(c.r[4], ld32((c.r[29].w[0] + 612u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB184; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA7F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DA7F0u) [[unlikely]] return; }
L_001DA7F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB184; } }
L_001DA7F8:
    c.f[0] = ld32((c.r[4].w[0] + 228u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 576u);
    st32((c.r[29].w[0] + 576u), c.f[0]);
    st32((c.r[29].w[0] + 592u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 580u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA824u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DA824u) [[unlikely]] return; }
L_001DA824:
    set32(c.r[4], ld32((c.r[29].w[0] + 580u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB184; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA848u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DA848u) [[unlikely]] return; }
L_001DA848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB184; } }
L_001DA850:
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001DA874; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DA88C; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001DA874:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
L_001DA88C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 548u), 0u);
    st32((c.r[29].w[0] + 544u), c.f[0]);
    st32((c.r[29].w[0] + 560u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 544u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA8B4u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DA8B4u) [[unlikely]] return; }
L_001DA8B4:
    set32(c.r[4], ld32((c.r[29].w[0] + 548u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB184; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA8D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DA8D8u) [[unlikely]] return; }
L_001DA8D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB184; } }
L_001DA8E0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 160u));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001DA8FC; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DA914; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001DA8FC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
L_001DA914:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 516u), 0u);
    st32((c.r[29].w[0] + 512u), c.f[0]);
    st32((c.r[29].w[0] + 528u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 512u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA93Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DA93Cu) [[unlikely]] return; }
L_001DA93C:
    set32(c.r[4], ld32((c.r[29].w[0] + 516u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB184; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA960u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DA960u) [[unlikely]] return; }
L_001DA960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB184; } }
L_001DA968:
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001DA98C; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DA9A4; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001DA98C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
L_001DA9A4:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 484u), 0u);
    st32((c.r[29].w[0] + 480u), c.f[0]);
    st32((c.r[29].w[0] + 496u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 480u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA9CCu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DA9CCu) [[unlikely]] return; }
L_001DA9CC:
    set32(c.r[4], ld32((c.r[29].w[0] + 484u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB184; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA9F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DA9F0u) [[unlikely]] return; }
L_001DA9F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB184; } }
L_001DA9F8:
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001DAA1C; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DAA34; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001DAA1C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
L_001DAA34:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 452u), 0u);
    st32((c.r[29].w[0] + 448u), c.f[0]);
    st32((c.r[29].w[0] + 464u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAA5Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DAA5Cu) [[unlikely]] return; }
L_001DAA5C:
    set32(c.r[4], ld32((c.r[29].w[0] + 452u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB184; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAA80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DAA80u) [[unlikely]] return; }
L_001DAA80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB184; } }
L_001DAA88:
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001DAAAC; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DAAC4; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001DAAAC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
L_001DAAC4:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 420u), 0u);
    st32((c.r[29].w[0] + 416u), c.f[0]);
    st32((c.r[29].w[0] + 432u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 416u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAAECu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DAAECu) [[unlikely]] return; }
L_001DAAEC:
    set32(c.r[4], ld32((c.r[29].w[0] + 420u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB184; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAB10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DAB10u) [[unlikely]] return; }
L_001DAB10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB184; } }
L_001DAB18:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 164u));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001DAB34; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DAB4C; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001DAB34:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
L_001DAB4C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 388u), 0u);
    st32((c.r[29].w[0] + 384u), c.f[0]);
    st32((c.r[29].w[0] + 400u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 384u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAB74u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DAB74u) [[unlikely]] return; }
L_001DAB74:
    set32(c.r[4], ld32((c.r[29].w[0] + 388u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB184; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAB98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DAB98u) [[unlikely]] return; }
L_001DAB98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB184; } }
L_001DABA0:
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001DABC4; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DABDC; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001DABC4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
L_001DABDC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 356u), 0u);
    st32((c.r[29].w[0] + 352u), c.f[0]);
    st32((c.r[29].w[0] + 368u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAC04u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DAC04u) [[unlikely]] return; }
L_001DAC04:
    set32(c.r[4], ld32((c.r[29].w[0] + 356u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB184; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAC28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DAC28u) [[unlikely]] return; }
L_001DAC28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB184; } }
L_001DAC30:
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001DAC54; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DAC6C; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001DAC54:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
L_001DAC6C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 324u), 0u);
    st32((c.r[29].w[0] + 320u), c.f[0]);
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAC94u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DAC94u) [[unlikely]] return; }
L_001DAC94:
    set32(c.r[4], ld32((c.r[29].w[0] + 324u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB184; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DACB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DACB8u) [[unlikely]] return; }
L_001DACB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB184; } }
L_001DACC0:
    set32(c.r[2], ld32((c.r[4].w[0] + 168u)));
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001DACE4; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DACFC; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001DACE4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
L_001DACFC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 292u), 0u);
    st32((c.r[29].w[0] + 288u), c.f[0]);
    st32((c.r[29].w[0] + 304u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAD24u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DAD24u) [[unlikely]] return; }
L_001DAD24:
    set32(c.r[4], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB184; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAD48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DAD48u) [[unlikely]] return; }
L_001DAD48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB184; } }
L_001DAD50:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 168u));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001DAD6C; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DAD84; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001DAD6C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
L_001DAD84:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 260u), 0u);
    st32((c.r[29].w[0] + 256u), c.f[0]);
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DADACu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DADACu) [[unlikely]] return; }
L_001DADAC:
    set32(c.r[4], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB184; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DADD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DADD0u) [[unlikely]] return; }
L_001DADD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB184; } }
L_001DADD8:
    set32(c.r[2], ld32((c.r[4].w[0] + 168u)));
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001DADFC; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DAE14; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001DADFC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
L_001DAE14:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 228u), 0u);
    st32((c.r[29].w[0] + 224u), c.f[0]);
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAE3Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DAE3Cu) [[unlikely]] return; }
L_001DAE3C:
    set32(c.r[4], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB184; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAE60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DAE60u) [[unlikely]] return; }
L_001DAE60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB184; } }
L_001DAE68:
    set32(c.r[2], ld32((c.r[4].w[0] + 168u)));
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001DAE8C; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DAEA4; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001DAE8C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
L_001DAEA4:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 196u), 0u);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAECCu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DAECCu) [[unlikely]] return; }
L_001DAECC:
    set32(c.r[4], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB184; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAEF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DAEF0u) [[unlikely]] return; }
L_001DAEF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB184; } }
L_001DAEF8:
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001DAF1C; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DAF34; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001DAF1C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
L_001DAF34:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 164u), 0u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAF5Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DAF5Cu) [[unlikely]] return; }
L_001DAF5C:
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB184; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAF80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DAF80u) [[unlikely]] return; }
L_001DAF80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB184; } }
L_001DAF88:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 172u));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001DAFA4; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DAFBC; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001DAFA4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
L_001DAFBC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAFE4u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DAFE4u) [[unlikely]] return; }
L_001DAFE4:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB184; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB008u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DB008u) [[unlikely]] return; }
L_001DB008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB184; } }
L_001DB010:
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001DB034; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DB04C; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001DB034:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
L_001DB04C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB074u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DB074u) [[unlikely]] return; }
L_001DB074:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB184; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB098u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DB098u) [[unlikely]] return; }
L_001DB098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB184; } }
L_001DB0A0:
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001DB0C4; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DB0DC; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001DB0C4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
L_001DB0DC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[4], c.r[16].w[0] + 668u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB104u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DB104u) [[unlikely]] return; }
L_001DB104:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB184; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB128u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DB128u) [[unlikely]] return; }
L_001DB128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB184; } }
L_001DB130:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB13Cu); set32(c.r[4], c.r[4].w[0] + 20611u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001DB13Cu) [[unlikely]] return; }
L_001DB13C:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB160u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DB160u) [[unlikely]] return; }
L_001DB160:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB184; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB184u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DB184u) [[unlikely]] return; }
L_001DB184:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001DB188:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 832u);  c.pc = t; return; }
L_001DB1A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB1BCu); set32(c.r[4], 0u + 287u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DB1BCu) [[unlikely]] return; }
L_001DB1BC:
    set32(c.r[4], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DB490; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_001DB1E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001DB670; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_001DB1E0:
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_001DB224; }
    set32(c.r[2], 0u + 8u);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 96u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 84u), 0u);  goto L_001DB220; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001DB21C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB21Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DB21Cu) [[unlikely]] return; }
L_001DB21C:
    st32((c.r[17].w[0] + 84u), 0u);
    c.budget -= 1;
L_001DB220:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_001DB224:
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_001DB264; }
    st32((c.r[17].w[0] + 100u), 0u);
    st32((c.r[17].w[0] + 116u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 104u), 0u);  goto L_001DB260; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001DB25C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB25Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DB25Cu) [[unlikely]] return; }
L_001DB25C:
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 1;
L_001DB260:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_001DB264:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DB278; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_001DB298; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DB278:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DB298; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001DB29C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DB298:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001DB29C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB2A4u);  if (depth < kMaxDepth) unit_0033(c, 58u, depth + 1u); else { c.pc = 0x001EC600u; return; } if (c.pc != 0x001DB2A4u) [[unlikely]] return; }
L_001DB2A4:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_001DB440; }
    set32(c.r[3], ld32((c.r[17].w[0] + 660u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1616u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DB66C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DB2E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_001DB300; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DB2E0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DB300; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 116u)));  if (t) { goto L_001DB304; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DB300:
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 1;
L_001DB304:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DB318; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[17].w[0] + 100u)));  if (t) { goto L_001DB338; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DB318:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001DB338; }
    c.f[0] = ld32((c.r[17].w[0] + 100u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 56u)));  if (t) { goto L_001DB33C; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DB338:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_001DB33C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DB350; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[17].w[0] + 40u)));  if (t) { goto L_001DB370; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DB350:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_001DB370; }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 76u)));  if (t) { goto L_001DB374; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DB370:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_001DB374:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DB388; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[17].w[0] + 60u)));  if (t) { goto L_001DB3A8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DB388:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[8].d[0] = 0ull + 0ull;  goto L_001DB3A8; }
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 96u)));  if (t) { goto L_001DB3AC; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DB3A8:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_001DB3AC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DB3C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], ld32((c.r[17].w[0] + 80u)));  if (t) { goto L_001DB3E0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DB3C0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[9].d[0] = 0ull + 0ull;  goto L_001DB3E0; }
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[9], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001DB3E4; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DB3E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001DB3E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB3ECu);  if (depth < kMaxDepth) unit_0032(c, 393u, depth + 1u); else { c.pc = 0x001EB8D0u; return; } if (c.pc != 0x001DB3ECu) [[unlikely]] return; }
L_001DB3EC:
    st32((c.r[29].w[0] + 84u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB410u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DB410u) [[unlikely]] return; }
L_001DB410:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB66C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB66C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB434u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DB434u) [[unlikely]] return; }
L_001DB434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB66C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_001DB440:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DB454; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_001DB474; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DB454:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001DB474; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x011F0000u);  if (t) { goto L_001DB478; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DB474:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x011F0000u);
    c.budget -= 1;
L_001DB478:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB484u); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x001DB484u) [[unlikely]] return; }
L_001DB484:
    set32(c.r[3], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 3;
L_001DB490:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DB66C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 660u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1616u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DB66C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DB4D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_001DB4F4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DB4D4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DB4F4; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 116u)));  if (t) { goto L_001DB4F8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DB4F4:
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 1;
L_001DB4F8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DB50C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[17].w[0] + 100u)));  if (t) { goto L_001DB52C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DB50C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001DB52C; }
    c.f[0] = ld32((c.r[17].w[0] + 100u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 56u)));  if (t) { goto L_001DB530; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DB52C:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_001DB530:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DB544; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[17].w[0] + 40u)));  if (t) { goto L_001DB564; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DB544:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_001DB564; }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 76u)));  if (t) { goto L_001DB568; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DB564:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_001DB568:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DB57C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[17].w[0] + 60u)));  if (t) { goto L_001DB59C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DB57C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[8].d[0] = 0ull + 0ull;  goto L_001DB59C; }
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 96u)));  if (t) { goto L_001DB5A0; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DB59C:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_001DB5A0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DB5B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], ld32((c.r[17].w[0] + 80u)));  if (t) { goto L_001DB5D4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DB5B4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[9].d[0] = 0ull + 0ull;  goto L_001DB5D4; }
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[9], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001DB5D8; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DB5D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001DB5D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB5E0u);  if (depth < kMaxDepth) unit_0032(c, 393u, depth + 1u); else { c.pc = 0x001EB8D0u; return; } if (c.pc != 0x001DB5E0u) [[unlikely]] return; }
L_001DB5E0:
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 668u);
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB604u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DB604u) [[unlikely]] return; }
L_001DB604:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_001DB62C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001DB628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB628u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DB628u) [[unlikely]] return; }
L_001DB628:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_001DB62C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DB640; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_001DB660; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DB640:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DB660; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001DB664; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DB660:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001DB664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB66Cu);  if (depth < kMaxDepth) unit_0032(c, 391u, depth + 1u); else { c.pc = 0x001EB8A0u; return; } if (c.pc != 0x001DB66Cu) [[unlikely]] return; }
L_001DB66C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001DB670:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001DB680:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB698u); set32(c.r[4], 0u + 287u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DB698u) [[unlikely]] return; }
L_001DB698:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DB6AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_001DB6C0; } }
L_001DB6AC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DB6C0; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_001DB6C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB6C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 411u, depth + 1u); else { c.pc = 0x001EBB50u; return; } if (c.pc != 0x001DB6C8u) [[unlikely]] return; }
L_001DB6C8:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB6ECu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DB6ECu) [[unlikely]] return; }
L_001DB6EC:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001DB714; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB710; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB710u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DB710u) [[unlikely]] return; }
L_001DB710:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001DB714:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DB720:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB73Cu); set32(c.r[4], 0u + 287u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DB73Cu) [[unlikely]] return; }
L_001DB73C:
    set32(c.r[4], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DB7A0; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 36u)));  goto L_001DB75C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001DB800; } }
L_001DB75C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DB76C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_001DB780; } }
L_001DB76C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001DB780; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_001DB780:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x011F0000u);
    set32(c.r[7], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB794u); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 403u, depth + 1u); else { c.pc = 0x001CF9B0u; return; } if (c.pc != 0x001DB794u) [[unlikely]] return; }
L_001DB794:
    set32(c.r[3], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 704u), c.r[3].w[0]);
    c.budget -= 3;
L_001DB7A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DB7FC; } }
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB7D8u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DB7D8u) [[unlikely]] return; }
L_001DB7D8:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB7FC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB7FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB7FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DB7FCu) [[unlikely]] return; }
L_001DB7FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001DB800:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001DB810:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB828u); set32(c.r[4], 0u + 287u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DB828u) [[unlikely]] return; }
L_001DB828:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DB83C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_001DB850; } }
L_001DB83C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DB850; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_001DB850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB858u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 391u, depth + 1u); else { c.pc = 0x001EB8A0u; return; } if (c.pc != 0x001DB858u) [[unlikely]] return; }
L_001DB858:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB87Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DB87Cu) [[unlikely]] return; }
L_001DB87C:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001DB8A4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB8A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB8A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DB8A0u) [[unlikely]] return; }
L_001DB8A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001DB8A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DB8B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB8C8u); set32(c.r[4], 0u + 287u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DB8C8u) [[unlikely]] return; }
L_001DB8C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DB8DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_001DB8F0; } }
L_001DB8DC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DB8F0; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_001DB8F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DB904; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_001DB918; } }
L_001DB904:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001DB918; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_001DB918:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DB92C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[16].w[0] + 60u)));  if (t) { goto L_001DB940; } }
L_001DB92C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_001DB940; }
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 3;
L_001DB940:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DB954; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[16].w[0] + 80u)));  if (t) { goto L_001DB968; } }
L_001DB954:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[8].d[0] = 0ull + 0ull;  goto L_001DB968; }
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[0]);
    c.budget -= 3;
L_001DB968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB970u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 403u, depth + 1u); else { c.pc = 0x001EBA30u; return; } if (c.pc != 0x001DB970u) [[unlikely]] return; }
L_001DB970:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB994u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DB994u) [[unlikely]] return; }
L_001DB994:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001DB9BC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DB9B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB9B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DB9B8u) [[unlikely]] return; }
L_001DB9B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001DB9BC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DB9D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB9E8u); set32(c.r[4], 0u + 287u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DB9E8u) [[unlikely]] return; }
L_001DB9E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DB9FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_001DBA10; } }
L_001DB9FC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DBA10; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_001DBA10:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001DBA24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_001DBA38; } }
L_001DBA24:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001DBA38; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_001DBA38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBA40u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 407u, depth + 1u); else { c.pc = 0x001EBAD0u; return; } if (c.pc != 0x001DBA40u) [[unlikely]] return; }
L_001DBA40:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBA64u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DBA64u) [[unlikely]] return; }
L_001DBA64:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001DBA8C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DBA88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBA88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DBA88u) [[unlikely]] return; }
L_001DBA88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001DBA8C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DBAA0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 261u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBACCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DBACCu) [[unlikely]] return; }
L_001DBACC:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DBAE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_001DBAF8; } }
L_001DBAE0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DBAF8; }
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_001DBAF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBB00u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001DBB00u) [[unlikely]] return; }
L_001DBB00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DBBC0; } }
L_001DBB08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBB10u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_002A(c, 32u, depth + 1u); else { c.pc = 0x001C8450u; return; } if (c.pc != 0x001DBB10u) [[unlikely]] return; }
L_001DBB10:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 36u)));  goto L_001DBB8C; }
    set32(c.r[20], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_001DBB80; } }
L_001DBB28:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DBB38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[19].w[0] + 40u)));  if (t) { goto L_001DBB4C; } }
L_001DBB38:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[8].d[0] = 0ull + 0ull;  goto L_001DBB4C; }
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[0]);
    c.budget -= 3;
L_001DBB4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x010B0000u);
    c.r[6].d[0] = c.r[20].d[0] << 32;
    c.r[7].d[0] = c.r[21].d[0] << 32;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 4096ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBB6Cu); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);  if (depth < kMaxDepth) unit_002B(c, 407u, depth + 1u); else { c.pc = 0x001CFA40u; return; } if (c.pc != 0x001DBB6Cu) [[unlikely]] return; }
L_001DBB6C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBB7Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_002A(c, 34u, depth + 1u); else { c.pc = 0x001C8490u; return; } if (c.pc != 0x001DBB7Cu) [[unlikely]] return; }
L_001DBB7C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DBB80:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DBB28u | kUnwind; return; } goto L_001DBB28; }
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 1;
L_001DBB8C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DBB9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_001DBBB0; } }
L_001DBB9C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001DBBB0; }
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_001DBBB0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBBBCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001DBBBCu) [[unlikely]] return; }
L_001DBBBC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DBBC0:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DBB08u | kUnwind; return; } goto L_001DBB08; }
    st32((c.r[29].w[0] + 116u), 0u);
    set32(c.r[4], c.r[19].w[0] + 668u);
    st32((c.r[29].w[0] + 112u), 0u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBBECu); st16((c.r[19].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DBBECu) [[unlikely]] return; }
L_001DBBEC:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_001DBC14; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DBC10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBC10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DBC10u) [[unlikely]] return; }
L_001DBC10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_001DBC14:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001DBC40:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 261u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBC6Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DBC6Cu) [[unlikely]] return; }
L_001DBC6C:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DBC80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_001DBC98; } }
L_001DBC80:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DBC98; }
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_001DBC98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBCA0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001DBCA0u) [[unlikely]] return; }
L_001DBCA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DBD60; } }
L_001DBCA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBCB0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_002A(c, 32u, depth + 1u); else { c.pc = 0x001C8450u; return; } if (c.pc != 0x001DBCB0u) [[unlikely]] return; }
L_001DBCB0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 36u)));  goto L_001DBD2C; }
    set32(c.r[20], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], 0u + 1u);  if (t) { goto L_001DBD20; } }
L_001DBCC8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DBCD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[19].w[0] + 40u)));  if (t) { goto L_001DBCEC; } }
L_001DBCD8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[8].d[0] = 0ull + 0ull;  goto L_001DBCEC; }
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[0]);
    c.budget -= 3;
L_001DBCEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x010B0000u);
    c.r[6].d[0] = c.r[20].d[0] << 32;
    c.r[7].d[0] = c.r[21].d[0] << 32;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 4096ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBD0Cu); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);  if (depth < kMaxDepth) unit_002B(c, 407u, depth + 1u); else { c.pc = 0x001CFA40u; return; } if (c.pc != 0x001DBD0Cu) [[unlikely]] return; }
L_001DBD0C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBD1Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_002A(c, 34u, depth + 1u); else { c.pc = 0x001C8490u; return; } if (c.pc != 0x001DBD1Cu) [[unlikely]] return; }
L_001DBD1C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DBD20:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DBCC8u | kUnwind; return; } goto L_001DBCC8; }
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 1;
L_001DBD2C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DBD3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_001DBD50; } }
L_001DBD3C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001DBD50; }
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_001DBD50:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBD5Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001DBD5Cu) [[unlikely]] return; }
L_001DBD5C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DBD60:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DBCA8u | kUnwind; return; } goto L_001DBCA8; }
    st32((c.r[29].w[0] + 116u), 0u);
    set32(c.r[4], c.r[19].w[0] + 668u);
    st32((c.r[29].w[0] + 112u), 0u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBD8Cu); st16((c.r[19].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DBD8Cu) [[unlikely]] return; }
L_001DBD8C:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_001DBDB4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DBDB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBDB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DBDB0u) [[unlikely]] return; }
L_001DBDB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_001DBDB4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001DBDE0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], 0u + 261u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBE08u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001DBE08u) [[unlikely]] return; }
L_001DBE08:
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DBE1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[20].w[0] + 20u)));  if (t) { goto L_001DBE34; } }
L_001DBE1C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DBE34; }
    c.f[0] = ld32((c.r[20].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_001DBE34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBE3Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001DBE3Cu) [[unlikely]] return; }
L_001DBE3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DBF84; } }
L_001DBE44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBE4Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_002A(c, 32u, depth + 1u); else { c.pc = 0x001C8450u; return; } if (c.pc != 0x001DBE4Cu) [[unlikely]] return; }
L_001DBE4C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 36u)));  goto L_001DBF50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 3u);  if (t) { goto L_001DBF44; } }
L_001DBE60:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DBE70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[20].w[0] + 40u)));  if (t) { goto L_001DBE84; } }
L_001DBE70:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001DBE84; }
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_001DBE84:
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DBE98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[20].w[0] + 60u)));  if (t) { goto L_001DBEAC; } }
L_001DBE98:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001DBEAC; }
    c.f[0] = ld32((c.r[20].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_001DBEAC:
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DBEC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 80u)));  if (t) { goto L_001DBED4; } }
L_001DBEC0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_001DBED4; }
    c.f[0] = ld32((c.r[20].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 3;
L_001DBED4:
    set32(c.r[3], ld32((c.r[20].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DBEE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], ld32((c.r[20].w[0] + 100u)));  if (t) { goto L_001DBEFC; } }
L_001DBEE8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[11].d[0] = 0ull + 0ull;  goto L_001DBEFC; }
    c.f[0] = ld32((c.r[20].w[0] + 100u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[11], c.f[0]);
    c.budget -= 3;
L_001DBEFC:
    c.r[8].d[0] = c.r[6].d[0] << 32;
    c.r[10].d[0] = c.r[4].d[0] << 32;
    c.r[6].d[0] = c.r[16].d[0] << 32;
    c.r[9].d[0] = c.r[5].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x010B0000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 32);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBF30u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 419u, depth + 1u); else { c.pc = 0x001CFC90u; return; } if (c.pc != 0x001DBF30u) [[unlikely]] return; }
L_001DBF30:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBF40u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_002A(c, 34u, depth + 1u); else { c.pc = 0x001C8490u; return; } if (c.pc != 0x001DBF40u) [[unlikely]] return; }
L_001DBF40:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DBF44:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DBE60u | kUnwind; return; } goto L_001DBE60; }
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 1;
L_001DBF50:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DBF60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[20].w[0] + 20u)));  if (t) { goto L_001DBF74; } }
L_001DBF60:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001DBF74; }
    c.f[0] = ld32((c.r[20].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_001DBF74:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBF80u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001DBF80u) [[unlikely]] return; }
L_001DBF80:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DBF84:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DBE44u | kUnwind; return; } goto L_001DBE44; }
    st32((c.r[29].w[0] + 100u), 0u);
    set32(c.r[4], c.r[20].w[0] + 668u);
    st32((c.r[29].w[0] + 96u), 0u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 112u), 0u);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBFB0u); st16((c.r[20].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001DBFB0u) [[unlikely]] return; }
L_001DBFB0:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_001DBFD8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001DBFD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBFD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001DBFD4u) [[unlikely]] return; }
L_001DBFD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001DBFD8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
}

}
