#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0063[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9,
    0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 13, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0,
    0, 27, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0,
    0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0,
    0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 66, 0, 0, 67, 0,
    0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0,
    0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0,
    97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0,
    0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126,
    0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0,
    0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0,
    0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0,
    0, 169, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0,
    0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0,
    0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 189,
    0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0,
    0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0,
    199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0,
    0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219,
    0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 227, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0,
    0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245,
    0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 251, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0,
    274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0,
    286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0,
    0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0,
    0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316,
    0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0,
    337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0,
    341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0,
    0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0,
    0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    354, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0,
};

void unit_0063(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002AC000;
    case 2u: goto L_002AC008;
    case 3u: goto L_002AC02C;
    case 4u: goto L_002AC060;
    case 5u: goto L_002AC074;
    case 6u: goto L_002AC0C0;
    case 7u: goto L_002AC0D0;
    case 8u: goto L_002AC0E0;
    case 9u: goto L_002AC0FC;
    case 10u: goto L_002AC110;
    case 11u: goto L_002AC158;
    case 12u: goto L_002AC160;
    case 13u: goto L_002AC174;
    case 14u: goto L_002AC1B0;
    case 15u: goto L_002AC1C4;
    case 16u: goto L_002AC1F0;
    case 17u: goto L_002AC204;
    case 18u: goto L_002AC228;
    case 19u: goto L_002AC240;
    case 20u: goto L_002AC278;
    case 21u: goto L_002AC2C0;
    case 22u: goto L_002AC30C;
    case 23u: goto L_002AC330;
    case 24u: goto L_002AC338;
    case 25u: goto L_002AC34C;
    case 26u: goto L_002AC374;
    case 27u: goto L_002AC384;
    case 28u: goto L_002AC38C;
    case 29u: goto L_002AC398;
    case 30u: goto L_002AC3BC;
    case 31u: goto L_002AC3C4;
    case 32u: goto L_002AC3D0;
    case 33u: goto L_002AC3F4;
    case 34u: goto L_002AC414;
    case 35u: goto L_002AC41C;
    case 36u: goto L_002AC42C;
    case 37u: goto L_002AC444;
    case 38u: goto L_002AC474;
    case 39u: goto L_002AC4B8;
    case 40u: goto L_002AC4D0;
    case 41u: goto L_002AC4F0;
    case 42u: goto L_002AC500;
    case 43u: goto L_002AC520;
    case 44u: goto L_002AC530;
    case 45u: goto L_002AC550;
    case 46u: goto L_002AC570;
    case 47u: goto L_002AC580;
    case 48u: goto L_002AC590;
    case 49u: goto L_002AC5EC;
    case 50u: goto L_002AC628;
    case 51u: goto L_002AC650;
    case 52u: goto L_002AC68C;
    case 53u: goto L_002AC6AC;
    case 54u: goto L_002AC6D8;
    case 55u: goto L_002AC6F8;
    case 56u: goto L_002AC720;
    case 57u: goto L_002AC740;
    case 58u: goto L_002AC764;
    case 59u: goto L_002AC784;
    case 60u: goto L_002AC7AC;
    case 61u: goto L_002AC7E4;
    case 62u: goto L_002AC818;
    case 63u: goto L_002AC834;
    case 64u: goto L_002AC850;
    case 65u: goto L_002AC864;
    case 66u: goto L_002AC86C;
    case 67u: goto L_002AC878;
    case 68u: goto L_002AC884;
    case 69u: goto L_002AC92C;
    case 70u: goto L_002AC940;
    case 71u: goto L_002AC974;
    case 72u: goto L_002AC988;
    case 73u: goto L_002AC9AC;
    case 74u: goto L_002ACA20;
    case 75u: goto L_002ACAA0;
    case 76u: goto L_002ACAD4;
    case 77u: goto L_002ACB34;
    case 78u: goto L_002ACB98;
    case 79u: goto L_002ACC10;
    case 80u: goto L_002ACC40;
    case 81u: goto L_002ACC6C;
    case 82u: goto L_002ACC7C;
    case 83u: goto L_002ACCD4;
    case 84u: goto L_002ACCE8;
    case 85u: goto L_002ACD10;
    case 86u: goto L_002ACD64;
    case 87u: goto L_002ACD6C;
    case 88u: goto L_002ACD90;
    case 89u: goto L_002ACDA0;
    case 90u: goto L_002ACDAC;
    case 91u: goto L_002ACE40;
    case 92u: goto L_002ACEEC;
    case 93u: goto L_002ACF08;
    case 94u: goto L_002ACF24;
    case 95u: goto L_002ACF40;
    case 96u: goto L_002ACF64;
    case 97u: goto L_002ACF80;
    case 98u: goto L_002ACF9C;
    case 99u: goto L_002ACFD8;
    case 100u: goto L_002ACFF4;
    case 101u: goto L_002AD010;
    case 102u: goto L_002AD05C;
    case 103u: goto L_002AD078;
    case 104u: goto L_002AD0A4;
    case 105u: goto L_002AD0C0;
    case 106u: goto L_002AD0DC;
    case 107u: goto L_002AD0F4;
    case 108u: goto L_002AD140;
    case 109u: goto L_002AD180;
    case 110u: goto L_002AD198;
    case 111u: goto L_002AD1A8;
    case 112u: goto L_002AD1C8;
    case 113u: goto L_002AD1E4;
    case 114u: goto L_002AD1EC;
    case 115u: goto L_002AD208;
    case 116u: goto L_002AD224;
    case 117u: goto L_002AD260;
    case 118u: goto L_002AD288;
    case 119u: goto L_002AD2B8;
    case 120u: goto L_002AD2D4;
    case 121u: goto L_002AD2EC;
    case 122u: goto L_002AD340;
    case 123u: goto L_002AD35C;
    case 124u: goto L_002AD374;
    case 125u: goto L_002AD3C8;
    case 126u: goto L_002AD3FC;
    case 127u: goto L_002AD41C;
    case 128u: goto L_002AD454;
    case 129u: goto L_002AD46C;
    case 130u: goto L_002AD4B0;
    case 131u: goto L_002AD500;
    case 132u: goto L_002AD51C;
    case 133u: goto L_002AD534;
    case 134u: goto L_002AD594;
    case 135u: goto L_002AD5B0;
    case 136u: goto L_002AD5C8;
    case 137u: goto L_002AD618;
    case 138u: goto L_002AD634;
    case 139u: goto L_002AD64C;
    case 140u: goto L_002AD688;
    case 141u: goto L_002AD6BC;
    case 142u: goto L_002AD6DC;
    case 143u: goto L_002AD70C;
    case 144u: goto L_002AD768;
    case 145u: goto L_002AD784;
    case 146u: goto L_002AD79C;
    case 147u: goto L_002AD7B8;
    case 148u: goto L_002AD7DC;
    case 149u: goto L_002AD7F8;
    case 150u: goto L_002AD80C;
    case 151u: goto L_002AD828;
    case 152u: goto L_002AD830;
    case 153u: goto L_002AD848;
    case 154u: goto L_002AD890;
    case 155u: goto L_002AD8EC;
    case 156u: goto L_002AD95C;
    case 157u: goto L_002AD98C;
    case 158u: goto L_002AD9AC;
    case 159u: goto L_002ADA20;
    case 160u: goto L_002ADA54;
    case 161u: goto L_002ADA88;
    case 162u: goto L_002ADAD4;
    case 163u: goto L_002ADAF4;
    case 164u: goto L_002ADB14;
    case 165u: goto L_002ADB90;
    case 166u: goto L_002ADC40;
    case 167u: goto L_002ADC50;
    case 168u: goto L_002ADC70;
    case 169u: goto L_002ADC84;
    case 170u: goto L_002ADC98;
    case 171u: goto L_002ADCA4;
    case 172u: goto L_002ADCB0;
    case 173u: goto L_002ADCC0;
    case 174u: goto L_002ADCD8;
    case 175u: goto L_002ADCF8;
    case 176u: goto L_002ADD3C;
    case 177u: goto L_002ADD4C;
    case 178u: goto L_002ADD58;
    case 179u: goto L_002ADD78;
    case 180u: goto L_002ADD98;
    case 181u: goto L_002ADDD0;
    case 182u: goto L_002ADDF4;
    case 183u: goto L_002ADE0C;
    case 184u: goto L_002ADE20;
    case 185u: goto L_002ADE30;
    case 186u: goto L_002ADEC8;
    case 187u: goto L_002ADED8;
    case 188u: goto L_002ADEE8;
    case 189u: goto L_002ADEFC;
    case 190u: goto L_002ADF1C;
    case 191u: goto L_002ADF30;
    case 192u: goto L_002ADF50;
    case 193u: goto L_002ADF64;
    case 194u: goto L_002ADF84;
    case 195u: goto L_002ADF98;
    case 196u: goto L_002ADFB8;
    case 197u: goto L_002ADFCC;
    case 198u: goto L_002ADFEC;
    case 199u: goto L_002AE000;
    case 200u: goto L_002AE020;
    case 201u: goto L_002AE034;
    case 202u: goto L_002AE054;
    case 203u: goto L_002AE068;
    case 204u: goto L_002AE088;
    case 205u: goto L_002AE098;
    case 206u: goto L_002AE0B8;
    case 207u: goto L_002AE0E0;
    case 208u: goto L_002AE1B8;
    case 209u: goto L_002AE1DC;
    case 210u: goto L_002AE200;
    case 211u: goto L_002AE21C;
    case 212u: goto L_002AE23C;
    case 213u: goto L_002AE258;
    case 214u: goto L_002AE2C0;
    case 215u: goto L_002AE338;
    case 216u: goto L_002AE36C;
    case 217u: goto L_002AE3B0;
    case 218u: goto L_002AE444;
    case 219u: goto L_002AE47C;
    case 220u: goto L_002AE488;
    case 221u: goto L_002AE4B0;
    case 222u: goto L_002AE504;
    case 223u: goto L_002AE53C;
    case 224u: goto L_002AE5AC;
    case 225u: goto L_002AE5D8;
    case 226u: goto L_002AE5E8;
    case 227u: goto L_002AE5F0;
    case 228u: goto L_002AE624;
    case 229u: goto L_002AE634;
    case 230u: goto L_002AE63C;
    case 231u: goto L_002AE6B4;
    case 232u: goto L_002AE6BC;
    case 233u: goto L_002AE6D0;
    case 234u: goto L_002AE76C;
    case 235u: goto L_002AE788;
    case 236u: goto L_002AE830;
    case 237u: goto L_002AE848;
    case 238u: goto L_002AE850;
    case 239u: goto L_002AE864;
    case 240u: goto L_002AE890;
    case 241u: goto L_002AE8C4;
    case 242u: goto L_002AE8D0;
    case 243u: goto L_002AE8FC;
    case 244u: goto L_002AE9BC;
    case 245u: goto L_002AEAFC;
    case 246u: goto L_002AEB0C;
    case 247u: goto L_002AEB50;
    case 248u: goto L_002AEB94;
    case 249u: goto L_002AEBDC;
    case 250u: goto L_002AEBE4;
    case 251u: goto L_002AEBF8;
    case 252u: goto L_002AEC24;
    case 253u: goto L_002AEC58;
    case 254u: goto L_002AEC64;
    case 255u: goto L_002AEC90;
    case 256u: goto L_002AED38;
    case 257u: goto L_002AEE30;
    case 258u: goto L_002AEE40;
    case 259u: goto L_002AEE80;
    case 260u: goto L_002AEEB4;
    case 261u: goto L_002AEED0;
    case 262u: goto L_002AEF04;
    case 263u: goto L_002AEF28;
    case 264u: goto L_002AEF40;
    case 265u: goto L_002AEF60;
    case 266u: goto L_002AEF94;
    case 267u: goto L_002AEFB8;
    case 268u: goto L_002AEFD0;
    case 269u: goto L_002AEFF0;
    case 270u: goto L_002AF030;
    case 271u: goto L_002AF03C;
    case 272u: goto L_002AF054;
    case 273u: goto L_002AF070;
    case 274u: goto L_002AF080;
    case 275u: goto L_002AF09C;
    case 276u: goto L_002AF0D0;
    case 277u: goto L_002AF0F0;
    case 278u: goto L_002AF130;
    case 279u: goto L_002AF13C;
    case 280u: goto L_002AF154;
    case 281u: goto L_002AF170;
    case 282u: goto L_002AF1CC;
    case 283u: goto L_002AF210;
    case 284u: goto L_002AF22C;
    case 285u: goto L_002AF260;
    case 286u: goto L_002AF280;
    case 287u: goto L_002AF2C0;
    case 288u: goto L_002AF2CC;
    case 289u: goto L_002AF2E4;
    case 290u: goto L_002AF300;
    case 291u: goto L_002AF374;
    case 292u: goto L_002AF38C;
    case 293u: goto L_002AF3CC;
    case 294u: goto L_002AF414;
    case 295u: goto L_002AF470;
    case 296u: goto L_002AF48C;
    case 297u: goto L_002AF4CC;
    case 298u: goto L_002AF4E0;
    case 299u: goto L_002AF520;
    case 300u: goto L_002AF52C;
    case 301u: goto L_002AF544;
    case 302u: goto L_002AF560;
    case 303u: goto L_002AF598;
    case 304u: goto L_002AF5D4;
    case 305u: goto L_002AF600;
    case 306u: goto L_002AF62C;
    case 307u: goto L_002AF648;
    case 308u: goto L_002AF6B0;
    case 309u: goto L_002AF6C0;
    case 310u: goto L_002AF6D8;
    case 311u: goto L_002AF718;
    case 312u: goto L_002AF728;
    case 313u: goto L_002AF744;
    case 314u: goto L_002AF7C0;
    case 315u: goto L_002AF808;
    case 316u: goto L_002AF8FC;
    case 317u: goto L_002AF90C;
    case 318u: goto L_002AF930;
    case 319u: goto L_002AF95C;
    case 320u: goto L_002AF988;
    case 321u: goto L_002AF9A8;
    case 322u: goto L_002AF9B8;
    case 323u: goto L_002AFA04;
    case 324u: goto L_002AFA30;
    case 325u: goto L_002AFA80;
    case 326u: goto L_002AFA9C;
    case 327u: goto L_002AFAD0;
    case 328u: goto L_002AFAF0;
    case 329u: goto L_002AFB30;
    case 330u: goto L_002AFB3C;
    case 331u: goto L_002AFB54;
    case 332u: goto L_002AFB70;
    case 333u: goto L_002AFBCC;
    case 334u: goto L_002AFC10;
    case 335u: goto L_002AFC2C;
    case 336u: goto L_002AFC60;
    case 337u: goto L_002AFC80;
    case 338u: goto L_002AFCC0;
    case 339u: goto L_002AFCCC;
    case 340u: goto L_002AFCE4;
    case 341u: goto L_002AFD00;
    case 342u: goto L_002AFD5C;
    case 343u: goto L_002AFDA0;
    case 344u: goto L_002AFDBC;
    case 345u: goto L_002AFDF0;
    case 346u: goto L_002AFE10;
    case 347u: goto L_002AFE50;
    case 348u: goto L_002AFE5C;
    case 349u: goto L_002AFE74;
    case 350u: goto L_002AFE90;
    case 351u: goto L_002AFEEC;
    case 352u: goto L_002AFF30;
    case 353u: goto L_002AFF4C;
    case 354u: goto L_002AFF80;
    case 355u: goto L_002AFFA0;
    case 356u: goto L_002AFFE0;
    case 357u: goto L_002AFFEC;
    default: bad_entry(c, 0x002AC000u); return;
    }
L_002AC000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC008u); st32((c.r[29].w[0] + 84u), 0u);  if (depth < kMaxDepth) unit_0069(c, 273u, depth + 1u); else { c.pc = 0x002C6C30u; return; } if (c.pc != 0x002AC008u) [[unlikely]] return; }
L_002AC008:
    set32(c.r[3], ld32((c.r[17].w[0] + 544u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC02Cu); set32(c.r[4], ld32((c.r[2].w[0] + 28u)));  if (depth < kMaxDepth) unit_005E(c, 185u, depth + 1u); else { c.pc = 0x00299EB0u; return; } if (c.pc != 0x002AC02Cu) [[unlikely]] return; }
L_002AC02C:
    set32(c.r[3], ld32((c.r[17].w[0] + 532u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    c.r[5].d[0] = c.r[2].d[0] | 19267ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC060u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AC060u) [[unlikely]] return; }
L_002AC060:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC074u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002AC074u) [[unlikely]] return; }
L_002AC074:
    set32(c.r[3], 0u + 9u);
    st32((c.r[17].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002AC0A4; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_002AC098; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AC098:
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[3].w[0] + 52u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
L_002AC0A4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002AC0C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA6B0u | kUnwind; return; } [[clang::musttail]] return unit_0062(c, 259u, depth); }
L_002AC0D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ABCC0u | kUnwind; return; } [[clang::musttail]] return unit_0062(c, 389u, depth); }
L_002AC0E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC0FCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x002AC0FCu) [[unlikely]] return; }
L_002AC0FC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002AC108; } }
    set32(c.r[5], c.r[17].w[0] + 52u);
    c.budget -= 1;
L_002AC108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC110u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x002AC110u) [[unlikely]] return; }
L_002AC110:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25440u);
    set32(c.r[2], c.r[2].w[0] + 25496u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 644u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 76u), c.r[17].w[0]);
    set32(c.r[6], 0u + 16u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 640u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 612u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC158u); st32((c.r[16].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002AC158u) [[unlikely]] return; }
L_002AC158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC160u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002AC160u) [[unlikely]] return; }
L_002AC160:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 80u), c.r[2].w[0]);  goto L_002AC178; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC174u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 27u, depth + 1u); else { c.pc = 0x002B0330u; return; } if (c.pc != 0x002AC174u) [[unlikely]] return; }
L_002AC174:
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_002AC178:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_002AC188; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002AC198; } }
L_002AC188:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_002AC198:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AC1B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC1C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 16u, depth + 1u); else { c.pc = 0x002AC1F0u; return; } if (c.pc != 0x002AC1C4u) [[unlikely]] return; }
L_002AC1C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AC1F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC204u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 259u, depth + 1u); else { c.pc = 0x002AEE80u; return; } if (c.pc != 0x002AC204u) [[unlikely]] return; }
L_002AC204:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002AC230; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 80u), 0u);  goto L_002AC22C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC228u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AC228u) [[unlikely]] return; }
L_002AC228:
    st32((c.r[16].w[0] + 80u), 0u);
    c.budget -= 1;
L_002AC22C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002AC230:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AC240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002AC4B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 11616u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002AC000u < 16384u) { entry = entries_0063[(t - 0x002AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002AC278:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AC294; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002AC294:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002AC4BC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF7FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_002AC4B8; } }
L_002AC2C0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AC2DC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002AC2DC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AC4B8; } }
    st32((c.r[16].w[0] + 640u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 1296u)));  if (t) { goto L_002AC300; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (t) { goto L_002AC304; } }
L_002AC300:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AC304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC30Cu);  if (depth < kMaxDepth) unit_0052(c, 96u, depth + 1u); else { c.pc = 0x00268F00u; return; } if (c.pc != 0x002AC30Cu) [[unlikely]] return; }
L_002AC30C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_002AC340; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 72u)));  goto L_002AC344; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC330u);  if (depth < kMaxDepth) unit_0025(c, 302u, depth + 1u); else { c.pc = 0x001B5C40u; return; } if (c.pc != 0x002AC330u) [[unlikely]] return; }
L_002AC330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC338u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0074(c, 71u, depth + 1u); else { c.pc = 0x002F1370u; return; } if (c.pc != 0x002AC338u) [[unlikely]] return; }
L_002AC338:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AC4B8; } }
L_002AC340:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_002AC344:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 2;
L_002AC34C:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  goto L_002AC390; }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AC38C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC374u);  if (depth < kMaxDepth) unit_0074(c, 76u, depth + 1u); else { c.pc = 0x002F1450u; return; } if (c.pc != 0x002AC374u) [[unlikely]] return; }
L_002AC374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AC4B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC384u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002F13E0u; return; } if (c.pc != 0x002AC384u) [[unlikely]] return; }
L_002AC384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC38Cu);  if (depth < kMaxDepth) unit_0025(c, 301u, depth + 1u); else { c.pc = 0x001B5C00u; return; } if (c.pc != 0x002AC38Cu) [[unlikely]] return; }
L_002AC38C:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_002AC390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC398u);  if (depth < kMaxDepth) unit_0064(c, 41u, depth + 1u); else { c.pc = 0x002B05D0u; return; } if (c.pc != 0x002AC398u) [[unlikely]] return; }
L_002AC398:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF7FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 9;
L_002AC3BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC3C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 91u, depth + 1u); else { c.pc = 0x002ACE40u; return; } if (c.pc != 0x002AC3C4u) [[unlikely]] return; }
L_002AC3C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 3;
L_002AC3D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AC4B8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 3;
L_002AC3F4:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 8;
L_002AC414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC41Cu); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x002AC41Cu) [[unlikely]] return; }
L_002AC41C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  goto L_002AC43C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC42Cu); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_0064(c, 41u, depth + 1u); else { c.pc = 0x002B05D0u; return; } if (c.pc != 0x002AC42Cu) [[unlikely]] return; }
L_002AC42C:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_002AC4B8; } }
L_002AC43C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC444u);  if (depth < kMaxDepth) unit_0064(c, 33u, depth + 1u); else { c.pc = 0x002B0470u; return; } if (c.pc != 0x002AC444u) [[unlikely]] return; }
L_002AC444:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AC4B8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 72u)));  goto L_002AC4B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC474u);  if (depth < kMaxDepth) unit_0064(c, 41u, depth + 1u); else { c.pc = 0x002B05D0u; return; } if (c.pc != 0x002AC474u) [[unlikely]] return; }
L_002AC474:
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF7FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 124u)));
    c.budget -= 10;
    if (c.r[3].sd[0] > 0) { set32(c.r[3], 0u + 1u);  goto L_002AC4A8; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_002AC4B8; } }
L_002AC4A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_002AC4B8; } }
L_002AC4B0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 2;
L_002AC4B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002AC4BC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AC4D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 6;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002AC4F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC4F0u); set32(c.r[4], ld32((c.r[4].w[0] + 80u)));  if (depth < kMaxDepth) unit_0064(c, 37u, depth + 1u); else { c.pc = 0x002B0530u; return; } if (c.pc != 0x002AC4F0u) [[unlikely]] return; }
L_002AC4F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002AC4F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002AC500:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 6;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002AC524; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC520u); set32(c.r[4], ld32((c.r[4].w[0] + 80u)));  if (depth < kMaxDepth) unit_0064(c, 39u, depth + 1u); else { c.pc = 0x002B0580u; return; } if (c.pc != 0x002AC520u) [[unlikely]] return; }
L_002AC520:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002AC524:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002AC530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 64u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC550u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002AC550u) [[unlikely]] return; }
L_002AC550:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AC570:
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 5ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_002AC580:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 72u), c.r[3].w[0]);  c.pc = t; return; }
L_002AC590:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[21], ld32((c.r[4].w[0] + 612u)));
    set32(c.r[3], c.r[2].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 960u)));
    set32(c.r[30], c.r[3].w[0] + 452u);
    set32(c.r[16], c.r[21].w[0] + 52u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC5ECu); st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0063(c, 74u, depth + 1u); else { c.pc = 0x002ACA20u; return; } if (c.pc != 0x002AC5ECu) [[unlikely]] return; }
L_002AC5EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 184u)));  goto L_002AC5FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AC9DC; } }
L_002AC5FC:
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[20].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002AC670; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[3].w[0] + 960u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + 452u);  if (t) { goto L_002AC664; } }
L_002AC628:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[20].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002AC664; }
    set32(c.r[3], ld32((c.r[20].w[0] + 1296u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 1296u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AC660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC650u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 104u, depth + 1u); else { c.pc = 0x0028D200u; return; } if (c.pc != 0x002AC650u) [[unlikely]] return; }
L_002AC650:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AC660; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_002AC670; } }
L_002AC660:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002AC664:
    c.r[2].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC628u | kUnwind; return; } goto L_002AC628; }
L_002AC670:
    set32(c.r[25], ld32((c.r[20].w[0] + 16u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[22], ld32((c.r[20].w[0] + 1100u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC68Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AC68Cu) [[unlikely]] return; }
L_002AC68C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[20].w[0] + 16u)));  goto L_002AC6C0; }
    set32(c.r[2], ld32((c.r[20].w[0] + 1100u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[3], 0u + 2u);  goto L_002AC6B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC6ACu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 359u, depth + 1u); else { c.pc = 0x0028BAA0u; return; } if (c.pc != 0x002AC6ACu) [[unlikely]] return; }
L_002AC6AC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_002AC6B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 30164u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002AC764; } }
L_002AC6C0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC6D8u); set32(c.r[7], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AC6D8u) [[unlikely]] return; }
L_002AC6D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[20].w[0] + 16u)));  goto L_002AC70C; }
    set32(c.r[2], ld32((c.r[20].w[0] + 1100u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[3], 0u + 3u);  goto L_002AC6FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC6F8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 359u, depth + 1u); else { c.pc = 0x0028BAA0u; return; } if (c.pc != 0x002AC6F8u) [[unlikely]] return; }
L_002AC6F8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_002AC6FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 30164u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 2u);  if (t) { goto L_002AC764; } }
L_002AC70C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC720u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AC720u) [[unlikely]] return; }
L_002AC720:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 92u)));  goto L_002AC750; }
    set32(c.r[2], ld32((c.r[20].w[0] + 1100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AC740; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC740u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 359u, depth + 1u); else { c.pc = 0x0028BAA0u; return; } if (c.pc != 0x002AC740u) [[unlikely]] return; }
L_002AC740:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[18], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 30164u), 0u);  if (t) { goto L_002AC764; } }
L_002AC750:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;  goto L_002AC9DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AC9DC; } }
L_002AC764:
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 120u)));  goto L_002AC7DC; }
    set32(c.r[25], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC784u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AC784u) [[unlikely]] return; }
L_002AC784:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[6], c.r[6].w[0] + 28576u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] + 112u);
    set32(c.r[3], ld32((c.r[3].w[0] + 3432u)));
    set32(c.r[4], c.r[4].w[0] + 3728u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 30160u), c.r[3].w[0]);  if (t) { goto L_002AC7C8; } }
L_002AC7AC:
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 80u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 96u);
    st32((c.r[6].w[0] + 12u), c.r[18].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 7;
L_002AC7C8:
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC7ACu | kUnwind; return; } goto L_002AC7AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AC8F0; } }
L_002AC7DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC7E4u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002AC7E4u) [[unlikely]] return; }
L_002AC7E4:
    c.f[3] = ld32((c.r[20].w[0] + 1084u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[4] = ld32((c.r[20].w[0] + 1140u));
    c.r[17].d[0] = 0ull + 0ull;
    c.f[2] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = ld32((c.r[28].w[0] - 32692u));
    st32((c.r[2].w[0] + 30160u), 0u);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    set32(c.r[23], ld32((c.r[20].w[0] + 1100u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.f[22] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_002AC8E0; } }
L_002AC818:
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[30].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[23].d[0] == c.r[2].d[0]; set32(c.r[16], ld32((c.r[3].w[0])));  if (t) { goto L_002AC83C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC834u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 104u, depth + 1u); else { c.pc = 0x0028D200u; return; } if (c.pc != 0x002AC834u) [[unlikely]] return; }
L_002AC834:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002AC8E0; }
L_002AC83C:
    set32(c.r[25], ld32((c.r[20].w[0] + 16u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC850u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AC850u) [[unlikely]] return; }
L_002AC850:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AC8DC; } }
    c.f[20] = ld32((c.r[16].w[0] + 720u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC864u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002AC864u) [[unlikely]] return; }
L_002AC864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC86Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002AC86Cu) [[unlikely]] return; }
L_002AC86C:
    set32(c.r[4], c.r[20].w[0] + 736u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC878u); set32(c.r[5], c.r[16].w[0] + 736u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x002AC878u) [[unlikely]] return; }
L_002AC878:
    c.f[21] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC884u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002AC884u) [[unlikely]] return; }
L_002AC884:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AC8A4; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[21], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AC8DC; } }
L_002AC8A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 30160u)));
    set32(c.r[4], c.r[4].w[0] + 28576u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0]), c.r[16].w[0]);
    st32((c.r[4].w[0] + 4u), c.f[21]);
    st32((c.r[4].w[0] + 12u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 30160u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 30160u), c.r[3].w[0]);
    c.budget -= 14;
L_002AC8DC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002AC8E0:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC818u | kUnwind; return; } goto L_002AC818; }
L_002AC8F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30160u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 1100u)));  goto L_002AC998; }
    set32(c.r[3], ld32((c.r[20].w[0] + 1100u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 1100u)));  goto L_002AC954; }
    set32(c.r[25], ld32((c.r[20].w[0] + 16u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC92Cu); set32(c.r[7], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AC92Cu) [[unlikely]] return; }
L_002AC92C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AC950; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC940u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_005A(c, 359u, depth + 1u); else { c.pc = 0x0028BAA0u; return; } if (c.pc != 0x002AC940u) [[unlikely]] return; }
L_002AC940:
    set32(c.r[3], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 30164u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC764u | kUnwind; return; } goto L_002AC764; } }
L_002AC950:
    set32(c.r[2], ld32((c.r[20].w[0] + 1100u)));
    c.budget -= 1;
L_002AC954:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AC994; } }
    set32(c.r[25], ld32((c.r[20].w[0] + 16u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC974u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AC974u) [[unlikely]] return; }
L_002AC974:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AC994; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC988u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 359u, depth + 1u); else { c.pc = 0x0028BAA0u; return; } if (c.pc != 0x002AC988u) [[unlikely]] return; }
L_002AC988:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 30164u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC764u | kUnwind; return; } goto L_002AC764; } }
L_002AC994:
    set32(c.r[2], ld32((c.r[20].w[0] + 1100u)));
    c.budget -= 1;
L_002AC998:
    c.budget -= 2;
    if (c.r[22].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 92u)));  goto L_002AC9B0; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC9ACu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 359u, depth + 1u); else { c.pc = 0x0028BAA0u; return; } if (c.pc != 0x002AC9ACu) [[unlikely]] return; }
L_002AC9AC:
    set32(c.r[2], ld32((c.r[21].w[0] + 92u)));
    c.budget -= 1;
L_002AC9B0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AC9C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AC9DC; } }
L_002AC9C4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_002AC9D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AC9DC; } }
L_002AC9D4:
    set32(c.r[2], ld32((c.r[2].w[0] + 30160u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002AC9DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002ACA20:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 612u)));
    c.f[21] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[20] = ld32((c.r[4].w[0] + 52u));
    set32(c.r[16], c.r[4].w[0] + 52u);
    set32(c.r[2], c.r[3].w[0] + 112u);
    set32(c.r[19], ld32((c.r[3].w[0] + 560u)));
    set32(c.r[30], ld32((c.r[3].w[0] + 960u)));
    set32(c.r[20], c.r[2].w[0] + 52u);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[12]));
    set32(c.r[23], c.r[2].w[0] + 452u);
    c.budget -= 30;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[17], c.r[4].w[0] + 64u);  if (t) { goto L_002ACAB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACAA0u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002ACAA0u) [[unlikely]] return; }
L_002ACAA0:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[16].w[0] + 4u));  goto L_002ACAB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002ACDFC; } }
L_002ACAB4:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 1;
L_002ACAB8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[18].w[0] + 184u)));  goto L_002ACAF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACAD4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 100u, depth + 1u); else { c.pc = 0x0028D110u; return; } if (c.pc != 0x002ACAD4u) [[unlikely]] return; }
L_002ACAD4:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = c.f[0];  if (t) { goto L_002ACAEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002ACDFC; } }
L_002ACAEC:
    set32(c.r[2], ld32((c.r[18].w[0] + 184u)));
    c.budget -= 1;
L_002ACAF0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));  goto L_002ACB04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002ACDFC; } }
L_002ACB04:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  goto L_002ACB20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002ACDFC; } }
L_002ACB20:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_002ACB84; }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002ACB64; } }
L_002ACB34:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 5;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_002ACB64; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 110u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 108u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ACB60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_002ACB70; } }
L_002ACB60:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_002ACB64:
    c.r[2].d[0] = c.r[6].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[6].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACB34u | kUnwind; return; } goto L_002ACB34; }
L_002ACB70:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002ACB80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002ACDFC; } }
L_002ACB80:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_002ACB84:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 12u));  goto L_002ACBE8; }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002ACBC8; } }
L_002ACB98:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002ACBC8; }
    set32(c.r[2], ld32((c.r[3].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ACBC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_002ACBD4; } }
L_002ACBC4:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002ACBC8:
    c.r[2].d[0] = c.r[5].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACB98u | kUnwind; return; } goto L_002ACB98; }
L_002ACBD4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002ACBE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002ACDFC; } }
L_002ACBE4:
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.budget -= 1;
L_002ACBE8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  goto L_002ACC30; }
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[17].w[0] + 12u));  goto L_002ACC18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACC10u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 100u, depth + 1u); else { c.pc = 0x0028D110u; return; } if (c.pc != 0x002ACC10u) [[unlikely]] return; }
L_002ACC10:
    c.f[21] = c.f[0];
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.budget -= 2;
L_002ACC18:
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002ACC2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002ACDFC; } }
L_002ACC2C:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_002ACC30:
    c.budget -= 2;
    if (c.r[4].sd[0] < 0) { set32(c.r[16], ld32((c.r[17].w[0] + 20u)));  goto L_002ACC58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACC40u);  if (depth < kMaxDepth) unit_0067(c, 248u, depth + 1u); else { c.pc = 0x002BE5D0u; return; } if (c.pc != 0x002ACC40u) [[unlikely]] return; }
L_002ACC40:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ACC54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002ACDFC; } }
L_002ACC54:
    set32(c.r[16], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_002ACC58:
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { set32(c.r[2], ld32((c.r[17].w[0] + 24u)));  goto L_002ACCB0; }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002ACC8C; } }
L_002ACC6C:
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACC7Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 104u, depth + 1u); else { c.pc = 0x0028D200u; return; } if (c.pc != 0x002ACC7Cu) [[unlikely]] return; }
L_002ACC7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_002ACC8C; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_002ACC8C:
    c.r[2].d[0] = c.r[19].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACC6Cu | kUnwind; return; } goto L_002ACC6C; }
    c.r[1].d[0] = c.r[20].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002ACCAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002ACDFC; } }
L_002ACCAC:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_002ACCB0:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { set32(c.r[2], 0u + 1u);  goto L_002ACDFC; }
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.r[21].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (t) { goto L_002ACDDC; } }
L_002ACCD4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACCE8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 104u, depth + 1u); else { c.pc = 0x0028D200u; return; } if (c.pc != 0x002ACCE8u) [[unlikely]] return; }
L_002ACCE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002ACDDC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], ld32((c.r[16].w[0] + 1296u)));  if (t) { goto L_002ACD04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (t) { goto L_002ACD08; } }
L_002ACD04:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ACD08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACD10u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 95u, depth + 1u); else { c.pc = 0x00268E80u; return; } if (c.pc != 0x002ACD10u) [[unlikely]] return; }
L_002ACD10:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002ACDD8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002ACD48; }
    set32(c.r[3], c.r[20].w[0] << 3);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_002ACD48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[22].d[0] = 0ull + 0ull;  goto L_002ACD54; }
    set32(c.r[22], c.r[2].w[0] + 272u);
    c.budget -= 1;
L_002ACD54:
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (t) { goto L_002ACDC0; } }
L_002ACD64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACD6Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 93u, depth + 1u); else { c.pc = 0x00214C90u; return; } if (c.pc != 0x002ACD6Cu) [[unlikely]] return; }
L_002ACD6C:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_002ACDC0; }
    set32(c.r[4], c.r[19].w[0] + 20u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACD90u); c.r[7].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 96u, depth + 1u); else { c.pc = 0x00214CF0u; return; } if (c.pc != 0x002ACD90u) [[unlikely]] return; }
L_002ACD90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ACDBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACDA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002ACDA0u) [[unlikely]] return; }
L_002ACDA0:
    set32(c.r[4], c.r[16].w[0] + 624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACDACu); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0016(c, 254u, depth + 1u); else { c.pc = 0x0017B7B0u; return; } if (c.pc != 0x002ACDACu) [[unlikely]] return; }
L_002ACDAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ACDBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], 0u + 1u);  if (t) { goto L_002ACDD0; } }
L_002ACDBC:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002ACDC0:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] + 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACD64u | kUnwind; return; } goto L_002ACD64; }
L_002ACDD0:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_002ACDE8; } }
L_002ACDD8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002ACDDC:
    c.r[2].d[0] = c.r[17].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACCD4u | kUnwind; return; } goto L_002ACCD4; }
L_002ACDE8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_002ACDF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002ACDFC; } }
L_002ACDF8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002ACDFC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_002ACE40:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 126u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 124u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 21;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] + 0ull;  goto L_002ACE94; }
L_002ACE94:
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
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 14;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 80u)));  goto L_002AD840; }
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 612u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACEECu); set32(c.r[21], c.r[2].w[0] + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ACEECu) [[unlikely]] return; }
L_002ACEEC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_002ACFB8; }
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACF08u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ACF08u) [[unlikely]] return; }
L_002ACF08:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ACF34; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACF24u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0064(c, 46u, depth + 1u); else { c.pc = 0x002B0670u; return; } if (c.pc != 0x002ACF24u) [[unlikely]] return; }
L_002ACF24:
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[18], c.r[18].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 4;
L_002ACF34:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ACFB8; } }
L_002ACF40:
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[17].d[0] == 0ull) { set32(c.r[25], ld32((c.r[19].w[0] + 16u)));  goto L_002ACFC8; }
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACF64u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ACF64u) [[unlikely]] return; }
L_002ACF64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_002ACFB8; }
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACF80u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ACF80u) [[unlikely]] return; }
L_002ACF80:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ACFB4; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACF9Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 46u, depth + 1u); else { c.pc = 0x002B0670u; return; } if (c.pc != 0x002ACF9Cu) [[unlikely]] return; }
L_002ACF9C:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[18], c.r[18].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 6;
L_002ACFB4:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002ACFB8:
    c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[20].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACF40u | kUnwind; return; } goto L_002ACF40; }
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_002ACFC8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACFD8u); set32(c.r[5], 0u + 9u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ACFD8u) [[unlikely]] return; }
L_002ACFD8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 84u)));  goto L_002AD024; }
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACFF4u); set32(c.r[5], 0u + 9u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ACFF4u) [[unlikely]] return; }
L_002ACFF4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AD020; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD010u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0064(c, 46u, depth + 1u); else { c.pc = 0x002B0670u; return; } if (c.pc != 0x002AD010u) [[unlikely]] return; }
L_002AD010:
    set32(c.r[2], ld32((c.r[19].w[0] + 132u)));
    set32(c.r[18], c.r[18].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 4;
L_002AD020:
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    c.budget -= 1;
L_002AD024:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AD444; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD444; } }
    set32(c.r[22], ld32((c.r[19].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002AD234; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AD234; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD05Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005A(c, 313u, depth + 1u); else { c.pc = 0x0028B330u; return; } if (c.pc != 0x002AD05Cu) [[unlikely]] return; }
L_002AD05C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD234; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 204u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD078u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD078u) [[unlikely]] return; }
L_002AD078:
    set32(c.r[2], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 4;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002AD090; }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 2;
L_002AD090:
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[30], ld32((c.r[3].w[0] + 960u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[2].w[0] + 452u);  if (t) { goto L_002AD0E0; } }
L_002AD0A4:
    set32(c.r[20], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 1320u)));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_002AD0E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD0C0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005A(c, 313u, depth + 1u); else { c.pc = 0x0028B330u; return; } if (c.pc != 0x002AD0C0u) [[unlikely]] return; }
L_002AD0C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD0DC; } }
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 204u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD0DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD0DCu) [[unlikely]] return; }
L_002AD0DC:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002AD0E0:
    c.r[2].d[0] = c.r[21].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[21].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD0A4u | kUnwind; return; } goto L_002AD0A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002AD1B0; } }
L_002AD0F4:
    set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[20], c.r[4].w[0] + 160u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], ld32((c.r[4].w[0] + 172u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AD188; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[6], 0u + 1u);  goto L_002AD138; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AD134; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AD134; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AD198; } }
L_002AD134:
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_002AD138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002AD15C; } }
L_002AD140:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 644u)));
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002AD15C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002AD168; } }
L_002AD15C:
    c.r[3].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[5].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD140u | kUnwind; return; } goto L_002AD140; }
L_002AD168:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002AD198; } }
    set32(c.r[5], ld32((c.r[20].w[0])));
    set32(c.r[6], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD180u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 217u, depth + 1u); else { c.pc = 0x002AE3B0u; return; } if (c.pc != 0x002AD180u) [[unlikely]] return; }
L_002AD180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AD198; } }
L_002AD188:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD198u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 247u, depth + 1u); else { c.pc = 0x002AEB50u; return; } if (c.pc != 0x002AD198u) [[unlikely]] return; }
L_002AD198:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_002AD1B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD1A8u); set32(c.r[4], ld32((c.r[19].w[0] + 88u)));  if (depth < kMaxDepth) unit_0074(c, 227u, depth + 1u); else { c.pc = 0x002F3410u; return; } if (c.pc != 0x002AD1A8u) [[unlikely]] return; }
L_002AD1A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002AD1BC; } }
L_002AD1B0:
    c.r[2].d[0] = c.r[21].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[21].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD0F4u | kUnwind; return; } goto L_002AD0F4; }
L_002AD1BC:
    set32(c.r[4], ld32((c.r[19].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD1C8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005A(c, 313u, depth + 1u); else { c.pc = 0x0028B330u; return; } if (c.pc != 0x002AD1C8u) [[unlikely]] return; }
L_002AD1C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD234; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 200u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD1E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD1E4u) [[unlikely]] return; }
L_002AD1E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002AD228; } }
L_002AD1EC:
    set32(c.r[20], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 1320u)));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_002AD228; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD208u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005A(c, 313u, depth + 1u); else { c.pc = 0x0028B330u; return; } if (c.pc != 0x002AD208u) [[unlikely]] return; }
L_002AD208:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD224; } }
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 200u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD224u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD224u) [[unlikely]] return; }
L_002AD224:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002AD228:
    c.r[2].d[0] = c.r[21].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[21].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD1ECu | kUnwind; return; } goto L_002AD1EC; }
L_002AD234:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  goto L_002AD750; }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_002AD29C; }
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD260u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD260u) [[unlikely]] return; }
L_002AD260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD298; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002AD298; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD298; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD288u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0064(c, 46u, depth + 1u); else { c.pc = 0x002B0670u; return; } if (c.pc != 0x002AD288u) [[unlikely]] return; }
L_002AD288:
    set32(c.r[3], ld32((c.r[19].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_002AD858; } }
L_002AD298:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_002AD29C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 12u)));  goto L_002AD320; }
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD2B8u); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD2B8u) [[unlikely]] return; }
L_002AD2B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD31C; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD2D4u); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD2D4u) [[unlikely]] return; }
L_002AD2D4:
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AD31C; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD2ECu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0064(c, 46u, depth + 1u); else { c.pc = 0x002B0670u; return; } if (c.pc != 0x002AD2ECu) [[unlikely]] return; }
L_002AD2EC:
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 96u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 120u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 644u), c.r[3].w[0]);  if (t) { goto L_002AD858; } }
L_002AD31C:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_002AD320:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 12u)));  goto L_002AD3A8; }
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD340u); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD340u) [[unlikely]] return; }
L_002AD340:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD3A4; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD35Cu); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD35Cu) [[unlikely]] return; }
L_002AD35C:
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AD3A4; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD374u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0064(c, 46u, depth + 1u); else { c.pc = 0x002B0670u; return; } if (c.pc != 0x002AD374u) [[unlikely]] return; }
L_002AD374:
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 96u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 112u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 652u), c.r[3].w[0]);  if (t) { goto L_002AD858; } }
L_002AD3A4:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_002AD3A8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AD74C; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD3C8u); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD3C8u) [[unlikely]] return; }
L_002AD3C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD74C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 608u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 860u)));
    c.r[1].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[18].d[0] + 0ull;  goto L_002AD3E8; }
L_002AD3E8:
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD3FCu); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD3FCu) [[unlikely]] return; }
L_002AD3FC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]); c.r[2].d[0] = c.lo.d[0];  if (t) { goto L_002AD74C; } }
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AD74C; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD41Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0064(c, 46u, depth + 1u); else { c.pc = 0x002B0670u; return; } if (c.pc != 0x002AD41Cu) [[unlikely]] return; }
L_002AD41C:
    st32((c.r[2].w[0] + 96u), 0u);
    st32((c.r[2].w[0] + 56u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 648u), c.r[3].w[0]);  if (t) { goto L_002AD858; } }
L_002AD444:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], ld32((c.r[2].w[0] + 30160u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002AD508; } }
L_002AD454:
    set32(c.r[3], c.r[20].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 28576u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002AD488; } }
L_002AD46C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 644u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_002AD488; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002AD494; } }
L_002AD488:
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[4].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD46Cu | kUnwind; return; } goto L_002AD46C; }
L_002AD494:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[25], ld32((c.r[19].w[0] + 16u)));  goto L_002AD4EC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28576u);  if (t) { goto L_002AD4D8; } }
L_002AD4B0:
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 10;
L_002AD4D8:
    c.r[2].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[6].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD4B0u | kUnwind; return; } goto L_002AD4B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { goto L_002AD504; } }
L_002AD4EC:
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD500u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD500u) [[unlikely]] return; }
L_002AD500:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_002AD504:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002AD508:
    c.r[2].d[0] = c.r[20].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD454u | kUnwind; return; } goto L_002AD454; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AD744; } }
L_002AD51C:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[20], 0u - 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28576u);  if (t) { goto L_002AD558; } }
L_002AD534:
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002AD558; }
    set32(c.r[21], ld32((c.r[3].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
L_002AD558:
    c.r[2].d[0] = c.r[5].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD534u | kUnwind; return; } goto L_002AD534; }
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_002AD74C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30164u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002AD5F0; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD594u); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD594u) [[unlikely]] return; }
L_002AD594:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD5F0; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD5B0u); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD5B0u) [[unlikely]] return; }
L_002AD5B0:
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AD5F0; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD5C8u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0064(c, 46u, depth + 1u); else { c.pc = 0x002B0670u; return; } if (c.pc != 0x002AD5C8u) [[unlikely]] return; }
L_002AD5C8:
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 96u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 60u), c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 120u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 120u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 644u), c.r[21].w[0]);  if (t) { goto L_002AD858; } }
L_002AD5F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30164u)));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[25], ld32((c.r[19].w[0] + 16u)));  goto L_002AD678; }
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD618u); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD618u) [[unlikely]] return; }
L_002AD618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD674; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD634u); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD634u) [[unlikely]] return; }
L_002AD634:
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AD674; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD64Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0064(c, 46u, depth + 1u); else { c.pc = 0x002B0670u; return; } if (c.pc != 0x002AD64Cu) [[unlikely]] return; }
L_002AD64C:
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 96u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 60u), c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 652u), c.r[21].w[0]);  if (t) { goto L_002AD858; } }
L_002AD674:
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_002AD678:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD688u); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD688u) [[unlikely]] return; }
L_002AD688:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD6FC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 608u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 860u)));
    c.r[1].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[17].d[0] = c.r[18].d[0] + 0ull;  goto L_002AD6A8; }
L_002AD6A8:
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD6BCu); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD6BCu) [[unlikely]] return; }
L_002AD6BC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]); c.r[2].d[0] = c.lo.d[0];  if (t) { goto L_002AD6FC; } }
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AD6FC; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD6DCu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0064(c, 46u, depth + 1u); else { c.pc = 0x002B0670u; return; } if (c.pc != 0x002AD6DCu) [[unlikely]] return; }
L_002AD6DC:
    st32((c.r[2].w[0] + 96u), 0u);
    st32((c.r[2].w[0] + 56u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 60u), c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 648u), c.r[21].w[0]);  if (t) { goto L_002AD858; } }
L_002AD6FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[16].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28576u);  if (t) { goto L_002AD734; } }
L_002AD70C:
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 10;
L_002AD734:
    c.r[2].d[0] = c.r[20].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[20].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD70Cu | kUnwind; return; } goto L_002AD70C; }
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_002AD744:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD51Cu | kUnwind; return; } goto L_002AD51C; }
L_002AD74C:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 1;
L_002AD750:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD768u); set32(c.r[5], 0u + 7u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD768u) [[unlikely]] return; }
L_002AD768:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[19].w[0] + 16u)));  goto L_002AD7CC; }
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD784u); set32(c.r[5], 0u + 7u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD784u) [[unlikely]] return; }
L_002AD784:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AD7C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD79Cu); set32(c.r[4], 0u + 100u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x002AD79Cu) [[unlikely]] return; }
L_002AD79C:
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AD7C8; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD7B8u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0064(c, 46u, depth + 1u); else { c.pc = 0x002B0670u; return; } if (c.pc != 0x002AD7B8u) [[unlikely]] return; }
L_002AD7B8:
    set32(c.r[2], ld32((c.r[19].w[0] + 124u)));
    set32(c.r[18], c.r[18].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 4;
L_002AD7C8:
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_002AD7CC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD7DCu); set32(c.r[5], 0u + 5u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD7DCu) [[unlikely]] return; }
L_002AD7DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD83C; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD7F8u); set32(c.r[5], 0u + 5u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD7F8u) [[unlikely]] return; }
L_002AD7F8:
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AD83C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD80Cu); set32(c.r[4], 0u + 100u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x002AD80Cu) [[unlikely]] return; }
L_002AD80C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AD83C; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD828u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0064(c, 46u, depth + 1u); else { c.pc = 0x002B0670u; return; } if (c.pc != 0x002AD828u) [[unlikely]] return; }
L_002AD828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD830u); set32(c.r[4], ld32((c.r[19].w[0] + 76u)));  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x002AD830u) [[unlikely]] return; }
L_002AD830:
    set32(c.r[2], ld32((c.r[19].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 3;
L_002AD83C:
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 1;
L_002AD840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD848u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0064(c, 46u, depth + 1u); else { c.pc = 0x002B0670u; return; } if (c.pc != 0x002AD848u) [[unlikely]] return; }
L_002AD848:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_002AD858:
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
L_002AD890:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 640u)));
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(30ll) ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002AD8D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AD9F4; } }
L_002AD8D8:
    set32(c.r[6], c.r[21].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002AD93C; } }
L_002AD8EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[6].w[0])));  goto L_002AD908; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002AD904; } }
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002AD938; }
L_002AD904:
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 1;
L_002AD908:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_002AD934; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { st32((c.r[6].w[0] + 4u), c.r[19].w[0]);  goto L_002AD928; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AD9F4; } }
L_002AD928:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), c.r[22].w[0]);  if (t) { goto L_002AD9F4; } }
L_002AD934:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002AD938:
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 1;
L_002AD93C:
    c.r[2].d[0] = c.r[5].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[6].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD8ECu | kUnwind; return; } goto L_002AD8EC; }
    set32(c.r[16], c.r[21].w[0] + 160u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002AD9CC; } }
L_002AD95C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_002AD978; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002AD974; } }
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002AD9C8; }
L_002AD974:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002AD978:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AD9C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;  if (t) { goto L_002AD9B4; } }
L_002AD98C:
    set32(c.r[3], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + 160u);
    set32(c.r[5], c.r[2].w[0] + 160u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD9ACu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002AD9ACu) [[unlikely]] return; }
L_002AD9AC:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.r[1].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002AD9B4:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD98Cu | kUnwind; return; } goto L_002AD98C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[20].w[0]);  if (t) { goto L_002AD9DC; } }
L_002AD9C4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002AD9C8:
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 1;
L_002AD9CC:
    c.r[2].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD95Cu | kUnwind; return; } goto L_002AD95C; }
    st32((c.r[16].w[0]), c.r[20].w[0]);
    c.budget -= 1;
L_002AD9DC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[22].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 640u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[21].w[0] + 640u), c.r[3].w[0]);
    c.budget -= 6;
L_002AD9F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002ADA20:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 640u)));
    c.budget -= 13;
L_002ADA54:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(30ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002ADA68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002ADB68; } }
L_002ADA68:
    c.r[5].d[0] = c.r[20].d[0] << 48;
    c.r[4].d[0] = c.r[19].d[0] << 48;
    set32(c.r[7], c.r[21].w[0] + 160u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_002ADAB8; } }
L_002ADA88:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_002ADAB4; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002ADAB0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002ADAB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002ADB68; } }
L_002ADAB0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_002ADAB4:
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.budget -= 1;
L_002ADAB8:
    c.r[2].d[0] = c.r[6].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[7].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADA88u | kUnwind; return; } goto L_002ADA88; }
    set32(c.r[16], c.r[21].w[0] + 160u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_002ADB34; } }
L_002ADAD4:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002ADB30; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002ADB2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;  if (t) { goto L_002ADB1C; } }
L_002ADAF4:
    set32(c.r[3], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + 160u);
    set32(c.r[5], c.r[2].w[0] + 160u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADB14u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002ADB14u) [[unlikely]] return; }
L_002ADB14:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.r[1].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002ADB1C:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADAF4u | kUnwind; return; } goto L_002ADAF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_002ADB44; } }
L_002ADB2C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002ADB30:
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 1;
L_002ADB34:
    c.r[2].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADAD4u | kUnwind; return; } goto L_002ADAD4; }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_002ADB44:
    set32(c.r[3], 0u + 3u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[20].w[0]));
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[19].w[0]));
    st32((c.r[16].w[0] + 4u), c.r[22].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 640u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[21].w[0] + 640u), c.r[3].w[0]);
    c.budget -= 9;
L_002ADB68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002ADB90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 13;
    { const bool t = c.r[6].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002ADBCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002ADDA0; } }
L_002ADBCC:
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 92u)));  goto L_002ADBE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002ADDA0; } }
L_002ADBE4:
    set32(c.r[2], ld32((c.r[18].w[0] + 148u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_002ADC00; }
    set32(c.r[16], c.r[16].w[0] + 5000u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_002ADC00:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 92u)));  goto L_002ADC10; }
    set32(c.r[16], c.r[16].w[0] + 1000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 92u)));
    c.budget -= 2;
L_002ADC10:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 110u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 108u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADC40u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002ADC40u) [[unlikely]] return; }
L_002ADC40:
    c.f[20] = c.f[0];
    c.f[0] = ld32((c.r[17].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADC50u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002ADC50u) [[unlikely]] return; }
L_002ADC50:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADC70u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002ADC70u) [[unlikely]] return; }
L_002ADC70:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADC84u); set32(c.r[5], ld32((c.r[18].w[0] + 148u)));  if (depth < kMaxDepth) unit_005C(c, 213u, depth + 1u); else { c.pc = 0x00291D80u; return; } if (c.pc != 0x002ADC84u) [[unlikely]] return; }
L_002ADC84:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 136u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[20].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 130u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADC98u); set32(c.r[21], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 4u, depth + 1u); else { c.pc = 0x0028C020u; return; } if (c.pc != 0x002ADC98u) [[unlikely]] return; }
L_002ADC98:
    set32(c.r[3], c.r[20].w[0] + c.r[21].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADCA4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002ADCA4u) [[unlikely]] return; }
L_002ADCA4:
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADCB0u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002ADCB0u) [[unlikely]] return; }
L_002ADCB0:
    set32(c.r[20], ld32((c.r[19].w[0] + 76u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 122u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADCC0u); set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002ADCC0u) [[unlikely]] return; }
L_002ADCC0:
    c.f[2] = ld32((c.r[20].w[0] + 1140u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[20].w[0] + 1084u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADCD8u); c.f[20] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002ADCD8u) [[unlikely]] return; }
L_002ADCD8:
    set32(c.r[2], ld32((c.r[19].w[0] + 76u)));
    c.f[2] = ld32((c.r[18].w[0] + 192u));
    c.f[0] = ld32((c.r[18].w[0] + 200u));
    c.f[3] = ld32((c.r[2].w[0] + 192u));
    c.f[1] = ld32((c.r[2].w[0] + 200u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADCF8u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 6u, depth + 1u); else { c.pc = 0x00184080u; return; } if (c.pc != 0x002ADCF8u) [[unlikely]] return; }
L_002ADCF8:
    c.f[1] = ld32((c.r[18].w[0] + 720u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[18].w[0] + 152u)));  goto L_002ADD44; }
    c.f[2] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[12] = fp::ee::div(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADD3Cu);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002ADD3Cu) [[unlikely]] return; }
L_002ADD3C:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 152u)));
    c.budget -= 2;
L_002ADD44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADD4Cu);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002ADD4Cu) [[unlikely]] return; }
L_002ADD4C:
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADD58u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002ADD58u) [[unlikely]] return; }
L_002ADD58:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 148u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));  goto L_002ADD80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADD78u); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x002ADD78u) [[unlikely]] return; }
L_002ADD78:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 2;
L_002ADD80:
    set32(c.r[3], ld32((c.r[18].w[0] + 148u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002ADDA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADD98u); set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x002ADD98u) [[unlikely]] return; }
L_002ADD98:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002ADDA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002ADDD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADDF4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ADDF4u) [[unlikely]] return; }
L_002ADDF4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002ADE04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002ADE10; } }
L_002ADE04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADE0Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 185u, depth + 1u); else { c.pc = 0x002ADE30u; return; } if (c.pc != 0x002ADE0Cu) [[unlikely]] return; }
L_002ADE0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002ADE10:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002ADE20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_002ADE30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 15u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002AE090; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 56u);  goto L_002AE060; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 56u);  goto L_002AE02C; }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 56u);  goto L_002ADFF8; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 112u);  goto L_002ADFC4; }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 56u);  goto L_002ADF90; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 112u);  goto L_002ADF5C; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 112u);  goto L_002ADF28; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 80u);  goto L_002ADEF4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 56u);  goto L_002ADEC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AE0C4; } }
    set32(c.r[4], 0u + 56u);
    c.budget -= 1;
L_002ADEC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADEC8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002ADEC8u) [[unlikely]] return; }
L_002ADEC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002AE0C8; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002ADEDC; } }
L_002ADED8:
    set32(c.r[5], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_002ADEDC:
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADEE8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 274u, depth + 1u); else { c.pc = 0x002AF080u; return; } if (c.pc != 0x002ADEE8u) [[unlikely]] return; }
L_002ADEE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE0C4; } }
    set32(c.r[4], 0u + 80u);
    c.budget -= 1;
L_002ADEF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADEFCu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002ADEFCu) [[unlikely]] return; }
L_002ADEFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE0C4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002ADF10; } }
    set32(c.r[5], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_002ADF10:
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADF1Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 283u, depth + 1u); else { c.pc = 0x002AF210u; return; } if (c.pc != 0x002ADF1Cu) [[unlikely]] return; }
L_002ADF1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE0C4; } }
    set32(c.r[4], 0u + 112u);
    c.budget -= 1;
L_002ADF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADF30u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002ADF30u) [[unlikely]] return; }
L_002ADF30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE0C4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002ADF44; } }
    set32(c.r[5], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_002ADF44:
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADF50u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 295u, depth + 1u); else { c.pc = 0x002AF470u; return; } if (c.pc != 0x002ADF50u) [[unlikely]] return; }
L_002ADF50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE0C4; } }
    set32(c.r[4], 0u + 112u);
    c.budget -= 1;
L_002ADF5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADF64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002ADF64u) [[unlikely]] return; }
L_002ADF64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE0C4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002ADF78; } }
    set32(c.r[5], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_002ADF78:
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADF84u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 295u, depth + 1u); else { c.pc = 0x002AF470u; return; } if (c.pc != 0x002ADF84u) [[unlikely]] return; }
L_002ADF84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE0C4; } }
    set32(c.r[4], 0u + 56u);
    c.budget -= 1;
L_002ADF90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADF98u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002ADF98u) [[unlikely]] return; }
L_002ADF98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE0C4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002ADFAC; } }
    set32(c.r[5], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_002ADFAC:
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADFB8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 325u, depth + 1u); else { c.pc = 0x002AFA80u; return; } if (c.pc != 0x002ADFB8u) [[unlikely]] return; }
L_002ADFB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE0C4; } }
    set32(c.r[4], 0u + 112u);
    c.budget -= 1;
L_002ADFC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADFCCu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002ADFCCu) [[unlikely]] return; }
L_002ADFCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE0C4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002ADFE0; } }
    set32(c.r[5], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_002ADFE0:
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADFECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 295u, depth + 1u); else { c.pc = 0x002AF470u; return; } if (c.pc != 0x002ADFECu) [[unlikely]] return; }
L_002ADFEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE0C4; } }
    set32(c.r[4], 0u + 56u);
    c.budget -= 1;
L_002ADFF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE000u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002AE000u) [[unlikely]] return; }
L_002AE000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE0C4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002AE014; } }
    set32(c.r[5], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_002AE014:
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE020u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 334u, depth + 1u); else { c.pc = 0x002AFC10u; return; } if (c.pc != 0x002AE020u) [[unlikely]] return; }
L_002AE020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE0C4; } }
    set32(c.r[4], 0u + 56u);
    c.budget -= 1;
L_002AE02C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE034u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002AE034u) [[unlikely]] return; }
L_002AE034:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE0C4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002AE048; } }
    set32(c.r[5], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_002AE048:
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE054u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 343u, depth + 1u); else { c.pc = 0x002AFDA0u; return; } if (c.pc != 0x002AE054u) [[unlikely]] return; }
L_002AE054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE0C4; } }
    set32(c.r[4], 0u + 56u);
    c.budget -= 1;
L_002AE060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE068u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002AE068u) [[unlikely]] return; }
L_002AE068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE0C4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002AE07C; } }
    set32(c.r[5], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_002AE07C:
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE088u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 352u, depth + 1u); else { c.pc = 0x002AFF30u; return; } if (c.pc != 0x002AE088u) [[unlikely]] return; }
L_002AE088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE0C4; } }
L_002AE090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE098u); set32(c.r[4], 0u + 56u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002AE098u) [[unlikely]] return; }
L_002AE098:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE0C4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002AE0AC; } }
    set32(c.r[5], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_002AE0AC:
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE0B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 6u, depth + 1u); else { c.pc = 0x002B00C0u; return; } if (c.pc != 0x002AE0B8u) [[unlikely]] return; }
L_002AE0B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE0C4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AE0C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002AE0C8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AE0E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[5].w[0] << 2);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 15u);  goto L_002AE108; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AE2AC; } }
    set32(c.r[2], 0u + 15u);
    c.budget -= 1;
L_002AE108:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002AE2AC; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002AE270; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002AE2AC; }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 76u)));  goto L_002AE248; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 76u)));  goto L_002AE228; }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 76u)));  goto L_002AE20C; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 76u)));  goto L_002AE1E8; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 76u)));  goto L_002AE1C8; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 84u)));  goto L_002AE198; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 76u)));  goto L_002AE188; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AE2AC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 1;
L_002AE188:
    set32(c.r[2], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_002AE2AC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 1;
L_002AE198:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE2AC; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 116u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE1B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AE1B8u) [[unlikely]] return; }
L_002AE1B8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE2AC; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 1;
L_002AE1C8:
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE1DCu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AE1DCu) [[unlikely]] return; }
L_002AE1DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE2AC; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 1;
L_002AE1E8:
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE200u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AE200u) [[unlikely]] return; }
L_002AE200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE2AC; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 1;
L_002AE20C:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE21Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AE21Cu) [[unlikely]] return; }
L_002AE21C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE2AC; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 1;
L_002AE228:
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE23Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AE23Cu) [[unlikely]] return; }
L_002AE23C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE2AC; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 1;
L_002AE248:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 120u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE258u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AE258u) [[unlikely]] return; }
L_002AE258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE2AC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE2AC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002AE270:
    set32(c.r[2], ld32((c.r[2].w[0] + 560u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(99ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 76u)));  goto L_002AE28C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AE294; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 1;
L_002AE28C:
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 2;
L_002AE294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE2AC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE2AC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AE2AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002AE2C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 15u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002AE398; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002AE39C; }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[16], ld32((c.r[4].w[0] + 76u)));  goto L_002AE364; }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[16], ld32((c.r[4].w[0] + 76u)));  goto L_002AE330; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002AE39C; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002AE324; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002AE324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AE39C; } }
L_002AE324:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE39C; } }
L_002AE330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE338u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x002AE338u) [[unlikely]] return; }
L_002AE338:
    set32(c.r[4], c.r[2].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 126u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 546u)));
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  if (t) { goto L_002AE39C; } }
L_002AE364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE36Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x002AE36Cu) [[unlikely]] return; }
L_002AE36C:
    set32(c.r[4], c.r[2].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 126u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 544u)));
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  if (t) { goto L_002AE39C; } }
L_002AE398:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002AE39C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AE3B0:
    set32(c.r[29], c.r[29].w[0] - 464u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 1100u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 1304u)));
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 352u), c.r[2].w[0]);  if (t) { goto L_002AE410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 1024u);  if (t) { goto L_002AE430; } }
L_002AE410:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_002AE424; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 2048u);  if (t) { goto L_002AE430; } }
L_002AE424:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  goto L_002AE434; }
    set32(c.r[20], 0u + 4096u);
    c.budget -= 1;
L_002AE430:
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 1;
L_002AE434:
    set32(c.r[5], c.r[29].w[0] + 462u);
    set32(c.r[6], c.r[29].w[0] + 460u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE444u); set32(c.r[7], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0073(c, 315u, depth + 1u); else { c.pc = 0x002EF700u; return; } if (c.pc != 0x002AE444u) [[unlikely]] return; }
L_002AE444:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[21].d[0] == c.r[3].d[0]) { set32(c.r[19], 0u + 3u);  goto L_002AE464; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[21].d[0] == c.r[2].d[0]) { c.r[19].d[0] = 0ull + 0ull;  goto L_002AE464; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[19].d[0] = c.r[3].d[0] + 0ull;  goto L_002AE464; }
L_002AE464:
    set32(c.r[2], ld32((c.r[18].w[0] + 1100u)));
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002AE480; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE47Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 359u, depth + 1u); else { c.pc = 0x0028BAA0u; return; } if (c.pc != 0x002AE47Cu) [[unlikely]] return; }
L_002AE47C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002AE480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE488u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002AE488u) [[unlikely]] return; }
L_002AE488:
    c.f[0] = ld32((c.r[16].w[0] + 736u));
    st32((c.r[29].w[0] + 432u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 740u));
    st32((c.r[29].w[0] + 436u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 744u));
    st32((c.r[29].w[0] + 440u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 748u));
    st32((c.r[29].w[0] + 444u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE4B0u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002AE4B0u) [[unlikely]] return; }
L_002AE4B0:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002AE544; }
    c.f[3] = ld32((c.r[18].w[0] + 1084u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[16].w[0] + 720u));
    set32(c.r[5], c.r[29].w[0] + 458u);
    c.f[1] = ld32((c.r[29].w[0] + 432u));
    set32(c.r[6], c.r[29].w[0] + 456u);
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    c.f[20] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 428u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 420u), 0u);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[20]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 416u), c.f[1]);
    st32((c.r[29].w[0] + 424u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE504u); set32(c.r[7], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_0073(c, 315u, depth + 1u); else { c.pc = 0x002EF700u; return; } if (c.pc != 0x002AE504u) [[unlikely]] return; }
L_002AE504:
    c.f[1] = ld32((c.r[29].w[0] + 432u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    st32((c.r[29].w[0] + 404u), 0u);
    st32((c.r[29].w[0] + 412u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 454u);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[20]);
    set32(c.r[6], c.r[29].w[0] + 452u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 400u), c.f[1]);
    st32((c.r[29].w[0] + 408u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE53Cu); set32(c.r[7], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_0073(c, 315u, depth + 1u); else { c.pc = 0x002EF700u; return; } if (c.pc != 0x002AE53Cu) [[unlikely]] return; }
L_002AE53C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 456u)));  if (t) { goto L_002AE698; } }
L_002AE544:
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002AE574; }
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
L_002AE574:
    set32(c.r[3], ld32((c.r[2].w[0] + 404u)));
    c.f[0] = ld32((c.r[16].w[0] + 720u));
    set32(c.r[5], c.r[29].w[0] + 450u);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[6], c.r[29].w[0] + 448u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.f[1] = ld32((c.r[3].w[0] + 228u));
    c.f[2] = ld32((c.r[2].w[0] + 1084u));
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE5ACu); c.f[20] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0073(c, 315u, depth + 1u); else { c.pc = 0x002EF700u; return; } if (c.pc != 0x002AE5ACu) [[unlikely]] return; }
L_002AE5AC:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[2].w[0] + 84u));
    c.f[12] = fp::ee::div(c.fcr31, c.f[20], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AE5E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE5D8u); c.f[12] = c.f[12] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x002AE5D8u) [[unlikely]] return; }
L_002AE5D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_002AE5E8; } }
L_002AE5E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE5E8u);  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x002AE5E8u) [[unlikely]] return; }
L_002AE5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE5F0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002AE5F0u) [[unlikely]] return; }
L_002AE5F0:
    c.r[19].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.f[0] = 0u;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.f[1] = ld32((c.r[2].w[0] + 116u));
    c.f[12] = fp::ee::div(c.fcr31, c.f[20], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AE62C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE624u); c.f[12] = c.f[12] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x002AE624u) [[unlikely]] return; }
L_002AE624:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_002AE634; } }
L_002AE62C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE634u);  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x002AE634u) [[unlikely]] return; }
L_002AE634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE63Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002AE63Cu) [[unlikely]] return; }
L_002AE63C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 450u)));
    c.r[5].d[0] = c.r[19].d[0] << 48;
    c.r[6].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 448u)));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[2], c.r[4].w[0] - c.r[5].w[0]);
    st16((c.r[29].w[0] + 458u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[3].w[0] - c.r[6].w[0]);
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] >= 0; st16((c.r[29].w[0] + 454u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_002AE670; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AE670:
    st16((c.r[29].w[0] + 456u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 122u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] + 0ull;  goto L_002AE690; }
L_002AE690:
    st16((c.r[29].w[0] + 452u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 456u)));
    c.budget -= 2;
L_002AE698:
    c.r[2].d[0] = c.r[20].d[0] | 551ull;
    set32(c.r[21], 0u - 1u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    c.r[30].d[0] = 0ull + 0ull;
    c.r[20].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 368u), static_cast<std::uint16_t>(c.r[21].w[0]));  if (t) { goto L_002AE7FC; } }
L_002AE6B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 458u)));  if (t) { goto L_002AE7D8; } }
L_002AE6BC:
    set32(c.r[23], ld32((c.r[17].w[0] + 84u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE6D0u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 342u, depth + 1u); else { c.pc = 0x002EFC40u; return; } if (c.pc != 0x002AE6D0u) [[unlikely]] return; }
L_002AE6D0:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[23].d[0] = 0ull + 0ull;  goto L_002AE6FC; }
    set32(c.r[3], ld32((c.r[23].w[0] + 72u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 4);  goto L_002AE6F4; }
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE6FC; } }
L_002AE6F4:
    set32(c.r[2], ld32((c.r[23].w[0] + 76u)));
    set32(c.r[23], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_002AE6FC:
    set32(c.r[4], ld32((c.r[23].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[22].w[0] + 1u);  goto L_002AE7D0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 462u)));
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x0C000000u);  goto L_002AE734; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 460u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  goto L_002AE758; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0C000000u);
    c.budget -= 1;
L_002AE734:
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AE7CC; } }
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AE7CC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 1;
L_002AE758:
    set32(c.r[5], c.r[29].w[0] + 384u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE76Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 332u, depth + 1u); else { c.pc = 0x002EF990u; return; } if (c.pc != 0x002AE76Cu) [[unlikely]] return; }
L_002AE76C:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 384u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE788u); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AE788u) [[unlikely]] return; }
L_002AE788:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE7CC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 368u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0] + 14u)));  goto L_002AE7B4; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0] + 14u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AE7CC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0] + 14u)));
    c.budget -= 1;
L_002AE7B4:
    c.r[21].d[0] = c.r[22].d[0] << 48;
    c.r[20].d[0] = c.r[19].d[0] << 48;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.r[30].d[0] = c.r[23].d[0] + 0ull;
    st16((c.r[29].w[0] + 368u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_002AE7CC:
    set32(c.r[2], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_002AE7D0:
    c.r[22].d[0] = c.r[2].d[0] << 48;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 48);
    c.budget -= 2;
L_002AE7D8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 454u)));
    c.r[2].d[0] = c.r[22].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE6BCu | kUnwind; return; } goto L_002AE6BC; } }
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.budget -= 3;
L_002AE7FC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 452u)));
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 336u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE6B4u | kUnwind; return; } goto L_002AE6B4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 1100u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002AE830; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE830u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 359u, depth + 1u); else { c.pc = 0x0028BAA0u; return; } if (c.pc != 0x002AE830u) [[unlikely]] return; }
L_002AE830:
    c.budget -= 2;
    if (c.r[30].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002AE840; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AEB10; } }
L_002AE840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE848u);  if (depth < kMaxDepth) unit_0063(c, 259u, depth + 1u); else { c.pc = 0x002AEE80u; return; } if (c.pc != 0x002AE848u) [[unlikely]] return; }
L_002AE848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE850u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002AE850u) [[unlikely]] return; }
L_002AE850:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  goto L_002AE868; }
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE864u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 216u, depth + 1u); else { c.pc = 0x002F31C0u; return; } if (c.pc != 0x002AE864u) [[unlikely]] return; }
L_002AE864:
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 1;
L_002AE868:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 84u)));  goto L_002AE878; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AEB10; } }
L_002AE878:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 124u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE890u); st128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0073(c, 342u, depth + 1u); else { c.pc = 0x002EFC40u; return; } if (c.pc != 0x002AE890u) [[unlikely]] return; }
L_002AE890:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_002AE8BC; }
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 4);  goto L_002AE8B4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE8BC; } }
L_002AE8B4:
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_002AE8BC:
    c.r[23].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 14u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 2;
L_002AE8C4:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE8D0u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 223u, depth + 1u); else { c.pc = 0x002F3300u; return; } if (c.pc != 0x002AE8D0u) [[unlikely]] return; }
L_002AE8D0:
    c.r[2].d[0] = c.r[21].d[0] << 48;
    c.r[19].d[0] = 0ull + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[20].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[23].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);  if (t) { goto L_002AEA98; } }
L_002AE8FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 11656u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 11664u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[22].d[0] = c.r[2].d[0] << 48;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 48);
    c.budget -= 20;
    if (c.r[22].sd[0] < 0) { set32(c.r[2], c.r[19].w[0] + 1u);  goto L_002AEA94; }
    set32(c.r[18], ld32((c.r[17].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 122u)));
    c.r[1].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AEA90; } }
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[22].d[0] << 48;  goto L_002AE994; }
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002AEA90; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 120u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AEA90; } }
    c.r[2].d[0] = c.r[22].d[0] << 48;
    c.budget -= 1;
L_002AE994:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[6]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE9BCu); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 342u, depth + 1u); else { c.pc = 0x002EFC40u; return; } if (c.pc != 0x002AE9BCu) [[unlikely]] return; }
L_002AE9BC:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_002AE9E8; }
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 4);  goto L_002AE9E0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE9E8; } }
L_002AE9E0:
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_002AE9E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AEA90; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AEA90; } }
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[3]);
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 462u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 6;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x0C000000u);  goto L_002AEA2C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 460u)));
    c.budget -= 3;
    if (c.r[22].d[0] == c.r[3].d[0]) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 14u)));  goto L_002AEA48; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0C000000u);
    c.budget -= 1;
L_002AEA2C:
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AEA90; } }
    c.r[3].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AEA90; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 14u)));
    c.budget -= 1;
L_002AEA48:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[30].w[0] + 4u)));  goto L_002AEAD0; }
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[3]);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AEA90; } }
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[21].d[0] = c.r[3].d[0] << 48;
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.r[20].d[0] = c.r[3].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002AEAAC; } }
L_002AEA90:
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002AEA94:
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002AEA98:
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[19].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE8FCu | kUnwind; return; } goto L_002AE8FC; }
L_002AEAAC:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE8C4u | kUnwind; return; } goto L_002AE8C4; }
    c.r[2].d[0] = c.r[23].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002AEB04; }
    set32(c.r[3], ld32((c.r[30].w[0] + 4u)));
    c.budget -= 1;
L_002AEAD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[6].d[0] = c.r[21].d[0] << 48;
    c.r[7].d[0] = c.r[20].d[0] << 48;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    st32((c.r[30].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEAFCu); set32(c.r[4], c.r[4].w[0] + 11680u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002AEAFCu) [[unlikely]] return; }
L_002AEAFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AEB10; } }
L_002AEB04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEB0Cu);  if (depth < kMaxDepth) unit_0063(c, 259u, depth + 1u); else { c.pc = 0x002AEE80u; return; } if (c.pc != 0x002AEB0Cu) [[unlikely]] return; }
L_002AEB0C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AEB10:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 464u);  c.pc = t; return; }
L_002AEB50:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEB94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 342u, depth + 1u); else { c.pc = 0x002EFC40u; return; } if (c.pc != 0x002AEB94u) [[unlikely]] return; }
L_002AEB94:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_002AEBC0; }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 4);  goto L_002AEBB8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AEBC0; } }
L_002AEBB8:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_002AEBC0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 14u)));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_002AEBD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AEE44; } }
L_002AEBD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEBDCu);  if (depth < kMaxDepth) unit_0063(c, 259u, depth + 1u); else { c.pc = 0x002AEE80u; return; } if (c.pc != 0x002AEBDCu) [[unlikely]] return; }
L_002AEBDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEBE4u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002AEBE4u) [[unlikely]] return; }
L_002AEBE4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[21].w[0] + 88u), c.r[2].w[0]);  goto L_002AEBFC; }
    set32(c.r[5], ld32((c.r[21].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEBF8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 216u, depth + 1u); else { c.pc = 0x002F31C0u; return; } if (c.pc != 0x002AEBF8u) [[unlikely]] return; }
L_002AEBF8:
    st32((c.r[21].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 1;
L_002AEBFC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 84u)));  goto L_002AEC0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AEE44; } }
L_002AEC0C:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEC24u); st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0073(c, 342u, depth + 1u); else { c.pc = 0x002EFC40u; return; } if (c.pc != 0x002AEC24u) [[unlikely]] return; }
L_002AEC24:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_002AEC50; }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 4);  goto L_002AEC48; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AEC50; } }
L_002AEC48:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_002AEC50:
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 14u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 88u)));
    c.budget -= 2;
L_002AEC58:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEC64u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 223u, depth + 1u); else { c.pc = 0x002F3300u; return; } if (c.pc != 0x002AEC64u) [[unlikely]] return; }
L_002AEC64:
    c.r[2].d[0] = c.r[20].d[0] << 48;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (t) { goto L_002AEDE8; } }
L_002AEC90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 11736u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 11744u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[2].d[0] << 48;
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 18;
    { const bool t = c.r[4].sd[0] < 0; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (t) { goto L_002AEDE0; } }
    set32(c.r[16], ld32((c.r[21].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 122u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 1u);  goto L_002AEDE4; }
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[22].d[0] = c.r[4].d[0] << 48;  goto L_002AED1C; }
    c.r[3].d[0] = c.r[5].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002AEDE0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 120u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AEDE0; } }
    c.r[22].d[0] = c.r[4].d[0] << 48;
    c.budget -= 1;
L_002AED1C:
    c.r[23].d[0] = c.r[5].d[0] << 48;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 48);
    c.r[23].d[0] = static_cast<std::uint64_t>(c.r[23].sd[0] >> 48);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AED38u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 342u, depth + 1u); else { c.pc = 0x002EFC40u; return; } if (c.pc != 0x002AED38u) [[unlikely]] return; }
L_002AED38:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[4].d[0] = 0ull + 0ull;  goto L_002AED64; }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 4);  goto L_002AED5C; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AED64; } }
L_002AED5C:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_002AED64:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AEDE0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AEDE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0C000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AEDE0; } }
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AEDE0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = c.r[20].d[0] << 48;  goto L_002AEE18; }
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AEDE0; } }
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.r[20].d[0] = c.r[23].d[0] << 48;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[19].d[0] = c.r[22].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002AEDF8; } }
L_002AEDE0:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002AEDE4:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002AEDE8:
    c.r[30].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[30].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEC90u | kUnwind; return; } goto L_002AEC90; }
L_002AEDF8:
    c.r[2].d[0] = c.r[30].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 88u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEC58u | kUnwind; return; } goto L_002AEC58; }
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_002AEE38; }
    c.r[5].d[0] = c.r[20].d[0] << 48;
    c.budget -= 1;
L_002AEE18:
    c.r[6].d[0] = c.r[19].d[0] << 48;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEE30u); set32(c.r[4], c.r[4].w[0] + 11760u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002AEE30u) [[unlikely]] return; }
L_002AEE30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AEE44; } }
L_002AEE38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEE40u);  if (depth < kMaxDepth) unit_0063(c, 259u, depth + 1u); else { c.pc = 0x002AEE80u; return; } if (c.pc != 0x002AEE40u) [[unlikely]] return; }
L_002AEE40:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AEE44:
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
L_002AEE80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002AEEBC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 88u), 0u);  goto L_002AEEB8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEEB4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AEEB4u) [[unlikely]] return; }
L_002AEEB4:
    st32((c.r[16].w[0] + 88u), 0u);
    c.budget -= 1;
L_002AEEB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002AEEBC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AEED0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AEEF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AEF44; } }
L_002AEEF8:
    set32(c.r[5], c.r[29].w[0] + 62u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEF04u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0074(c, 225u, depth + 1u); else { c.pc = 0x002F3380u; return; } if (c.pc != 0x002AEF04u) [[unlikely]] return; }
L_002AEF04:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  goto L_002AEF14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AEF44; } }
L_002AEF14:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 62u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 60u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEF28u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 332u, depth + 1u); else { c.pc = 0x002EF990u; return; } if (c.pc != 0x002AEF28u) [[unlikely]] return; }
L_002AEF28:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEF40u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 273u, depth + 1u); else { c.pc = 0x002D2D70u; return; } if (c.pc != 0x002AEF40u) [[unlikely]] return; }
L_002AEF40:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002AEF44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002AEF60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AEF88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AEFD4; } }
L_002AEF88:
    set32(c.r[5], c.r[29].w[0] + 62u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEF94u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0074(c, 226u, depth + 1u); else { c.pc = 0x002F33C0u; return; } if (c.pc != 0x002AEF94u) [[unlikely]] return; }
L_002AEF94:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  goto L_002AEFA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AEFD4; } }
L_002AEFA4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 62u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 60u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEFB8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 332u, depth + 1u); else { c.pc = 0x002EF990u; return; } if (c.pc != 0x002AEFB8u) [[unlikely]] return; }
L_002AEFB8:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEFD0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 273u, depth + 1u); else { c.pc = 0x002D2D70u; return; } if (c.pc != 0x002AEFD0u) [[unlikely]] return; }
L_002AEFD0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002AEFD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002AEFF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AF054; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25440u);
    set32(c.r[2], c.r[2].w[0] + 25496u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF030u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002AF030u) [[unlikely]] return; }
L_002AF030:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF03Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002AF03Cu) [[unlikely]] return; }
L_002AF03C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002AF058; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF054u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002AF054u) [[unlikely]] return; }
L_002AF054:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002AF058:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AF070:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEFF0u | kUnwind; return; } goto L_002AEFF0; }
L_002AF080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF09Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 211u, depth + 1u); else { c.pc = 0x002CA110u; return; } if (c.pc != 0x002AF09Cu) [[unlikely]] return; }
L_002AF09C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 25872u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 25884u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x54420000u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16718ull;
    set32(c.r[4], c.r[4].w[0] + 11808u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF0D0u); st32((c.r[16].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002AF0D0u) [[unlikely]] return; }
L_002AF0D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AF0F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AF154; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25872u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 25884u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 11840u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF130u); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002AF130u) [[unlikely]] return; }
L_002AF130:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF13Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 213u, depth + 1u); else { c.pc = 0x002CA1B0u; return; } if (c.pc != 0x002AF13Cu) [[unlikely]] return; }
L_002AF13C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002AF158; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF154u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002AF154u) [[unlikely]] return; }
L_002AF154:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002AF158:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AF170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  goto L_002AF1DC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  goto L_002AF1B4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_002AF1AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002AF204; } }
L_002AF1AC:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 2;
L_002AF1B4:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF1CCu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x002AF1CCu) [[unlikely]] return; }
L_002AF1CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_002AF200; } }
L_002AF1DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 1188u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AF200; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_002AF200:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002AF204:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AF210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF22Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 211u, depth + 1u); else { c.pc = 0x002CA110u; return; } if (c.pc != 0x002AF22Cu) [[unlikely]] return; }
L_002AF22C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 25824u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 25836u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x564D0000u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16718ull;
    set32(c.r[4], c.r[4].w[0] + 11872u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF260u); st32((c.r[16].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002AF260u) [[unlikely]] return; }
L_002AF260:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AF280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AF2E4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25824u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 25836u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 11904u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF2C0u); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002AF2C0u) [[unlikely]] return; }
L_002AF2C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF2CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 213u, depth + 1u); else { c.pc = 0x002CA1B0u; return; } if (c.pc != 0x002AF2CCu) [[unlikely]] return; }
L_002AF2CC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002AF2E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF2E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002AF2E4u) [[unlikely]] return; }
L_002AF2E4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002AF2E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AF300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 3u);
    c.budget -= 8;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_002AF454; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 44u)));  goto L_002AF3DC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_002AF368; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  goto L_002AF348; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002AF464; } }
L_002AF348:
    set32(c.r[3], ld32((c.r[3].w[0] + 96u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_002AF360; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[4].w[0]);  if (t) { goto L_002AF460; } }
L_002AF360:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 2;
L_002AF368:
    set32(c.r[4], ld32((c.r[2].w[0] + 1316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF374u); set32(c.r[5], c.r[2].w[0] + 1328u);  if (depth < kMaxDepth) unit_0063(c, 261u, depth + 1u); else { c.pc = 0x002AEED0u; return; } if (c.pc != 0x002AF374u) [[unlikely]] return; }
L_002AF374:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF38Cu); set32(c.r[5], c.r[4].w[0] + 1328u);  if (depth < kMaxDepth) unit_006C(c, 273u, depth + 1u); else { c.pc = 0x002D2D70u; return; } if (c.pc != 0x002AF38Cu) [[unlikely]] return; }
L_002AF38C:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 192u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 196u));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 200u));
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 204u));
    st32((c.r[16].w[0] + 76u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF3CCu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x002AF3CCu) [[unlikely]] return; }
L_002AF3CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_002AF460; } }
L_002AF3DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 1188u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 3u);  goto L_002AF404; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[5], c.r[5].w[0] + 192u);  goto L_002AF40C; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_002AF404:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_002AF460; } }
L_002AF40C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF414u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x002AF414u) [[unlikely]] return; }
L_002AF414:
    c.f[1] = ld32((c.r[28].w[0] - 32152u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  goto L_002AF430; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_002AF460; } }
L_002AF430:
    c.f[0] = ld32((c.r[3].w[0] + 192u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 196u));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 200u));
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 204u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.f[0]);  if (t) { goto L_002AF460; } }
L_002AF454:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_002AF460:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002AF464:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AF470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF48Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 211u, depth + 1u); else { c.pc = 0x002CA110u; return; } if (c.pc != 0x002AF48Cu) [[unlikely]] return; }
L_002AF48C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 25776u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 25788u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4E410000u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16718ull;
    set32(c.r[4], c.r[4].w[0] + 11936u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF4CCu); st32((c.r[16].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002AF4CCu) [[unlikely]] return; }
L_002AF4CC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AF4E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AF544; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25776u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 25788u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 11984u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF520u); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002AF520u) [[unlikely]] return; }
L_002AF520:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF52Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 213u, depth + 1u); else { c.pc = 0x002CA1B0u; return; } if (c.pc != 0x002AF52Cu) [[unlikely]] return; }
L_002AF52C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002AF548; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF544u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002AF544u) [[unlikely]] return; }
L_002AF544:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002AF548:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AF560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002AFA14; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 12016u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002AC000u < 16384u) { entry = entries_0063[(t - 0x002AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002AF598:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 96u)));  goto L_002AF5B0; }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_002AFA14; } }
L_002AF5B0:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[5].d[0]) { set32(c.r[5], 0u + 3u);  goto L_002AF5E0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1100u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002AF5DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF5D4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_005A(c, 344u, depth + 1u); else { c.pc = 0x0028B8A0u; return; } if (c.pc != 0x002AF5D4u) [[unlikely]] return; }
L_002AF5D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002AF630; } }
L_002AF5DC:
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_002AF5E0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_002AF608; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1100u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002AF608; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF600u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_005A(c, 344u, depth + 1u); else { c.pc = 0x0028B8A0u; return; } if (c.pc != 0x002AF600u) [[unlikely]] return; }
L_002AF600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AF62C; } }
L_002AF608:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002AF62C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1100u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AF62C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF62Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_005A(c, 344u, depth + 1u); else { c.pc = 0x0028B8A0u; return; } if (c.pc != 0x002AF62Cu) [[unlikely]] return; }
L_002AF62C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002AF630:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 3432u)));
    set32(c.r[3], c.r[4].w[0] + 112u);
    set32(c.r[7], c.r[3].w[0] + 3324u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 3424u), 0u);  if (t) { goto L_002AF66C; } }
L_002AF648:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_002AF66C; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 3424u), c.r[5].w[0]);  if (t) { goto L_002AF678; } }
L_002AF66C:
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[8].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF648u | kUnwind; return; } goto L_002AF648; }
L_002AF678:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 3424u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 3u);  goto L_002AF80C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 96u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 52u)));  goto L_002AF6A8; }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_002AFA14; } }
L_002AF6A8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_002AF6B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1316u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF6C0u); set32(c.r[5], c.r[2].w[0] + 1328u);  if (depth < kMaxDepth) unit_0063(c, 261u, depth + 1u); else { c.pc = 0x002AEED0u; return; } if (c.pc != 0x002AF6C0u) [[unlikely]] return; }
L_002AF6C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF6D8u); set32(c.r[5], c.r[4].w[0] + 1328u);  if (depth < kMaxDepth) unit_006C(c, 273u, depth + 1u); else { c.pc = 0x002D2D70u; return; } if (c.pc != 0x002AF6D8u) [[unlikely]] return; }
L_002AF6D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 192u));
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 196u));
    st32((c.r[16].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 200u));
    st32((c.r[16].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 204u));
    st32((c.r[16].w[0] + 92u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF718u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x002AF718u) [[unlikely]] return; }
L_002AF718:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_002AFA14; } }
L_002AF728:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 3432u)));
    set32(c.r[3], c.r[4].w[0] + 112u);
    set32(c.r[7], c.r[3].w[0] + 3324u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 3424u), 0u);  if (t) { goto L_002AF768; } }
L_002AF744:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_002AF768; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 3424u), c.r[5].w[0]);  if (t) { goto L_002AF774; } }
L_002AF768:
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[8].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF744u | kUnwind; return; } goto L_002AF744; }
L_002AF774:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 3424u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 52u)));  goto L_002AF800; }
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 1188u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 7u);  goto L_002AF7B0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[5], c.r[5].w[0] + 192u);  goto L_002AF7B8; }
    set32(c.r[3], 0u + 7u);
    c.budget -= 1;
L_002AF7B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_002AFA14; } }
L_002AF7B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF7C0u); set32(c.r[4], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x002AF7C0u) [[unlikely]] return; }
L_002AF7C0:
    c.f[1] = ld32((c.r[28].w[0] - 32152u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  goto L_002AF7DC; }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_002AFA14; } }
L_002AF7DC:
    c.f[0] = ld32((c.r[3].w[0] + 192u));
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 196u));
    st32((c.r[16].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 200u));
    st32((c.r[16].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 204u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 92u), c.f[0]);  if (t) { goto L_002AFA14; } }
L_002AF800:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 2;
L_002AF808:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_002AF80C:
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 124u)));
    c.budget -= 5;
    if (c.r[3].sd[0] > 0) { c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 126u)));  goto L_002AF82C; }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_002AFA14; } }
L_002AF82C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 124u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[7].d[0] + 0ull;  goto L_002AF848; }
L_002AF848:
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = c.r[7].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 16;
    if (c.r[1].d[0] == 0ull) { mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);  goto L_002AF890; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[6].w[0]);  if (t) { goto L_002AF8D0; } }
L_002AF890:
    c.r[3].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[7].d[0] + 0ull;  goto L_002AF8A4; }
L_002AF8A4:
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[3].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    st32((c.r[16].w[0] + 56u), c.r[6].w[0]);
    c.budget -= 11;
L_002AF8D0:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002AF8E4; }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_002AFA14; } }
L_002AF8E4:
    c.f[12] = 0u;
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[5], 0u + 9u);
    set32(c.r[7], ld32((c.r[2].w[0] + 3424u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF8FCu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x002AF8FCu) [[unlikely]] return; }
L_002AF8FC:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_002AFA14; } }
L_002AF90C:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 1188u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002AFA18; }
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_002AF930:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AF964; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF95Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x002AF95Cu) [[unlikely]] return; }
L_002AF95C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 52u)));  if (t) { goto L_002AF9AC; } }
L_002AF964:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  goto L_002AF990; }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.f[12] = 0u;
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[5], 0u + 14u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF988u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x002AF988u) [[unlikely]] return; }
L_002AF988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AF9A8; } }
L_002AF990:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 15u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF9A8u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x002AF9A8u) [[unlikely]] return; }
L_002AF9A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_002AF9AC:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_002AFA14; } }
L_002AF9B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002AF9EC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 1188u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 52u)));  goto L_002AF9FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AFA14; } }
L_002AF9EC:
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AFA14; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_002AF9FC:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 2;
L_002AFA04:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_002AFA14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002AFA18:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AFA30:
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002AFA74; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30344u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[6].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[6].w[0] + 80u));  goto L_002AFA68; }
    c.f[1] = 0u;
    c.budget -= 1;
L_002AFA68:
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.budget -= 3;
L_002AFA74:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AFA80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 5u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFA9Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 211u, depth + 1u); else { c.pc = 0x002CA110u; return; } if (c.pc != 0x002AFA9Cu) [[unlikely]] return; }
L_002AFA9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 25728u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 25740u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44470000u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16718ull;
    set32(c.r[4], c.r[4].w[0] + 12048u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFAD0u); st32((c.r[16].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002AFAD0u) [[unlikely]] return; }
L_002AFAD0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AFAF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AFB54; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25728u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 25740u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 12080u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFB30u); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002AFB30u) [[unlikely]] return; }
L_002AFB30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFB3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 213u, depth + 1u); else { c.pc = 0x002CA1B0u; return; } if (c.pc != 0x002AFB3Cu) [[unlikely]] return; }
L_002AFB3C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002AFB58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFB54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002AFB54u) [[unlikely]] return; }
L_002AFB54:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002AFB58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AFB70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  goto L_002AFBDC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  goto L_002AFBB4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_002AFBAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002AFC04; } }
L_002AFBAC:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 2;
L_002AFBB4:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFBCCu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x002AFBCCu) [[unlikely]] return; }
L_002AFBCC:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_002AFC00; } }
L_002AFBDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 1188u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AFC00; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_002AFC00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002AFC04:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AFC10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 7u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFC2Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 211u, depth + 1u); else { c.pc = 0x002CA110u; return; } if (c.pc != 0x002AFC2Cu) [[unlikely]] return; }
L_002AFC2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 25692u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C590000u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 20051ull;
    set32(c.r[4], c.r[4].w[0] + 12112u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFC60u); st32((c.r[16].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002AFC60u) [[unlikely]] return; }
L_002AFC60:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AFC80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AFCE4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25680u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 25692u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 12144u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFCC0u); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002AFCC0u) [[unlikely]] return; }
L_002AFCC0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFCCCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 213u, depth + 1u); else { c.pc = 0x002CA1B0u; return; } if (c.pc != 0x002AFCCCu) [[unlikely]] return; }
L_002AFCCC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002AFCE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFCE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002AFCE4u) [[unlikely]] return; }
L_002AFCE4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002AFCE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AFD00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  goto L_002AFD6C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  goto L_002AFD44; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_002AFD3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002AFD94; } }
L_002AFD3C:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 2;
L_002AFD44:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFD5Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x002AFD5Cu) [[unlikely]] return; }
L_002AFD5C:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_002AFD90; } }
L_002AFD6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 1188u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AFD90; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_002AFD90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002AFD94:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AFDA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 8u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFDBCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 211u, depth + 1u); else { c.pc = 0x002CA110u; return; } if (c.pc != 0x002AFDBCu) [[unlikely]] return; }
L_002AFDBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 25632u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 25644u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4E410000u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16718ull;
    set32(c.r[4], c.r[4].w[0] + 12176u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFDF0u); st32((c.r[16].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002AFDF0u) [[unlikely]] return; }
L_002AFDF0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AFE10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AFE74; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25632u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 25644u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 12208u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFE50u); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002AFE50u) [[unlikely]] return; }
L_002AFE50:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFE5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 213u, depth + 1u); else { c.pc = 0x002CA1B0u; return; } if (c.pc != 0x002AFE5Cu) [[unlikely]] return; }
L_002AFE5C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002AFE78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFE74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002AFE74u) [[unlikely]] return; }
L_002AFE74:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002AFE78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AFE90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  goto L_002AFEFC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  goto L_002AFED4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_002AFECC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002AFF20; } }
L_002AFECC:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 2;
L_002AFED4:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFEECu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x002AFEECu) [[unlikely]] return; }
L_002AFEEC:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_002AFF1C; } }
L_002AFEFC:
    set32(c.r[3], 0u + 5u);
    set32(c.r[4], ld32((c.r[4].w[0] + 1180u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AFF1C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_002AFF1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002AFF20:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AFF30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 9u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFF4Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 211u, depth + 1u); else { c.pc = 0x002CA110u; return; } if (c.pc != 0x002AFF4Cu) [[unlikely]] return; }
L_002AFF4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 25584u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 25596u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55470000u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16718ull;
    set32(c.r[4], c.r[4].w[0] + 12240u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFF80u); st32((c.r[16].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002AFF80u) [[unlikely]] return; }
L_002AFF80:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AFFA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0064(c, 2u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25584u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 25596u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFFE0u); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002AFFE0u) [[unlikely]] return; }
L_002AFFE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFFECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 213u, depth + 1u); else { c.pc = 0x002CA1B0u; return; } if (c.pc != 0x002AFFECu) [[unlikely]] return; }
L_002AFFEC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  [[clang::musttail]] return unit_0064(c, 3u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0004u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002B0004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0064(c, 2u, depth);
}

}
