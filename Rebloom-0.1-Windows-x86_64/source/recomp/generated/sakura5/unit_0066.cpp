#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0066[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0,
    0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103,
    0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0,
    0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0,
    0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0,
    0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129,
    0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0,
    0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0,
    0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0,
    146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0,
    0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0,
    0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0,
    0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0,
    0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193,
    0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 221,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0,
    0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0,
    0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0,
    0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0,
    0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0,
    0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0,
    0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0,
    0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0,
    0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0,
    282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0,
    0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298,
    0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0,
    0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0,
    0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0,
    327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0,
    342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0,
    0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0,
};

void unit_0066(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002B8000;
    case 2u: goto L_002B8010;
    case 3u: goto L_002B8060;
    case 4u: goto L_002B8094;
    case 5u: goto L_002B80B0;
    case 6u: goto L_002B80D4;
    case 7u: goto L_002B8114;
    case 8u: goto L_002B8130;
    case 9u: goto L_002B8154;
    case 10u: goto L_002B8170;
    case 11u: goto L_002B81C4;
    case 12u: goto L_002B8208;
    case 13u: goto L_002B8244;
    case 14u: goto L_002B8260;
    case 15u: goto L_002B8284;
    case 16u: goto L_002B82A4;
    case 17u: goto L_002B82D0;
    case 18u: goto L_002B82EC;
    case 19u: goto L_002B8310;
    case 20u: goto L_002B8330;
    case 21u: goto L_002B839C;
    case 22u: goto L_002B83D4;
    case 23u: goto L_002B83F0;
    case 24u: goto L_002B8414;
    case 25u: goto L_002B8428;
    case 26u: goto L_002B846C;
    case 27u: goto L_002B84CC;
    case 28u: goto L_002B8510;
    case 29u: goto L_002B852C;
    case 30u: goto L_002B8550;
    case 31u: goto L_002B8594;
    case 32u: goto L_002B85B0;
    case 33u: goto L_002B85D4;
    case 34u: goto L_002B8600;
    case 35u: goto L_002B8650;
    case 36u: goto L_002B8688;
    case 37u: goto L_002B86A4;
    case 38u: goto L_002B86C8;
    case 39u: goto L_002B8708;
    case 40u: goto L_002B8724;
    case 41u: goto L_002B8748;
    case 42u: goto L_002B8760;
    case 43u: goto L_002B87B0;
    case 44u: goto L_002B87E4;
    case 45u: goto L_002B8800;
    case 46u: goto L_002B8824;
    case 47u: goto L_002B8864;
    case 48u: goto L_002B8880;
    case 49u: goto L_002B88A4;
    case 50u: goto L_002B88C0;
    case 51u: goto L_002B8918;
    case 52u: goto L_002B8950;
    case 53u: goto L_002B896C;
    case 54u: goto L_002B8990;
    case 55u: goto L_002B89C8;
    case 56u: goto L_002B89D4;
    case 57u: goto L_002B8A40;
    case 58u: goto L_002B8A5C;
    case 59u: goto L_002B8A80;
    case 60u: goto L_002B8AA0;
    case 61u: goto L_002B8AF0;
    case 62u: goto L_002B8B24;
    case 63u: goto L_002B8B40;
    case 64u: goto L_002B8B64;
    case 65u: goto L_002B8BA4;
    case 66u: goto L_002B8BC0;
    case 67u: goto L_002B8BE4;
    case 68u: goto L_002B8C00;
    case 69u: goto L_002B8C58;
    case 70u: goto L_002B8C90;
    case 71u: goto L_002B8CAC;
    case 72u: goto L_002B8CD0;
    case 73u: goto L_002B8D08;
    case 74u: goto L_002B8D14;
    case 75u: goto L_002B8D80;
    case 76u: goto L_002B8D9C;
    case 77u: goto L_002B8DC0;
    case 78u: goto L_002B8DE0;
    case 79u: goto L_002B8E10;
    case 80u: goto L_002B8E64;
    case 81u: goto L_002B8E80;
    case 82u: goto L_002B8EA4;
    case 83u: goto L_002B8EC0;
    case 84u: goto L_002B8F0C;
    case 85u: goto L_002B8F34;
    case 86u: goto L_002B8F50;
    case 87u: goto L_002B8F74;
    case 88u: goto L_002B8F90;
    case 89u: goto L_002B8FE0;
    case 90u: goto L_002B9018;
    case 91u: goto L_002B9034;
    case 92u: goto L_002B9058;
    case 93u: goto L_002B9074;
    case 94u: goto L_002B909C;
    case 95u: goto L_002B90B8;
    case 96u: goto L_002B90DC;
    case 97u: goto L_002B90F0;
    case 98u: goto L_002B9144;
    case 99u: goto L_002B9178;
    case 100u: goto L_002B9194;
    case 101u: goto L_002B91B8;
    case 102u: goto L_002B9234;
    case 103u: goto L_002B927C;
    case 104u: goto L_002B9298;
    case 105u: goto L_002B92BC;
    case 106u: goto L_002B9310;
    case 107u: goto L_002B932C;
    case 108u: goto L_002B9350;
    case 109u: goto L_002B936C;
    case 110u: goto L_002B93B4;
    case 111u: goto L_002B93D0;
    case 112u: goto L_002B93F4;
    case 113u: goto L_002B9448;
    case 114u: goto L_002B9464;
    case 115u: goto L_002B9488;
    case 116u: goto L_002B94A4;
    case 117u: goto L_002B94EC;
    case 118u: goto L_002B9508;
    case 119u: goto L_002B952C;
    case 120u: goto L_002B9578;
    case 121u: goto L_002B9594;
    case 122u: goto L_002B95B8;
    case 123u: goto L_002B95EC;
    case 124u: goto L_002B9608;
    case 125u: goto L_002B962C;
    case 126u: goto L_002B9640;
    case 127u: goto L_002B96BC;
    case 128u: goto L_002B96D8;
    case 129u: goto L_002B96FC;
    case 130u: goto L_002B9710;
    case 131u: goto L_002B9798;
    case 132u: goto L_002B97D0;
    case 133u: goto L_002B97EC;
    case 134u: goto L_002B9810;
    case 135u: goto L_002B9850;
    case 136u: goto L_002B986C;
    case 137u: goto L_002B9890;
    case 138u: goto L_002B98A0;
    case 139u: goto L_002B98F0;
    case 140u: goto L_002B9928;
    case 141u: goto L_002B9944;
    case 142u: goto L_002B9968;
    case 143u: goto L_002B99A8;
    case 144u: goto L_002B99C4;
    case 145u: goto L_002B99E8;
    case 146u: goto L_002B9A00;
    case 147u: goto L_002B9A5C;
    case 148u: goto L_002B9A94;
    case 149u: goto L_002B9AB0;
    case 150u: goto L_002B9AD4;
    case 151u: goto L_002B9B20;
    case 152u: goto L_002B9B2C;
    case 153u: goto L_002B9BAC;
    case 154u: goto L_002B9BC8;
    case 155u: goto L_002B9BEC;
    case 156u: goto L_002B9C10;
    case 157u: goto L_002B9C60;
    case 158u: goto L_002B9C98;
    case 159u: goto L_002B9CB4;
    case 160u: goto L_002B9CD8;
    case 161u: goto L_002B9D18;
    case 162u: goto L_002B9D34;
    case 163u: goto L_002B9D58;
    case 164u: goto L_002B9D70;
    case 165u: goto L_002B9DC0;
    case 166u: goto L_002B9DF8;
    case 167u: goto L_002B9E14;
    case 168u: goto L_002B9E38;
    case 169u: goto L_002B9E78;
    case 170u: goto L_002B9E94;
    case 171u: goto L_002B9EB8;
    case 172u: goto L_002B9ED0;
    case 173u: goto L_002B9F20;
    case 174u: goto L_002B9F58;
    case 175u: goto L_002B9F74;
    case 176u: goto L_002B9F98;
    case 177u: goto L_002BA02C;
    case 178u: goto L_002BA054;
    case 179u: goto L_002BA070;
    case 180u: goto L_002BA094;
    case 181u: goto L_002BA0B0;
    case 182u: goto L_002BA0C0;
    case 183u: goto L_002BA0F0;
    case 184u: goto L_002BA168;
    case 185u: goto L_002BA184;
    case 186u: goto L_002BA1A8;
    case 187u: goto L_002BA1C0;
    case 188u: goto L_002BA20C;
    case 189u: goto L_002BA228;
    case 190u: goto L_002BA24C;
    case 191u: goto L_002BA260;
    case 192u: goto L_002BA2C8;
    case 193u: goto L_002BA2FC;
    case 194u: goto L_002BA318;
    case 195u: goto L_002BA33C;
    case 196u: goto L_002BA384;
    case 197u: goto L_002BA3A0;
    case 198u: goto L_002BA3C4;
    case 199u: goto L_002BA3F0;
    case 200u: goto L_002BA428;
    case 201u: goto L_002BA444;
    case 202u: goto L_002BA468;
    case 203u: goto L_002BA4D8;
    case 204u: goto L_002BA4E0;
    case 205u: goto L_002BA530;
    case 206u: goto L_002BA540;
    case 207u: goto L_002BA54C;
    case 208u: goto L_002BA584;
    case 209u: goto L_002BA5A0;
    case 210u: goto L_002BA5C4;
    case 211u: goto L_002BA608;
    case 212u: goto L_002BA624;
    case 213u: goto L_002BA648;
    case 214u: goto L_002BA670;
    case 215u: goto L_002BA6F4;
    case 216u: goto L_002BA768;
    case 217u: goto L_002BA798;
    case 218u: goto L_002BA7A0;
    case 219u: goto L_002BA7E0;
    case 220u: goto L_002BA7F0;
    case 221u: goto L_002BA7FC;
    case 222u: goto L_002BA85C;
    case 223u: goto L_002BA878;
    case 224u: goto L_002BA89C;
    case 225u: goto L_002BA8D0;
    case 226u: goto L_002BA94C;
    case 227u: goto L_002BA974;
    case 228u: goto L_002BA990;
    case 229u: goto L_002BA9B4;
    case 230u: goto L_002BA9D0;
    case 231u: goto L_002BAA20;
    case 232u: goto L_002BAA54;
    case 233u: goto L_002BAA70;
    case 234u: goto L_002BAA94;
    case 235u: goto L_002BAADC;
    case 236u: goto L_002BAAF8;
    case 237u: goto L_002BAB1C;
    case 238u: goto L_002BAB50;
    case 239u: goto L_002BAB6C;
    case 240u: goto L_002BAB90;
    case 241u: goto L_002BABA0;
    case 242u: goto L_002BABF0;
    case 243u: goto L_002BAC0C;
    case 244u: goto L_002BAC30;
    case 245u: goto L_002BACB0;
    case 246u: goto L_002BACD0;
    case 247u: goto L_002BAD00;
    case 248u: goto L_002BAD1C;
    case 249u: goto L_002BAD40;
    case 250u: goto L_002BAD6C;
    case 251u: goto L_002BADB0;
    case 252u: goto L_002BADE8;
    case 253u: goto L_002BAE04;
    case 254u: goto L_002BAE28;
    case 255u: goto L_002BAE40;
    case 256u: goto L_002BAE6C;
    case 257u: goto L_002BAE9C;
    case 258u: goto L_002BAEB8;
    case 259u: goto L_002BAEDC;
    case 260u: goto L_002BAEF0;
    case 261u: goto L_002BAF40;
    case 262u: goto L_002BAF74;
    case 263u: goto L_002BAF90;
    case 264u: goto L_002BAFB4;
    case 265u: goto L_002BAFF4;
    case 266u: goto L_002BB010;
    case 267u: goto L_002BB034;
    case 268u: goto L_002BB050;
    case 269u: goto L_002BB0A0;
    case 270u: goto L_002BB0D4;
    case 271u: goto L_002BB0F0;
    case 272u: goto L_002BB114;
    case 273u: goto L_002BB154;
    case 274u: goto L_002BB170;
    case 275u: goto L_002BB194;
    case 276u: goto L_002BB1B0;
    case 277u: goto L_002BB208;
    case 278u: goto L_002BB240;
    case 279u: goto L_002BB25C;
    case 280u: goto L_002BB280;
    case 281u: goto L_002BB2F8;
    case 282u: goto L_002BB300;
    case 283u: goto L_002BB344;
    case 284u: goto L_002BB3A4;
    case 285u: goto L_002BB414;
    case 286u: goto L_002BB424;
    case 287u: goto L_002BB458;
    case 288u: goto L_002BB464;
    case 289u: goto L_002BB4C4;
    case 290u: goto L_002BB4DC;
    case 291u: goto L_002BB528;
    case 292u: goto L_002BB56C;
    case 293u: goto L_002BB588;
    case 294u: goto L_002BB5AC;
    case 295u: goto L_002BB5D0;
    case 296u: goto L_002BB628;
    case 297u: goto L_002BB660;
    case 298u: goto L_002BB67C;
    case 299u: goto L_002BB6A0;
    case 300u: goto L_002BB718;
    case 301u: goto L_002BB720;
    case 302u: goto L_002BB764;
    case 303u: goto L_002BB7C4;
    case 304u: goto L_002BB834;
    case 305u: goto L_002BB844;
    case 306u: goto L_002BB878;
    case 307u: goto L_002BB884;
    case 308u: goto L_002BB8E4;
    case 309u: goto L_002BB8FC;
    case 310u: goto L_002BB948;
    case 311u: goto L_002BB98C;
    case 312u: goto L_002BB9A8;
    case 313u: goto L_002BB9CC;
    case 314u: goto L_002BB9F0;
    case 315u: goto L_002BBA50;
    case 316u: goto L_002BBA6C;
    case 317u: goto L_002BBA90;
    case 318u: goto L_002BBADC;
    case 319u: goto L_002BBB10;
    case 320u: goto L_002BBB2C;
    case 321u: goto L_002BBB50;
    case 322u: goto L_002BBBAC;
    case 323u: goto L_002BBBD4;
    case 324u: goto L_002BBC2C;
    case 325u: goto L_002BBC48;
    case 326u: goto L_002BBC6C;
    case 327u: goto L_002BBC80;
    case 328u: goto L_002BBCD0;
    case 329u: goto L_002BBD04;
    case 330u: goto L_002BBD20;
    case 331u: goto L_002BBD44;
    case 332u: goto L_002BBD84;
    case 333u: goto L_002BBDA0;
    case 334u: goto L_002BBDC4;
    case 335u: goto L_002BBDE0;
    case 336u: goto L_002BBDF0;
    case 337u: goto L_002BBE30;
    case 338u: goto L_002BBE70;
    case 339u: goto L_002BBEAC;
    case 340u: goto L_002BBEC4;
    case 341u: goto L_002BBEDC;
    case 342u: goto L_002BBF00;
    case 343u: goto L_002BBF40;
    case 344u: goto L_002BBF6C;
    case 345u: goto L_002BBF90;
    case 346u: goto L_002BBFA0;
    case 347u: goto L_002BBFB0;
    case 348u: goto L_002BBFC0;
    case 349u: goto L_002BBFE4;
    default: bad_entry(c, 0x002B8000u); return;
    }
L_002B8000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B8010:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B8030; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002B8054; } }
L_002B8030:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002B8054; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002B8058; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B8054:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002B8058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8060u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 346u, depth + 1u); else { c.pc = 0x002A3390u; return; } if (c.pc != 0x002B8060u) [[unlikely]] return; }
L_002B8060:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 36u), 0u);  goto L_002B80E0; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002B8094; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B8094; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8094u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8094u) [[unlikely]] return; }
L_002B8094:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B80B0u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B80B0u) [[unlikely]] return; }
L_002B80B0:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B8158; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B8154; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B80D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B80D4u) [[unlikely]] return; }
L_002B80D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8154; } }
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 1;
L_002B80E0:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B8114; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B8114; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8114u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8114u) [[unlikely]] return; }
L_002B8114:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8130u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B8130u) [[unlikely]] return; }
L_002B8130:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8154; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B8154; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8154u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8154u) [[unlikely]] return; }
L_002B8154:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B8158:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B8170:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B8194; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002B81B8; } }
L_002B8194:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002B81B8; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002B81BC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B81B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002B81BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B81C4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002B81C4u) [[unlikely]] return; }
L_002B81C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002B81D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_002B81FC; } }
L_002B81D8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002B81FC; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002B8200; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B81FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002B8200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8208u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002B8208u) [[unlikely]] return; }
L_002B8208:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002B821C; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002B8290; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B821C:
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 80u), 0u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 96u), 0u);  if (t) { goto L_002B8244; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B8244; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8244u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8244u) [[unlikely]] return; }
L_002B8244:
    st32((c.r[29].w[0] + 84u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8260u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B8260u) [[unlikely]] return; }
L_002B8260:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002B8314; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B8310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8284u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8284u) [[unlikely]] return; }
L_002B8284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8310; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B8290:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B82A4u); st32((c.r[29].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_005B(c, 23u, depth + 1u); else { c.pc = 0x0028C540u; return; } if (c.pc != 0x002B82A4u) [[unlikely]] return; }
L_002B82A4:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_002B82D0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B82D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B82D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B82D0u) [[unlikely]] return; }
L_002B82D0:
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B82ECu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B82ECu) [[unlikely]] return; }
L_002B82EC:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8310; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B8310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8310u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8310u) [[unlikely]] return; }
L_002B8310:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002B8314:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002B8330:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B836C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[20].w[0] + 20u)));  if (t) { goto L_002B8390; } }
L_002B836C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002B8390; }
    c.f[0] = ld32((c.r[20].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002B8394; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B8390:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002B8394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B839Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002B839Cu) [[unlikely]] return; }
L_002B839C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { c.f[22] = ld32((c.r[18].w[0] + 656u));  goto L_002B8420; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 180u), 0u);
    st32((c.r[29].w[0] + 176u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 192u), 0u);  if (t) { goto L_002B83D4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B83D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B83D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B83D4u) [[unlikely]] return; }
L_002B83D4:
    st32((c.r[29].w[0] + 180u), 0u);
    set32(c.r[4], c.r[20].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B83F0u); st16((c.r[20].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B83F0u) [[unlikely]] return; }
L_002B83F0:
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_002B85D8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B85D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8414u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8414u) [[unlikely]] return; }
L_002B8414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B85D4; } }
    c.f[22] = ld32((c.r[18].w[0] + 656u));
    c.budget -= 1;
L_002B8420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8428u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002B8428u) [[unlikely]] return; }
L_002B8428:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002B844C; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[21] = ld32((c.r[2].w[0] + 36u));  if (t) { goto L_002B8454; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002B844C:
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    c.f[21] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 2;
L_002B8454:
    set32(c.r[17], ld32((c.r[3].w[0] + 960u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    set32(c.r[16], c.r[2].w[0] + 452u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002B855C; } }
    set32(c.r[2], c.r[19].w[0] << 2);
    c.budget -= 1;
L_002B846C:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[5].d[0]) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_002B855C; }
    set32(c.r[3], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], ld32((c.r[5].w[0] + 148u)));  if (t) { goto L_002B8490; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 40u)));  if (t) { goto L_002B84B4; } }
L_002B8490:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002B84B4; }
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B84B4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B84B4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002B8558; } }
    c.f[20] = ld32((c.r[5].w[0] + 656u));
    set32(c.r[4], c.r[18].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B84CCu); set32(c.r[5], c.r[5].w[0] + 192u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x002B84CCu) [[unlikely]] return; }
L_002B84CC:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[22]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B8558; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 148u), 0u);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 160u), 0u);  if (t) { goto L_002B8510; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B8510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8510u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8510u) [[unlikely]] return; }
L_002B8510:
    st32((c.r[29].w[0] + 148u), 0u);
    set32(c.r[4], c.r[20].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B852Cu); st16((c.r[20].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B852Cu) [[unlikely]] return; }
L_002B852C:
    set32(c.r[4], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B85D4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B85D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8550u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8550u) [[unlikely]] return; }
L_002B8550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B85D4; } }
L_002B8558:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002B855C:
    c.r[2].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B846Cu | kUnwind; return; } goto L_002B846C; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[29].w[0] + 112u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 128u), 0u);  if (t) { goto L_002B8594; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B8594; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8594u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8594u) [[unlikely]] return; }
L_002B8594:
    st32((c.r[29].w[0] + 116u), 0u);
    set32(c.r[4], c.r[20].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B85B0u); st16((c.r[20].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B85B0u) [[unlikely]] return; }
L_002B85B0:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B85D4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B85D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B85D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B85D4u) [[unlikely]] return; }
L_002B85D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002B85D8:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002B8600:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B8620; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002B8644; } }
L_002B8620:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002B8644; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002B8648; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B8644:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002B8648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8650u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002B8650u) [[unlikely]] return; }
L_002B8650:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 36u), 0u);  goto L_002B86D4; }
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002B8688; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B8688; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8688u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8688u) [[unlikely]] return; }
L_002B8688:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B86A4u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B86A4u) [[unlikely]] return; }
L_002B86A4:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B874C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B8748; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B86C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B86C8u) [[unlikely]] return; }
L_002B86C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8748; } }
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 1;
L_002B86D4:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[2], ld32((c.r[2].w[0] + 156u)));
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B8708; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B8708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8708u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8708u) [[unlikely]] return; }
L_002B8708:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8724u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B8724u) [[unlikely]] return; }
L_002B8724:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8748; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B8748; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8748u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8748u) [[unlikely]] return; }
L_002B8748:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B874C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B8760:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B8780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002B87A4; } }
L_002B8780:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002B87A4; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002B87A8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B87A4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002B87A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B87B0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002B87B0u) [[unlikely]] return; }
L_002B87B0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 36u), 0u);  goto L_002B8830; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002B87E4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B87E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B87E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B87E4u) [[unlikely]] return; }
L_002B87E4:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8800u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B8800u) [[unlikely]] return; }
L_002B8800:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B88A8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B88A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8824u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8824u) [[unlikely]] return; }
L_002B8824:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B88A4; } }
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 1;
L_002B8830:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 110u)));
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B8864; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B8864; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8864u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8864u) [[unlikely]] return; }
L_002B8864:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8880u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B8880u) [[unlikely]] return; }
L_002B8880:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B88A4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B88A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B88A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B88A4u) [[unlikely]] return; }
L_002B88A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B88A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B88C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B88E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002B890C; } }
L_002B88E8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002B890C; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002B8910; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B890C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002B8910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8918u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002B8918u) [[unlikely]] return; }
L_002B8918:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 68u), 0u);  goto L_002B899C; }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 96u), 0u);  if (t) { goto L_002B8950; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B8950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8950u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8950u) [[unlikely]] return; }
L_002B8950:
    st32((c.r[29].w[0] + 100u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B896Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B896Cu) [[unlikely]] return; }
L_002B896C:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002B8A84; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B8A80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8990u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8990u) [[unlikely]] return; }
L_002B8990:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8A80; } }
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 1;
L_002B899C:
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 108u)));
    c.budget -= 5;
    if (c.r[17].sd[0] > 0) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 110u)));  goto L_002B89C0; }
    c.f[1] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 68u)));  if (t) { goto L_002B8A18; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 110u)));
    c.budget -= 1;
L_002B89C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B89C8u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002B89C8u) [[unlikely]] return; }
L_002B89C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B89D4u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002B89D4u) [[unlikely]] return; }
L_002B89D4:
    c.f[1] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002B89FC; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_002B89FC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B8A14; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_002B8A14:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 1;
L_002B8A18:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_002B8A40; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B8A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8A40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8A40u) [[unlikely]] return; }
L_002B8A40:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8A5Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B8A5Cu) [[unlikely]] return; }
L_002B8A5C:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8A80; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B8A80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8A80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8A80u) [[unlikely]] return; }
L_002B8A80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002B8A84:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002B8AA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B8AC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002B8AE4; } }
L_002B8AC0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002B8AE4; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002B8AE8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B8AE4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002B8AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8AF0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002B8AF0u) [[unlikely]] return; }
L_002B8AF0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 36u), 0u);  goto L_002B8B70; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002B8B24; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B8B24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8B24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8B24u) [[unlikely]] return; }
L_002B8B24:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8B40u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B8B40u) [[unlikely]] return; }
L_002B8B40:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B8BE8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B8BE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8B64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8B64u) [[unlikely]] return; }
L_002B8B64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8BE4; } }
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 1;
L_002B8B70:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 116u)));
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B8BA4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B8BA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8BA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8BA4u) [[unlikely]] return; }
L_002B8BA4:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8BC0u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B8BC0u) [[unlikely]] return; }
L_002B8BC0:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8BE4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B8BE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8BE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8BE4u) [[unlikely]] return; }
L_002B8BE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B8BE8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B8C00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B8C28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002B8C4C; } }
L_002B8C28:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002B8C4C; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002B8C50; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B8C4C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002B8C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8C58u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002B8C58u) [[unlikely]] return; }
L_002B8C58:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 68u), 0u);  goto L_002B8CDC; }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 96u), 0u);  if (t) { goto L_002B8C90; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B8C90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8C90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8C90u) [[unlikely]] return; }
L_002B8C90:
    st32((c.r[29].w[0] + 100u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8CACu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B8CACu) [[unlikely]] return; }
L_002B8CAC:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002B8DC4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B8DC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8CD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8CD0u) [[unlikely]] return; }
L_002B8CD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8DC0; } }
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 1;
L_002B8CDC:
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 114u)));
    c.budget -= 5;
    if (c.r[17].sd[0] > 0) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 116u)));  goto L_002B8D00; }
    c.f[1] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 68u)));  if (t) { goto L_002B8D58; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 116u)));
    c.budget -= 1;
L_002B8D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8D08u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002B8D08u) [[unlikely]] return; }
L_002B8D08:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8D14u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002B8D14u) [[unlikely]] return; }
L_002B8D14:
    c.f[1] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002B8D3C; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_002B8D3C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B8D54; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_002B8D54:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 1;
L_002B8D58:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_002B8D80; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B8D80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8D80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8D80u) [[unlikely]] return; }
L_002B8D80:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8D9Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B8D9Cu) [[unlikely]] return; }
L_002B8D9C:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8DC0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B8DC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8DC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8DC0u) [[unlikely]] return; }
L_002B8DC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002B8DC4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002B8DE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 1u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 960u)));
    set32(c.r[2], c.r[4].w[0] + 112u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 452u);  if (t) { goto L_002B8E2C; } }
L_002B8E10:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_002B8E2C; }
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_002B8E2C:
    c.r[2].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[6].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B8E10u | kUnwind; return; } goto L_002B8E10; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 32u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B8E64; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B8E64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8E64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8E64u) [[unlikely]] return; }
L_002B8E64:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8E80u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B8E80u) [[unlikely]] return; }
L_002B8E80:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B8EA8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B8EA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8EA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8EA4u) [[unlikely]] return; }
L_002B8EA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B8EA8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B8EC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B8EEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002B8F04; } }
L_002B8EEC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_002B8F04; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 3;
L_002B8F04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8F0Cu);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002B8F0Cu) [[unlikely]] return; }
L_002B8F0C:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B8F34; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B8F34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8F34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8F34u) [[unlikely]] return; }
L_002B8F34:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8F50u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B8F50u) [[unlikely]] return; }
L_002B8F50:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B8F78; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B8F74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8F74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B8F74u) [[unlikely]] return; }
L_002B8F74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B8F78:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B8F90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B8FB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002B8FD4; } }
L_002B8FB0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002B8FD4; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002B8FD8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B8FD4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002B8FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8FE0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002B8FE0u) [[unlikely]] return; }
L_002B8FE0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_002B9064; }
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002B9018; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B9018; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9018u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B9018u) [[unlikely]] return; }
L_002B9018:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9034u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B9034u) [[unlikely]] return; }
L_002B9034:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B90E0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B90DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9058u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B9058u) [[unlikely]] return; }
L_002B9058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B90DC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002B9064:
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9074u); st32((c.r[29].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002B9074u) [[unlikely]] return; }
L_002B9074:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B909C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B909C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B909Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B909Cu) [[unlikely]] return; }
L_002B909C:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B90B8u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B90B8u) [[unlikely]] return; }
L_002B90B8:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B90DC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B90DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B90DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B90DCu) [[unlikely]] return; }
L_002B90DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B90E0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B90F0:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B9114; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_002B9138; } }
L_002B9114:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_002B9138; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002B913C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B9138:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002B913C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9144u);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002B9144u) [[unlikely]] return; }
L_002B9144:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 56u)));  goto L_002B91C4; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 276u), 0u);
    st32((c.r[29].w[0] + 272u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 288u), 0u);  if (t) { goto L_002B9178; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B9178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9178u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B9178u) [[unlikely]] return; }
L_002B9178:
    st32((c.r[29].w[0] + 276u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9194u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B9194u) [[unlikely]] return; }
L_002B9194:
    set32(c.r[4], ld32((c.r[29].w[0] + 276u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002B9630; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B962C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B91B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B91B8u) [[unlikely]] return; }
L_002B91B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B962C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_002B91C4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002B91D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 40u)));  if (t) { goto L_002B91F8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002B91D8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_002B91F8; }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002B91FC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B91F8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002B91FC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B9490; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B9358; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B9220; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002B95C4; } }
L_002B9220:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 4);  goto L_002B92C8; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002B9234:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[5].w[0] << 6);
    c.r[2].d[0] = c.r[5].sd[0] < 7ll ? 1ull : 0ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B9234u | kUnwind; return; } goto L_002B9234; } }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 240u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 244u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 256u), 0u);  if (t) { goto L_002B927C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B927C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B927Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B927Cu) [[unlikely]] return; }
L_002B927C:
    st32((c.r[29].w[0] + 244u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9298u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B9298u) [[unlikely]] return; }
L_002B9298:
    set32(c.r[4], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B962C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B962C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B92BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B92BCu) [[unlikely]] return; }
L_002B92BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B962C; } }
    set32(c.r[2], c.r[16].w[0] << 4);
    c.budget -= 1;
L_002B92C8:
    st32((c.r[29].w[0] + 212u), 0u);
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[29].w[0] + 208u), 0u);
    set32(c.r[3], c.r[2].w[0] << 2);
    st32((c.r[29].w[0] + 224u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 224u), 0u);  if (t) { goto L_002B9310; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B9310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9310u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B9310u) [[unlikely]] return; }
L_002B9310:
    st32((c.r[29].w[0] + 212u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B932Cu); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B932Cu) [[unlikely]] return; }
L_002B932C:
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B962C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B962C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9350u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B9350u) [[unlikely]] return; }
L_002B9350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B962C; } }
L_002B9358:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 4);  goto L_002B9400; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002B936C:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[5].w[0] << 6);
    c.r[2].d[0] = c.r[5].sd[0] < 7ll ? 1ull : 0ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B936Cu | kUnwind; return; } goto L_002B936C; } }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 176u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 180u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 192u), 0u);  if (t) { goto L_002B93B4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B93B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B93B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B93B4u) [[unlikely]] return; }
L_002B93B4:
    st32((c.r[29].w[0] + 180u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B93D0u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B93D0u) [[unlikely]] return; }
L_002B93D0:
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B962C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B962C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B93F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B93F4u) [[unlikely]] return; }
L_002B93F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B962C; } }
    set32(c.r[2], c.r[16].w[0] << 4);
    c.budget -= 1;
L_002B9400:
    st32((c.r[29].w[0] + 148u), 0u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 144u), 0u);
    set32(c.r[3], c.r[2].w[0] << 2);
    st32((c.r[29].w[0] + 160u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 160u), 0u);  if (t) { goto L_002B9448; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B9448; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9448u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B9448u) [[unlikely]] return; }
L_002B9448:
    st32((c.r[29].w[0] + 148u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9464u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B9464u) [[unlikely]] return; }
L_002B9464:
    set32(c.r[4], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B962C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B962C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9488u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B9488u) [[unlikely]] return; }
L_002B9488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B962C; } }
L_002B9490:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));  goto L_002B9538; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002B94A4:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[5].w[0] << 6);
    c.r[2].d[0] = c.r[5].sd[0] < 7ll ? 1ull : 0ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B94A4u | kUnwind; return; } goto L_002B94A4; } }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 112u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 116u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 128u), 0u);  if (t) { goto L_002B94EC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B94EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B94ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B94ECu) [[unlikely]] return; }
L_002B94EC:
    st32((c.r[29].w[0] + 116u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9508u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B9508u) [[unlikely]] return; }
L_002B9508:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B962C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B962C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B952Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B952Cu) [[unlikely]] return; }
L_002B952C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B962C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 1;
L_002B9538:
    set32(c.r[3], c.r[16].w[0] << 6);
    st32((c.r[29].w[0] + 84u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 96u), 0u);  if (t) { goto L_002B9578; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B9578; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9578u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B9578u) [[unlikely]] return; }
L_002B9578:
    st32((c.r[29].w[0] + 84u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9594u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B9594u) [[unlikely]] return; }
L_002B9594:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B962C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B962C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B95B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B95B8u) [[unlikely]] return; }
L_002B95B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B962C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B95C4:
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 64u), 0u);  if (t) { goto L_002B95EC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B95EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B95ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B95ECu) [[unlikely]] return; }
L_002B95EC:
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9608u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B9608u) [[unlikely]] return; }
L_002B9608:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B962C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B962C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B962Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B962Cu) [[unlikely]] return; }
L_002B962C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002B9630:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_002B9640:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B9660; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002B9678; } }
L_002B9660:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_002B9678; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_002B9678:
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002B9690; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_002B9690:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B96BC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B96BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B96BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B96BCu) [[unlikely]] return; }
L_002B96BC:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B96D8u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B96D8u) [[unlikely]] return; }
L_002B96D8:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B9700; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B96FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B96FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B96FCu) [[unlikely]] return; }
L_002B96FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B9700:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B9710:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B9730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_002B9754; } }
L_002B9730:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_002B9754; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  if (t) { goto L_002B9758; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B9754:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_002B9758:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002B976C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002B978C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002B976C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002B978C; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002B9790; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B978C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002B9790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9798u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x002B9798u) [[unlikely]] return; }
L_002B9798:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 36u), 0u);  goto L_002B981C; }
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002B97D0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B97D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B97D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B97D0u) [[unlikely]] return; }
L_002B97D0:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B97ECu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B97ECu) [[unlikely]] return; }
L_002B97EC:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B9894; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B9890; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9810u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B9810u) [[unlikely]] return; }
L_002B9810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B9890; } }
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 1;
L_002B981C:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[2], ld32((c.r[2].w[0] + 144u)));
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B9850; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B9850; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9850u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B9850u) [[unlikely]] return; }
L_002B9850:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B986Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B986Cu) [[unlikely]] return; }
L_002B986C:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B9890; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B9890; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9890u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B9890u) [[unlikely]] return; }
L_002B9890:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B9894:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B98A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B98C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002B98E4; } }
L_002B98C0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002B98E4; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002B98E8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B98E4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002B98E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B98F0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002B98F0u) [[unlikely]] return; }
L_002B98F0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 36u), 0u);  goto L_002B9974; }
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002B9928; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B9928; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9928u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B9928u) [[unlikely]] return; }
L_002B9928:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9944u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B9944u) [[unlikely]] return; }
L_002B9944:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B99EC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B99E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9968u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B9968u) [[unlikely]] return; }
L_002B9968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B99E8; } }
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 1;
L_002B9974:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[2], ld32((c.r[2].w[0] + 1100u)));
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B99A8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B99A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B99A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B99A8u) [[unlikely]] return; }
L_002B99A8:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B99C4u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B99C4u) [[unlikely]] return; }
L_002B99C4:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B99E8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B99E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B99E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B99E8u) [[unlikely]] return; }
L_002B99E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B99EC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B9A00:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B9A2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002B9A50; } }
L_002B9A2C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002B9A50; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002B9A54; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B9A50:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002B9A54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9A5Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002B9A5Cu) [[unlikely]] return; }
L_002B9A5C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 84u), 0u);  goto L_002B9AE0; }
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 128u), 0u);  if (t) { goto L_002B9A94; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B9A94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9A94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B9A94u) [[unlikely]] return; }
L_002B9A94:
    st32((c.r[29].w[0] + 116u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9AB0u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B9AB0u) [[unlikely]] return; }
L_002B9AB0:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002B9BF0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B9BEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9AD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B9AD4u) [[unlikely]] return; }
L_002B9AD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B9BEC; } }
    st32((c.r[29].w[0] + 84u), 0u);
    c.budget -= 1;
L_002B9AE0:
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 108u)));
    c.budget -= 5;
    if (c.r[18].sd[0] > 0) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002B9B00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B9B80; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002B9B00:
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] > 0; set32(c.r[17], c.r[3].w[0] + 76u);  if (t) { goto L_002B9B18; } }
    c.f[1] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0] + 92u));  if (t) { goto L_002B9B70; } }
L_002B9B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9B20u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 110u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002B9B20u) [[unlikely]] return; }
L_002B9B20:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9B2Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002B9B2Cu) [[unlikely]] return; }
L_002B9B2C:
    c.f[1] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002B9B54; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_002B9B54:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B9B6C; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_002B9B6C:
    c.f[0] = ld32((c.r[17].w[0] + 92u));
    c.budget -= 1;
L_002B9B70:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B9B80; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B9B80:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st32((c.r[29].w[0] + 96u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_002B9BAC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B9BAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9BACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B9BACu) [[unlikely]] return; }
L_002B9BAC:
    st32((c.r[29].w[0] + 84u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9BC8u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B9BC8u) [[unlikely]] return; }
L_002B9BC8:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B9BEC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B9BEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9BECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B9BECu) [[unlikely]] return; }
L_002B9BEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002B9BF0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002B9C10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B9C30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002B9C54; } }
L_002B9C30:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002B9C54; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002B9C58; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B9C54:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002B9C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9C60u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002B9C60u) [[unlikely]] return; }
L_002B9C60:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 36u), 0u);  goto L_002B9CE4; }
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002B9C98; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B9C98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9C98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B9C98u) [[unlikely]] return; }
L_002B9C98:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9CB4u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B9CB4u) [[unlikely]] return; }
L_002B9CB4:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B9D5C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B9D58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9CD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B9CD8u) [[unlikely]] return; }
L_002B9CD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B9D58; } }
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 1;
L_002B9CE4:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[2], ld32((c.r[2].w[0] + 1296u)));
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B9D18; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B9D18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9D18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B9D18u) [[unlikely]] return; }
L_002B9D18:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9D34u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B9D34u) [[unlikely]] return; }
L_002B9D34:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B9D58; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B9D58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9D58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B9D58u) [[unlikely]] return; }
L_002B9D58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B9D5C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B9D70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B9D90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002B9DB4; } }
L_002B9D90:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002B9DB4; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002B9DB8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B9DB4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002B9DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9DC0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002B9DC0u) [[unlikely]] return; }
L_002B9DC0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 36u), 0u);  goto L_002B9E44; }
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002B9DF8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B9DF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9DF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B9DF8u) [[unlikely]] return; }
L_002B9DF8:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9E14u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B9E14u) [[unlikely]] return; }
L_002B9E14:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B9EBC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B9EB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9E38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B9E38u) [[unlikely]] return; }
L_002B9E38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B9EB8; } }
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 1;
L_002B9E44:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[2], ld32((c.r[2].w[0] + 1412u)));
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002B9E78; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B9E78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9E78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B9E78u) [[unlikely]] return; }
L_002B9E78:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9E94u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B9E94u) [[unlikely]] return; }
L_002B9E94:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B9EB8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B9EB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9EB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B9EB8u) [[unlikely]] return; }
L_002B9EB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B9EBC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B9ED0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B9EF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002B9F14; } }
L_002B9EF0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002B9F14; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002B9F18; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B9F14:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002B9F18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9F20u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002B9F20u) [[unlikely]] return; }
L_002B9F20:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 36u), 0u);  goto L_002B9FA4; }
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002B9F58; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B9F58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9F58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B9F58u) [[unlikely]] return; }
L_002B9F58:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9F74u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002B9F74u) [[unlikely]] return; }
L_002B9F74:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002BA098; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BA094; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9F98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002B9F98u) [[unlikely]] return; }
L_002B9F98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA094; } }
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 1;
L_002B9FA4:
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 5;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002B9FC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_002B9FE4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002B9FC4:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002B9FE4; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (t) { goto L_002B9FE8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B9FE4:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_002B9FE8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002B9FFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 60u)));  if (t) { goto L_002BA01C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002B9FFC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_002BA01C; }
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002BA020; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BA01C:
    set32(c.r[25], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002BA020:
    set32(c.r[25], ld32((c.r[25].w[0] + 196u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA02Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BA02Cu) [[unlikely]] return; }
L_002BA02C:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002BA054; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BA054; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA054u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BA054u) [[unlikely]] return; }
L_002BA054:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA070u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BA070u) [[unlikely]] return; }
L_002BA070:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BA094; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BA094; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA094u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BA094u) [[unlikely]] return; }
L_002BA094:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002BA098:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002BA0B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_002BA0C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 1u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 960u)));
    set32(c.r[2], c.r[4].w[0] + 112u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + 452u);  if (t) { goto L_002BA130; } }
L_002BA0F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 148u)));  if (t) { goto L_002BA10C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002BA120; } }
L_002BA10C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002BA120; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_002BA120:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002BA130; }
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 2;
L_002BA130:
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[7].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA0F0u | kUnwind; return; } goto L_002BA0F0; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 32u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002BA168; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BA168; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA168u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BA168u) [[unlikely]] return; }
L_002BA168:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA184u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BA184u) [[unlikely]] return; }
L_002BA184:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002BA1AC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BA1A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA1A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BA1A8u) [[unlikely]] return; }
L_002BA1A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002BA1AC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BA1C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002BA20C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BA20C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA20Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BA20Cu) [[unlikely]] return; }
L_002BA20C:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA228u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BA228u) [[unlikely]] return; }
L_002BA228:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002BA250; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BA24C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA24Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BA24Cu) [[unlikely]] return; }
L_002BA24C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002BA250:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BA260:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BA298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[18].w[0] + 20u)));  if (t) { goto L_002BA2BC; } }
L_002BA298:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002BA2BC; }
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002BA2C0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BA2BC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002BA2C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA2C8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002BA2C8u) [[unlikely]] return; }
L_002BA2C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BA344; } }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 308u), 0u);
    st32((c.r[29].w[0] + 304u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 320u), 0u);  if (t) { goto L_002BA2FC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BA2FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA2FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BA2FCu) [[unlikely]] return; }
L_002BA2FC:
    st32((c.r[29].w[0] + 308u), 0u);
    set32(c.r[4], c.r[18].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 304u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA318u); st16((c.r[18].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BA318u) [[unlikely]] return; }
L_002BA318:
    set32(c.r[4], ld32((c.r[29].w[0] + 308u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_002BA64C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BA648; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA33Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BA33Cu) [[unlikely]] return; }
L_002BA33C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA648; } }
L_002BA344:
    set32(c.r[4], ld32((c.r[2].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[19], ld32((c.r[2].w[0] + 1296u)));  goto L_002BA3D0; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 276u), 0u);
    st32((c.r[29].w[0] + 272u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 288u), 0u);  if (t) { goto L_002BA384; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BA384; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA384u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BA384u) [[unlikely]] return; }
L_002BA384:
    st32((c.r[29].w[0] + 276u), 0u);
    set32(c.r[4], c.r[18].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA3A0u); st16((c.r[18].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BA3A0u) [[unlikely]] return; }
L_002BA3A0:
    set32(c.r[4], ld32((c.r[29].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BA648; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BA648; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA3C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BA3C4u) [[unlikely]] return; }
L_002BA3C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA648; } }
    set32(c.r[19], ld32((c.r[2].w[0] + 1296u)));
    c.budget -= 1;
L_002BA3D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002BA3E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (t) { goto L_002BA3E8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BA3E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA3F0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 95u, depth + 1u); else { c.pc = 0x00268E80u; return; } if (c.pc != 0x002BA3F0u) [[unlikely]] return; }
L_002BA3F0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 56u)));  goto L_002BA474; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 244u), 0u);
    st32((c.r[29].w[0] + 240u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 256u), 0u);  if (t) { goto L_002BA428; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BA428; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA428u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BA428u) [[unlikely]] return; }
L_002BA428:
    st32((c.r[29].w[0] + 244u), 0u);
    set32(c.r[4], c.r[18].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA444u); st16((c.r[18].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BA444u) [[unlikely]] return; }
L_002BA444:
    set32(c.r[4], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BA648; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BA648; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA468u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BA468u) [[unlikely]] return; }
L_002BA468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA648; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 1;
L_002BA474:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002BA488; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 40u)));  if (t) { goto L_002BA4A8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002BA488:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002BA4A8; }
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] - 1u);  if (t) { goto L_002BA4AC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BA4A8:
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_002BA4AC:
    set32(c.r[22], ld32((c.r[20].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[21], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    set32(c.r[2], c.r[19].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[2].w[0] << 4);  if (t) { goto L_002BA5D0; } }
    set32(c.r[4], c.r[20].w[0] + 20u);
    c.budget -= 1;
L_002BA4D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA4E0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 93u, depth + 1u); else { c.pc = 0x00214C90u; return; } if (c.pc != 0x002BA4E0u) [[unlikely]] return; }
L_002BA4E0:
    c.r[2].d[0] = c.r[2].d[0] & c.r[21].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002BA5D0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002BA50C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);  if (t) { goto L_002BA50C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BA50C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[7].d[0] = 0ull + 0ull;  goto L_002BA520; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] + 272u);  if (t) { goto L_002BA520; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BA520:
    set32(c.r[4], c.r[20].w[0] + 20u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA530u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 96u, depth + 1u); else { c.pc = 0x00214CF0u; return; } if (c.pc != 0x002BA530u) [[unlikely]] return; }
L_002BA530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA5CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA540u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002BA540u) [[unlikely]] return; }
L_002BA540:
    set32(c.r[4], c.r[17].w[0] + 624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA54Cu); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0016(c, 254u, depth + 1u); else { c.pc = 0x0017B7B0u; return; } if (c.pc != 0x002BA54Cu) [[unlikely]] return; }
L_002BA54C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA5CC; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 164u), 0u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 176u), 0u);  if (t) { goto L_002BA584; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BA584; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA584u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BA584u) [[unlikely]] return; }
L_002BA584:
    st32((c.r[29].w[0] + 164u), 0u);
    set32(c.r[4], c.r[18].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA5A0u); st16((c.r[18].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BA5A0u) [[unlikely]] return; }
L_002BA5A0:
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BA648; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BA648; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA5C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BA5C4u) [[unlikely]] return; }
L_002BA5C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA648; } }
L_002BA5CC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002BA5D0:
    c.r[2].d[0] = c.r[16].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[20].w[0] + 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA4D8u | kUnwind; return; } goto L_002BA4D8; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 144u), 0u);  if (t) { goto L_002BA608; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BA608; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA608u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BA608u) [[unlikely]] return; }
L_002BA608:
    st32((c.r[29].w[0] + 132u), 0u);
    set32(c.r[4], c.r[18].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA624u); st16((c.r[18].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BA624u) [[unlikely]] return; }
L_002BA624:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BA648; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BA648; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA648u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BA648u) [[unlikely]] return; }
L_002BA648:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_002BA64C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_002BA670:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BA6B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 40u)));  if (t) { goto L_002BA6CC; } }
L_002BA6B4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002BA6CC; }
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_002BA6CC:
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    set32(c.r[23], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    set32(c.r[30], ld32((c.r[3].w[0] + 960u)));
    set32(c.r[2], c.r[2].w[0] + 452u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (t) { goto L_002BA824; } }
L_002BA6F4:
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 148u)));  if (t) { goto L_002BA714; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 20u)));  if (t) { goto L_002BA72C; } }
L_002BA714:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002BA72C; }
    c.f[0] = ld32((c.r[20].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_002BA72C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_002BA824; }
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA820; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 1296u)));  if (t) { goto L_002BA75C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (t) { goto L_002BA760; } }
L_002BA75C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BA760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA768u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 95u, depth + 1u); else { c.pc = 0x00268E80u; return; } if (c.pc != 0x002BA768u) [[unlikely]] return; }
L_002BA768:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002BA820; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 48u)));
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] << 4);  if (t) { goto L_002BA810; } }
L_002BA798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA7A0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 93u, depth + 1u); else { c.pc = 0x00214C90u; return; } if (c.pc != 0x002BA7A0u) [[unlikely]] return; }
L_002BA7A0:
    c.r[2].d[0] = c.r[2].d[0] & c.r[23].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002BA810; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002BA7C4; }
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 2;
L_002BA7C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[7].d[0] = 0ull + 0ull;  goto L_002BA7D0; }
    set32(c.r[7], c.r[2].w[0] + 272u);
    c.budget -= 1;
L_002BA7D0:
    set32(c.r[4], c.r[21].w[0] + 20u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA7E0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 96u, depth + 1u); else { c.pc = 0x00214CF0u; return; } if (c.pc != 0x002BA7E0u) [[unlikely]] return; }
L_002BA7E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA80C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA7F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002BA7F0u) [[unlikely]] return; }
L_002BA7F0:
    set32(c.r[4], c.r[18].w[0] + 624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA7FCu); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0016(c, 254u, depth + 1u); else { c.pc = 0x0017B7B0u; return; } if (c.pc != 0x002BA7FCu) [[unlikely]] return; }
L_002BA7FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA80C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[22].w[0] + 1u);  if (t) { goto L_002BA820; } }
L_002BA80C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002BA810:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[21].w[0] + 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA798u | kUnwind; return; } goto L_002BA798; }
L_002BA820:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002BA824:
    c.r[2].d[0] = c.r[19].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA6F4u | kUnwind; return; } goto L_002BA6F4; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 192u), c.r[22].w[0]);
    st32((c.r[29].w[0] + 196u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 208u), 0u);  if (t) { goto L_002BA85C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BA85C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA85Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BA85Cu) [[unlikely]] return; }
L_002BA85C:
    st32((c.r[29].w[0] + 196u), 0u);
    set32(c.r[4], c.r[20].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA878u); st16((c.r[20].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BA878u) [[unlikely]] return; }
L_002BA878:
    set32(c.r[4], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_002BA8A0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BA89C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA89Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BA89Cu) [[unlikely]] return; }
L_002BA89C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_002BA8A0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_002BA8D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 36u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 80u)));  if (t) { goto L_002BA904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002BA91C; } }
L_002BA904:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002BA91C; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_002BA91C:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002BA930; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_002BA944; } }
L_002BA930:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_002BA944; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_002BA944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA94Cu);  if (depth < kMaxDepth) unit_005C(c, 255u, depth + 1u); else { c.pc = 0x00292250u; return; } if (c.pc != 0x002BA94Cu) [[unlikely]] return; }
L_002BA94C:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002BA974; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BA974; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA974u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BA974u) [[unlikely]] return; }
L_002BA974:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA990u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BA990u) [[unlikely]] return; }
L_002BA990:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002BA9B8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BA9B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA9B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BA9B4u) [[unlikely]] return; }
L_002BA9B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002BA9B8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BA9D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BA9F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002BAA14; } }
L_002BA9F0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002BAA14; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002BAA18; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BAA14:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002BAA18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAA20u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002BAA20u) [[unlikely]] return; }
L_002BAA20:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 172u)));  goto L_002BAAA0; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 112u), 0u);  if (t) { goto L_002BAA54; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BAA54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAA54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BAA54u) [[unlikely]] return; }
L_002BAA54:
    st32((c.r[29].w[0] + 100u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAA70u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BAA70u) [[unlikely]] return; }
L_002BAA70:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002BAB94; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BAB90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAA94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BAA94u) [[unlikely]] return; }
L_002BAA94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BAB90; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 172u)));
    c.budget -= 1;
L_002BAAA0:
    c.r[2].d[0] = c.r[2].d[0] & 6157ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002BAB28; }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002BAADC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BAADC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAADCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BAADCu) [[unlikely]] return; }
L_002BAADC:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAAF8u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BAAF8u) [[unlikely]] return; }
L_002BAAF8:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BAB90; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BAB90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAB1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BAB1Cu) [[unlikely]] return; }
L_002BAB1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BAB90; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BAB28:
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), 0u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002BAB50; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BAB50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAB50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BAB50u) [[unlikely]] return; }
L_002BAB50:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAB6Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BAB6Cu) [[unlikely]] return; }
L_002BAB6C:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BAB90; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BAB90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAB90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BAB90u) [[unlikely]] return; }
L_002BAB90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002BAB94:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002BABA0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 8;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 724u)));  goto L_002BAC3C; }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 112u), 0u);  if (t) { goto L_002BABF0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BABF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BABF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BABF0u) [[unlikely]] return; }
L_002BABF0:
    st32((c.r[29].w[0] + 100u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAC0Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BAC0Cu) [[unlikely]] return; }
L_002BAC0C:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002BAE2C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BAE28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAC30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BAC30u) [[unlikely]] return; }
L_002BAC30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BAE28; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 724u)));
    c.budget -= 1;
L_002BAC3C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 464u)));  goto L_002BAD80; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002BAD54; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 16u)));  goto L_002BAC68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BAE28; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_002BAC68:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002BACA0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BAC84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002BACA0; } }
L_002BAC84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002BACA0; } }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BACA0; } }
L_002BACA0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 724u)));  goto L_002BAD4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BACB0u);  if (depth < kMaxDepth) unit_005A(c, 206u, depth + 1u); else { c.pc = 0x00289C30u; return; } if (c.pc != 0x002BACB0u) [[unlikely]] return; }
L_002BACB0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002BACC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  if (t) { goto L_002BACC8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BACC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BACD0u);  if (depth < kMaxDepth) unit_005B(c, 242u, depth + 1u); else { c.pc = 0x0028E560u; return; } if (c.pc != 0x002BACD0u) [[unlikely]] return; }
L_002BACD0:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002BAD00; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BAD00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAD00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BAD00u) [[unlikely]] return; }
L_002BAD00:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAD1Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BAD1Cu) [[unlikely]] return; }
L_002BAD1C:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BAE28; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BAE28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAD40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BAD40u) [[unlikely]] return; }
L_002BAD40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BAE28; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 724u)));
    c.budget -= 1;
L_002BAD4C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 724u), c.r[2].w[0]);
    c.budget -= 2;
L_002BAD54:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAD6Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x002BAD6Cu) [[unlikely]] return; }
L_002BAD6C:
    set32(c.r[3], ld32((c.r[16].w[0] + 724u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 724u), c.r[3].w[0]);  if (t) { goto L_002BAE28; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    c.budget -= 1;
L_002BAD80:
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 176u)));  goto L_002BAD98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002BADA0; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 1;
L_002BAD98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 2;
L_002BADA0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BAE28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BADB0u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x002BADB0u) [[unlikely]] return; }
L_002BADB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BAE28; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002BADE8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BADE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BADE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BADE8u) [[unlikely]] return; }
L_002BADE8:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAE04u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BAE04u) [[unlikely]] return; }
L_002BAE04:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BAE28; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BAE28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAE28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BAE28u) [[unlikely]] return; }
L_002BAE28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002BAE2C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002BAE40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BAE60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  if (t) { goto L_002BAE64; } }
L_002BAE60:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BAE64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAE6Cu);  if (depth < kMaxDepth) unit_005B(c, 261u, depth + 1u); else { c.pc = 0x0028E890u; return; } if (c.pc != 0x002BAE6Cu) [[unlikely]] return; }
L_002BAE6C:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002BAE9C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BAE9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAE9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BAE9Cu) [[unlikely]] return; }
L_002BAE9C:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAEB8u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BAEB8u) [[unlikely]] return; }
L_002BAEB8:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002BAEE0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BAEDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAEDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BAEDCu) [[unlikely]] return; }
L_002BAEDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002BAEE0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BAEF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BAF10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002BAF34; } }
L_002BAF10:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002BAF34; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002BAF38; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BAF34:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002BAF38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAF40u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002BAF40u) [[unlikely]] return; }
L_002BAF40:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 36u), 0u);  goto L_002BAFC0; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002BAF74; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BAF74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAF74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BAF74u) [[unlikely]] return; }
L_002BAF74:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAF90u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BAF90u) [[unlikely]] return; }
L_002BAF90:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002BB038; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BB034; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAFB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BAFB4u) [[unlikely]] return; }
L_002BAFB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB034; } }
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 1;
L_002BAFC0:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 108u)));
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002BAFF4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BAFF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAFF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BAFF4u) [[unlikely]] return; }
L_002BAFF4:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB010u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BB010u) [[unlikely]] return; }
L_002BB010:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BB034; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BB034; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB034u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BB034u) [[unlikely]] return; }
L_002BB034:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002BB038:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002BB050:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BB070; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002BB094; } }
L_002BB070:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002BB094; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002BB098; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB094:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002BB098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB0A0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002BB0A0u) [[unlikely]] return; }
L_002BB0A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 36u), 0u);  goto L_002BB120; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002BB0D4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BB0D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB0D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BB0D4u) [[unlikely]] return; }
L_002BB0D4:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB0F0u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BB0F0u) [[unlikely]] return; }
L_002BB0F0:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002BB198; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BB194; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB114u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BB114u) [[unlikely]] return; }
L_002BB114:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB194; } }
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 1;
L_002BB120:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 114u)));
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002BB154; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BB154; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB154u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BB154u) [[unlikely]] return; }
L_002BB154:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB170u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BB170u) [[unlikely]] return; }
L_002BB170:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BB194; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BB194; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB194u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BB194u) [[unlikely]] return; }
L_002BB194:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002BB198:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002BB1B0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BB1D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_002BB1FC; } }
L_002BB1D8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002BB1FC; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002BB200; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB1FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002BB200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB208u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002BB208u) [[unlikely]] return; }
L_002BB208:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 724u)));  goto L_002BB28C; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 112u), 0u);  if (t) { goto L_002BB240; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BB240; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB240u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BB240u) [[unlikely]] return; }
L_002BB240:
    st32((c.r[29].w[0] + 100u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB25Cu); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BB25Cu) [[unlikely]] return; }
L_002BB25C:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002BB5B0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BB5AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB280u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BB280u) [[unlikely]] return; }
L_002BB280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB5AC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 724u)));
    c.budget -= 1;
L_002BB28C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002BB540; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 76u)));  goto L_002BB474; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 76u)));  goto L_002BB2B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB5AC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_002BB2B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB2C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 60u)));  if (t) { goto L_002BB2E8; } }
L_002BB2C8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002BB2E8; }
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB2E8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB2E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 56u)));  goto L_002BB304; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB2F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 32u, depth + 1u); else { c.pc = 0x0028C6D0u; return; } if (c.pc != 0x002BB2F8u) [[unlikely]] return; }
L_002BB2F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB300u); set32(c.r[4], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0059(c, 335u, depth + 1u); else { c.pc = 0x00286550u; return; } if (c.pc != 0x002BB300u) [[unlikely]] return; }
L_002BB300:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_002BB304:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002BB31C; }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002BB330; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002BB31C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BB32C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 40u));  if (t) { goto L_002BB330; } }
L_002BB32C:
    c.f[1] = 0u;
    c.budget -= 1;
L_002BB330:
    c.f[0] = ld32((c.r[16].w[0] + 1148u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB344u); st32((c.r[16].w[0] + 1148u), c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 365u, depth + 1u); else { c.pc = 0x0028BB30u; return; } if (c.pc != 0x002BB344u) [[unlikely]] return; }
L_002BB344:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002BB35C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 80u)));  if (t) { goto L_002BB37C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002BB35C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002BB37C; }
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB37C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB37C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 724u)));  goto L_002BB468; }
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002BB39C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002BB404; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002BB39C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB3A4u); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002BB3A4u) [[unlikely]] return; }
L_002BB3A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002BB3C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002BB3D8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_002BB3C8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002BB3D8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002BB404; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_002BB3F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002BB3F8; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_002BB3F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB404; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB404:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 19u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB414u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x002BB414u) [[unlikely]] return; }
L_002BB414:
    set32(c.r[5], ld32((c.r[16].w[0] + 144u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB424u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002BB424u) [[unlikely]] return; }
L_002BB424:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002BB43C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 152u)));  if (t) { goto L_002BB43C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB43C:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB458u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x002BB458u) [[unlikely]] return; }
L_002BB458:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB464u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x002BB464u) [[unlikely]] return; }
L_002BB464:
    set32(c.r[2], ld32((c.r[17].w[0] + 724u)));
    c.budget -= 1;
L_002BB468:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 724u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
L_002BB474:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002BB488; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 60u)));  if (t) { goto L_002BB4A8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002BB488:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002BB4A8; }
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB4A8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB4A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 96u)));  goto L_002BB4E0; }
    set32(c.r[18], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002BB4CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB4C4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 328u, depth + 1u); else { c.pc = 0x00286460u; return; } if (c.pc != 0x002BB4C4u) [[unlikely]] return; }
L_002BB4C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB5AC; } }
L_002BB4CC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002BB4DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB4DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 35u, depth + 1u); else { c.pc = 0x0028C720u; return; } if (c.pc != 0x002BB4DCu) [[unlikely]] return; }
L_002BB4DC:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_002BB4E0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002BB4F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 80u)));  if (t) { goto L_002BB514; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002BB4F4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002BB514; }
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB514; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB514:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 724u)));  goto L_002BB534; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB528u); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x002BB528u) [[unlikely]] return; }
L_002BB528:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB5AC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 724u)));
    c.budget -= 1;
L_002BB534:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 724u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_002BB540:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002BB56C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BB56C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB56Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BB56Cu) [[unlikely]] return; }
L_002BB56C:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB588u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BB588u) [[unlikely]] return; }
L_002BB588:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BB5AC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BB5AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB5ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BB5ACu) [[unlikely]] return; }
L_002BB5AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002BB5B0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002BB5D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BB5F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_002BB61C; } }
L_002BB5F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002BB61C; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002BB620; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB61C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002BB620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB628u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002BB628u) [[unlikely]] return; }
L_002BB628:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 724u)));  goto L_002BB6AC; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 112u), 0u);  if (t) { goto L_002BB660; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BB660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB660u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BB660u) [[unlikely]] return; }
L_002BB660:
    st32((c.r[29].w[0] + 100u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB67Cu); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BB67Cu) [[unlikely]] return; }
L_002BB67C:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002BB9D0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BB9CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB6A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BB6A0u) [[unlikely]] return; }
L_002BB6A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB9CC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 724u)));
    c.budget -= 1;
L_002BB6AC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002BB960; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 76u)));  goto L_002BB894; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 76u)));  goto L_002BB6D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB9CC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_002BB6D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB6E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 60u)));  if (t) { goto L_002BB708; } }
L_002BB6E8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002BB708; }
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB708; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB708:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 56u)));  goto L_002BB724; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB718u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 32u, depth + 1u); else { c.pc = 0x0028C6D0u; return; } if (c.pc != 0x002BB718u) [[unlikely]] return; }
L_002BB718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB720u); set32(c.r[4], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0059(c, 335u, depth + 1u); else { c.pc = 0x00286550u; return; } if (c.pc != 0x002BB720u) [[unlikely]] return; }
L_002BB720:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_002BB724:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002BB73C; }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002BB750; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002BB73C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BB74C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 40u));  if (t) { goto L_002BB750; } }
L_002BB74C:
    c.f[1] = 0u;
    c.budget -= 1;
L_002BB750:
    c.f[0] = ld32((c.r[16].w[0] + 1152u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB764u); st32((c.r[16].w[0] + 1152u), c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 365u, depth + 1u); else { c.pc = 0x0028BB30u; return; } if (c.pc != 0x002BB764u) [[unlikely]] return; }
L_002BB764:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002BB77C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 80u)));  if (t) { goto L_002BB79C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002BB77C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002BB79C; }
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB79C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB79C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 724u)));  goto L_002BB888; }
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002BB7BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002BB824; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002BB7BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB7C4u); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002BB7C4u) [[unlikely]] return; }
L_002BB7C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002BB7E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002BB7F8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_002BB7E8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002BB7F8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002BB824; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_002BB818; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002BB818; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_002BB818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB824; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB824:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 21u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB834u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x002BB834u) [[unlikely]] return; }
L_002BB834:
    set32(c.r[5], ld32((c.r[16].w[0] + 144u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB844u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002BB844u) [[unlikely]] return; }
L_002BB844:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002BB85C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 152u)));  if (t) { goto L_002BB85C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB85C:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 21u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB878u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x002BB878u) [[unlikely]] return; }
L_002BB878:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB884u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x002BB884u) [[unlikely]] return; }
L_002BB884:
    set32(c.r[2], ld32((c.r[17].w[0] + 724u)));
    c.budget -= 1;
L_002BB888:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 724u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
L_002BB894:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002BB8A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 60u)));  if (t) { goto L_002BB8C8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002BB8A8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002BB8C8; }
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB8C8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB8C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 96u)));  goto L_002BB900; }
    set32(c.r[18], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002BB8EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB8E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 328u, depth + 1u); else { c.pc = 0x00286460u; return; } if (c.pc != 0x002BB8E4u) [[unlikely]] return; }
L_002BB8E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB9CC; } }
L_002BB8EC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002BB8FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB8FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 35u, depth + 1u); else { c.pc = 0x0028C720u; return; } if (c.pc != 0x002BB8FCu) [[unlikely]] return; }
L_002BB8FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_002BB900:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002BB914; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 80u)));  if (t) { goto L_002BB934; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002BB914:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002BB934; }
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB934; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB934:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 724u)));  goto L_002BB954; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB948u); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x002BB948u) [[unlikely]] return; }
L_002BB948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB9CC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 724u)));
    c.budget -= 1;
L_002BB954:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 724u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_002BB960:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002BB98C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BB98C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB98Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BB98Cu) [[unlikely]] return; }
L_002BB98C:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB9A8u); st16((c.r[17].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BB9A8u) [[unlikely]] return; }
L_002BB9A8:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BB9CC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BB9CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB9CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BB9CCu) [[unlikely]] return; }
L_002BB9CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002BB9D0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002BB9F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BBA1C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002BBA1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_002BBA9C; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 112u), 0u);  if (t) { goto L_002BBA50; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BBA50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBA50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BBA50u) [[unlikely]] return; }
L_002BBA50:
    st32((c.r[29].w[0] + 100u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBA6Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BBA6Cu) [[unlikely]] return; }
L_002BBA6C:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002BBC70; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BBC6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBA90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BBA90u) [[unlikely]] return; }
L_002BBA90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BBC6C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_002BBA9C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002BBAB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002BBAD0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002BBAB0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002BBAD0; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 112u);  if (t) { goto L_002BBAD4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BBAD0:
    set32(c.r[4], c.r[4].w[0] + 112u);
    c.budget -= 1;
L_002BBAD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBADCu);  if (depth < kMaxDepth) unit_0060(c, 346u, depth + 1u); else { c.pc = 0x002A3390u; return; } if (c.pc != 0x002BBADCu) [[unlikely]] return; }
L_002BBADC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 724u)));  goto L_002BBB5C; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002BBB10; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BBB10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBB10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BBB10u) [[unlikely]] return; }
L_002BBB10:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBB2Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BBB2Cu) [[unlikely]] return; }
L_002BBB2C:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BBC6C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BBC6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBB50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BBB50u) [[unlikely]] return; }
L_002BBB50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BBC6C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 724u)));
    c.budget -= 1;
L_002BBB5C:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002BBC00; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002BBBE8; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[2].w[0] + 144u)));  goto L_002BBB88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BBC6C; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 1;
L_002BBB88:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002BBBA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  if (t) { goto L_002BBBA0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BBBA0:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBBACu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 257u, depth + 1u); else { c.pc = 0x00282630u; return; } if (c.pc != 0x002BBBACu) [[unlikely]] return; }
L_002BBBAC:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 724u)));  goto L_002BBBD8; }
    set32(c.r[25], ld32((c.r[16].w[0] + 704u)));
    set32(c.r[4], c.r[16].w[0] + 704u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBBD4u); set32(c.r[5], 0u + 14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BBBD4u) [[unlikely]] return; }
L_002BBBD4:
    set32(c.r[3], ld32((c.r[16].w[0] + 724u)));
    c.budget -= 1;
L_002BBBD8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 724u), c.r[3].w[0]);  if (t) { goto L_002BBC6C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002BBBE8:
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002BBC6C; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[16].w[0] + 724u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_002BBC00:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002BBC2C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BBC2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBC2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BBC2Cu) [[unlikely]] return; }
L_002BBC2C:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBC48u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BBC48u) [[unlikely]] return; }
L_002BBC48:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BBC6C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BBC6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBC6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BBC6Cu) [[unlikely]] return; }
L_002BBC6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002BBC70:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002BBC80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BBCA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002BBCC4; } }
L_002BBCA0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002BBCC4; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002BBCC8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BBCC4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002BBCC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBCD0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002BBCD0u) [[unlikely]] return; }
L_002BBCD0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 36u), 0u);  goto L_002BBD50; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002BBD04; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BBD04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBD04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BBD04u) [[unlikely]] return; }
L_002BBD04:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBD20u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BBD20u) [[unlikely]] return; }
L_002BBD20:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002BBDC8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BBDC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBD44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BBD44u) [[unlikely]] return; }
L_002BBD44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BBDC4; } }
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 1;
L_002BBD50:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[2], ld32((c.r[2].w[0] + 1416u)));
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002BBD84; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BBD84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBD84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BBD84u) [[unlikely]] return; }
L_002BBD84:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBDA0u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002BBDA0u) [[unlikely]] return; }
L_002BBDA0:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BBDC4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BBDC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBDC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BBDC4u) [[unlikely]] return; }
L_002BBDC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002BBDC8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002BBDE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 724u), 0u);  c.pc = t; return; }
L_002BBDF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BBEDC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 26304u);
    set32(c.r[2], c.r[2].w[0] + 26332u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 704u);
    st32((c.r[17].w[0] + 704u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBE30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002BBE30u) [[unlikely]] return; }
L_002BBE30:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002BBEC8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[17].w[0] + 688u);
    set32(c.r[3], c.r[3].w[0] + 16128u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_002BBE70; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 688u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 668u);  goto L_002BBE74; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BBE70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBE70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BBE70u) [[unlikely]] return; }
L_002BBE70:
    set32(c.r[2], c.r[17].w[0] + 668u);
    c.budget -= 1;
L_002BBE74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BBEAC; } }
    set32(c.r[2], c.r[17].w[0] + 672u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BBEAC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 672u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BBEAC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BBEAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBEACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BBEACu) [[unlikely]] return; }
L_002BBEAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[17].w[0] + 20u);
    set32(c.r[5], c.r[5].w[0] + 29856u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBEC4u); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_0008(c, 144u, depth + 1u); else { c.pc = 0x00141C40u; return; } if (c.pc != 0x002BBEC4u) [[unlikely]] return; }
L_002BBEC4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002BBEC8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002BBEE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBEDCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002BBEDCu) [[unlikely]] return; }
L_002BBEDC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002BBEE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BBF00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BBF6C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 26352u);
    set32(c.r[2], c.r[2].w[0] + 26372u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBF40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002BBF40u) [[unlikely]] return; }
L_002BBF40:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002BBF58; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 12544u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_002BBF58:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002BBF70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBF6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002BBF6Cu) [[unlikely]] return; }
L_002BBF6C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002BBF70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BBF90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 18032u);  c.pc = t; return; }
L_002BBFA0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BBF00u | kUnwind; return; } goto L_002BBF00; }
L_002BBFB0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 704u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BBDF0u | kUnwind; return; } goto L_002BBDF0; }
L_002BBFC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBFE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x002BBFE4u) [[unlikely]] return; }
L_002BBFE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], 0u + 16u);
    set32(c.r[2], c.r[2].w[0] + 26400u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 7;
    [[clang::musttail]] return unit_0067(c, 1u, depth);
}

}
