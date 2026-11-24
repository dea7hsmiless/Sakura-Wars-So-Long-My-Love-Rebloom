#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0057[4096] = {
    1, 2, 0, 0, 0, 0, 0, 3, 4, 0, 5, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0,
    0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 13, 0, 0, 14, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 27, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 48, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0,
    0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57,
    0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 73, 0, 74, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 102, 0, 0, 0, 103, 0, 0, 0,
    0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0,
    0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146,
    0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0,
    0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 163,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0,
    0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195,
    0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 222, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0,
    0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0,
    238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0,
    0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255,
    0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0,
    0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0,
    0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0,
};

void unit_0057(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0027C000;
    case 2u: goto L_0027C004;
    case 3u: goto L_0027C01C;
    case 4u: goto L_0027C020;
    case 5u: goto L_0027C028;
    case 6u: goto L_0027C03C;
    case 7u: goto L_0027C048;
    case 8u: goto L_0027C068;
    case 9u: goto L_0027C074;
    case 10u: goto L_0027C088;
    case 11u: goto L_0027C09C;
    case 12u: goto L_0027C0C0;
    case 13u: goto L_0027C0C4;
    case 14u: goto L_0027C0D0;
    case 15u: goto L_0027C0E0;
    case 16u: goto L_0027C0E8;
    case 17u: goto L_0027C100;
    case 18u: goto L_0027C114;
    case 19u: goto L_0027C11C;
    case 20u: goto L_0027C124;
    case 21u: goto L_0027C12C;
    case 22u: goto L_0027C134;
    case 23u: goto L_0027C13C;
    case 24u: goto L_0027C178;
    case 25u: goto L_0027C1A0;
    case 26u: goto L_0027C1B0;
    case 27u: goto L_0027C1B8;
    case 28u: goto L_0027C1C0;
    case 29u: goto L_0027C1D0;
    case 30u: goto L_0027C1E0;
    case 31u: goto L_0027C1F0;
    case 32u: goto L_0027C230;
    case 33u: goto L_0027C23C;
    case 34u: goto L_0027C254;
    case 35u: goto L_0027C270;
    case 36u: goto L_0027C280;
    case 37u: goto L_0027C290;
    case 38u: goto L_0027C2C4;
    case 39u: goto L_0027C2D0;
    case 40u: goto L_0027C2F4;
    case 41u: goto L_0027C444;
    case 42u: goto L_0027C44C;
    case 43u: goto L_0027C454;
    case 44u: goto L_0027C464;
    case 45u: goto L_0027C4A0;
    case 46u: goto L_0027C614;
    case 47u: goto L_0027C620;
    case 48u: goto L_0027C684;
    case 49u: goto L_0027C68C;
    case 50u: goto L_0027C69C;
    case 51u: goto L_0027C6C4;
    case 52u: goto L_0027C6D4;
    case 53u: goto L_0027C6F8;
    case 54u: goto L_0027C70C;
    case 55u: goto L_0027C72C;
    case 56u: goto L_0027C73C;
    case 57u: goto L_0027C77C;
    case 58u: goto L_0027C794;
    case 59u: goto L_0027C7AC;
    case 60u: goto L_0027C7E8;
    case 61u: goto L_0027C824;
    case 62u: goto L_0027C854;
    case 63u: goto L_0027C868;
    case 64u: goto L_0027C8A8;
    case 65u: goto L_0027C8B8;
    case 66u: goto L_0027C8F4;
    case 67u: goto L_0027C934;
    case 68u: goto L_0027C944;
    case 69u: goto L_0027C980;
    case 70u: goto L_0027C9A4;
    case 71u: goto L_0027CA58;
    case 72u: goto L_0027CA60;
    case 73u: goto L_0027CA68;
    case 74u: goto L_0027CA70;
    case 75u: goto L_0027CAD4;
    case 76u: goto L_0027CB18;
    case 77u: goto L_0027CB88;
    case 78u: goto L_0027CBE8;
    case 79u: goto L_0027CC00;
    case 80u: goto L_0027CC24;
    case 81u: goto L_0027CC40;
    case 82u: goto L_0027CC58;
    case 83u: goto L_0027CC74;
    case 84u: goto L_0027CCB0;
    case 85u: goto L_0027CCC0;
    case 86u: goto L_0027CCD4;
    case 87u: goto L_0027CCE8;
    case 88u: goto L_0027CD10;
    case 89u: goto L_0027CD44;
    case 90u: goto L_0027CD54;
    case 91u: goto L_0027CD70;
    case 92u: goto L_0027CD90;
    case 93u: goto L_0027CDB0;
    case 94u: goto L_0027CDD8;
    case 95u: goto L_0027CE00;
    case 96u: goto L_0027CE28;
    case 97u: goto L_0027CE50;
    case 98u: goto L_0027CE68;
    case 99u: goto L_0027CE94;
    case 100u: goto L_0027CEC8;
    case 101u: goto L_0027CED8;
    case 102u: goto L_0027CEE0;
    case 103u: goto L_0027CEF0;
    case 104u: goto L_0027CF0C;
    case 105u: goto L_0027CF34;
    case 106u: goto L_0027CF5C;
    case 107u: goto L_0027CF84;
    case 108u: goto L_0027CFAC;
    case 109u: goto L_0027CFB8;
    case 110u: goto L_0027CFD8;
    case 111u: goto L_0027D000;
    case 112u: goto L_0027D020;
    case 113u: goto L_0027D040;
    case 114u: goto L_0027D0CC;
    case 115u: goto L_0027D0E4;
    case 116u: goto L_0027D108;
    case 117u: goto L_0027D134;
    case 118u: goto L_0027D194;
    case 119u: goto L_0027D1B8;
    case 120u: goto L_0027D1E0;
    case 121u: goto L_0027D230;
    case 122u: goto L_0027D280;
    case 123u: goto L_0027D2E8;
    case 124u: goto L_0027D33C;
    case 125u: goto L_0027D360;
    case 126u: goto L_0027D390;
    case 127u: goto L_0027D3A8;
    case 128u: goto L_0027D41C;
    case 129u: goto L_0027D430;
    case 130u: goto L_0027D448;
    case 131u: goto L_0027D460;
    case 132u: goto L_0027D488;
    case 133u: goto L_0027D4C8;
    case 134u: goto L_0027D504;
    case 135u: goto L_0027D520;
    case 136u: goto L_0027D550;
    case 137u: goto L_0027D58C;
    case 138u: goto L_0027D594;
    case 139u: goto L_0027D5B8;
    case 140u: goto L_0027D5E0;
    case 141u: goto L_0027D61C;
    case 142u: goto L_0027D640;
    case 143u: goto L_0027D668;
    case 144u: goto L_0027D6A4;
    case 145u: goto L_0027D6C8;
    case 146u: goto L_0027D6FC;
    case 147u: goto L_0027D70C;
    case 148u: goto L_0027D728;
    case 149u: goto L_0027D7A4;
    case 150u: goto L_0027D7BC;
    case 151u: goto L_0027D7E0;
    case 152u: goto L_0027D7E8;
    case 153u: goto L_0027D804;
    case 154u: goto L_0027D828;
    case 155u: goto L_0027D830;
    case 156u: goto L_0027D84C;
    case 157u: goto L_0027D870;
    case 158u: goto L_0027D894;
    case 159u: goto L_0027D89C;
    case 160u: goto L_0027D8B8;
    case 161u: goto L_0027D8DC;
    case 162u: goto L_0027D8E4;
    case 163u: goto L_0027D8FC;
    case 164u: goto L_0027D934;
    case 165u: goto L_0027D93C;
    case 166u: goto L_0027D954;
    case 167u: goto L_0027D978;
    case 168u: goto L_0027D9A0;
    case 169u: goto L_0027D9B0;
    case 170u: goto L_0027D9D0;
    case 171u: goto L_0027DA60;
    case 172u: goto L_0027DA8C;
    case 173u: goto L_0027DAE0;
    case 174u: goto L_0027DAF8;
    case 175u: goto L_0027DB10;
    case 176u: goto L_0027DB2C;
    case 177u: goto L_0027DB60;
    case 178u: goto L_0027DB80;
    case 179u: goto L_0027DC04;
    case 180u: goto L_0027DC54;
    case 181u: goto L_0027DC70;
    case 182u: goto L_0027DC94;
    case 183u: goto L_0027DCA0;
    case 184u: goto L_0027DCA8;
    case 185u: goto L_0027DCC0;
    case 186u: goto L_0027DCD0;
    case 187u: goto L_0027DE28;
    case 188u: goto L_0027DE50;
    case 189u: goto L_0027DED0;
    case 190u: goto L_0027E010;
    case 191u: goto L_0027E0D0;
    case 192u: goto L_0027E0F0;
    case 193u: goto L_0027E124;
    case 194u: goto L_0027E130;
    case 195u: goto L_0027E17C;
    case 196u: goto L_0027E198;
    case 197u: goto L_0027E1B8;
    case 198u: goto L_0027E1D4;
    case 199u: goto L_0027E230;
    case 200u: goto L_0027E240;
    case 201u: goto L_0027E258;
    case 202u: goto L_0027E288;
    case 203u: goto L_0027E2A0;
    case 204u: goto L_0027E2B0;
    case 205u: goto L_0027E2BC;
    case 206u: goto L_0027E320;
    case 207u: goto L_0027E330;
    case 208u: goto L_0027E350;
    case 209u: goto L_0027E360;
    case 210u: goto L_0027E3B4;
    case 211u: goto L_0027E3C0;
    case 212u: goto L_0027E3E0;
    case 213u: goto L_0027E3E8;
    case 214u: goto L_0027E504;
    case 215u: goto L_0027E540;
    case 216u: goto L_0027E550;
    case 217u: goto L_0027E560;
    case 218u: goto L_0027E5B4;
    case 219u: goto L_0027E5CC;
    case 220u: goto L_0027E5E4;
    case 221u: goto L_0027E5F0;
    case 222u: goto L_0027E5F8;
    case 223u: goto L_0027E674;
    case 224u: goto L_0027E690;
    case 225u: goto L_0027E6B8;
    case 226u: goto L_0027E6D0;
    case 227u: goto L_0027E710;
    case 228u: goto L_0027E760;
    case 229u: goto L_0027E7CC;
    case 230u: goto L_0027E810;
    case 231u: goto L_0027E890;
    case 232u: goto L_0027E8FC;
    case 233u: goto L_0027E928;
    case 234u: goto L_0027E9A0;
    case 235u: goto L_0027EA08;
    case 236u: goto L_0027EB40;
    case 237u: goto L_0027EBE8;
    case 238u: goto L_0027EC00;
    case 239u: goto L_0027EC14;
    case 240u: goto L_0027EC28;
    case 241u: goto L_0027EC40;
    case 242u: goto L_0027ECC4;
    case 243u: goto L_0027ED10;
    case 244u: goto L_0027ED2C;
    case 245u: goto L_0027ED9C;
    case 246u: goto L_0027EE84;
    case 247u: goto L_0027EF40;
    case 248u: goto L_0027F080;
    case 249u: goto L_0027F0D0;
    case 250u: goto L_0027F0E4;
    case 251u: goto L_0027F108;
    case 252u: goto L_0027F164;
    case 253u: goto L_0027F2B0;
    case 254u: goto L_0027F2E4;
    case 255u: goto L_0027F2FC;
    case 256u: goto L_0027F314;
    case 257u: goto L_0027F330;
    case 258u: goto L_0027F4DC;
    case 259u: goto L_0027F504;
    case 260u: goto L_0027F518;
    case 261u: goto L_0027F590;
    case 262u: goto L_0027F5CC;
    case 263u: goto L_0027F5E8;
    case 264u: goto L_0027F63C;
    case 265u: goto L_0027F644;
    case 266u: goto L_0027F654;
    case 267u: goto L_0027F664;
    case 268u: goto L_0027F680;
    case 269u: goto L_0027F6A0;
    case 270u: goto L_0027F6E0;
    case 271u: goto L_0027F718;
    case 272u: goto L_0027F77C;
    case 273u: goto L_0027F7A8;
    case 274u: goto L_0027F7D0;
    case 275u: goto L_0027F7F8;
    case 276u: goto L_0027F818;
    case 277u: goto L_0027F908;
    case 278u: goto L_0027F948;
    case 279u: goto L_0027F994;
    case 280u: goto L_0027F9A4;
    case 281u: goto L_0027F9F0;
    case 282u: goto L_0027FAB4;
    case 283u: goto L_0027FAF0;
    case 284u: goto L_0027FB20;
    case 285u: goto L_0027FB64;
    case 286u: goto L_0027FBCC;
    case 287u: goto L_0027FBF0;
    case 288u: goto L_0027FC04;
    case 289u: goto L_0027FD34;
    case 290u: goto L_0027FDF0;
    case 291u: goto L_0027FEA0;
    case 292u: goto L_0027FED4;
    case 293u: goto L_0027FEF4;
    case 294u: goto L_0027FF24;
    case 295u: goto L_0027FF80;
    case 296u: goto L_0027FFF8;
    default: bad_entry(c, 0x0027C000u); return;
    }
L_0027C000:
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_0027C004:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027C010; } }
    set32(c.r[6], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_0027C010:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C01Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 368u, depth + 1u); else { c.pc = 0x002CB9D0u; return; } if (c.pc != 0x0027C01Cu) [[unlikely]] return; }
L_0027C01C:
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_0027C020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C028u); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0027C028u) [[unlikely]] return; }
L_0027C028:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  goto L_0027C040; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C03Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0027C03Cu) [[unlikely]] return; }
L_0027C03C:
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 1;
L_0027C040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C048u); set32(c.r[4], 0u + 180u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0027C048u) [[unlikely]] return; }
L_0027C048:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 92u), c.r[2].w[0]);  goto L_0027C06C; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027C05C; } }
    set32(c.r[6], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_0027C05C:
    set32(c.r[5], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C068u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 190u, depth + 1u); else { c.pc = 0x00279930u; return; } if (c.pc != 0x0027C068u) [[unlikely]] return; }
L_0027C068:
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 1;
L_0027C06C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C074u); set32(c.r[4], 0u + 92u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0027C074u) [[unlikely]] return; }
L_0027C074:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 100u), c.r[4].w[0]);  goto L_0027C090; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C088u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 278u, depth + 1u); else { c.pc = 0x002BEA50u; return; } if (c.pc != 0x0027C088u) [[unlikely]] return; }
L_0027C088:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 100u), c.r[4].w[0]);
    c.budget -= 2;
L_0027C090:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 3;
L_0027C09C:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027C0C0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 3;
L_0027C0C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0027C0C4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027C0D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C0E0u);  if (depth < kMaxDepth) unit_0011(c, 113u, depth + 1u); else { c.pc = 0x00164D10u; return; } if (c.pc != 0x0027C0E0u) [[unlikely]] return; }
L_0027C0E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C0E8u);  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x0027C0E8u) [[unlikely]] return; }
L_0027C0E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027C100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C114u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x0027C114u) [[unlikely]] return; }
L_0027C114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C11Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x0027C11Cu) [[unlikely]] return; }
L_0027C11C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C124u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00161BB0u; return; } if (c.pc != 0x0027C124u) [[unlikely]] return; }
L_0027C124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C12Cu);  if (depth < kMaxDepth) unit_0011(c, 107u, depth + 1u); else { c.pc = 0x00164CA0u; return; } if (c.pc != 0x0027C12Cu) [[unlikely]] return; }
L_0027C12C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C134u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0011(c, 104u, depth + 1u); else { c.pc = 0x00164C60u; return; } if (c.pc != 0x0027C134u) [[unlikely]] return; }
L_0027C134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C13Cu);  if (depth < kMaxDepth) unit_0024(c, 129u, depth + 1u); else { c.pc = 0x001B0C00u; return; } if (c.pc != 0x0027C13Cu) [[unlikely]] return; }
L_0027C13C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0027C194; }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027C190; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(30ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0027C180; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 24u);
    set32(c.r[5], 0u + 420u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C178u); set32(c.r[6], c.r[6].w[0] - 3984u);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x0027C178u) [[unlikely]] return; }
L_0027C178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027C190; } }
L_0027C180:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(61ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0027C190; } }
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 1;
L_0027C190:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0027C194:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027C1A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C1B0u);  if (depth < kMaxDepth) unit_0011(c, 113u, depth + 1u); else { c.pc = 0x00164D10u; return; } if (c.pc != 0x0027C1B0u) [[unlikely]] return; }
L_0027C1B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C1B8u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 207u, depth + 1u); else { c.pc = 0x00161C50u; return; } if (c.pc != 0x0027C1B8u) [[unlikely]] return; }
L_0027C1B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C1C0u);  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x0027C1C0u) [[unlikely]] return; }
L_0027C1C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027C1D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027C1E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027C1F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027C254; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23600u);
    set32(c.r[2], c.r[2].w[0] + 23656u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C230u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0027C230u) [[unlikely]] return; }
L_0027C230:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C23Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0027C23Cu) [[unlikely]] return; }
L_0027C23C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0027C258; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C254u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0027C254u) [[unlikely]] return; }
L_0027C254:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027C258:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027C270:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027C1F0u | kUnwind; return; } goto L_0027C1F0; }
L_0027C280:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BBC0u | kUnwind; return; } [[clang::musttail]] return unit_0056(c, 449u, depth); }
L_0027C290:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C2C4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0027C2C4u) [[unlikely]] return; }
L_0027C2C4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C2D0u); set32(c.r[4], c.r[20].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x0027C2D0u) [[unlikely]] return; }
L_0027C2D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[20].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[20].w[0] + 816u);
    st32((c.r[20].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C2F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 303u, depth + 1u); else { c.pc = 0x00266780u; return; } if (c.pc != 0x0027C2F4u) [[unlikely]] return; }
L_0027C2F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x544E0000u);
    set32(c.r[6], 0u + 77u);
    c.r[2].d[0] = c.r[2].d[0] | 21843ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[7], ld32((c.r[28].w[0] - 30316u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[20].w[0] + 1200u);
    set32(c.r[7], c.r[7].w[0] + 112u);
    st32((c.r[20].w[0] + 140u), c.r[7].w[0]);
    st32((c.r[20].w[0] + 144u), c.r[19].w[0]);
    st32((c.r[20].w[0] + 1180u), 0u);
    st32((c.r[20].w[0] + 1184u), 0u);
    st32((c.r[20].w[0] + 1188u), 0u);
    st32((c.r[20].w[0] + 608u), 0u);
    st32((c.r[20].w[0] + 612u), 0u);
    st32((c.r[20].w[0] + 164u), 0u);
    st32((c.r[20].w[0] + 168u), 0u);
    st32((c.r[20].w[0] + 172u), 0u);
    st32((c.r[20].w[0] + 176u), 0u);
    st32((c.r[20].w[0] + 180u), 0u);
    st32((c.r[20].w[0] + 580u), 0u);
    st32((c.r[20].w[0] + 416u), 0u);
    st32((c.r[20].w[0] + 464u), 0u);
    st32((c.r[20].w[0] + 468u), 0u);
    st32((c.r[20].w[0] + 472u), 0u);
    st32((c.r[20].w[0] + 584u), 0u);
    st32((c.r[20].w[0] + 588u), 0u);
    st32((c.r[20].w[0] + 592u), 0u);
    st32((c.r[20].w[0] + 596u), 0u);
    st32((c.r[20].w[0] + 600u), 0u);
    st32((c.r[20].w[0] + 604u), 0u);
    st32((c.r[20].w[0] + 1408u), 0u);
    st32((c.r[20].w[0] + 1072u), 0u);
    st32((c.r[20].w[0] + 1076u), 0u);
    st32((c.r[20].w[0] + 476u), c.r[6].w[0]);
    st32((c.r[20].w[0] + 480u), c.r[6].w[0]);
    st32((c.r[20].w[0] + 484u), 0u);
    st32((c.r[20].w[0] + 488u), 0u);
    st32((c.r[20].w[0] + 1156u), 0u);
    st32((c.r[20].w[0] + 1100u), 0u);
    st32((c.r[20].w[0] + 1104u), 0u);
    st32((c.r[20].w[0] + 492u), c.r[5].w[0]);
    st32((c.r[20].w[0] + 496u), 0u);
    st32((c.r[20].w[0] + 500u), c.r[5].w[0]);
    st32((c.r[20].w[0] + 504u), 0u);
    st32((c.r[20].w[0] + 512u), 0u);
    st32((c.r[20].w[0] + 1168u), 0u);
    st32((c.r[20].w[0] + 1172u), 0u);
    st32((c.r[20].w[0] + 1176u), 0u);
    st32((c.r[20].w[0] + 516u), 0u);
    st32((c.r[20].w[0] + 520u), 0u);
    st32((c.r[20].w[0] + 152u), 0u);
    st32((c.r[20].w[0] + 160u), 0u);
    st32((c.r[20].w[0] + 1308u), 0u);
    st32((c.r[20].w[0] + 1312u), 0u);
    st32((c.r[20].w[0] + 1316u), 0u);
    st32((c.r[20].w[0] + 1412u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 1416u), 0u);
    st32((c.r[20].w[0] + 156u), 0u);
    st32((c.r[20].w[0] + 336u), 0u);
    st32((c.r[20].w[0] + 1148u), 0u);
    st32((c.r[20].w[0] + 1152u), 0u);
    st32((c.r[20].w[0] + 1144u), 0u);
    st32((c.r[20].w[0] + 1376u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 1420u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 1380u), 0u);
    st32((c.r[20].w[0] + 532u), 0u);
    st32((c.r[20].w[0] + 420u), 0u);
    st32((c.r[20].w[0] + 1128u), 0u);
    st32((c.r[20].w[0] + 1124u), 0u);
    st32((c.r[20].w[0] + 1120u), 0u);
    st32((c.r[20].w[0] + 1132u), c.r[5].w[0]);
    st32((c.r[20].w[0] + 576u), 0u);
    st32((c.r[20].w[0] + 1264u), 0u);
    st32((c.r[20].w[0] + 1268u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 1272u), 0u);
    st32((c.r[20].w[0] + 1276u), c.r[5].w[0]);
    st32((c.r[20].w[0] + 1288u), 0u);
    st32((c.r[20].w[0] + 1284u), 0u);
    st32((c.r[20].w[0] + 1280u), 0u);
    c.budget -= 84;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C444u); st32((c.r[20].w[0] + 1292u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0027C444u) [[unlikely]] return; }
L_0027C444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C44Cu); set32(c.r[4], c.r[20].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0027C44Cu) [[unlikely]] return; }
L_0027C44C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C454u); set32(c.r[4], c.r[20].w[0] + 1008u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0027C454u) [[unlikely]] return; }
L_0027C454:
    set32(c.r[4], c.r[20].w[0] + 536u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C464u); set32(c.r[6], 0u + 40u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0027C464u) [[unlikely]] return; }
L_0027C464:
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[20].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[21], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[16], ld32((c.r[3].w[0])));
    st32((c.r[20].w[0] + 1296u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 1300u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C4A0u); st32((c.r[20].w[0] + 616u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0027C4A0u) [[unlikely]] return; }
L_0027C4A0:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_0027C4C4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] << 2);  goto L_0027C4CC; }
L_0027C4C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027C4D4; } }
L_0027C4CC:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_0027C4D4:
    st32((c.r[20].w[0] + 608u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 16u)));  if (t) { goto L_0027C4F4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] << 2);  goto L_0027C4FC; }
L_0027C4F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027C504; } }
L_0027C4FC:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_0027C504:
    st32((c.r[20].w[0] + 612u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 608u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    st32((c.r[20].w[0] + 148u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 608u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 44u)));
    st32((c.r[20].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 48u)));
    st32((c.r[20].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 52u)));
    st32((c.r[20].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 56u)));
    st32((c.r[20].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 60u)));
    st32((c.r[20].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 64u)));
    st32((c.r[20].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 68u)));
    st32((c.r[20].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 72u)));
    st32((c.r[20].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 76u)));
    st32((c.r[20].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 608u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 80u)));
    st16((c.r[20].w[0] + 108u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 82u)));
    st16((c.r[20].w[0] + 110u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 84u)));
    st16((c.r[20].w[0] + 112u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 86u)));
    st16((c.r[20].w[0] + 114u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 88u)));
    st16((c.r[20].w[0] + 116u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 90u)));
    st16((c.r[20].w[0] + 118u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 92u)));
    st16((c.r[20].w[0] + 120u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 94u)));
    st16((c.r[20].w[0] + 122u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 96u)));
    st16((c.r[20].w[0] + 124u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 98u)));
    st16((c.r[20].w[0] + 126u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[20].w[0] + 608u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 100u)));
    st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 102u)));
    st16((c.r[20].w[0] + 130u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 104u)));
    st16((c.r[20].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 106u)));
    st16((c.r[20].w[0] + 134u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 108u)));
    st16((c.r[20].w[0] + 136u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 110u)));
    st16((c.r[20].w[0] + 138u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[20].w[0] + 444u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 432u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 436u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 440u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 460u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 448u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 452u), c.r[2].w[0]);
    c.budget -= 68;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C614u); st32((c.r[20].w[0] + 456u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0027C614u) [[unlikely]] return; }
L_0027C614:
    set32(c.r[5], ld32((c.r[20].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C620u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 14u, depth + 1u); else { c.pc = 0x002A4410u; return; } if (c.pc != 0x0027C620u) [[unlikely]] return; }
L_0027C620:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[20].w[0] + 1304u), c.r[2].w[0]);  if (t) { goto L_0027C668; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 164u)));  goto L_0027C658; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 164u)));  goto L_0027C648; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0027C67C; } }
L_0027C648:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 164u), c.r[2].w[0]);  if (t) { goto L_0027C678; } }
L_0027C658:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 164u), c.r[2].w[0]);  if (t) { goto L_0027C678; } }
L_0027C668:
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[20].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 4;
L_0027C678:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027C67C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;  if (t) { goto L_0027C6B4; } }
L_0027C684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C68Cu); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0027C68Cu) [[unlikely]] return; }
L_0027C68C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  goto L_0027C6A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C69Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 55u, depth + 1u); else { c.pc = 0x00170720u; return; } if (c.pc != 0x0027C69Cu) [[unlikely]] return; }
L_0027C69C:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 1;
L_0027C6A0:
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[3].w[0] + 536u), c.r[2].w[0]);  if (t) { goto L_0027CC60; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0027C6B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027C684u | kUnwind; return; } goto L_0027C684; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C6C4u); set32(c.r[4], 0u + 352u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0027C6C4u) [[unlikely]] return; }
L_0027C6C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 464u), c.r[2].w[0]);  goto L_0027C6D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C6D4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 95u, depth + 1u); else { c.pc = 0x00158830u; return; } if (c.pc != 0x0027C6D4u) [[unlikely]] return; }
L_0027C6D4:
    st32((c.r[20].w[0] + 464u), c.r[2].w[0]);
    c.budget -= 1;
L_0027C6D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[20].w[0] + 148u)));  goto L_0027CC64; }
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  goto L_0027C71C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C6F8u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0027C6F8u) [[unlikely]] return; }
L_0027C6F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 1308u), c.r[2].w[0]);  goto L_0027C710; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C70Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 50u, depth + 1u); else { c.pc = 0x002A49D0u; return; } if (c.pc != 0x0027C70Cu) [[unlikely]] return; }
L_0027C70C:
    st32((c.r[20].w[0] + 1308u), c.r[2].w[0]);
    c.budget -= 1;
L_0027C710:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027CC60; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0027C71C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], ld32((c.r[20].w[0] + 608u)));  goto L_0027C990; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C72Cu); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0027C72Cu) [[unlikely]] return; }
L_0027C72C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 580u), c.r[2].w[0]);  goto L_0027C740; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C73Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 300u, depth + 1u); else { c.pc = 0x0020AD20u; return; } if (c.pc != 0x0027C73Cu) [[unlikely]] return; }
L_0027C73C:
    st32((c.r[20].w[0] + 580u), c.r[2].w[0]);
    c.budget -= 1;
L_0027C740:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027CC60; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_0027C764; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[5].w[0] << 2);  goto L_0027C76C; }
L_0027C764:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0027C774; } }
L_0027C76C:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_0027C774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C77Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 304u, depth + 1u); else { c.pc = 0x0020AE00u; return; } if (c.pc != 0x0027C77Cu) [[unlikely]] return; }
L_0027C77C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 580u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C794u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 317u, depth + 1u); else { c.pc = 0x0020B090u; return; } if (c.pc != 0x0027C794u) [[unlikely]] return; }
L_0027C794:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 580u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C7ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 323u, depth + 1u); else { c.pc = 0x0020B310u; return; } if (c.pc != 0x0027C7ACu) [[unlikely]] return; }
L_0027C7AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_0027C7C8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] << 2);  goto L_0027C7D0; }
L_0027C7C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0027C7D8; } }
L_0027C7D0:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_0027C7D8:
    st32((c.r[20].w[0] + 584u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 580u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C7E8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 317u, depth + 1u); else { c.pc = 0x0020B090u; return; } if (c.pc != 0x0027C7E8u) [[unlikely]] return; }
L_0027C7E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_0027C804; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] << 2);  goto L_0027C80C; }
L_0027C804:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0027C814; } }
L_0027C80C:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_0027C814:
    st32((c.r[20].w[0] + 596u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 580u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C824u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 323u, depth + 1u); else { c.pc = 0x0020B310u; return; } if (c.pc != 0x0027C824u) [[unlikely]] return; }
L_0027C824:
    set32(c.r[2], ld32((c.r[20].w[0] + 584u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027C844; }
    set32(c.r[2], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_0027C844; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027C844:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 584u)));  goto L_0027C878; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C854u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0027C854u) [[unlikely]] return; }
L_0027C854:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 1168u), c.r[2].w[0]);  goto L_0027C86C; }
    set32(c.r[5], ld32((c.r[20].w[0] + 464u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C868u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 401u, depth + 1u); else { c.pc = 0x00203E20u; return; } if (c.pc != 0x0027C868u) [[unlikely]] return; }
L_0027C868:
    st32((c.r[20].w[0] + 1168u), c.r[2].w[0]);
    c.budget -= 1;
L_0027C86C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027CC60; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 584u)));
    c.budget -= 1;
L_0027C878:
    set32(c.r[3], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027C898; }
    set32(c.r[2], ld32((c.r[2].w[0] + 84u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 8u)));  goto L_0027C898; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027C898:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 584u)));  goto L_0027C904; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C8A8u); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0027C8A8u) [[unlikely]] return; }
L_0027C8A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 1172u), c.r[2].w[0]);  goto L_0027C8BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C8B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 75u, depth + 1u); else { c.pc = 0x00214A00u; return; } if (c.pc != 0x0027C8B8u) [[unlikely]] return; }
L_0027C8B8:
    st32((c.r[20].w[0] + 1172u), c.r[2].w[0]);
    c.budget -= 1;
L_0027C8BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027CC60; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 584u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 88u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0027C8E8; }
    set32(c.r[3], ld32((c.r[3].w[0] + 84u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 8u)));  goto L_0027C8E8; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027C8E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C8F4u);  if (depth < kMaxDepth) unit_003D(c, 79u, depth + 1u); else { c.pc = 0x00214AE0u; return; } if (c.pc != 0x0027C8F4u) [[unlikely]] return; }
L_0027C8F4:
    set32(c.r[3], ld32((c.r[20].w[0] + 464u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 1172u)));
    st32((c.r[2].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 584u)));
    c.budget -= 4;
L_0027C904:
    set32(c.r[3], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027C924; }
    set32(c.r[2], ld32((c.r[2].w[0] + 84u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 12u)));  goto L_0027C924; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027C924:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027C98C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C934u); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0027C934u) [[unlikely]] return; }
L_0027C934:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 1176u), c.r[2].w[0]);  goto L_0027C948; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C944u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 75u, depth + 1u); else { c.pc = 0x00214A00u; return; } if (c.pc != 0x0027C944u) [[unlikely]] return; }
L_0027C944:
    st32((c.r[20].w[0] + 1176u), c.r[2].w[0]);
    c.budget -= 1;
L_0027C948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027CC60; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 584u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 88u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0027C974; }
    set32(c.r[3], ld32((c.r[3].w[0] + 84u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 12u)));  goto L_0027C974; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027C974:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C980u);  if (depth < kMaxDepth) unit_003D(c, 79u, depth + 1u); else { c.pc = 0x00214AE0u; return; } if (c.pc != 0x0027C980u) [[unlikely]] return; }
L_0027C980:
    set32(c.r[3], ld32((c.r[20].w[0] + 464u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 1176u)));
    st32((c.r[2].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 3;
L_0027C98C:
    set32(c.r[2], ld32((c.r[20].w[0] + 608u)));
    c.budget -= 1;
L_0027C990:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 2016u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C9A4u); set32(c.r[4], c.r[3].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0027C9A4u) [[unlikely]] return; }
L_0027C9A4:
    st32((c.r[20].w[0] + 1320u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 608u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 2020u)));
    st32((c.r[20].w[0] + 1324u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 144u)));
    st16((c.r[20].w[0] + 994u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 1320u)));
    c.budget -= 9;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 144u)));  goto L_0027C9FC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 1320u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 144u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    st16((c.r[20].w[0] + 992u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 994u)));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);  if (t) { goto L_0027CA14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 994u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0027CA14; } }
L_0027C9FC:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    st16((c.r[20].w[0] + 992u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 994u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);  if (t) { goto L_0027CA14; } }
    st16((c.r[20].w[0] + 994u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0027CA14:
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 88u)));  goto L_0027CA34; }
    set32(c.r[2], ld32((c.r[20].w[0] + 984u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[20].w[0] + 984u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    c.budget -= 4;
L_0027CA34:
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0027CA50; }
    set32(c.r[2], ld32((c.r[20].w[0] + 984u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[20].w[0] + 984u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
L_0027CA50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CA58u);  if (depth < kMaxDepth) unit_006B(c, 400u, depth + 1u); else { c.pc = 0x002CFEE0u; return; } if (c.pc != 0x0027CA58u) [[unlikely]] return; }
L_0027CA58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CA60u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0027CA60u) [[unlikely]] return; }
L_0027CA60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CA68u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 256u, depth + 1u); else { c.pc = 0x0028A410u; return; } if (c.pc != 0x0027CA68u) [[unlikely]] return; }
L_0027CA68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CA70u); set32(c.r[4], ld32((c.r[20].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0027CA70u) [[unlikely]] return; }
L_0027CA70:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 580u)));  goto L_0027CB00; }
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027CAFC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 108u)));
    set32(c.r[2], 0u + 7u);
    st16((c.r[20].w[0] + 110u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 148u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[20].w[0] + 148u)));  goto L_0027CACC; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], 0u + 10u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0027CAC8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 114u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 116u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0027CAFC; } }
L_0027CAC8:
    set32(c.r[5], ld32((c.r[20].w[0] + 148u)));
    c.budget -= 1;
L_0027CACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CAD4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 225u, depth + 1u); else { c.pc = 0x00291F40u; return; } if (c.pc != 0x0027CAD4u) [[unlikely]] return; }
L_0027CAD4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 114u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[2], 0u + 100u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st16((c.r[20].w[0] + 116u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
L_0027CAFC:
    set32(c.r[5], ld32((c.r[20].w[0] + 580u)));
    c.budget -= 1;
L_0027CB00:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0027CB10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027CB68; } }
L_0027CB10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CB18u); set32(c.r[5], 0u + 56u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0027CB18u) [[unlikely]] return; }
L_0027CB18:
    set32(c.r[5], ld32((c.r[20].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[2].w[0] << 1);  goto L_0027CB38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0027CB48; } }
L_0027CB38:
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0027CB48:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027CB68; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_0027CB60; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027CB60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027CB68; } }
L_0027CB68:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_0027CC04; }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0027CB80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0027CBD8; } }
L_0027CB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CB88u); set32(c.r[5], 0u + 56u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0027CB88u) [[unlikely]] return; }
L_0027CB88:
    set32(c.r[4], ld32((c.r[20].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0027CBA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0027CBB8; } }
L_0027CBA8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0027CBB8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0027CBD8; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_0027CBD0; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027CBD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027CBD8; } }
L_0027CBD8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 10300u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CBE8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0027CBE8u) [[unlikely]] return; }
L_0027CBE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027CC60; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 144u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CC00u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0027CC00u) [[unlikely]] return; }
L_0027CC00:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_0027CC04:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 1180u), c.r[16].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0] + 16u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CC24u); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027CC24u) [[unlikely]] return; }
L_0027CC24:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[20].w[0] + 1188u), c.r[2].w[0]);  goto L_0027CC44; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CC40u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 270u, depth + 1u); else { c.pc = 0x002CF0F0u; return; } if (c.pc != 0x0027CC40u) [[unlikely]] return; }
L_0027CC40:
    st32((c.r[20].w[0] + 1188u), c.r[2].w[0]);
    c.budget -= 1;
L_0027CC44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[20].w[0] + 148u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CC58u); set32(c.r[4], c.r[4].w[0] - 3968u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0027CC58u) [[unlikely]] return; }
L_0027CC58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0027CC88; } }
L_0027CC60:
    set32(c.r[6], ld32((c.r[20].w[0] + 148u)));
    c.budget -= 1;
L_0027CC64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CC74u); set32(c.r[4], c.r[4].w[0] - 3920u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0027CC74u) [[unlikely]] return; }
L_0027CC74:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_0027CC88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0027CCB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0027CCC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CCD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 88u, depth + 1u); else { c.pc = 0x0027CD10u; return; } if (c.pc != 0x0027CCD4u) [[unlikely]] return; }
L_0027CCD4:
    set32(c.r[5], ld32((c.r[16].w[0] + 144u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CCE8u); set32(c.r[4], c.r[4].w[0] - 3856u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0027CCE8u) [[unlikely]] return; }
L_0027CCE8:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027CD10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1316u)));
    c.budget -= 9;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0027CD4C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CD44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027CD44u) [[unlikely]] return; }
L_0027CD44:
    st32((c.r[17].w[0] + 1316u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0027CD4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CD54u);  if (depth < kMaxDepth) unit_0062(c, 19u, depth + 1u); else { c.pc = 0x002A81E0u; return; } if (c.pc != 0x0027CD54u) [[unlikely]] return; }
L_0027CD54:
    set32(c.r[4], ld32((c.r[17].w[0] + 1188u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 1312u)));  goto L_0027CD78; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CD70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027CD70u) [[unlikely]] return; }
L_0027CD70:
    st32((c.r[17].w[0] + 1188u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1312u)));
    c.budget -= 2;
L_0027CD78:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 1308u)));  goto L_0027CD98; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CD90u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027CD90u) [[unlikely]] return; }
L_0027CD90:
    st32((c.r[17].w[0] + 1312u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1308u)));
    c.budget -= 2;
L_0027CD98:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 1176u)));  goto L_0027CDB8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CDB0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027CDB0u) [[unlikely]] return; }
L_0027CDB0:
    st32((c.r[17].w[0] + 1308u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1176u)));
    c.budget -= 2;
L_0027CDB8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 1172u)));  goto L_0027CDE0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 1176u), 0u);  goto L_0027CDDC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CDD8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027CDD8u) [[unlikely]] return; }
L_0027CDD8:
    st32((c.r[17].w[0] + 1176u), 0u);
    c.budget -= 1;
L_0027CDDC:
    set32(c.r[4], ld32((c.r[17].w[0] + 1172u)));
    c.budget -= 1;
L_0027CDE0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 1168u)));  goto L_0027CE08; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 1172u), 0u);  goto L_0027CE04; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CE00u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027CE00u) [[unlikely]] return; }
L_0027CE00:
    st32((c.r[17].w[0] + 1172u), 0u);
    c.budget -= 1;
L_0027CE04:
    set32(c.r[4], ld32((c.r[17].w[0] + 1168u)));
    c.budget -= 1;
L_0027CE08:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 580u)));  goto L_0027CE30; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 1168u), 0u);  goto L_0027CE2C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CE28u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027CE28u) [[unlikely]] return; }
L_0027CE28:
    st32((c.r[17].w[0] + 1168u), 0u);
    c.budget -= 1;
L_0027CE2C:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 1;
L_0027CE30:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 468u)));  goto L_0027CE58; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 580u), 0u);  goto L_0027CE54; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CE50u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027CE50u) [[unlikely]] return; }
L_0027CE50:
    st32((c.r[17].w[0] + 580u), 0u);
    c.budget -= 1;
L_0027CE54:
    set32(c.r[2], ld32((c.r[17].w[0] + 468u)));
    c.budget -= 1;
L_0027CE58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0027CED0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0027CEA4; } }
L_0027CE68:
    set32(c.r[2], ld32((c.r[17].w[0] + 468u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[18], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0027CEA4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CE94u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027CE94u) [[unlikely]] return; }
L_0027CE94:
    set32(c.r[2], ld32((c.r[17].w[0] + 468u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 4;
L_0027CEA4:
    set32(c.r[2], ld32((c.r[17].w[0] + 472u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027CE68u | kUnwind; return; } goto L_0027CE68; }
    set32(c.r[4], ld32((c.r[17].w[0] + 468u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0027CECC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CEC8u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0027CEC8u) [[unlikely]] return; }
L_0027CEC8:
    st32((c.r[17].w[0] + 468u), 0u);
    c.budget -= 1;
L_0027CECC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027CED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CED8u);  if (depth < kMaxDepth) unit_006D(c, 170u, depth + 1u); else { c.pc = 0x002D5E40u; return; } if (c.pc != 0x0027CED8u) [[unlikely]] return; }
L_0027CED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CEE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 163u, depth + 1u); else { c.pc = 0x002D5D30u; return; } if (c.pc != 0x0027CEE0u) [[unlikely]] return; }
L_0027CEE0:
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 204u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CEF0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027CEF0u) [[unlikely]] return; }
L_0027CEF0:
    set32(c.r[4], ld32((c.r[17].w[0] + 464u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 588u)));  goto L_0027CF14; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CF0Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027CF0Cu) [[unlikely]] return; }
L_0027CF0C:
    st32((c.r[17].w[0] + 464u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 588u)));
    c.budget -= 2;
L_0027CF14:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 592u)));  goto L_0027CF3C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 588u), 0u);  goto L_0027CF38; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CF34u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027CF34u) [[unlikely]] return; }
L_0027CF34:
    st32((c.r[17].w[0] + 588u), 0u);
    c.budget -= 1;
L_0027CF38:
    set32(c.r[4], ld32((c.r[17].w[0] + 592u)));
    c.budget -= 1;
L_0027CF3C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 600u)));  goto L_0027CF64; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 592u), 0u);  goto L_0027CF60; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CF5Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027CF5Cu) [[unlikely]] return; }
L_0027CF5C:
    st32((c.r[17].w[0] + 592u), 0u);
    c.budget -= 1;
L_0027CF60:
    set32(c.r[4], ld32((c.r[17].w[0] + 600u)));
    c.budget -= 1;
L_0027CF64:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 604u)));  goto L_0027CF8C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 600u), 0u);  goto L_0027CF88; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CF84u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027CF84u) [[unlikely]] return; }
L_0027CF84:
    st32((c.r[17].w[0] + 600u), 0u);
    c.budget -= 1;
L_0027CF88:
    set32(c.r[4], ld32((c.r[17].w[0] + 604u)));
    c.budget -= 1;
L_0027CF8C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0027CFB4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 604u), 0u);  goto L_0027CFB0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CFACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027CFACu) [[unlikely]] return; }
L_0027CFAC:
    st32((c.r[17].w[0] + 604u), 0u);
    c.budget -= 1;
L_0027CFB0:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027CFB4:
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 1;
L_0027CFB8:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 536u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 536u);  if (t) { goto L_0027CFDC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CFD8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027CFD8u) [[unlikely]] return; }
L_0027CFD8:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0027CFDC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027CFB8u | kUnwind; return; } goto L_0027CFB8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 420u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 1408u)));  goto L_0027D008; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D000u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0027D000u) [[unlikely]] return; }
L_0027D000:
    st32((c.r[17].w[0] + 420u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1408u)));
    c.budget -= 2;
L_0027D008:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0027D028; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D020u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027D020u) [[unlikely]] return; }
L_0027D020:
    st32((c.r[17].w[0] + 1408u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_0027D028:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0027D040:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 168u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0027D978; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 1180u)));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0027D0B4; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_0027D0A0; }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0027D09C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[17].d[0] & 1ull;  if (t) { goto L_0027D0BC; } }
L_0027D09C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_0027D0A0:
    set32(c.r[3], ld32((c.r[3].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[17].d[0] | 3ull;  if (t) { goto L_0027D0B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] | 60ull;  if (t) { goto L_0027D0B8; } }
L_0027D0B4:
    c.r[17].d[0] = c.r[17].d[0] | 2ull;
    c.budget -= 1;
L_0027D0B8:
    c.r[3].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 1;
L_0027D0BC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1100u)));  goto L_0027D114; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D0CCu);  if (depth < kMaxDepth) unit_0052(c, 139u, depth + 1u); else { c.pc = 0x00269B20u; return; } if (c.pc != 0x0027D0CCu) [[unlikely]] return; }
L_0027D0CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D110; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 116u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D0E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027D0E4u) [[unlikely]] return; }
L_0027D0E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D110; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D108u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0027D108u) [[unlikely]] return; }
L_0027D108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0027D97C; } }
L_0027D110:
    set32(c.r[4], ld32((c.r[16].w[0] + 1100u)));
    c.budget -= 1;
L_0027D114:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = c.r[17].d[0] & 2ull;  goto L_0027D1C4; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0027D158; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D134u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0027D134u) [[unlikely]] return; }
L_0027D134:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0027D14C; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027D158; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_0027D14C:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0027D158:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027D1C0; } }
    c.r[3].d[0] = c.r[17].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027D1C0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 3024u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027D1C0; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D194u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027D194u) [[unlikely]] return; }
L_0027D194:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D1C0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 17u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D1B8u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0027D1B8u) [[unlikely]] return; }
L_0027D1B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027D978; } }
L_0027D1C0:
    c.r[3].d[0] = c.r[17].d[0] & 2ull;
    c.budget -= 1;
L_0027D1C4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[17].d[0] & 4ull;  goto L_0027D46C; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0027D214; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D1E0u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0027D1E0u) [[unlikely]] return; }
L_0027D1E0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 256u);  goto L_0027D1F8; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027D214; } }
    set32(c.r[3], 0u + 256u);
    c.budget -= 1;
L_0027D1F8:
    set32(c.r[5], ld32((c.r[28].w[0] - 30400u)));
    c.r[4].d[0] = c.r[3].d[0] << 32;
    set32(c.r[3], 0u + 1027u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[4].d[0] = ld64((c.r[5].w[0] + 152u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
L_0027D214:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027D468; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0027D238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D230u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0027D230u) [[unlikely]] return; }
L_0027D230:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 256u);  goto L_0027D244; }
L_0027D238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0027D260; } }
    set32(c.r[3], 0u + 256u);
    c.budget -= 1;
L_0027D244:
    set32(c.r[5], ld32((c.r[28].w[0] - 30400u)));
    c.r[4].d[0] = c.r[3].d[0] << 32;
    set32(c.r[3], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[4].d[0] = ld64((c.r[5].w[0] + 152u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
L_0027D260:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0027D270; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 2;
L_0027D270:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0027D2A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D280u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0027D280u) [[unlikely]] return; }
L_0027D280:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0027D298; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027D2A4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_0027D298:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 1025ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0027D2A4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027D2B0; } }
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.budget -= 1;
L_0027D2B0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0027D978; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 1100u)));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; c.r[18].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_0027D3D8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0027D3D8; } }
    set32(c.r[18], c.r[18].w[0] - 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027D3D8; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_0027D2E8:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[6].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_0027D374; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[16].w[0] + 16u)));  goto L_0027D350; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[16].w[0] + 16u)));  goto L_0027D328; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[19].d[0] = c.r[6].d[0] + 0ull;  goto L_0027D3B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027D3B4; } }
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027D3B4; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_0027D328:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D33Cu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027D33Cu) [[unlikely]] return; }
L_0027D33C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D3B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_0027D3B4; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_0027D350:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D360u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027D360u) [[unlikely]] return; }
L_0027D360:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D3B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_0027D3B4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_0027D374:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0027D388; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  if (t) { goto L_0027D388; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027D388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D390u);  if (depth < kMaxDepth) unit_005B(c, 313u, depth + 1u); else { c.pc = 0x0028F230u; return; } if (c.pc != 0x0027D390u) [[unlikely]] return; }
L_0027D390:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D3A8u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027D3A8u) [[unlikely]] return; }
L_0027D3A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D3B4; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_0027D3B4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0027D3E0; } }
    set32(c.r[2], c.r[18].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[18].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_0027D3D8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0027D3D8; } }
    set32(c.r[18], c.r[18].w[0] - 4u);
    c.budget -= 1;
L_0027D3D8:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[17].d[0]) { set32(c.r[6], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027D2E8u | kUnwind; return; } goto L_0027D2E8; }
L_0027D3E0:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_0027D43C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027D400; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 152u)));  if (t) { goto L_0027D400; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027D400:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D41Cu); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x0027D41Cu) [[unlikely]] return; }
L_0027D41C:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D430u); set32(c.r[5], 0u + 31u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027D430u) [[unlikely]] return; }
L_0027D430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027D978; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0027D43C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D448u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_005A(c, 344u, depth + 1u); else { c.pc = 0x0028B8A0u; return; } if (c.pc != 0x0027D448u) [[unlikely]] return; }
L_0027D448:
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027D978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D460u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 290u, depth + 1u); else { c.pc = 0x0028AF40u; return; } if (c.pc != 0x0027D460u) [[unlikely]] return; }
L_0027D460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027D978; } }
L_0027D468:
    c.r[3].d[0] = c.r[17].d[0] & 4ull;
    c.budget -= 1;
L_0027D46C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[17].d[0] & 8ull;  goto L_0027D5C4; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0027D4AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D488u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0027D488u) [[unlikely]] return; }
L_0027D488:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0027D4A0; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027D4AC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_0027D4A0:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0027D4AC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 16u)));  goto L_0027D4F8; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0027D4EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D4C8u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0027D4C8u) [[unlikely]] return; }
L_0027D4C8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0027D4E0; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027D4EC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_0027D4E0:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0027D4EC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027D5C0; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_0027D4F8:
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D504u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027D504u) [[unlikely]] return; }
L_0027D504:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D5C0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0027D544; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D520u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0027D520u) [[unlikely]] return; }
L_0027D520:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));  goto L_0027D538; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027D544; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_0027D538:
    c.r[2].d[0] = ld64((c.r[2].w[0] + 152u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0027D544:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D550u);  if (depth < kMaxDepth) unit_0059(c, 438u, depth + 1u); else { c.pc = 0x00287C70u; return; } if (c.pc != 0x0027D550u) [[unlikely]] return; }
L_0027D550:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D5C0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027D570; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 152u)));  if (t) { goto L_0027D570; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027D570:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D58Cu); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x0027D58Cu) [[unlikely]] return; }
L_0027D58C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D594u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 5u, depth + 1u); else { c.pc = 0x00288060u; return; } if (c.pc != 0x0027D594u) [[unlikely]] return; }
L_0027D594:
    set32(c.r[4], ld32((c.r[16].w[0] + 1100u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0027D978; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D5B8u); set32(c.r[5], 0u + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027D5B8u) [[unlikely]] return; }
L_0027D5B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027D978; } }
L_0027D5C0:
    c.r[3].d[0] = c.r[17].d[0] & 8ull;
    c.budget -= 1;
L_0027D5C4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[17].d[0] & 16ull;  goto L_0027D64C; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0027D604; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D5E0u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0027D5E0u) [[unlikely]] return; }
L_0027D5E0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0027D5F8; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027D604; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_0027D5F8:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0027D604:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027D648; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 120u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D61Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027D61Cu) [[unlikely]] return; }
L_0027D61C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D648; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 12u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D640u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0027D640u) [[unlikely]] return; }
L_0027D640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027D978; } }
L_0027D648:
    c.r[3].d[0] = c.r[17].d[0] & 16ull;
    c.budget -= 1;
L_0027D64C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1180u)));  goto L_0027D6D4; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0027D68C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D668u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0027D668u) [[unlikely]] return; }
L_0027D668:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0027D680; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027D68C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_0027D680:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0027D68C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027D6D0; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D6A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027D6A4u) [[unlikely]] return; }
L_0027D6A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D6D0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D6C8u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0027D6C8u) [[unlikely]] return; }
L_0027D6C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027D978; } }
L_0027D6D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 1180u)));
    c.budget -= 1;
L_0027D6D4:
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0027D718; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0027D6F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027D978; } }
L_0027D6F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D6FCu);  if (depth < kMaxDepth) unit_0052(c, 141u, depth + 1u); else { c.pc = 0x00269B70u; return; } if (c.pc != 0x0027D6FCu) [[unlikely]] return; }
L_0027D6FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D70Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 290u, depth + 1u); else { c.pc = 0x0028AF40u; return; } if (c.pc != 0x0027D70Cu) [[unlikely]] return; }
L_0027D70C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027D978; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_0027D718:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0027D74C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D728u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0027D728u) [[unlikely]] return; }
L_0027D728:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0027D740; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027D74C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_0027D740:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0027D74C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027D978; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 3424u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0027D770; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[3].w[0])));  if (t) { goto L_0027D770; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027D770:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0027D978; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1104u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0027D978; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 3808u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0027C000u < 16384u) { entry = entries_0057[(t - 0x0027C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0027D7A4:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D7BCu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027D7BCu) [[unlikely]] return; }
L_0027D7BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D978; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 14u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D7E0u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0027D7E0u) [[unlikely]] return; }
L_0027D7E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027D978; } }
L_0027D7E8:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D804u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027D804u) [[unlikely]] return; }
L_0027D804:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D978; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 15u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D828u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0027D828u) [[unlikely]] return; }
L_0027D828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027D978; } }
L_0027D830:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D84Cu); c.r[7].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027D84Cu) [[unlikely]] return; }
L_0027D84C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0027D87C; }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 160u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D870u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027D870u) [[unlikely]] return; }
L_0027D870:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D978; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027D87C:
    set32(c.r[5], 0u + 16u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D894u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0027D894u) [[unlikely]] return; }
L_0027D894:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027D978; } }
L_0027D89C:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D8B8u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027D8B8u) [[unlikely]] return; }
L_0027D8B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D978; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 15u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D8DCu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0027D8DCu) [[unlikely]] return; }
L_0027D8DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027D978; } }
L_0027D8E4:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D8FCu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027D8FCu) [[unlikely]] return; }
L_0027D8FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D978; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 110u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 108u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0027D978; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 11u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D934u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0027D934u) [[unlikely]] return; }
L_0027D934:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027D978; } }
L_0027D93C:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D954u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027D954u) [[unlikely]] return; }
L_0027D954:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D978; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 17u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D978u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0027D978u) [[unlikely]] return; }
L_0027D978:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0027D97C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0027D9A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027D9B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 108u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D9D0u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027D9D0u) [[unlikely]] return; }
L_0027D9D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0027DAFC; }
    set32(c.r[3], ld32((c.r[17].w[0] + 484u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 4;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_0027D9EC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027D9EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0027DAF0; }
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0027DA1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 464u)));  goto L_0027DA20; }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_0027DA1C:
    set32(c.r[4], ld32((c.r[17].w[0] + 464u)));
    c.budget -= 1;
L_0027DA20:
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 464u)));  goto L_0027DA9C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 176u)));  goto L_0027DA70; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0027DA6C; } }
    c.f[12] = ld32((c.r[17].w[0] + 496u));
    c.f[0] = ld32((c.r[4].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027DA6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DA60u);  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x00158EB0u; return; } if (c.pc != 0x0027DA60u) [[unlikely]] return; }
L_0027DA60:
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 3;
L_0027DA6C:
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 1;
L_0027DA70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027DA98; } }
    c.f[12] = ld32((c.r[17].w[0] + 512u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DA8Cu); set32(c.r[4], ld32((c.r[17].w[0] + 464u)));  if (depth < kMaxDepth) unit_000E(c, 188u, depth + 1u); else { c.pc = 0x00159500u; return; } if (c.pc != 0x0027DA8Cu) [[unlikely]] return; }
L_0027DA8C:
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 3;
L_0027DA98:
    set32(c.r[4], ld32((c.r[17].w[0] + 464u)));
    c.budget -= 1;
L_0027DA9C:
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027DAEC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027DAEC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0027DAEC; } }
    c.f[12] = ld32((c.r[17].w[0] + 504u));
    c.f[0] = ld32((c.r[4].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027DAEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DAE0u);  if (depth < kMaxDepth) unit_000E(c, 151u, depth + 1u); else { c.pc = 0x00158EE0u; return; } if (c.pc != 0x0027DAE0u) [[unlikely]] return; }
L_0027DAE0:
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 3;
L_0027DAEC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027DAF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DAF8u);  if (depth < kMaxDepth) unit_006C(c, 11u, depth + 1u); else { c.pc = 0x002D01B0u; return; } if (c.pc != 0x0027DAF8u) [[unlikely]] return; }
L_0027DAF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0027DAFC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027DB10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 108u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DB2Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027DB2Cu) [[unlikely]] return; }
L_0027DB2C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0027DC58; }
    set32(c.r[3], ld32((c.r[16].w[0] + 1320u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0027DB58; }
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 140u)));  goto L_0027DB64; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027DB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DB60u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0027DB60u) [[unlikely]] return; }
L_0027DB60:
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 1;
L_0027DB64:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[16].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027DC54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DB80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x0027DB80u) [[unlikely]] return; }
L_0027DB80:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0027DC54; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[4].w[0] + 80u));  goto L_0027DBB8; }
    c.f[12] = 0u;
    c.budget -= 1;
L_0027DBB8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027DBF8; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 176u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[3].d[0] & 15ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
L_0027DBF8:
    set32(c.r[5], c.r[2].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DC04u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0027DC04u) [[unlikely]] return; }
L_0027DC04:
    c.f[2] = ld32((c.r[29].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 27792u), c.f[2]);
    set32(c.r[5], 0u - 1u);
    st32((c.r[3].w[0] + 27796u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 27800u), c.f[1]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[9], c.r[9].w[0] + 27792u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], 0u + 1000u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DC54u); st32((c.r[2].w[0] + 27804u), c.f[0]);  if (depth < kMaxDepth) unit_0062(c, 68u, depth + 1u); else { c.pc = 0x002A8840u; return; } if (c.pc != 0x0027DC54u) [[unlikely]] return; }
L_0027DC54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0027DC58:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0027DC70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0027DCA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DC94u);  if (depth < kMaxDepth) unit_006C(c, 9u, depth + 1u); else { c.pc = 0x002D0120u; return; } if (c.pc != 0x0027DC94u) [[unlikely]] return; }
L_0027DC94:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DCA0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0068(c, 190u, depth + 1u); else { c.pc = 0x002C2440u; return; } if (c.pc != 0x0027DCA0u) [[unlikely]] return; }
L_0027DCA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DCA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 34u, depth + 1u); else { c.pc = 0x002A83F0u; return; } if (c.pc != 0x0027DCA8u) [[unlikely]] return; }
L_0027DCA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027DCC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027DCD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFEFF0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[3].d[0] | 57471ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], 0u - 129u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[8], ld32((c.r[4].w[0] + 176u)));
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    st32((c.r[4].w[0] + 176u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[8].d[0] & 1024ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 172u)));
    c.r[16].d[0] = c.r[8].d[0] & 2048ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 172u), c.r[5].w[0]);  if (t) { goto L_0027E0C0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1320u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 484u)));  goto L_0027DD38; }
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 5;
L_0027DD38:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_0027DD48; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027DD48:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027E0C0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 176u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x7DFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[17].w[0] + 176u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 464u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 9;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 464u)));  goto L_0027DF84; }
    set32(c.r[6], ld32((c.r[17].w[0] + 176u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0027DE48; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30344u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[4], ld32((c.r[6].w[0] + 92u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] ^ c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[4].d[0] == 0ull) { c.f[3] = ld32((c.r[6].w[0] + 80u));  goto L_0027DDB0; }
    c.f[3] = 0u;
    c.budget -= 1;
L_0027DDB0:
    c.f[1] = ld32((c.r[17].w[0] + 512u));
    c.f[2] = ld32((c.r[17].w[0] + 508u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[17].w[0] + 512u), c.f[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 488u)));
    c.budget -= 10;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0027DDE8; }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 3;
    if (c.r[4].sd[0] > 0) { set32(c.r[4], ld32((c.r[5].w[0])));  goto L_0027DDE8; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027DDE8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 512u));  goto L_0027DE04; }
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 464u)));  goto L_0027DE20; }
    c.f[1] = ld32((c.r[17].w[0] + 512u));
    c.budget -= 1;
L_0027DE04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[17].w[0] + 176u)));  goto L_0027DE54; }
    set32(c.r[4], ld32((c.r[17].w[0] + 464u)));
    c.budget -= 1;
L_0027DE20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DE28u);  if (depth < kMaxDepth) unit_000E(c, 190u, depth + 1u); else { c.pc = 0x00159530u; return; } if (c.pc != 0x0027DE28u) [[unlikely]] return; }
L_0027DE28:
    set32(c.r[5], ld32((c.r[17].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[4].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_0027DE50; } }
L_0027DE48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DE50u);  if (depth < kMaxDepth) unit_000E(c, 190u, depth + 1u); else { c.pc = 0x00159530u; return; } if (c.pc != 0x0027DE50u) [[unlikely]] return; }
L_0027DE50:
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 1;
L_0027DE54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027DF80; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));  goto L_0027DE88; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027DF80; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
L_0027DE88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.f[3] = ld32((c.r[4].w[0] + 80u));  goto L_0027DEAC; }
    c.f[3] = 0u;
    c.budget -= 1;
L_0027DEAC:
    c.f[1] = ld32((c.r[17].w[0] + 496u));
    c.f[2] = ld32((c.r[17].w[0] + 492u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[17].w[0] + 496u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DED0u); set32(c.r[4], ld32((c.r[17].w[0] + 464u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x00158EF0u; return; } if (c.pc != 0x0027DED0u) [[unlikely]] return; }
L_0027DED0:
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);  goto L_0027DF10; }
    c.f[1] = ld32((c.r[17].w[0] + 496u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027DF80; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 496u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_0027DF80; } }
L_0027DF10:
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0027DF50; }
    c.f[1] = ld32((c.r[17].w[0] + 496u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027DF80; } }
    st32((c.r[17].w[0] + 496u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_0027DF80; } }
L_0027DF50:
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[2] = ld32((c.r[17].w[0] + 496u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027DF80; } }
    st32((c.r[17].w[0] + 496u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 5;
L_0027DF80:
    set32(c.r[3], ld32((c.r[17].w[0] + 464u)));
    c.budget -= 1;
L_0027DF84:
    set32(c.r[3], ld32((c.r[3].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027E0C0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027E0C0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027E0C0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027E0C0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[3] = ld32((c.r[4].w[0] + 80u));  goto L_0027DFEC; }
    c.f[3] = 0u;
    c.budget -= 1;
L_0027DFEC:
    c.f[1] = ld32((c.r[17].w[0] + 504u));
    c.f[2] = ld32((c.r[17].w[0] + 500u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[17].w[0] + 504u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E010u); set32(c.r[4], ld32((c.r[17].w[0] + 464u)));  if (depth < kMaxDepth) unit_000E(c, 154u, depth + 1u); else { c.pc = 0x00158F30u; return; } if (c.pc != 0x0027E010u) [[unlikely]] return; }
L_0027E010:
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);  goto L_0027E050; }
    c.f[1] = ld32((c.r[17].w[0] + 504u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027E0C0; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 504u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_0027E0C0; } }
L_0027E050:
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0027E090; }
    c.f[1] = ld32((c.r[17].w[0] + 504u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027E0C0; } }
    st32((c.r[17].w[0] + 504u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_0027E0C0; } }
L_0027E090:
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[2] = ld32((c.r[17].w[0] + 504u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027E0C0; } }
    st32((c.r[17].w[0] + 504u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 5;
L_0027E0C0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0027E0D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E0D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 46u, depth + 1u); else { c.pc = 0x002A8540u; return; } if (c.pc != 0x0027E0D0u) [[unlikely]] return; }
L_0027E0D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0027E0D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027E0F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.f[12]);
    set32(c.r[3], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30328u)));
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 28u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[7].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 36u), c.r[8].w[0]);  if (t) { goto L_0027E124; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E124u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_005A(c, 180u, depth + 1u); else { c.pc = 0x002897F0u; return; } if (c.pc != 0x0027E124u) [[unlikely]] return; }
L_0027E124:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027E130:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1180u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 1184u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 1180u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 1188u)));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0027E17C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E17Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027E17Cu) [[unlikely]] return; }
L_0027E17C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1188u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 16u)));  goto L_0027E1A0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E198u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027E198u) [[unlikely]] return; }
L_0027E198:
    st32((c.r[16].w[0] + 1188u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 2;
L_0027E1A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E1B8u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027E1B8u) [[unlikely]] return; }
L_0027E1B8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 1188u), c.r[2].w[0]);  goto L_0027E1D8; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E1D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 270u, depth + 1u); else { c.pc = 0x002CF0F0u; return; } if (c.pc != 0x0027E1D4u) [[unlikely]] return; }
L_0027E1D4:
    st32((c.r[16].w[0] + 1188u), c.r[2].w[0]);
    c.budget -= 1;
L_0027E1D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 1100u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0027E2B4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 1180u)));
    set32(c.r[2], 0u + 9u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0027E228; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0027E224; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0027E224; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0027E224; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027E2A8; } }
L_0027E224:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027E228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E230u); set32(c.r[5], 0u + 10200u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x0027E230u) [[unlikely]] return; }
L_0027E230:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027E2B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E240u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0027E240u) [[unlikely]] return; }
L_0027E240:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027E2B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E258u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0027E258u) [[unlikely]] return; }
L_0027E258:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], 0u + 13u);  goto L_0027E26C; }
    set32(c.r[6], 0u + 12u);
    c.budget -= 1;
L_0027E26C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 10200u);
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E288u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 361u, depth + 1u); else { c.pc = 0x002A7D10u; return; } if (c.pc != 0x0027E288u) [[unlikely]] return; }
L_0027E288:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027E2B0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 144u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E2A0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0027E2A0u) [[unlikely]] return; }
L_0027E2A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E2B0; } }
L_0027E2A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E2B0u); set32(c.r[5], 0u + 600u);  if (depth < kMaxDepth) unit_0062(c, 78u, depth + 1u); else { c.pc = 0x002A8A10u; return; } if (c.pc != 0x0027E2B0u) [[unlikely]] return; }
L_0027E2B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027E2B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E2BCu);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0027E2BCu) [[unlikely]] return; }
L_0027E2BC:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0027E334; }
    set32(c.r[3], ld32((c.r[16].w[0] + 1180u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0027E318; }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0027E314; } }
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0027E314; } }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0027E314; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0027E314; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027E328; } }
L_0027E314:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027E318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E320u); set32(c.r[5], 0u + 10300u);  if (depth < kMaxDepth) unit_0062(c, 64u, depth + 1u); else { c.pc = 0x002A87C0u; return; } if (c.pc != 0x0027E320u) [[unlikely]] return; }
L_0027E320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E330; } }
L_0027E328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E330u); set32(c.r[5], 0u + 10300u);  if (depth < kMaxDepth) unit_0062(c, 66u, depth + 1u); else { c.pc = 0x002A8800u; return; } if (c.pc != 0x0027E330u) [[unlikely]] return; }
L_0027E330:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0027E334:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0027E350:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027E360:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 616u)));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 164u), c.r[6].w[0]);
    set32(c.r[21], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 580u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E3B4u); c.r[5].d[0] = c.r[16].d[0] & 255ull;  if (depth < kMaxDepth) unit_003A(c, 320u, depth + 1u); else { c.pc = 0x0020B250u; return; } if (c.pc != 0x0027E3B4u) [[unlikely]] return; }
L_0027E3B4:
    set32(c.r[4], ld32((c.r[20].w[0] + 580u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E3C0u); c.r[5].d[0] = c.r[16].d[0] & 255ull;  if (depth < kMaxDepth) unit_003A(c, 326u, depth + 1u); else { c.pc = 0x0020B3B0u; return; } if (c.pc != 0x0027E3C0u) [[unlikely]] return; }
L_0027E3C0:
    st32((c.r[20].w[0] + 584u), 0u);
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 596u), 0u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[30], ld32((c.r[19].w[0] + 16u)));
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0027E484; } }
L_0027E3E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E3E8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0027E3E8u) [[unlikely]] return; }
L_0027E3E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0027E484; }
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41420000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 17473ull;
    set32(c.r[5], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[4].d[0];
    set32(c.r[4], c.r[7].w[0] >> 8);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 65280ull;
    c.r[5].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[4], c.r[7].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0027E474; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47520000u);
    c.r[3].d[0] = c.r[3].d[0] | 20275ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0027E464; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4D440000u);
    c.r[3].d[0] = c.r[3].d[0] | 19529ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0027E454; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E480; } }
L_0027E454:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0027E480; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027E480; } }
L_0027E464:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0027E480; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027E480; } }
L_0027E474:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_0027E480; } }
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0027E480:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0027E484:
    c.r[2].d[0] = c.r[16].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027E3E0u | kUnwind; return; } goto L_0027E3E0; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 616u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 56u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_0027E4C4; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 60u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] << 2);  goto L_0027E4CC; }
L_0027E4C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027E4D4; } }
L_0027E4CC:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_0027E4D4:
    st32((c.r[20].w[0] + 608u), c.r[2].w[0]);
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[29].w[0] + 172u), 0u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 168u), 0u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 140u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], c.r[29].w[0] + 172u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E504u); set32(c.r[10], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_005C(c, 344u, depth + 1u); else { c.pc = 0x00292FB0u; return; } if (c.pc != 0x0027E504u) [[unlikely]] return; }
L_0027E504:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027E514; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027E6D4; } }
L_0027E514:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[16], ld32((c.r[19].w[0] + 16u)));  goto L_0027E5E8; }
    set32(c.r[4], ld32((c.r[20].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 40u);  goto L_0027E548; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 580u), 0u);  goto L_0027E544; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E540u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027E540u) [[unlikely]] return; }
L_0027E540:
    st32((c.r[20].w[0] + 580u), 0u);
    c.budget -= 1;
L_0027E544:
    set32(c.r[4], 0u + 40u);
    c.budget -= 1;
L_0027E548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E550u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0027E550u) [[unlikely]] return; }
L_0027E550:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 580u), c.r[2].w[0]);  goto L_0027E564; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E560u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 300u, depth + 1u); else { c.pc = 0x0020AD20u; return; } if (c.pc != 0x0027E560u) [[unlikely]] return; }
L_0027E560:
    st32((c.r[20].w[0] + 580u), c.r[2].w[0]);
    c.budget -= 1;
L_0027E564:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_0027E574; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027E6D4; } }
L_0027E574:
    set32(c.r[3], ld32((c.r[3].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0027E5A8; }
    set32(c.r[3], ld32((c.r[3].w[0] + 52u)));
    c.r[3].d[0] = c.r[21].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[21].w[0] << 2);  goto L_0027E5A0; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E5A8; } }
L_0027E5A0:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_0027E5A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E5B4u);  if (depth < kMaxDepth) unit_003A(c, 304u, depth + 1u); else { c.pc = 0x0020AE00u; return; } if (c.pc != 0x0027E5B4u) [[unlikely]] return; }
L_0027E5B4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 580u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E5CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 317u, depth + 1u); else { c.pc = 0x0020B090u; return; } if (c.pc != 0x0027E5CCu) [[unlikely]] return; }
L_0027E5CC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 580u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E5E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 323u, depth + 1u); else { c.pc = 0x0020B310u; return; } if (c.pc != 0x0027E5E4u) [[unlikely]] return; }
L_0027E5E4:
    set32(c.r[16], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_0027E5E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0027E694; } }
L_0027E5F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E5F8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0027E5F8u) [[unlikely]] return; }
L_0027E5F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0027E694; }
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41420000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 21075ull;
    set32(c.r[5], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[4].d[0];
    set32(c.r[4], c.r[7].w[0] >> 8);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 65280ull;
    c.r[5].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[4], c.r[7].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 15;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 168u)));  goto L_0027E67C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47520000u);
    c.r[3].d[0] = c.r[3].d[0] | 20275ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0027E654; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E690; } }
L_0027E654:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_0027E690; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0027E690; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E674u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 61u, depth + 1u); else { c.pc = 0x00208770u; return; } if (c.pc != 0x0027E674u) [[unlikely]] return; }
L_0027E674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E690; } }
L_0027E67C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0027E690; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E690u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 108u, depth + 1u); else { c.pc = 0x003C5140u; return; } if (c.pc != 0x0027E690u) [[unlikely]] return; }
L_0027E690:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0027E694:
    c.r[2].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027E5F0u | kUnwind; return; } goto L_0027E5F0; }
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    st32((c.r[20].w[0] + 584u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 580u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E6B8u); c.r[5].d[0] = c.r[23].d[0] & 255ull;  if (depth < kMaxDepth) unit_003A(c, 317u, depth + 1u); else { c.pc = 0x0020B090u; return; } if (c.pc != 0x0027E6B8u) [[unlikely]] return; }
L_0027E6B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    st32((c.r[20].w[0] + 596u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 580u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E6D0u); c.r[5].d[0] = c.r[23].d[0] & 255ull;  if (depth < kMaxDepth) unit_003A(c, 323u, depth + 1u); else { c.pc = 0x0020B310u; return; } if (c.pc != 0x0027E6D0u) [[unlikely]] return; }
L_0027E6D0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0027E6D4:
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
L_0027E710:
    set32(c.r[2], ld32((c.r[4].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0027E728; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027E754; } }
L_0027E728:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 96u)));  goto L_0027E73C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027E754; } }
L_0027E73C:
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 122u)));  goto L_0027E750; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027E754; } }
L_0027E750:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0027E754:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027E760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0027E784; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027E874; } }
L_0027E784:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 96u)));  goto L_0027E79C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027E874; } }
L_0027E79C:
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 164u)));  goto L_0027E7B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027E874; } }
L_0027E7B0:
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027E7C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027E874; } }
L_0027E7C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E7CCu);  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x0027E7CCu) [[unlikely]] return; }
L_0027E7CC:
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 544u)));
    c.budget -= 7;
    if (c.r[2].sd[0] > 0) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 116u)));  goto L_0027E7F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027E874; } }
L_0027E7F0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 114u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0027E808; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027E874; } }
L_0027E808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E810u);  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x0027E810u) [[unlikely]] return; }
L_0027E810:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 126u)));
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 544u)));
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 13;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[5].d[0] + 0ull;  goto L_0027E844; }
L_0027E844:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[6].d[0] << 48;
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0027E874; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027E874:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027E890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0027E8B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027E98C; } }
L_0027E8B4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 96u)));  goto L_0027E8CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027E98C; } }
L_0027E8CC:
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 164u)));  goto L_0027E8E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027E98C; } }
L_0027E8E0:
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027E8F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027E98C; } }
L_0027E8F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E8FCu);  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x0027E8FCu) [[unlikely]] return; }
L_0027E8FC:
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 546u)));
    c.budget -= 7;
    if (c.r[2].sd[0] > 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0027E920; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027E98C; } }
L_0027E920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E928u);  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x0027E928u) [[unlikely]] return; }
L_0027E928:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 126u)));
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 546u)));
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 13;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[5].d[0] + 0ull;  goto L_0027E95C; }
L_0027E95C:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[6].d[0] << 48;
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0027E98C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027E98C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027E9A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027E9E8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0027E9D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027EB20; } }
L_0027E9D4:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 96u)));  goto L_0027E9EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027EB20; } }
L_0027E9E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_0027E9EC:
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0027EA00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027EB20; } }
L_0027EA00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EA08u);  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x0027EA08u) [[unlikely]] return; }
L_0027EA08:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 140u)));  goto L_0027EA18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027EB20; } }
L_0027EA18:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[17].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0027EB20; }
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 126u)));  goto L_0027EA44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027EB20; } }
L_0027EA44:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 122u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[5].d[0] + 0ull;  goto L_0027EA60; }
L_0027EA60:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 14;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0027EAA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027EB20; } }
L_0027EAA0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 592u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0027EAC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027EB20; } }
L_0027EAC0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0027EB1C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 124u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[5].d[0] + 0ull;  goto L_0027EAE4; }
L_0027EAE4:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0027EB1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027EB20; } }
L_0027EB1C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0027EB20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027EB40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));  goto L_0027EB60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027EC28; } }
L_0027EB60:
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  goto L_0027EB74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027EC28; } }
L_0027EB74:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_0027EB8C; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027EB8C; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027EB8C:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027EC28; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 1100u)));  goto L_0027EBA8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027EC28; } }
L_0027EBA8:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[6].d[0]) { set32(c.r[25], ld32((c.r[4].w[0] + 16u)));  goto L_0027EC1C; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[4].w[0] + 16u)));  goto L_0027EC08; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[4].w[0] + 16u)));  goto L_0027EBF0; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[25], ld32((c.r[4].w[0] + 16u)));  goto L_0027EBDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027EC28; } }
L_0027EBDC:
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EBE8u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027EBE8u) [[unlikely]] return; }
L_0027EBE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027EC28; } }
L_0027EBF0:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EC00u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027EC00u) [[unlikely]] return; }
L_0027EC00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027EC28; } }
L_0027EC08:
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EC14u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027EC14u) [[unlikely]] return; }
L_0027EC14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027EC28; } }
L_0027EC1C:
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EC28u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027EC28u) [[unlikely]] return; }
L_0027EC28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027EC40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 1296u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1296u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 148u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[7], ld32((c.r[4].w[0] + 148u)));  if (t) { goto L_0027EC64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027ECFC; } }
L_0027EC64:
    set32(c.r[3], 0u + 2000u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0027ECFC; }
    set32(c.r[2], 0u + 2001u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0027ECA4; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_0027ECA4; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_0027ECA4; } }
    set32(c.r[2], 0u + 2004u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_0027ECA4; } }
    set32(c.r[2], 0u + 7013u);
    c.budget -= 3;
    if (c.r[7].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 1104u)));  goto L_0027ECB0; }
L_0027ECA4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027ECFC; } }
L_0027ECB0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_0027ECE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ECC4u); set32(c.r[4], c.r[4].w[0] + 52u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x0027ECC4u) [[unlikely]] return; }
L_0027ECC4:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0027ECFC; }
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027ECFC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027ECFC; } }
L_0027ECE8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0027ECF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027ECFC; } }
L_0027ECF8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027ECFC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027ED10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ED2Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 241u, depth + 1u); else { c.pc = 0x0027EC40u; return; } if (c.pc != 0x0027ED2Cu) [[unlikely]] return; }
L_0027ED2C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 1100u)));  goto L_0027ED3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027EF24; } }
L_0027ED3C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 1096u)));  goto L_0027ED64; }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027ED60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027EF24; } }
L_0027ED60:
    set32(c.r[2], ld32((c.r[17].w[0] + 1096u)));
    c.budget -= 1;
L_0027ED64:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 172u)));  goto L_0027ED84; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[17].d[0];  if (t) { goto L_0027ED80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027EF24; } }
L_0027ED80:
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 1;
L_0027ED84:
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  goto L_0027EDB0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ED9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 313u, depth + 1u); else { c.pc = 0x0028B330u; return; } if (c.pc != 0x0027ED9Cu) [[unlikely]] return; }
L_0027ED9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027EDAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027EF24; } }
L_0027EDAC:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 1;
L_0027EDB0:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 5u);  goto L_0027EDE8; }
    set32(c.r[3], ld32((c.r[17].w[0] + 1104u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0027EDE4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027EDE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0027EF28; } }
L_0027EDE4:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_0027EDE8:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1011u);  goto L_0027EE1C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 1104u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0027EE18; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027EE18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027EF24; } }
L_0027EE18:
    set32(c.r[2], 0u + 1011u);
    c.budget -= 1;
L_0027EE1C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 172u)));  goto L_0027EE40; }
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0027EE3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027EF24; } }
L_0027EE3C:
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 1;
L_0027EE40:
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 4096ull;  goto L_0027EE74; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] | 34465ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0027EE70; } }
    set32(c.r[2], 0u + 1011u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0027EE70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027EF24; } }
L_0027EE70:
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 1;
L_0027EE74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 72u)));  goto L_0027EED0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EE84u);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0027EE84u) [[unlikely]] return; }
L_0027EE84:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027EECC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] | 34464ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0027EECC; } }
    c.r[2].d[0] = c.r[3].sd[0] < 10019ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027EF24; }
    c.r[1].d[0] = c.r[3].sd[0] < 10023ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0027EECC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027EF24; } }
L_0027EECC:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_0027EED0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027EF24; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 1096u)));  goto L_0027EF0C; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 1096u)));  goto L_0027EEF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027EF24; } }
L_0027EEF8:
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027EF20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027EF24; } }
L_0027EF0C:
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027EF20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027EF24; } }
L_0027EF20:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0027EF24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0027EF28:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027EF40:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 96u)));  goto L_0027EF84; }
    set32(c.r[2], ld32((c.r[4].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0027EF60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F06C; } }
L_0027EF60:
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027EF80; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0027EF80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F06C; } }
L_0027EF80:
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 1;
L_0027EF84:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 140u)));  goto L_0027EF98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F06C; } }
L_0027EF98:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0027F06C; }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 126u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 122u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[7].d[0] + 0ull;  goto L_0027EFCC; }
L_0027EFCC:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[6].d[0] = c.r[7].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[2], c.r[6].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    mmi::div(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0027F00C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F06C; } }
L_0027F00C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0027F068; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 124u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[7].d[0] + 0ull;  goto L_0027F030; }
L_0027F030:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[6].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    mmi::div(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0027F068; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F06C; } }
L_0027F068:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0027F06C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027F080:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0027F110; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0027F110; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F0D0u); set32(c.r[4], c.r[19].w[0] + 52u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x0027F0D0u) [[unlikely]] return; }
L_0027F0D0:
    c.r[1].d[0] = c.r[2].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0027F110; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F0E4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x0027F0E4u) [[unlikely]] return; }
L_0027F0E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027F110; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 160u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F108u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027F108u) [[unlikely]] return; }
L_0027F108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0027F28C; } }
L_0027F110:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 96u)));  goto L_0027F148; }
    set32(c.r[2], ld32((c.r[19].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0027F130; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F288; } }
L_0027F130:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027F144; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F288; } }
L_0027F144:
    set32(c.r[2], ld32((c.r[19].w[0] + 96u)));
    c.budget -= 1;
L_0027F148:
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0027F15C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F288; } }
L_0027F15C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F164u);  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x0027F164u) [[unlikely]] return; }
L_0027F164:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 140u)));  goto L_0027F178; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F288; } }
L_0027F178:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[19].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0027F288; }
    set32(c.r[2], ld32((c.r[19].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 126u)));  goto L_0027F1A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F288; } }
L_0027F1A4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 122u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[5].d[0] + 0ull;  goto L_0027F1C0; }
L_0027F1C0:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 14;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0027F200; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F288; } }
L_0027F200:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 594u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0027F220; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F288; } }
L_0027F220:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0027F284; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0027F284; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 124u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[5].d[0] + 0ull;  goto L_0027F24C; }
L_0027F24C:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0027F284; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F288; } }
L_0027F284:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0027F288:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0027F28C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0027F2B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0027F2D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F31C; } }
L_0027F2D4:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F2E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027F2E4u) [[unlikely]] return; }
L_0027F2E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0027F2F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F31C; } }
L_0027F2F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F2FCu);  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x0027F2FCu) [[unlikely]] return; }
L_0027F2FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0027F30C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F31C; } }
L_0027F30C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F314u); set32(c.r[4], ld32((c.r[2].w[0] + 80u)));  if (depth < kMaxDepth) unit_005C(c, 251u, depth + 1u); else { c.pc = 0x002921E0u; return; } if (c.pc != 0x0027F314u) [[unlikely]] return; }
L_0027F314:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0027F31C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027F330:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0027F380; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0027F36C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F564; } }
L_0027F36C:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 96u)));  goto L_0027F384; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F564; } }
L_0027F380:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 1;
L_0027F384:
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 164u)));  goto L_0027F398; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F564; } }
L_0027F398:
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], ld32((c.r[28].w[0] - 30316u)));  goto L_0027F3AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F564; } }
L_0027F3AC:
    set32(c.r[18], ld32((c.r[8].w[0] + 13372u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[4], c.r[8].w[0] + 112u);  if (t) { goto L_0027F3C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F564; } }
L_0027F3C0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 126u)));  goto L_0027F3E4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 13280u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027F3E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F564; } }
L_0027F3E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 126u)));
    c.budget -= 1;
L_0027F3E4:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 122u)));
    mmi::div(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] + 0ull;  goto L_0027F400; }
L_0027F400:
    c.r[6].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[3].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[6], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    mmi::div(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 14;
    if (c.r[6].sd[0] > 0) { set32(c.r[6], ld32((c.r[8].w[0] + 80u)));  goto L_0027F440; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F564; } }
L_0027F440:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 116u)));
    set32(c.r[17], c.r[6].w[0] + 188u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 188u)));
    c.r[1].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0027F460; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F564; } }
L_0027F460:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[17], c.r[4].w[0] + 13232u);  goto L_0027F4F8; }
    set32(c.r[7], ld32((c.r[4].w[0] + 13360u)));
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 124u)));  goto L_0027F47C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F564; } }
L_0027F47C:
    mmi::div(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 6;
    if (c.r[5].d[0] == 0ull) { c.r[5].d[0] = c.r[3].d[0] + 0ull;  goto L_0027F494; }
L_0027F494:
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 26u)));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[5], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    if (c.r[1].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0027F4D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F564; } }
L_0027F4D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F4DCu);  if (depth < kMaxDepth) unit_0060(c, 369u, depth + 1u); else { c.pc = 0x002A3830u; return; } if (c.pc != 0x0027F4DCu) [[unlikely]] return; }
L_0027F4DC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 116u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0027F564; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F564; } }
L_0027F4F8:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0027F544; } }
L_0027F504:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F518u); set32(c.r[4], c.r[3].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x0027F518u) [[unlikely]] return; }
L_0027F518:
    set32(c.r[4], ld32((c.r[16].w[0] + 1296u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 1296u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0027F544; }
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027F540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 1u);  if (t) { goto L_0027F550; } }
L_0027F540:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0027F544:
    c.r[2].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F504u | kUnwind; return; } goto L_0027F504; }
L_0027F550:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_0027F560; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F564; } }
L_0027F560:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0027F564:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0027F590:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0027F5C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F6B8; } }
L_0027F5C0:
    set32(c.r[4], ld32((c.r[18].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F5CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 369u, depth + 1u); else { c.pc = 0x002A3830u; return; } if (c.pc != 0x0027F5CCu) [[unlikely]] return; }
L_0027F5CC:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 148u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F5E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 255u, depth + 1u); else { c.pc = 0x00292250u; return; } if (c.pc != 0x0027F5E8u) [[unlikely]] return; }
L_0027F5E8:
    set32(c.r[4], c.r[2].w[0] << 3);
    set32(c.r[3], ld32((c.r[18].w[0] + 140u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[18].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[4].w[0] + 200u);  if (t) { goto L_0027F618; } }
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[17].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 1296u)));  goto L_0027F620; }
L_0027F618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F6B8; } }
L_0027F620:
    set32(c.r[2], ld32((c.r[17].w[0] + 1296u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0027F634; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F6B8; } }
L_0027F634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F63Cu);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0027F63Cu) [[unlikely]] return; }
L_0027F63C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F644u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0027F644u) [[unlikely]] return; }
L_0027F644:
    set32(c.r[6], c.r[17].w[0] + 736u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F654u); set32(c.r[5], c.r[18].w[0] + 736u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0027F654u) [[unlikely]] return; }
L_0027F654:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F664u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0027F664u) [[unlikely]] return; }
L_0027F664:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.f[20] = ld32((c.r[16].w[0] + 12u));  goto L_0027F678; }
    c.f[20] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 1;
L_0027F678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F680u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x0027F680u) [[unlikely]] return; }
L_0027F680:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0027F694; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F6B8; } }
L_0027F694:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F6A0u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0027F6A0u) [[unlikely]] return; }
L_0027F6A0:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0027F6B4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027F6B4:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_0027F6B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0027F6E0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F718u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x0027F718u) [[unlikely]] return; }
L_0027F718:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027F728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FAC8; } }
L_0027F728:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 96u)));  goto L_0027F760; }
    set32(c.r[2], ld32((c.r[18].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0027F748; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FAC8; } }
L_0027F748:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027F75C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FAC8; } }
L_0027F75C:
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 1;
L_0027F760:
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0027F774; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FAC8; } }
L_0027F774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F77Cu);  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x0027F77Cu) [[unlikely]] return; }
L_0027F77C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));  goto L_0027F790; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FAC8; } }
L_0027F790:
    set32(c.r[2], 0u + 7u);
    set32(c.r[16], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 148u)));  goto L_0027F7D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F7A8u); set32(c.r[4], c.r[18].w[0] + 52u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x0027F7A8u) [[unlikely]] return; }
L_0027F7A8:
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027F7D0; }
    set32(c.r[25], ld32((c.r[18].w[0] + 16u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 160u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F7D0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027F7D0u) [[unlikely]] return; }
L_0027F7D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0027FACC; } }
L_0027F7D8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0027F808; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F7F8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0027F7F8u) [[unlikely]] return; }
L_0027F7F8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0027F82C; } }
L_0027F808:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F818u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0027F818u) [[unlikely]] return; }
L_0027F818:
    set32(c.r[3], ld32((c.r[18].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027F82C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FAC8; } }
L_0027F82C:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027FAC8; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 172u)));  goto L_0027F848; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027FAC8; } }
L_0027F848:
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027FAC8; }
    set32(c.r[2], ld32((c.r[19].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 164u)));  goto L_0027F870; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027FAC8; } }
L_0027F870:
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 126u)));  goto L_0027F884; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FAC8; } }
L_0027F884:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 122u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] + 0ull;  goto L_0027F8A0; }
L_0027F8A0:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 14;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0027F8E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FAC8; } }
L_0027F8E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 596u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0027F900; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FAC8; } }
L_0027F900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F908u);  if (depth < kMaxDepth) unit_0067(c, 254u, depth + 1u); else { c.pc = 0x002BE680u; return; } if (c.pc != 0x0027F908u) [[unlikely]] return; }
L_0027F908:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[20], c.r[4].w[0] + 2456u);  goto L_0027F928; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FAC8; } }
L_0027F928:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { set32(c.r[19], c.r[16].w[0] << 4);  goto L_0027F938; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FAC8; } }
L_0027F938:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[19].w[0] + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F948u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0027F948u) [[unlikely]] return; }
L_0027F948:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0027F95C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 160u)));  if (t) { goto L_0027F970; } }
L_0027F95C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_0027F970; }
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_0027F970:
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[6], c.r[19].w[0] + 8u);  goto L_0027F998; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0027F994; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F994u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0027F994u) [[unlikely]] return; }
L_0027F994:
    set32(c.r[6], c.r[19].w[0] + 8u);
    c.budget -= 1;
L_0027F998:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F9A4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0027F9A4u) [[unlikely]] return; }
L_0027F9A4:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0027F9B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[29].w[0] + 128u)));  if (t) { goto L_0027F9CC; } }
L_0027F9B8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[19].d[0] = 0ull + 0ull;  goto L_0027F9CC; }
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[19], c.f[0]);
    c.budget -= 3;
L_0027F9CC:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 4u)));  goto L_0027F9F4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0027F9F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F9F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0027F9F0u) [[unlikely]] return; }
L_0027F9F0:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_0027F9F4:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0])));
    mmi::mult(c, 0, c.r[4].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::maddu(c, 0, c.r[3].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0027FA18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FAC8; } }
L_0027FA18:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0027FAC8; }
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0027FA8C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 126u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 124u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] + 0ull;  goto L_0027FA48; }
L_0027FA48:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0027FA88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FAC8; } }
L_0027FA88:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_0027FA8C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 596u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0027FAAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FAC8; } }
L_0027FAAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FAB4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 23u, depth + 1u); else { c.pc = 0x0028C540u; return; } if (c.pc != 0x0027FAB4u) [[unlikely]] return; }
L_0027FAB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027FAC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FAC8; } }
L_0027FAC4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0027FAC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0027FACC:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0027FAF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FB20u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x0027FB20u) [[unlikely]] return; }
L_0027FB20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 148u)));  goto L_0027FB30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FDCC; } }
L_0027FB30:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));  goto L_0027FB44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FDCC; } }
L_0027FB44:
    set32(c.r[2], 0u + 7u);
    set32(c.r[16], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[19].w[0] + 52u);  goto L_0027FB5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FDCC; } }
L_0027FB5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FB64u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x0027FB64u) [[unlikely]] return; }
L_0027FB64:
    c.r[1].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0027FB78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FDCC; } }
L_0027FB78:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 96u)));  goto L_0027FBB0; }
    set32(c.r[2], ld32((c.r[19].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0027FB98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FDCC; } }
L_0027FB98:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027FBAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FDCC; } }
L_0027FBAC:
    set32(c.r[2], ld32((c.r[19].w[0] + 96u)));
    c.budget -= 1;
L_0027FBB0:
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0027FBC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FDCC; } }
L_0027FBC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FBCCu);  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x0027FBCCu) [[unlikely]] return; }
L_0027FBCC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0027FBE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FDCC; } }
L_0027FBE0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FBF0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0027FBF0u) [[unlikely]] return; }
L_0027FBF0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FC04u); set32(c.r[4], ld32((c.r[2].w[0] + 112u)));  if (depth < kMaxDepth) unit_005C(c, 364u, depth + 1u); else { c.pc = 0x002933C0u; return; } if (c.pc != 0x0027FC04u) [[unlikely]] return; }
L_0027FC04:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 164u)));  goto L_0027FC14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FDCC; } }
L_0027FC14:
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 126u)));  goto L_0027FC28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FDCC; } }
L_0027FC28:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 122u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] + 0ull;  goto L_0027FC44; }
L_0027FC44:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 14;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { goto L_0027FC84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FDCC; } }
L_0027FC84:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_0027FD44; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 116u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 80u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 596u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0027FCB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FDCC; } }
L_0027FCB0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0027FDCC; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 116u)));  goto L_0027FD18; }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 124u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[3].d[0] + 0ull;  goto L_0027FCDC; }
L_0027FCDC:
    c.r[3].d[0] = c.r[4].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0027FD14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FDCC; } }
L_0027FD14:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 116u)));
    c.budget -= 1;
L_0027FD18:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0027FD2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FDCC; } }
L_0027FD2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FD34u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 23u, depth + 1u); else { c.pc = 0x0028C540u; return; } if (c.pc != 0x0027FD34u) [[unlikely]] return; }
L_0027FD34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027FDC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FDCC; } }
L_0027FD44:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 116u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 594u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0027FD64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FDCC; } }
L_0027FD64:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0027FDC8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0027FDC8; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 124u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[3].d[0] + 0ull;  goto L_0027FD90; }
L_0027FD90:
    c.r[3].d[0] = c.r[4].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0027FDC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FDCC; } }
L_0027FDC8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0027FDCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0027FDF0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027FE00; }
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0027FE00:
    set32(c.r[2], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 76u)));  goto L_0027FE14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FE30; } }
L_0027FE14:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0027FE2C; } }
    c.r[1].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  goto L_0027FE30; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0027FE2C:
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0027FE30:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 140u)));  goto L_0027FE40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FE90; } }
L_0027FE40:
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 1180u)));  goto L_0027FE54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FE90; } }
L_0027FE54:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0027FE90; }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0027FE8C; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0027FE8C; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0027FE8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FE90; } }
L_0027FE8C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0027FE90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027FEA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027FECC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FF68; } }
L_0027FECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FED4u); set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0027FED4u) [[unlikely]] return; }
L_0027FED4:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 52u);  goto L_0027FEEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FF68; } }
L_0027FEEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FEF4u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x0027FEF4u) [[unlikely]] return; }
L_0027FEF4:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0027FF1C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 584u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027FF18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FF68; } }
L_0027FF18:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027FF1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FF24u);  if (depth < kMaxDepth) unit_006A(c, 36u, depth + 1u); else { c.pc = 0x002C84D0u; return; } if (c.pc != 0x0027FF24u) [[unlikely]] return; }
L_0027FF24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027FF34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FF68; } }
L_0027FF34:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0027FF68; }
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 124u)));  goto L_0027FF54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FF68; } }
L_0027FF54:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0027FF64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FF68; } }
L_0027FF64:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0027FF68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027FF80:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 116u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 1296u)));
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 17;
    { const bool t = c.r[19].d[0] != c.r[20].d[0]; set32(c.r[17], ld32((c.r[4].w[0] + 148u)));  if (t) { goto L_0027FFCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0058(c, 17u, depth); } }
L_0027FFCC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30324u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027FFE0; }
    set32(c.r[2], ld32((c.r[2].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 2;
L_0027FFE0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[20].w[0] + 52u);  goto L_0027FFF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0058(c, 17u, depth); } }
L_0027FFF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FFF8u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x0027FFF8u) [[unlikely]] return; }
L_0027FFF8:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[3], 0u + 5u);  [[clang::musttail]] return unit_0058(c, 2u, depth); }
    [[clang::musttail]] return unit_0058(c, 1u, depth);
}

}
