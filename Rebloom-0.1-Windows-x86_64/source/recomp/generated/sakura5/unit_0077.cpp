#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0077[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 18, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0,
    0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68,
    0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 80,
    0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0,
    0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107,
    0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0,
    0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 129, 0, 130,
    0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0,
    0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150,
    0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 179, 0, 180,
    0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0,
    0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0,
    0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0,
    247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0,
    0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0,
    257, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0,
    0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0,
    0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 279, 0, 280, 0, 0, 281, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 287, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 0, 293, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 296,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 299, 0, 0, 300, 0,
    301, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 304, 0, 0, 0, 305, 0, 306, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 320,
    0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0,
    0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0,
    337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361,
    0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 369,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0,
    0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0,
    388, 0, 0, 389, 0, 0, 390, 0, 0, 391, 0, 0, 392, 0, 0, 393, 0, 0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0,
    0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0077(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002FC000;
    case 2u: goto L_002FC040;
    case 3u: goto L_002FC0A4;
    case 4u: goto L_002FC0C8;
    case 5u: goto L_002FC0D0;
    case 6u: goto L_002FC0F4;
    case 7u: goto L_002FC168;
    case 8u: goto L_002FC180;
    case 9u: goto L_002FC194;
    case 10u: goto L_002FC1A4;
    case 11u: goto L_002FC1B8;
    case 12u: goto L_002FC1C0;
    case 13u: goto L_002FC1E4;
    case 14u: goto L_002FC258;
    case 15u: goto L_002FC270;
    case 16u: goto L_002FC284;
    case 17u: goto L_002FC294;
    case 18u: goto L_002FC2A8;
    case 19u: goto L_002FC2AC;
    case 20u: goto L_002FC2C0;
    case 21u: goto L_002FC2D4;
    case 22u: goto L_002FC310;
    case 23u: goto L_002FC324;
    case 24u: goto L_002FC394;
    case 25u: goto L_002FC3A8;
    case 26u: goto L_002FC3C0;
    case 27u: goto L_002FC438;
    case 28u: goto L_002FC444;
    case 29u: goto L_002FC45C;
    case 30u: goto L_002FC480;
    case 31u: goto L_002FC4F8;
    case 32u: goto L_002FC504;
    case 33u: goto L_002FC51C;
    case 34u: goto L_002FC540;
    case 35u: goto L_002FC59C;
    case 36u: goto L_002FC5A8;
    case 37u: goto L_002FC5B4;
    case 38u: goto L_002FC5CC;
    case 39u: goto L_002FC5F0;
    case 40u: goto L_002FC600;
    case 41u: goto L_002FC610;
    case 42u: goto L_002FC620;
    case 43u: goto L_002FC630;
    case 44u: goto L_002FC660;
    case 45u: goto L_002FC680;
    case 46u: goto L_002FC6A0;
    case 47u: goto L_002FC6B4;
    case 48u: goto L_002FC6E0;
    case 49u: goto L_002FC738;
    case 50u: goto L_002FC750;
    case 51u: goto L_002FC770;
    case 52u: goto L_002FC780;
    case 53u: goto L_002FC798;
    case 54u: goto L_002FC7B8;
    case 55u: goto L_002FC7C8;
    case 56u: goto L_002FC7E0;
    case 57u: goto L_002FC800;
    case 58u: goto L_002FC814;
    case 59u: goto L_002FC834;
    case 60u: goto L_002FC860;
    case 61u: goto L_002FC874;
    case 62u: goto L_002FC8B0;
    case 63u: goto L_002FC8C4;
    case 64u: goto L_002FC900;
    case 65u: goto L_002FC91C;
    case 66u: goto L_002FC954;
    case 67u: goto L_002FC968;
    case 68u: goto L_002FC97C;
    case 69u: goto L_002FC990;
    case 70u: goto L_002FC9A4;
    case 71u: goto L_002FC9CC;
    case 72u: goto L_002FC9D4;
    case 73u: goto L_002FCA10;
    case 74u: goto L_002FCA34;
    case 75u: goto L_002FCA40;
    case 76u: goto L_002FCA4C;
    case 77u: goto L_002FCA58;
    case 78u: goto L_002FCA64;
    case 79u: goto L_002FCA70;
    case 80u: goto L_002FCA7C;
    case 81u: goto L_002FCA84;
    case 82u: goto L_002FCAA4;
    case 83u: goto L_002FCACC;
    case 84u: goto L_002FCADC;
    case 85u: goto L_002FCB00;
    case 86u: goto L_002FCB30;
    case 87u: goto L_002FCB6C;
    case 88u: goto L_002FCB8C;
    case 89u: goto L_002FCB9C;
    case 90u: goto L_002FCBAC;
    case 91u: goto L_002FCBB4;
    case 92u: goto L_002FCBC8;
    case 93u: goto L_002FCBF8;
    case 94u: goto L_002FCC28;
    case 95u: goto L_002FCC38;
    case 96u: goto L_002FCC44;
    case 97u: goto L_002FCCD4;
    case 98u: goto L_002FCD38;
    case 99u: goto L_002FCD4C;
    case 100u: goto L_002FCD80;
    case 101u: goto L_002FCDD0;
    case 102u: goto L_002FCDF0;
    case 103u: goto L_002FCE50;
    case 104u: goto L_002FCE70;
    case 105u: goto L_002FCED0;
    case 106u: goto L_002FCEEC;
    case 107u: goto L_002FCEFC;
    case 108u: goto L_002FCF14;
    case 109u: goto L_002FCF20;
    case 110u: goto L_002FCF28;
    case 111u: goto L_002FCF34;
    case 112u: goto L_002FCF54;
    case 113u: goto L_002FCFC0;
    case 114u: goto L_002FCFD4;
    case 115u: goto L_002FCFF4;
    case 116u: goto L_002FD054;
    case 117u: goto L_002FD070;
    case 118u: goto L_002FD078;
    case 119u: goto L_002FD084;
    case 120u: goto L_002FD090;
    case 121u: goto L_002FD09C;
    case 122u: goto L_002FD0BC;
    case 123u: goto L_002FD128;
    case 124u: goto L_002FD148;
    case 125u: goto L_002FD1A8;
    case 126u: goto L_002FD1C4;
    case 127u: goto L_002FD1D4;
    case 128u: goto L_002FD1E8;
    case 129u: goto L_002FD1F4;
    case 130u: goto L_002FD1FC;
    case 131u: goto L_002FD208;
    case 132u: goto L_002FD228;
    case 133u: goto L_002FD294;
    case 134u: goto L_002FD2A8;
    case 135u: goto L_002FD2C8;
    case 136u: goto L_002FD328;
    case 137u: goto L_002FD344;
    case 138u: goto L_002FD34C;
    case 139u: goto L_002FD360;
    case 140u: goto L_002FD36C;
    case 141u: goto L_002FD378;
    case 142u: goto L_002FD398;
    case 143u: goto L_002FD404;
    case 144u: goto L_002FD424;
    case 145u: goto L_002FD484;
    case 146u: goto L_002FD4A0;
    case 147u: goto L_002FD4AC;
    case 148u: goto L_002FD4B8;
    case 149u: goto L_002FD4E8;
    case 150u: goto L_002FD4FC;
    case 151u: goto L_002FD51C;
    case 152u: goto L_002FD5AC;
    case 153u: goto L_002FD66C;
    case 154u: goto L_002FD694;
    case 155u: goto L_002FD6C0;
    case 156u: goto L_002FD6E4;
    case 157u: goto L_002FD70C;
    case 158u: goto L_002FD790;
    case 159u: goto L_002FD7B4;
    case 160u: goto L_002FD7E0;
    case 161u: goto L_002FD838;
    case 162u: goto L_002FD8B8;
    case 163u: goto L_002FD944;
    case 164u: goto L_002FD970;
    case 165u: goto L_002FD9F8;
    case 166u: goto L_002FDA10;
    case 167u: goto L_002FDA2C;
    case 168u: goto L_002FDA6C;
    case 169u: goto L_002FDAEC;
    case 170u: goto L_002FDB5C;
    case 171u: goto L_002FDB90;
    case 172u: goto L_002FDBBC;
    case 173u: goto L_002FDC44;
    case 174u: goto L_002FDC5C;
    case 175u: goto L_002FDC88;
    case 176u: goto L_002FDCC4;
    case 177u: goto L_002FDCD4;
    case 178u: goto L_002FDCE8;
    case 179u: goto L_002FDCF4;
    case 180u: goto L_002FDCFC;
    case 181u: goto L_002FDD08;
    case 182u: goto L_002FDD14;
    case 183u: goto L_002FDD20;
    case 184u: goto L_002FDD2C;
    case 185u: goto L_002FDD38;
    case 186u: goto L_002FDD44;
    case 187u: goto L_002FDD58;
    case 188u: goto L_002FDD90;
    case 189u: goto L_002FDDA8;
    case 190u: goto L_002FDDC4;
    case 191u: goto L_002FDE54;
    case 192u: goto L_002FDF10;
    case 193u: goto L_002FDF34;
    case 194u: goto L_002FDF5C;
    case 195u: goto L_002FDF7C;
    case 196u: goto L_002FDFA4;
    case 197u: goto L_002FE01C;
    case 198u: goto L_002FE040;
    case 199u: goto L_002FE07C;
    case 200u: goto L_002FE0F0;
    case 201u: goto L_002FE13C;
    case 202u: goto L_002FE14C;
    case 203u: goto L_002FE160;
    case 204u: goto L_002FE180;
    case 205u: goto L_002FE198;
    case 206u: goto L_002FE224;
    case 207u: goto L_002FE234;
    case 208u: goto L_002FE244;
    case 209u: goto L_002FE25C;
    case 210u: goto L_002FE290;
    case 211u: goto L_002FE2C0;
    case 212u: goto L_002FE2E8;
    case 213u: goto L_002FE2F0;
    case 214u: goto L_002FE300;
    case 215u: goto L_002FE328;
    case 216u: goto L_002FE338;
    case 217u: goto L_002FE340;
    case 218u: goto L_002FE350;
    case 219u: goto L_002FE3B0;
    case 220u: goto L_002FE3E0;
    case 221u: goto L_002FE3F0;
    case 222u: goto L_002FE470;
    case 223u: goto L_002FE480;
    case 224u: goto L_002FE494;
    case 225u: goto L_002FE4C0;
    case 226u: goto L_002FE4F4;
    case 227u: goto L_002FE520;
    case 228u: goto L_002FE554;
    case 229u: goto L_002FE630;
    case 230u: goto L_002FE644;
    case 231u: goto L_002FE680;
    case 232u: goto L_002FE6F8;
    case 233u: goto L_002FE704;
    case 234u: goto L_002FE71C;
    case 235u: goto L_002FE740;
    case 236u: goto L_002FE7B8;
    case 237u: goto L_002FE7C4;
    case 238u: goto L_002FE7DC;
    case 239u: goto L_002FE800;
    case 240u: goto L_002FE878;
    case 241u: goto L_002FE884;
    case 242u: goto L_002FE89C;
    case 243u: goto L_002FE8C0;
    case 244u: goto L_002FE938;
    case 245u: goto L_002FE944;
    case 246u: goto L_002FE95C;
    case 247u: goto L_002FE980;
    case 248u: goto L_002FE9DC;
    case 249u: goto L_002FE9E8;
    case 250u: goto L_002FE9F4;
    case 251u: goto L_002FEA0C;
    case 252u: goto L_002FEA30;
    case 253u: goto L_002FEA40;
    case 254u: goto L_002FEA50;
    case 255u: goto L_002FEA60;
    case 256u: goto L_002FEA70;
    case 257u: goto L_002FEA80;
    case 258u: goto L_002FEA90;
    case 259u: goto L_002FEAA0;
    case 260u: goto L_002FEAD0;
    case 261u: goto L_002FEAF0;
    case 262u: goto L_002FEB10;
    case 263u: goto L_002FEB24;
    case 264u: goto L_002FEBA4;
    case 265u: goto L_002FEBBC;
    case 266u: goto L_002FEBC8;
    case 267u: goto L_002FEBD8;
    case 268u: goto L_002FEC4C;
    case 269u: goto L_002FEC60;
    case 270u: goto L_002FEC74;
    case 271u: goto L_002FEC98;
    case 272u: goto L_002FECB8;
    case 273u: goto L_002FECD0;
    case 274u: goto L_002FED10;
    case 275u: goto L_002FED30;
    case 276u: goto L_002FED60;
    case 277u: goto L_002FED90;
    case 278u: goto L_002FEDAC;
    case 279u: goto L_002FEDB4;
    case 280u: goto L_002FEDBC;
    case 281u: goto L_002FEDC8;
    case 282u: goto L_002FEDD0;
    case 283u: goto L_002FEDE0;
    case 284u: goto L_002FEE08;
    case 285u: goto L_002FEE24;
    case 286u: goto L_002FEE30;
    case 287u: goto L_002FEE40;
    case 288u: goto L_002FEE48;
    case 289u: goto L_002FEE54;
    case 290u: goto L_002FEE78;
    case 291u: goto L_002FEEB8;
    case 292u: goto L_002FEEC0;
    case 293u: goto L_002FEED0;
    case 294u: goto L_002FEEDC;
    case 295u: goto L_002FEEE4;
    case 296u: goto L_002FEEFC;
    case 297u: goto L_002FEF54;
    case 298u: goto L_002FEF5C;
    case 299u: goto L_002FEF6C;
    case 300u: goto L_002FEF78;
    case 301u: goto L_002FEF80;
    case 302u: goto L_002FEF98;
    case 303u: goto L_002FEFA4;
    case 304u: goto L_002FEFAC;
    case 305u: goto L_002FEFBC;
    case 306u: goto L_002FEFC4;
    case 307u: goto L_002FEFCC;
    case 308u: goto L_002FF000;
    case 309u: goto L_002FF014;
    case 310u: goto L_002FF040;
    case 311u: goto L_002FF09C;
    case 312u: goto L_002FF0B0;
    case 313u: goto L_002FF128;
    case 314u: goto L_002FF134;
    case 315u: goto L_002FF14C;
    case 316u: goto L_002FF170;
    case 317u: goto L_002FF1CC;
    case 318u: goto L_002FF1D8;
    case 319u: goto L_002FF1E4;
    case 320u: goto L_002FF1FC;
    case 321u: goto L_002FF220;
    case 322u: goto L_002FF230;
    case 323u: goto L_002FF240;
    case 324u: goto L_002FF250;
    case 325u: goto L_002FF280;
    case 326u: goto L_002FF2A0;
    case 327u: goto L_002FF2C0;
    case 328u: goto L_002FF2D4;
    case 329u: goto L_002FF300;
    case 330u: goto L_002FF34C;
    case 331u: goto L_002FF364;
    case 332u: goto L_002FF384;
    case 333u: goto L_002FF398;
    case 334u: goto L_002FF3B8;
    case 335u: goto L_002FF3C8;
    case 336u: goto L_002FF3E0;
    case 337u: goto L_002FF400;
    case 338u: goto L_002FF414;
    case 339u: goto L_002FF434;
    case 340u: goto L_002FF460;
    case 341u: goto L_002FF474;
    case 342u: goto L_002FF4B0;
    case 343u: goto L_002FF52C;
    case 344u: goto L_002FF554;
    case 345u: goto L_002FF580;
    case 346u: goto L_002FF5F0;
    case 347u: goto L_002FF634;
    case 348u: goto L_002FF648;
    case 349u: goto L_002FF6A4;
    case 350u: goto L_002FF6B0;
    case 351u: goto L_002FF6C8;
    case 352u: goto L_002FF6E8;
    case 353u: goto L_002FF7B0;
    case 354u: goto L_002FF7E8;
    case 355u: goto L_002FF81C;
    case 356u: goto L_002FF84C;
    case 357u: goto L_002FF884;
    case 358u: goto L_002FF894;
    case 359u: goto L_002FF8C0;
    case 360u: goto L_002FF8EC;
    case 361u: goto L_002FF8FC;
    case 362u: goto L_002FF908;
    case 363u: goto L_002FF928;
    case 364u: goto L_002FF950;
    case 365u: goto L_002FF97C;
    case 366u: goto L_002FF9C0;
    case 367u: goto L_002FF9D8;
    case 368u: goto L_002FF9E4;
    case 369u: goto L_002FF9FC;
    case 370u: goto L_002FFA34;
    case 371u: goto L_002FFA64;
    case 372u: goto L_002FFAC8;
    case 373u: goto L_002FFB00;
    case 374u: goto L_002FFB34;
    case 375u: goto L_002FFB64;
    case 376u: goto L_002FFB94;
    case 377u: goto L_002FFBA4;
    case 378u: goto L_002FFBB4;
    case 379u: goto L_002FFBE0;
    case 380u: goto L_002FFC0C;
    case 381u: goto L_002FFC1C;
    case 382u: goto L_002FFC28;
    case 383u: goto L_002FFC70;
    case 384u: goto L_002FFC84;
    case 385u: goto L_002FFCAC;
    case 386u: goto L_002FFCD0;
    case 387u: goto L_002FFCF4;
    case 388u: goto L_002FFD00;
    case 389u: goto L_002FFD0C;
    case 390u: goto L_002FFD18;
    case 391u: goto L_002FFD24;
    case 392u: goto L_002FFD30;
    case 393u: goto L_002FFD3C;
    case 394u: goto L_002FFD48;
    case 395u: goto L_002FFD50;
    case 396u: goto L_002FFD70;
    case 397u: goto L_002FFD8C;
    case 398u: goto L_002FFDB0;
    case 399u: goto L_002FFDD0;
    case 400u: goto L_002FFE0C;
    case 401u: goto L_002FFE3C;
    case 402u: goto L_002FFEA4;
    case 403u: goto L_002FFF18;
    case 404u: goto L_002FFF84;
    case 405u: goto L_002FFFC4;
    case 406u: goto L_002FFFE0;
    default: bad_entry(c, 0x002FC000u); return;
    }
L_002FC000:
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[18], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], c.r[2].w[0] + 27u);
    set32(c.r[2], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 12;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002FC038; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002FC090; } }
L_002FC038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC040u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002FC040u) [[unlikely]] return; }
L_002FC040:
    set32(c.r[4], ld32((c.r[18].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002FC060; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FC070; } }
L_002FC060:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002FC070:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002FC090; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_002FC088; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FC088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FC090; } }
L_002FC090:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC0A4u); set32(c.r[6], c.r[2].w[0] + 10100u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x002FC0A4u) [[unlikely]] return; }
L_002FC0A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 80u));
    st32((c.r[2].w[0] + 328u), c.f[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC0C8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002FC0C8u) [[unlikely]] return; }
L_002FC0C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FC2A8; } }
L_002FC0D0:
    set32(c.r[17], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], c.r[2].w[0] + 27u);
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002FC0EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002FC144; } }
L_002FC0EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC0F4u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002FC0F4u) [[unlikely]] return; }
L_002FC0F4:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002FC114; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FC124; } }
L_002FC114:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002FC124:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_002FC144; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[18], ld32((c.r[3].w[0] + 4u)));  goto L_002FC13C; }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FC13C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FC144; } }
L_002FC144:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], c.r[2].w[0] + 10099u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[17], ld32((c.r[3].w[0] + 3028u)));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.f[12] = ld32((c.r[2].w[0] + 80u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC168u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 82u, depth + 1u); else { c.pc = 0x002A8A70u; return; } if (c.pc != 0x002FC168u) [[unlikely]] return; }
L_002FC168:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC180u); set32(c.r[6], c.r[2].w[0] + 10100u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x002FC180u) [[unlikely]] return; }
L_002FC180:
    st32((c.r[2].w[0] + 328u), 0u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC194u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002FC194u) [[unlikely]] return; }
L_002FC194:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 27u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC1A4u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x002FC1A4u) [[unlikely]] return; }
L_002FC1A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 28u);
    set32(c.r[6], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC1B8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x002FC1B8u) [[unlikely]] return; }
L_002FC1B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FC2A8; } }
L_002FC1C0:
    set32(c.r[17], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], c.r[2].w[0] + 27u);
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002FC1DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002FC234; } }
L_002FC1DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC1E4u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002FC1E4u) [[unlikely]] return; }
L_002FC1E4:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002FC204; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FC214; } }
L_002FC204:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002FC214:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_002FC234; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[18], ld32((c.r[3].w[0] + 4u)));  goto L_002FC22C; }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FC22C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FC234; } }
L_002FC234:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], c.r[2].w[0] + 10099u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[17], ld32((c.r[3].w[0] + 3028u)));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.f[12] = ld32((c.r[2].w[0] + 80u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC258u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 82u, depth + 1u); else { c.pc = 0x002A8A70u; return; } if (c.pc != 0x002FC258u) [[unlikely]] return; }
L_002FC258:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC270u); set32(c.r[6], c.r[2].w[0] + 10100u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x002FC270u) [[unlikely]] return; }
L_002FC270:
    st32((c.r[2].w[0] + 328u), 0u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC284u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002FC284u) [[unlikely]] return; }
L_002FC284:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC294u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x002FC294u) [[unlikely]] return; }
L_002FC294:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 29u);
    set32(c.r[6], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC2A8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x002FC2A8u) [[unlikely]] return; }
L_002FC2A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002FC2AC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002FC2C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC2D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 294u, depth + 1u); else { c.pc = 0x00272710u; return; } if (c.pc != 0x002FC2D4u) [[unlikely]] return; }
L_002FC2D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 31744u);
    set32(c.r[3], c.r[3].w[0] - 31688u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FC310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC324u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x002FC324u) [[unlikely]] return; }
L_002FC324:
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_002FC34C; }
    c.f[1] = 0u;
    c.budget -= 1;
L_002FC34C:
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 116u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002FC3B4; }
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002FC3B0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 38u);
    set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC394u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x002FC394u) [[unlikely]] return; }
L_002FC394:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 40u);
    set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC3A8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x002FC3A8u) [[unlikely]] return; }
L_002FC3A8:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    c.budget -= 2;
L_002FC3B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002FC3B4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FC3C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FC45C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 31744u);
    set32(c.r[2], c.r[2].w[0] - 31688u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002FC444; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22256u);
    set32(c.r[2], c.r[2].w[0] + 22312u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002FC444; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC438u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002FC438u) [[unlikely]] return; }
L_002FC438:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC444u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002FC444u) [[unlikely]] return; }
L_002FC444:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002FC460; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC45Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002FC45Cu) [[unlikely]] return; }
L_002FC45C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002FC460:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FC480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FC51C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 31648u);
    set32(c.r[2], c.r[2].w[0] - 31592u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002FC504; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21536u);
    set32(c.r[2], c.r[2].w[0] + 21592u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002FC504; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC4F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002FC4F8u) [[unlikely]] return; }
L_002FC4F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC504u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002FC504u) [[unlikely]] return; }
L_002FC504:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002FC520; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC51Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002FC51Cu) [[unlikely]] return; }
L_002FC51C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002FC520:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FC540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FC5CC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 31552u);
    set32(c.r[2], c.r[2].w[0] - 31496u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002FC5B4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC59Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002FC59Cu) [[unlikely]] return; }
L_002FC59C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC5A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002FC5A8u) [[unlikely]] return; }
L_002FC5A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC5B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002FC5B4u) [[unlikely]] return; }
L_002FC5B4:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002FC5D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC5CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002FC5CCu) [[unlikely]] return; }
L_002FC5CC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002FC5D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FC5F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC540u | kUnwind; return; } goto L_002FC540; }
L_002FC600:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC480u | kUnwind; return; } goto L_002FC480; }
L_002FC610:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FBEE0u | kUnwind; return; } [[clang::musttail]] return unit_0076(c, 378u, depth); }
L_002FC620:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC3C0u | kUnwind; return; } goto L_002FC3C0; }
L_002FC630:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC660u); set32(c.r[4], 0u + 1424u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002FC660u) [[unlikely]] return; }
L_002FC660:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002FC684; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC680u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 46u, depth + 1u); else { c.pc = 0x002FC6A0u; return; } if (c.pc != 0x002FC680u) [[unlikely]] return; }
L_002FC680:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002FC684:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002FC6A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC6B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x002FC6B4u) [[unlikely]] return; }
L_002FC6B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 30832u);
    set32(c.r[3], c.r[3].w[0] - 30776u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FC6E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 15u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002FC7C0; } }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_002FC778; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_002FC730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FC840; } }
L_002FC730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC738u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002FC738u) [[unlikely]] return; }
L_002FC738:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FC83C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC750u); set32(c.r[4], 0u + 100u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002FC750u) [[unlikely]] return; }
L_002FC750:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002FC844; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC770u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 62u, depth + 1u); else { c.pc = 0x002FC8B0u; return; } if (c.pc != 0x002FC770u) [[unlikely]] return; }
L_002FC770:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FC840; } }
L_002FC778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC780u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002FC780u) [[unlikely]] return; }
L_002FC780:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FC83C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC798u); set32(c.r[4], 0u + 544u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002FC798u) [[unlikely]] return; }
L_002FC798:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FC840; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC7B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 69u, depth + 1u); else { c.pc = 0x002FC990u; return; } if (c.pc != 0x002FC7B8u) [[unlikely]] return; }
L_002FC7B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FC840; } }
L_002FC7C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC7C8u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002FC7C8u) [[unlikely]] return; }
L_002FC7C8:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 164u);  goto L_002FC80C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC7E0u); set32(c.r[4], 0u + 164u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002FC7E0u) [[unlikely]] return; }
L_002FC7E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FC840; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC800u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 223u, depth + 1u); else { c.pc = 0x002FE480u; return; } if (c.pc != 0x002FC800u) [[unlikely]] return; }
L_002FC800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FC840; } }
    set32(c.r[4], 0u + 164u);
    c.budget -= 1;
L_002FC80C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC814u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002FC814u) [[unlikely]] return; }
L_002FC814:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FC840; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC834u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 229u, depth + 1u); else { c.pc = 0x002FE630u; return; } if (c.pc != 0x002FC834u) [[unlikely]] return; }
L_002FC834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FC840; } }
L_002FC83C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FC840:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002FC844:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002FC860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC874u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 266u, depth + 1u); else { c.pc = 0x0028A510u; return; } if (c.pc != 0x002FC874u) [[unlikely]] return; }
L_002FC874:
    set32(c.r[4], ld32((c.r[16].w[0] + 1100u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002FC89C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_002FC89C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FC8B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC8C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 112u, depth + 1u); else { c.pc = 0x00270FA0u; return; } if (c.pc != 0x002FC8C4u) [[unlikely]] return; }
L_002FC8C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 30928u);
    set32(c.r[3], c.r[3].w[0] - 30872u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 96u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FC900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC91Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x002FC91Cu) [[unlikely]] return; }
L_002FC91C:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002FC974; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FC970; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], 0u + 7u);  goto L_002FC95C; }
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], 0u + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC954u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x002FC954u) [[unlikely]] return; }
L_002FC954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002FC96C; } }
L_002FC95C:
    set32(c.r[6], 0u + 110u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC968u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x002FC968u) [[unlikely]] return; }
L_002FC968:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002FC96C:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 1;
L_002FC970:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002FC974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC97Cu);  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x002FC97Cu) [[unlikely]] return; }
L_002FC97C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FC990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC9A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 45u, depth + 1u); else { c.pc = 0x0026C620u; return; } if (c.pc != 0x002FC9A4u) [[unlikely]] return; }
L_002FC9A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 31024u);
    set32(c.r[2], c.r[2].w[0] - 30968u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 136u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC9CCu); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002FC9CCu) [[unlikely]] return; }
L_002FC9CC:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.budget -= 2;
L_002FC9D4:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 496u), 0u);
    c.r[2].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 516u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC9D4u | kUnwind; return; } goto L_002FC9D4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 464u)));
    st32((c.r[16].w[0] + 160u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FCA10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCA34u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002FCA34u) [[unlikely]] return; }
L_002FCA34:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCA40u); set32(c.r[5], 0u + 10010u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002FCA40u) [[unlikely]] return; }
L_002FCA40:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCA4Cu); set32(c.r[5], 0u + 10020u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002FCA4Cu) [[unlikely]] return; }
L_002FCA4C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCA58u); set32(c.r[5], 0u + 10030u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002FCA58u) [[unlikely]] return; }
L_002FCA58:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCA64u); set32(c.r[5], 0u + 10040u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002FCA64u) [[unlikely]] return; }
L_002FCA64:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCA70u); c.r[5].d[0] = 0ull | 50000ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002FCA70u) [[unlikely]] return; }
L_002FCA70:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCA7Cu); c.r[5].d[0] = 0ull | 50010ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002FCA7Cu) [[unlikely]] return; }
L_002FCA7C:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 2;
L_002FCA84:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 136u);  if (t) { goto L_002FCAA8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCAA4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FCAA4u) [[unlikely]] return; }
L_002FCAA4:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_002FCAA8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FCA84u | kUnwind; return; } goto L_002FCA84; }
    set32(c.r[2], ld32((c.r[16].w[0] + 540u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002FCAD4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCACCu); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_006D(c, 131u, depth + 1u); else { c.pc = 0x002D5890u; return; } if (c.pc != 0x002FCACCu) [[unlikely]] return; }
L_002FCACC:
    st32((c.r[16].w[0] + 540u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002FCAD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCADCu);  if (depth < kMaxDepth) unit_0053(c, 57u, depth + 1u); else { c.pc = 0x0026C870u; return; } if (c.pc != 0x002FCADCu) [[unlikely]] return; }
L_002FCADC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FCB00:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 12;
L_002FCB30:
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 136u);  if (t) { goto L_002FCB70; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002FCB74; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FCB70; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCB6Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FCB6Cu) [[unlikely]] return; }
L_002FCB6C:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_002FCB70:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002FCB74:
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FCB30u | kUnwind; return; } goto L_002FCB30; }
    set32(c.r[4], ld32((c.r[21].w[0] + 160u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCB8Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 163u, depth + 1u); else { c.pc = 0x00159070u; return; } if (c.pc != 0x002FCB8Cu) [[unlikely]] return; }
L_002FCB8C:
    set32(c.r[16], ld32((c.r[21].w[0] + 76u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCB9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002FCB9Cu) [[unlikely]] return; }
L_002FCB9C:
    set32(c.r[5], c.r[16].w[0] + 352u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCBACu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x002FCBACu) [[unlikely]] return; }
L_002FCBAC:
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[20].w[0] << 2);
    c.budget -= 2;
L_002FCBB4:
    set32(c.r[4], ld32((c.r[21].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCBC8u); set32(c.r[5], c.r[2].w[0] + 10000u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x002FCBC8u) [[unlikely]] return; }
L_002FCBC8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_002FCC78; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 200u), 0u);
    st32((c.r[29].w[0] + 196u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCBF8u); st32((c.r[29].w[0] + 192u), 0u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002FCBF8u) [[unlikely]] return; }
L_002FCBF8:
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[17], c.r[21].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    set32(c.r[2], c.r[20].w[0] << 6);
    c.f[0] = ld32((c.r[17].w[0] + 496u));
    set32(c.r[22], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[22].w[0] + 176u);
    set32(c.r[16], c.r[17].w[0] + 496u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCC28u); st32((c.r[29].w[0] + 196u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002FCC28u) [[unlikely]] return; }
L_002FCC28:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCC38u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x002FCC38u) [[unlikely]] return; }
L_002FCC38:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCC44u); set32(c.r[4], c.r[18].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002FCC44u) [[unlikely]] return; }
L_002FCC44:
    set32(c.r[3], ld32((c.r[18].w[0] + 308u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[18].w[0] + 308u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 516u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[16].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 516u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 516u), c.f[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 13;
L_002FCC78:
    c.r[2].d[0] = c.r[20].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[20].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FCBB4u | kUnwind; return; } goto L_002FCBB4; }
    set32(c.r[3], ld32((c.r[21].w[0] + 96u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_002FCD44; }
    set32(c.r[2], ld32((c.r[21].w[0] + 536u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < 76ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[21].w[0] + 536u), c.r[2].w[0]);  if (t) { goto L_002FCD40; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 540u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FCD40; } }
    set32(c.r[16], ld32((c.r[21].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002FCCCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FCD24; } }
L_002FCCCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCCD4u); set32(c.r[5], 0u + 71u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002FCCD4u) [[unlikely]] return; }
L_002FCCD4:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002FCCF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FCD04; } }
L_002FCCF4:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002FCD04:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002FCD24; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_002FCD1C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FCD1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FCD24; } }
L_002FCD24:
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002FCD40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCD38u); set32(c.r[4], ld32((c.r[21].w[0] + 76u)));  if (depth < kMaxDepth) unit_006D(c, 127u, depth + 1u); else { c.pc = 0x002D57D0u; return; } if (c.pc != 0x002FCD38u) [[unlikely]] return; }
L_002FCD38:
    set32(c.r[2], 0u + 1u);
    st32((c.r[21].w[0] + 540u), c.r[2].w[0]);
    c.budget -= 2;
L_002FCD40:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_002FCD44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCD4Cu);  if (depth < kMaxDepth) unit_0053(c, 77u, depth + 1u); else { c.pc = 0x0026CAC0u; return; } if (c.pc != 0x002FCD4Cu) [[unlikely]] return; }
L_002FCD4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002FCD80:
    set32(c.r[29], c.r[29].w[0] - 336u);
    set32(c.r[3], c.r[5].w[0] - 44u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002FE25C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 31504u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002FC000u < 16384u) { entry = entries_0077[(t - 0x002FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002FCDD0:
    set32(c.r[16], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002FCDE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002FCE40; } }
L_002FCDE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCDF0u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002FCDF0u) [[unlikely]] return; }
L_002FCDF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002FCE10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FCE20; } }
L_002FCE10:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002FCE20:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002FCE40; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_002FCE38; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FCE38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FCE40; } }
L_002FCE40:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[6], 0u + 10000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCE50u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x002FCE50u) [[unlikely]] return; }
L_002FCE50:
    set32(c.r[16], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002FCE68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002FCEC0; } }
L_002FCE68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCE70u); set32(c.r[5], 0u + 70u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002FCE70u) [[unlikely]] return; }
L_002FCE70:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002FCE90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FCEA0; } }
L_002FCE90:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002FCEA0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002FCEC0; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_002FCEB8; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FCEB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FCEC0; } }
L_002FCEC0:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[6].d[0] = 0ull | 50010ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCED0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x002FCED0u) [[unlikely]] return; }
L_002FCED0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002FCEF0; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCEECu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002FCEECu) [[unlikely]] return; }
L_002FCEEC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002FCEF0:
    set32(c.r[2], ld32((c.r[2].w[0] + 3028u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCEFCu); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002FCEFCu) [[unlikely]] return; }
L_002FCEFC:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_002FCF18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCF14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 219u, depth + 1u); else { c.pc = 0x002FE3B0u; return; } if (c.pc != 0x002FCF14u) [[unlikely]] return; }
L_002FCF14:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_002FCF18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCF20u); set32(c.r[5], 0u + 10700u);  if (depth < kMaxDepth) unit_0062(c, 61u, depth + 1u); else { c.pc = 0x002A8760u; return; } if (c.pc != 0x002FCF20u) [[unlikely]] return; }
L_002FCF20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_002FE260; } }
L_002FCF28:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCF34u); c.r[5].d[0] = 0ull | 50010ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002FCF34u) [[unlikely]] return; }
L_002FCF34:
    set32(c.r[16], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002FCF4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002FCFB0; } }
L_002FCF4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCF54u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002FCF54u) [[unlikely]] return; }
L_002FCF54:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002FCF74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FCF84; } }
L_002FCF74:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002FCF84:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002FCFB0; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002FCFA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002FCFA8; } }
L_002FCFA4:
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_002FCFA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FCFB0; } }
L_002FCFB0:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[6], 0u + 10010u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCFC0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x002FCFC0u) [[unlikely]] return; }
L_002FCFC0:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], 0u + 10010u);
    set32(c.r[6], 0u + 410u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCFD4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x002FCFD4u) [[unlikely]] return; }
L_002FCFD4:
    set32(c.r[16], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002FCFEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002FD044; } }
L_002FCFEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCFF4u); set32(c.r[5], 0u + 70u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002FCFF4u) [[unlikely]] return; }
L_002FCFF4:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002FD014; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FD024; } }
L_002FD014:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002FD024:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002FD044; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_002FD03C; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FD03C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FD044; } }
L_002FD044:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[6].d[0] = 0ull | 50010ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD054u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x002FD054u) [[unlikely]] return; }
L_002FD054:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FE25C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD070u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002FD070u) [[unlikely]] return; }
L_002FD070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FE25C; } }
L_002FD078:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD084u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002FD084u) [[unlikely]] return; }
L_002FD084:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD090u); set32(c.r[5], 0u + 10010u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002FD090u) [[unlikely]] return; }
L_002FD090:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD09Cu); c.r[5].d[0] = 0ull | 50010ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002FD09Cu) [[unlikely]] return; }
L_002FD09C:
    set32(c.r[16], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002FD0B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002FD118; } }
L_002FD0B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD0BCu); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002FD0BCu) [[unlikely]] return; }
L_002FD0BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002FD0DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FD0EC; } }
L_002FD0DC:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002FD0EC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002FD118; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002FD10C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002FD110; } }
L_002FD10C:
    set32(c.r[5], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_002FD110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FD118; } }
L_002FD118:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[6], 0u + 10020u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD128u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x002FD128u) [[unlikely]] return; }
L_002FD128:
    set32(c.r[16], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002FD140; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002FD198; } }
L_002FD140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD148u); set32(c.r[5], 0u + 70u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002FD148u) [[unlikely]] return; }
L_002FD148:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002FD168; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FD178; } }
L_002FD168:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002FD178:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002FD198; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_002FD190; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FD190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FD198; } }
L_002FD198:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[6].d[0] = 0ull | 50010ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD1A8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x002FD1A8u) [[unlikely]] return; }
L_002FD1A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_002FD1C8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD1C4u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002FD1C4u) [[unlikely]] return; }
L_002FD1C4:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_002FD1C8:
    set32(c.r[5], 0u + 22u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD1D4u); set32(c.r[6], 0u + 400u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x002FD1D4u) [[unlikely]] return; }
L_002FD1D4:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    set32(c.r[6], 0u + 420u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD1E8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x002FD1E8u) [[unlikely]] return; }
L_002FD1E8:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD1F4u); set32(c.r[5], 0u + 10700u);  if (depth < kMaxDepth) unit_0062(c, 61u, depth + 1u); else { c.pc = 0x002A8760u; return; } if (c.pc != 0x002FD1F4u) [[unlikely]] return; }
L_002FD1F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FE25C; } }
L_002FD1FC:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD208u); c.r[5].d[0] = 0ull | 50010ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002FD208u) [[unlikely]] return; }
L_002FD208:
    set32(c.r[16], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002FD220; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002FD284; } }
L_002FD220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD228u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002FD228u) [[unlikely]] return; }
L_002FD228:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002FD248; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FD258; } }
L_002FD248:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002FD258:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002FD284; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002FD278; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002FD27C; } }
L_002FD278:
    set32(c.r[5], c.r[2].w[0] + 36u);
    c.budget -= 1;
L_002FD27C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FD284; } }
L_002FD284:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[6], 0u + 10030u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD294u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x002FD294u) [[unlikely]] return; }
L_002FD294:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], 0u + 10030u);
    set32(c.r[6], 0u + 430u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD2A8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x002FD2A8u) [[unlikely]] return; }
L_002FD2A8:
    set32(c.r[16], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002FD2C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002FD318; } }
L_002FD2C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD2C8u); set32(c.r[5], 0u + 70u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002FD2C8u) [[unlikely]] return; }
L_002FD2C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002FD2E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FD2F8; } }
L_002FD2E8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002FD2F8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002FD318; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_002FD310; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FD310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FD318; } }
L_002FD318:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[6].d[0] = 0ull | 50010ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD328u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x002FD328u) [[unlikely]] return; }
L_002FD328:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FE25C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD344u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002FD344u) [[unlikely]] return; }
L_002FD344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FE25C; } }
L_002FD34C:
    st32((c.r[17].w[0] + 536u), 0u);
    st32((c.r[17].w[0] + 540u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD360u); set32(c.r[5], 0u + 10020u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002FD360u) [[unlikely]] return; }
L_002FD360:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD36Cu); set32(c.r[5], 0u + 10030u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002FD36Cu) [[unlikely]] return; }
L_002FD36C:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD378u); c.r[5].d[0] = 0ull | 50010ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002FD378u) [[unlikely]] return; }
L_002FD378:
    set32(c.r[16], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002FD390; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002FD3F4; } }
L_002FD390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD398u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002FD398u) [[unlikely]] return; }
L_002FD398:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002FD3B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FD3C8; } }
L_002FD3B8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002FD3C8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002FD3F4; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002FD3E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002FD3EC; } }
L_002FD3E8:
    set32(c.r[5], c.r[2].w[0] + 48u);
    c.budget -= 1;
L_002FD3EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FD3F4; } }
L_002FD3F4:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[6], 0u + 10040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD404u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x002FD404u) [[unlikely]] return; }
L_002FD404:
    set32(c.r[16], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002FD41C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002FD474; } }
L_002FD41C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD424u); set32(c.r[5], 0u + 70u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002FD424u) [[unlikely]] return; }
L_002FD424:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002FD444; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FD454; } }
L_002FD444:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002FD454:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002FD474; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_002FD46C; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FD46C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FD474; } }
L_002FD474:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[6].d[0] = 0ull | 50010ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD484u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x002FD484u) [[unlikely]] return; }
L_002FD484:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002FD4A4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD4A0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002FD4A0u) [[unlikely]] return; }
L_002FD4A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002FD4A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD4ACu); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0077(c, 210u, depth + 1u); else { c.pc = 0x002FE290u; return; } if (c.pc != 0x002FD4ACu) [[unlikely]] return; }
L_002FD4AC:
    c.f[13] = ld32((c.r[29].w[0] + 328u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD4B8u); c.f[12] = ld32((c.r[29].w[0] + 320u));  if (depth < kMaxDepth) unit_0019(c, 12u, depth + 1u); else { c.pc = 0x00184300u; return; } if (c.pc != 0x002FD4B8u) [[unlikely]] return; }
L_002FD4B8:
    set32(c.r[5], ld32((c.r[17].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[4], 0u + 5u);
    st32((c.r[5].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD4E8u); st32((c.r[5].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x002FD4E8u) [[unlikely]] return; }
L_002FD4E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[3].w[0] + 3024u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    set32(c.r[16], c.r[2].w[0] + 2916u);
    c.budget -= 5;
L_002FD4FC:
    set32(c.r[20], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_002FD514; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FD588; } }
L_002FD514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD51Cu); set32(c.r[5], 0u + 69u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002FD51Cu) [[unlikely]] return; }
L_002FD51C:
    set32(c.r[4], ld32((c.r[20].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002FD53C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FD54C; } }
L_002FD53C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002FD54C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002FD588; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.r[4].d[0] = c.r[19].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_002FD570; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FD580; } }
L_002FD570:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_002FD580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FD588; } }
L_002FD588:
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_002FD5A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FD608; } }
L_002FD5A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD5ACu); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002FD5ACu) [[unlikely]] return; }
L_002FD5AC:
    set32(c.r[4], ld32((c.r[20].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002FD5CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FD5DC; } }
L_002FD5CC:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002FD5DC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002FD608; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002FD5FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FD600; } }
L_002FD5FC:
    set32(c.r[2], c.r[2].w[0] + 72u);
    c.budget -= 1;
L_002FD600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FD608; } }
L_002FD608:
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 3u);
    st32((c.r[29].w[0] + 268u), 0u);
    st32((c.r[29].w[0] + 272u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 280u), c.r[3].w[0]);  if (t) { goto L_002FD6B0; } }
    c.budget -= 2;
    if (c.r[19].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  goto L_002FD688; }
    c.budget -= 2;
    if (c.r[19].d[0] == c.r[4].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  goto L_002FD660; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x42A20000u);  goto L_002FD648; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 336u);  if (t) { goto L_002FD6DC; } }
L_002FD648:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    st32((c.r[29].w[0] + 264u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    st32((c.r[29].w[0] + 268u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 276u), c.r[2].w[0]);  if (t) { goto L_002FD6D8; } }
L_002FD660:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD66Cu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002FD66Cu) [[unlikely]] return; }
L_002FD66C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42AA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.f[1] = c.r[3].w[0];
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 264u), c.f[0]);  if (t) { goto L_002FD6D8; } }
L_002FD688:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD694u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002FD694u) [[unlikely]] return; }
L_002FD694:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.f[1] = c.r[3].w[0];
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 264u), c.f[0]);  if (t) { goto L_002FD6D8; } }
L_002FD6B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD6C0u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002FD6C0u) [[unlikely]] return; }
L_002FD6C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.f[1] = c.r[3].w[0];
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 264u), c.f[0]);
    c.budget -= 6;
L_002FD6D8:
    set32(c.r[4], 0u + 336u);
    c.budget -= 1;
L_002FD6DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD6E4u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002FD6E4u) [[unlikely]] return; }
L_002FD6E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002FD794; } }
    set32(c.r[20], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_002FD704; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002FD768; } }
L_002FD704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD70Cu); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002FD70Cu) [[unlikely]] return; }
L_002FD70C:
    set32(c.r[4], ld32((c.r[20].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002FD72C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FD73C; } }
L_002FD72C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002FD73C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_002FD768; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002FD75C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002FD760; } }
L_002FD75C:
    set32(c.r[8], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_002FD760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FD768; } }
L_002FD768:
    mmi::divu(c, 0, c.r[19].w[0], c.r[18].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], c.r[19].w[0] + 20000u);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD790u); c.r[9].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 353u, depth + 1u); else { c.pc = 0x0030B590u; return; } if (c.pc != 0x002FD790u) [[unlikely]] return; }
L_002FD790:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002FD794:
    set32(c.r[2], c.r[19].w[0] << 2);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 256u);
    st32((c.r[2].w[0] + 136u), c.r[21].w[0]);
    set32(c.r[20], c.r[2].w[0] + 136u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD7B4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_007A(c, 366u, depth + 1u); else { c.pc = 0x0030B7E0u; return; } if (c.pc != 0x002FD7B4u) [[unlikely]] return; }
L_002FD7B4:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[5].d[0] = 0ull | 50000ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    set32(c.r[3], 0u + 19u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[4].w[0] + 280u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0])));
    st32((c.r[2].w[0] + 288u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 296u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD7E0u); set32(c.r[4], ld32((c.r[20].w[0])));  if (depth < kMaxDepth) unit_007B(c, 20u, depth + 1u); else { c.pc = 0x0030C1A0u; return; } if (c.pc != 0x002FD7E0u) [[unlikely]] return; }
L_002FD7E0:
    set32(c.r[5], ld32((c.r[20].w[0])));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[4], 0u + 11u);
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[5].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[5].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 292u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD4FCu | kUnwind; return; } goto L_002FD4FC; } }
    set32(c.r[19], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002FD830; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FD894; } }
L_002FD830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD838u); set32(c.r[5], 0u + 69u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002FD838u) [[unlikely]] return; }
L_002FD838:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002FD858; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FD868; } }
L_002FD858:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002FD868:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002FD894; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_002FD888; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FD88C; } }
L_002FD888:
    set32(c.r[2], c.r[2].w[0] + 160u);
    c.budget -= 1;
L_002FD88C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FD894; } }
L_002FD894:
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002FD8B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FD914; } }
L_002FD8B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD8B8u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002FD8B8u) [[unlikely]] return; }
L_002FD8B8:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002FD8D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FD8E8; } }
L_002FD8D8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002FD8E8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002FD914; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002FD908; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FD90C; } }
L_002FD908:
    set32(c.r[2], c.r[2].w[0] + 60u);
    c.budget -= 1;
L_002FD90C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FD914; } }
L_002FD914:
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    set32(c.r[4], 0u + 336u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x424C0000u);
    st32((c.r[29].w[0] + 268u), 0u);
    st32((c.r[29].w[0] + 264u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD944u); st32((c.r[29].w[0] + 280u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002FD944u) [[unlikely]] return; }
L_002FD944:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002FD9FC; } }
    set32(c.r[19], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], ld32((c.r[17].w[0] + 76u)));  if (t) { goto L_002FD964; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002FD9CC; } }
L_002FD964:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD970u); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002FD970u) [[unlikely]] return; }
L_002FD970:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002FD990; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FD9A0; } }
L_002FD990:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002FD9A0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_002FD9CC; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002FD9C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002FD9C4; } }
L_002FD9C0:
    set32(c.r[8], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_002FD9C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FD9CC; } }
L_002FD9CC:
    set32(c.r[9], 0u + 4u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    mmi::divu(c, 0, c.r[9].w[0], c.r[18].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD9F8u); set32(c.r[7], 0u + 20004u);  if (depth < kMaxDepth) unit_007A(c, 353u, depth + 1u); else { c.pc = 0x0030B590u; return; } if (c.pc != 0x002FD9F8u) [[unlikely]] return; }
L_002FD9F8:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002FD9FC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 256u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDA10u); st32((c.r[17].w[0] + 152u), c.r[21].w[0]);  if (depth < kMaxDepth) unit_007A(c, 366u, depth + 1u); else { c.pc = 0x0030B7E0u; return; } if (c.pc != 0x002FDA10u) [[unlikely]] return; }
L_002FDA10:
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    c.r[4].d[0] = 0ull | 50000ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[3].w[0] + 280u), c.r[4].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDA2Cu); set32(c.r[4], ld32((c.r[17].w[0] + 152u)));  if (depth < kMaxDepth) unit_007B(c, 20u, depth + 1u); else { c.pc = 0x0030C1A0u; return; } if (c.pc != 0x002FDA2Cu) [[unlikely]] return; }
L_002FDA2C:
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[3].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[3].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 12;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002FDA64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FDAC8; } }
L_002FDA64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDA6Cu); set32(c.r[5], 0u + 69u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002FDA6Cu) [[unlikely]] return; }
L_002FDA6C:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002FDA8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FDA9C; } }
L_002FDA8C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002FDA9C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002FDAC8; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_002FDABC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FDAC0; } }
L_002FDABC:
    set32(c.r[2], c.r[2].w[0] + 200u);
    c.budget -= 1;
L_002FDAC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FDAC8; } }
L_002FDAC8:
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002FDAE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FDB48; } }
L_002FDAE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDAECu); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002FDAECu) [[unlikely]] return; }
L_002FDAEC:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002FDB0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FDB1C; } }
L_002FDB0C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002FDB1C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002FDB48; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002FDB3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FDB40; } }
L_002FDB3C:
    set32(c.r[2], c.r[2].w[0] + 72u);
    c.budget -= 1;
L_002FDB40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FDB48; } }
L_002FDB48:
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDB5Cu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002FDB5Cu) [[unlikely]] return; }
L_002FDB5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D40000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 276u), c.r[3].w[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[4], 0u + 336u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 268u), 0u);
    st32((c.r[29].w[0] + 280u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDB90u); st32((c.r[29].w[0] + 264u), c.f[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002FDB90u) [[unlikely]] return; }
L_002FDB90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002FDC48; } }
    set32(c.r[19], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], ld32((c.r[17].w[0] + 76u)));  if (t) { goto L_002FDBB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002FDC18; } }
L_002FDBB0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDBBCu); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002FDBBCu) [[unlikely]] return; }
L_002FDBBC:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002FDBDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FDBEC; } }
L_002FDBDC:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002FDBEC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_002FDC18; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002FDC0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002FDC10; } }
L_002FDC0C:
    set32(c.r[8], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_002FDC10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FDC18; } }
L_002FDC18:
    set32(c.r[9], 0u + 4u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    mmi::divu(c, 0, c.r[9].w[0], c.r[18].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDC44u); set32(c.r[7], 0u + 20004u);  if (depth < kMaxDepth) unit_007A(c, 353u, depth + 1u); else { c.pc = 0x0030B590u; return; } if (c.pc != 0x002FDC44u) [[unlikely]] return; }
L_002FDC44:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002FDC48:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 256u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDC5Cu); st32((c.r[17].w[0] + 156u), c.r[21].w[0]);  if (depth < kMaxDepth) unit_007A(c, 366u, depth + 1u); else { c.pc = 0x0030B7E0u; return; } if (c.pc != 0x002FDC5Cu) [[unlikely]] return; }
L_002FDC5C:
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.r[5].d[0] = 0ull | 50000ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    set32(c.r[3], 0u + 19u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[4].w[0] + 280u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    st32((c.r[2].w[0] + 288u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 296u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDC88u); set32(c.r[4], ld32((c.r[17].w[0] + 156u)));  if (depth < kMaxDepth) unit_007B(c, 20u, depth + 1u); else { c.pc = 0x0030C1A0u; return; } if (c.pc != 0x002FDC88u) [[unlikely]] return; }
L_002FDC88:
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[3], 0u + 14u);
    set32(c.r[5], 0u + 22u);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    st32((c.r[2].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDCC4u); set32(c.r[6], 0u + 400u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x002FDCC4u) [[unlikely]] return; }
L_002FDCC4:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDCD4u); set32(c.r[6], 0u + 420u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x002FDCD4u) [[unlikely]] return; }
L_002FDCD4:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    set32(c.r[6], 0u + 440u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDCE8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x002FDCE8u) [[unlikely]] return; }
L_002FDCE8:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDCF4u); set32(c.r[5], 0u + 10700u);  if (depth < kMaxDepth) unit_0062(c, 61u, depth + 1u); else { c.pc = 0x002A8760u; return; } if (c.pc != 0x002FDCF4u) [[unlikely]] return; }
L_002FDCF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FE25C; } }
L_002FDCFC:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDD08u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002FDD08u) [[unlikely]] return; }
L_002FDD08:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDD14u); set32(c.r[5], 0u + 10010u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002FDD14u) [[unlikely]] return; }
L_002FDD14:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDD20u); set32(c.r[5], 0u + 10020u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002FDD20u) [[unlikely]] return; }
L_002FDD20:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDD2Cu); set32(c.r[5], 0u + 10030u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002FDD2Cu) [[unlikely]] return; }
L_002FDD2C:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDD38u); c.r[5].d[0] = 0ull | 50010ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002FDD38u) [[unlikely]] return; }
L_002FDD38:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDD44u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0077(c, 210u, depth + 1u); else { c.pc = 0x002FE290u; return; } if (c.pc != 0x002FDD44u) [[unlikely]] return; }
L_002FDD44:
    c.f[1] = ld32((c.r[29].w[0] + 240u));
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    c.f[12] = c.f[1] ^ fp::kSign;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDD58u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0019(c, 12u, depth + 1u); else { c.pc = 0x00184300u; return; } if (c.pc != 0x002FDD58u) [[unlikely]] return; }
L_002FDD58:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    st32((c.r[4].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[20], c.r[2].w[0] + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDD90u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x002FDD90u) [[unlikely]] return; }
L_002FDD90:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[21], ld32((c.r[3].w[0] + 3024u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[2].w[0] + 2916u);  if (t) { goto L_002FE120; } }
L_002FDDA8:
    set32(c.r[2], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002FDDBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FDE30; } }
L_002FDDBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDDC4u); set32(c.r[5], 0u + 69u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002FDDC4u) [[unlikely]] return; }
L_002FDDC4:
    set32(c.r[4], ld32((c.r[18].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002FDDE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FDDF4; } }
L_002FDDE4:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002FDDF4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002FDE30; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_002FDE18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FDE28; } }
L_002FDE18:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_002FDE28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FDE30; } }
L_002FDE30:
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002FDE4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FDEB0; } }
L_002FDE4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDE54u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002FDE54u) [[unlikely]] return; }
L_002FDE54:
    set32(c.r[4], ld32((c.r[18].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002FDE74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FDE84; } }
L_002FDE74:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002FDE84:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002FDEB0; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002FDEA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FDEA8; } }
L_002FDEA4:
    set32(c.r[2], c.r[2].w[0] + 60u);
    c.budget -= 1;
L_002FDEA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FDEB0; } }
L_002FDEB0:
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    st32((c.r[29].w[0] + 224u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 232u), c.r[3].w[0]);  if (t) { goto L_002FDF4C; } }
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  goto L_002FDF28; }
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[4].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  goto L_002FDF04; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x40E00000u);  goto L_002FDEF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 336u);  if (t) { goto L_002FDF74; } }
L_002FDEF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    st32((c.r[29].w[0] + 220u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 216u), c.r[2].w[0]);  if (t) { goto L_002FDF70; } }
L_002FDF04:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDF10u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002FDF10u) [[unlikely]] return; }
L_002FDF10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 216u), c.f[0]);  if (t) { goto L_002FDF70; } }
L_002FDF28:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDF34u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002FDF34u) [[unlikely]] return; }
L_002FDF34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 216u), c.f[0]);  if (t) { goto L_002FDF70; } }
L_002FDF4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDF5Cu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002FDF5Cu) [[unlikely]] return; }
L_002FDF5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.budget -= 5;
L_002FDF70:
    set32(c.r[4], 0u + 336u);
    c.budget -= 1;
L_002FDF74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDF7Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002FDF7Cu) [[unlikely]] return; }
L_002FDF7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002FE020; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002FDF9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002FDFF4; } }
L_002FDF9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDFA4u); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002FDFA4u) [[unlikely]] return; }
L_002FDFA4:
    set32(c.r[4], ld32((c.r[18].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002FDFC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FDFD4; } }
L_002FDFC4:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002FDFD4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_002FDFF4; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[8], ld32((c.r[3].w[0] + 4u)));  goto L_002FDFEC; }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FDFEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FDFF4; } }
L_002FDFF4:
    mmi::divu(c, 0, c.r[16].w[0], c.r[21].w[0]);
    set32(c.r[9], ld32((c.r[17].w[0] + 96u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE01Cu); set32(c.r[7], c.r[16].w[0] + 20000u);  if (depth < kMaxDepth) unit_007A(c, 353u, depth + 1u); else { c.pc = 0x0030B590u; return; } if (c.pc != 0x002FE01Cu) [[unlikely]] return; }
L_002FE01C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002FE020:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 208u);
    st32((c.r[2].w[0] + 136u), c.r[19].w[0]);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE040u); set32(c.r[19], c.r[2].w[0] + 136u);  if (depth < kMaxDepth) unit_007A(c, 366u, depth + 1u); else { c.pc = 0x0030B7E0u; return; } if (c.pc != 0x002FE040u) [[unlikely]] return; }
L_002FE040:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[4].d[0] = 0ull | 50000ull;
    set32(c.r[2], c.r[16].w[0] + 15u);
    st32((c.r[3].w[0] + 280u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    st32((c.r[3].w[0] + 288u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 296u), 0u);
    set32(c.r[18], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002FE074; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002FE0D8; } }
L_002FE074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE07Cu); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002FE07Cu) [[unlikely]] return; }
L_002FE07C:
    set32(c.r[4], ld32((c.r[18].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002FE09C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FE0AC; } }
L_002FE09C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002FE0AC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002FE0D8; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002FE0CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002FE0D0; } }
L_002FE0CC:
    set32(c.r[4], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_002FE0D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FE0D8; } }
L_002FE0D8:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[3].w[0] + 284u), c.r[4].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE0F0u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_007B(c, 20u, depth + 1u); else { c.pc = 0x0030C1A0u; return; } if (c.pc != 0x002FE0F0u) [[unlikely]] return; }
L_002FE0F0:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[3], 0u + 11u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[2].w[0] + 292u), c.r[3].w[0]);
    c.budget -= 12;
L_002FE120:
    c.r[2].d[0] = c.r[16].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 76u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FDDA8u | kUnwind; return; } goto L_002FDDA8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE13Cu); set32(c.r[6], 0u + 400u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x002FE13Cu) [[unlikely]] return; }
L_002FE13C:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE14Cu); set32(c.r[6], 0u + 420u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x002FE14Cu) [[unlikely]] return; }
L_002FE14C:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    set32(c.r[6], 0u + 450u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE160u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x002FE160u) [[unlikely]] return; }
L_002FE160:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 3424u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_002FE174; }
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_002FE174:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE180u); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x002FE180u) [[unlikely]] return; }
L_002FE180:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002FE250; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_002FE254; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE198u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002FE198u) [[unlikely]] return; }
L_002FE198:
    c.f[1] = ld32((c.r[18].w[0] + 736u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 128u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 740u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 744u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 748u));
    st32((c.r[29].w[0] + 140u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    st32((c.r[3].w[0] + 192u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[3].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[3].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    st32((c.r[3].w[0] + 204u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[3].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    st32((c.r[3].w[0] + 240u), 0u);
    st32((c.r[3].w[0] + 244u), 0u);
    st32((c.r[3].w[0] + 248u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE224u); st32((c.r[3].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001C(c, 2u, depth + 1u); else { c.pc = 0x00190050u; return; } if (c.pc != 0x002FE224u) [[unlikely]] return; }
L_002FE224:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE234u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x002FE234u) [[unlikely]] return; }
L_002FE234:
    set32(c.r[4], c.r[16].w[0] + 352u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE244u); st32((c.r[16].w[0] + 416u), 0u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002FE244u) [[unlikely]] return; }
L_002FE244:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    c.budget -= 3;
L_002FE250:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_002FE254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE25Cu); set32(c.r[5], 0u + 10700u);  if (depth < kMaxDepth) unit_0062(c, 61u, depth + 1u); else { c.pc = 0x002A8760u; return; } if (c.pc != 0x002FE25Cu) [[unlikely]] return; }
L_002FE25C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_002FE260:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_002FE290:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 3028u)));
    set32(c.r[17], ld32((c.r[18].w[0] + 1320u)));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FE374; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE2C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002FE2C0u) [[unlikely]] return; }
L_002FE2C0:
    c.f[0] = ld32((c.r[17].w[0] + 688u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 692u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 696u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 700u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE2E8u); st32((c.r[29].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002FE2E8u) [[unlikely]] return; }
L_002FE2E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE2F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002FE2F0u) [[unlikely]] return; }
L_002FE2F0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 704u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE300u); set32(c.r[6], c.r[17].w[0] + 688u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002FE300u) [[unlikely]] return; }
L_002FE300:
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[29].w[0] + 128u), c.f[2]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE328u); st32((c.r[29].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002FE328u) [[unlikely]] return; }
L_002FE328:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[18].w[0] + 736u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE338u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0017(c, 183u, depth + 1u); else { c.pc = 0x0017DE50u; return; } if (c.pc != 0x002FE338u) [[unlikely]] return; }
L_002FE338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE340u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002FE340u) [[unlikely]] return; }
L_002FE340:
    set32(c.r[6], c.r[18].w[0] + 736u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE350u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002FE350u) [[unlikely]] return; }
L_002FE350:
    c.f[3] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[3]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[1]);  if (t) { goto L_002FE38C; } }
L_002FE374:
    st32((c.r[16].w[0]), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 6;
L_002FE38C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002FE3B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 3024u)));
    set32(c.r[3], c.r[4].w[0] + 112u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + 2916u);  if (t) { goto L_002FE440; } }
L_002FE3E0:
    set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE3F0u); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002FE3F0u) [[unlikely]] return; }
L_002FE3F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_002FE440; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002FE43C; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.f[1] = ld32((c.r[4].w[0] + 196u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 196u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[5].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 14;
L_002FE43C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002FE440:
    c.r[3].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE3E0u | kUnwind; return; } goto L_002FE3E0; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002FE470:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FE480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE494u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 143u, depth + 1u); else { c.pc = 0x0026D670u; return; } if (c.pc != 0x002FE494u) [[unlikely]] return; }
L_002FE494:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 31168u);
    set32(c.r[3], c.r[3].w[0] - 31112u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FE4C0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    set32(c.r[3], 0u + 53u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002FE61C; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[9].w[0] + 19840u);
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[4], 0u + 11u);
    set32(c.r[3], c.r[5].w[0] + 112u);
    set32(c.r[5], ld32((c.r[5].w[0] + 3024u)));
    set32(c.r[6], c.r[3].w[0] + 2916u);
    c.budget -= 9;
L_002FE4F4:
    ld128((c.r[9].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[7].w[0]) & ~15u, c.r[3]);
    set32(c.r[9], c.r[9].w[0] + 16u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE4F4u | kUnwind; return; } goto L_002FE4F4; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[7], c.r[29].w[0]);
    set32(c.r[9], c.r[9].w[0] + 20016u);
    set32(c.r[4], 0u + 11u);
    c.budget -= 4;
L_002FE520:
    set32(c.r[3], ld32((c.r[9].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[9], c.r[9].w[0] + 4u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE520u | kUnwind; return; } goto L_002FE520; } }
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 2u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[3].d[0] = 0ull | 50005ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 5u);  if (t) { goto L_002FE610; } }
L_002FE554:
    set32(c.r[14], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[13], ld32((c.r[14].w[0])));
    set32(c.r[9], ld32((c.r[13].w[0] + 148u)));
    c.budget -= 5;
    if (c.r[9].d[0] == c.r[4].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002FE610; }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[3].d[0];  if (t) { goto L_002FE60C; } }
    set32(c.r[11], c.r[8].w[0] << 4);
    set32(c.r[9], c.r[8].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + c.r[29].w[0]);
    set32(c.r[9], c.r[9].w[0] + c.r[29].w[0]);
    set32(c.r[11], c.r[11].w[0] + 48u);
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.f[2] = ld32((c.r[11].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.f[1] = ld32((c.r[11].w[0] + 4u));
    c.f[0] = ld32((c.r[11].w[0] + 8u));
    st32((c.r[13].w[0] + 192u), c.f[2]);
    st32((c.r[13].w[0] + 196u), c.f[1]);
    st32((c.r[13].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] + 12u));
    st32((c.r[13].w[0] + 204u), c.f[0]);
    set32(c.r[11], ld32((c.r[13].w[0] + 164u)));
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st32((c.r[13].w[0] + 164u), c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[13].w[0] + 176u)));
    c.r[11].d[0] = c.r[11].d[0] | 64ull;
    st32((c.r[13].w[0] + 176u), c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[14].w[0])));
    st32((c.r[11].w[0] + 240u), 0u);
    st32((c.r[11].w[0] + 244u), c.r[9].w[0]);
    st32((c.r[11].w[0] + 248u), 0u);
    set32(c.r[9], ld32((c.r[11].w[0] + 164u)));
    c.r[9].d[0] = c.r[9].d[0] | c.r[12].d[0];
    st32((c.r[11].w[0] + 164u), c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[11].w[0] + 176u)));
    c.r[9].d[0] = c.r[9].d[0] | 64ull;
    c.budget -= 32;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; st32((c.r[11].w[0] + 176u), c.r[9].w[0]);  if (t) { goto L_002FE5FC; } }
    c.budget -= 2;
    if (c.r[8].d[0] != c.r[10].d[0]) { c.r[1].d[0] = c.r[8].sd[0] < 11ll ? 1ull : 0ull;  goto L_002FE600; }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_002FE5FC:
    c.r[1].d[0] = c.r[8].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 1;
L_002FE600:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002FE60C; } }
    c.r[8].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 1;
L_002FE60C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_002FE610:
    c.r[9].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[9].d[0] != 0ull) { set32(c.r[9], c.r[7].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE554u | kUnwind; return; } goto L_002FE554; }
L_002FE61C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_002FE630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE644u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 143u, depth + 1u); else { c.pc = 0x0026D670u; return; } if (c.pc != 0x002FE644u) [[unlikely]] return; }
L_002FE644:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 31312u);
    set32(c.r[2], c.r[2].w[0] - 31256u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 31552u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FE680:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FE71C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 31312u);
    set32(c.r[2], c.r[2].w[0] - 31256u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002FE704; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21632u);
    set32(c.r[2], c.r[2].w[0] + 21688u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002FE704; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE6F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002FE6F8u) [[unlikely]] return; }
L_002FE6F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE704u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002FE704u) [[unlikely]] return; }
L_002FE704:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002FE720; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE71Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002FE71Cu) [[unlikely]] return; }
L_002FE71C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002FE720:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FE740:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FE7DC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 31168u);
    set32(c.r[2], c.r[2].w[0] - 31112u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002FE7C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21632u);
    set32(c.r[2], c.r[2].w[0] + 21688u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002FE7C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE7B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002FE7B8u) [[unlikely]] return; }
L_002FE7B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE7C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002FE7C4u) [[unlikely]] return; }
L_002FE7C4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002FE7E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE7DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002FE7DCu) [[unlikely]] return; }
L_002FE7DC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002FE7E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FE800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FE89C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 31024u);
    set32(c.r[2], c.r[2].w[0] - 30968u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002FE884; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21536u);
    set32(c.r[2], c.r[2].w[0] + 21592u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002FE884; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE878u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002FE878u) [[unlikely]] return; }
L_002FE878:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE884u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002FE884u) [[unlikely]] return; }
L_002FE884:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002FE8A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE89Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002FE89Cu) [[unlikely]] return; }
L_002FE89C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002FE8A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FE8C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FE95C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 30928u);
    set32(c.r[2], c.r[2].w[0] - 30872u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002FE944; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21872u);
    set32(c.r[2], c.r[2].w[0] + 21928u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002FE944; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE938u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002FE938u) [[unlikely]] return; }
L_002FE938:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE944u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002FE944u) [[unlikely]] return; }
L_002FE944:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002FE960; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE95Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002FE95Cu) [[unlikely]] return; }
L_002FE95C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002FE960:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FE980:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FEA0C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 30832u);
    set32(c.r[2], c.r[2].w[0] - 30776u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002FE9F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE9DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002FE9DCu) [[unlikely]] return; }
L_002FE9DC:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE9E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002FE9E8u) [[unlikely]] return; }
L_002FE9E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE9F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002FE9F4u) [[unlikely]] return; }
L_002FE9F4:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002FEA10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEA0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002FEA0Cu) [[unlikely]] return; }
L_002FEA0C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002FEA10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FEA30:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE980u | kUnwind; return; } goto L_002FE980; }
L_002FEA40:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE8C0u | kUnwind; return; } goto L_002FE8C0; }
L_002FEA50:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE800u | kUnwind; return; } goto L_002FE800; }
L_002FEA60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FCD80u | kUnwind; return; } goto L_002FCD80; }
L_002FEA70:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE740u | kUnwind; return; } goto L_002FE740; }
L_002FEA80:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE4C0u | kUnwind; return; } goto L_002FE4C0; }
L_002FEA90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE680u | kUnwind; return; } goto L_002FE680; }
L_002FEAA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEAD0u); set32(c.r[4], 0u + 1440u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002FEAD0u) [[unlikely]] return; }
L_002FEAD0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002FEAF4; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEAF0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 262u, depth + 1u); else { c.pc = 0x002FEB10u; return; } if (c.pc != 0x002FEAF0u) [[unlikely]] return; }
L_002FEAF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002FEAF4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002FEB10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEB24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x002FEB24u) [[unlikely]] return; }
L_002FEB24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 30496u);
    set32(c.r[2], c.r[2].w[0] - 30440u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1424u), 0u);
    st32((c.r[16].w[0] + 1428u), 0u);
    st32((c.r[16].w[0] + 1432u), 0u);
    st32((c.r[16].w[0] + 1436u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 584u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 14;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002FEB70; }
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 8u)));  goto L_002FEB70; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FEB70:
    st32((c.r[16].w[0] + 1424u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 584u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002FEB98; }
    set32(c.r[2], ld32((c.r[2].w[0] + 68u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002FEB98; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FEB98:
    st32((c.r[16].w[0] + 1428u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEBA4u); set32(c.r[4], 0u + 352u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002FEBA4u) [[unlikely]] return; }
L_002FEBA4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 1432u), c.r[2].w[0]);  goto L_002FEBC0; }
    set32(c.r[5], ld32((c.r[16].w[0] + 1424u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 1428u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEBBCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 107u, depth + 1u); else { c.pc = 0x001589C0u; return; } if (c.pc != 0x002FEBBCu) [[unlikely]] return; }
L_002FEBBC:
    st32((c.r[16].w[0] + 1432u), c.r[2].w[0]);
    c.budget -= 1;
L_002FEBC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEBC8u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002FEBC8u) [[unlikely]] return; }
L_002FEBC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 1436u), c.r[2].w[0]);  goto L_002FEBDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEBD8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 402u, depth + 1u); else { c.pc = 0x0015B500u; return; } if (c.pc != 0x002FEBD8u) [[unlikely]] return; }
L_002FEBD8:
    st32((c.r[16].w[0] + 1436u), c.r[2].w[0]);
    c.budget -= 1;
L_002FEBDC:
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 20064u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 20068u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] + 20072u));
    st32((c.r[29].w[0] + 52u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 20076u));
    st32((c.r[29].w[0] + 56u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] + 20080u));
    st32((c.r[29].w[0] + 60u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 20084u));
    st32((c.r[29].w[0] + 32u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] + 20088u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 20092u));
    st32((c.r[29].w[0] + 40u), c.f[1]);
    st32((c.r[29].w[0] + 44u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1436u)));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEC4Cu); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 428u, depth + 1u); else { c.pc = 0x0015B7F0u; return; } if (c.pc != 0x002FEC4Cu) [[unlikely]] return; }
L_002FEC4C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FEC60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEC74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 85u, depth + 1u); else { c.pc = 0x0027CCC0u; return; } if (c.pc != 0x002FEC74u) [[unlikely]] return; }
L_002FEC74:
    st32((c.r[16].w[0] + 1424u), 0u);
    st32((c.r[16].w[0] + 1428u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1436u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1432u)));  goto L_002FECA0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEC98u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FEC98u) [[unlikely]] return; }
L_002FEC98:
    st32((c.r[16].w[0] + 1436u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1432u)));
    c.budget -= 2;
L_002FECA0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002FECC0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FECB8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FECB8u) [[unlikely]] return; }
L_002FECB8:
    st32((c.r[16].w[0] + 1432u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_002FECC0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FECD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 7u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002FED08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FED3C; } }
L_002FED08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FED10u); set32(c.r[4], 0u + 100u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002FED10u) [[unlikely]] return; }
L_002FED10:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002FED40; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FED30u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 308u, depth + 1u); else { c.pc = 0x002FF000u; return; } if (c.pc != 0x002FED30u) [[unlikely]] return; }
L_002FED30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FED3C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FED3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002FED40:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002FED60:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FED90u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0057(c, 181u, depth + 1u); else { c.pc = 0x0027DC70u; return; } if (c.pc != 0x002FED90u) [[unlikely]] return; }
L_002FED90:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_002FEFD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEDACu);  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x002FEDACu) [[unlikely]] return; }
L_002FEDAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEDB4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x002FEDB4u) [[unlikely]] return; }
L_002FEDB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEDBCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x002FEDBCu) [[unlikely]] return; }
L_002FEDBC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEDC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00161BB0u; return; } if (c.pc != 0x002FEDC8u) [[unlikely]] return; }
L_002FEDC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEDD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002FEDD0u) [[unlikely]] return; }
L_002FEDD0:
    set32(c.r[4], ld32((c.r[17].w[0] + 352u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEDE0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x002FEDE0u) [[unlikely]] return; }
L_002FEDE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[20] = ld32((c.r[3].w[0] + 20096u));
    c.f[21] = ld32((c.r[2].w[0] + 20100u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[22] = ld32((c.r[3].w[0] + 20104u));
    c.f[23] = ld32((c.r[2].w[0] + 20108u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEE08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002FEE08u) [[unlikely]] return; }
L_002FEE08:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[2].w[0]), c.f[20]);
    st32((c.r[2].w[0] + 4u), c.f[21]);
    st32((c.r[2].w[0] + 8u), c.f[22]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEE24u); st32((c.r[2].w[0] + 12u), c.f[23]);  if (depth < kMaxDepth) unit_0010(c, 215u, depth + 1u); else { c.pc = 0x00161D70u; return; } if (c.pc != 0x002FEE24u) [[unlikely]] return; }
L_002FEE24:
    set32(c.r[16], ld32((c.r[18].w[0] + 1436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEE30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 171u, depth + 1u); else { c.pc = 0x00161880u; return; } if (c.pc != 0x002FEE30u) [[unlikely]] return; }
L_002FEE30:
    set32(c.r[4], ld32((c.r[17].w[0] + 448u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEE40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 474u, depth + 1u); else { c.pc = 0x0015BFE0u; return; } if (c.pc != 0x002FEE40u) [[unlikely]] return; }
L_002FEE40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEE48u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 9u, depth + 1u); else { c.pc = 0x002D0120u; return; } if (c.pc != 0x002FEE48u) [[unlikely]] return; }
L_002FEE48:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEE54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002FEE54u) [[unlikely]] return; }
L_002FEE54:
    set32(c.r[3], ld32((c.r[17].w[0] + 352u)));
    set32(c.r[2], 0u + 4u);
    st32((c.r[3].w[0] + 68u), c.f[20]);
    set32(c.r[3], ld32((c.r[18].w[0] + 1180u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 1180u)));  goto L_002FEE84; }
    set32(c.r[5], ld32((c.r[18].w[0] + 476u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEE78u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x002FEE78u) [[unlikely]] return; }
L_002FEE78:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  goto L_002FEEB0; }
    set32(c.r[3], ld32((c.r[18].w[0] + 1180u)));
    c.budget -= 1;
L_002FEE84:
    set32(c.r[16], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_002FEEAC; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FEEAC; } }
    set32(c.r[2], c.r[3].w[0] - 9u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 5u);  goto L_002FEF04; }
L_002FEEAC:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_002FEEB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEEB8u);  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x002FEEB8u) [[unlikely]] return; }
L_002FEEB8:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 1168u)));
    c.budget -= 2;
L_002FEEC0:
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEED0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 15u, depth + 1u); else { c.pc = 0x002043F0u; return; } if (c.pc != 0x002FEED0u) [[unlikely]] return; }
L_002FEED0:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEEDCu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0010(c, 150u, depth + 1u); else { c.pc = 0x001615B0u; return; } if (c.pc != 0x002FEEDCu) [[unlikely]] return; }
L_002FEEDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEEE4u); set32(c.r[4], ld32((c.r[18].w[0] + 1432u)));  if (depth < kMaxDepth) unit_000E(c, 213u, depth + 1u); else { c.pc = 0x00159910u; return; } if (c.pc != 0x002FEEE4u) [[unlikely]] return; }
L_002FEEE4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 1168u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEEC0u | kUnwind; return; } goto L_002FEEC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEEFCu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x002FEEFCu) [[unlikely]] return; }
L_002FEEFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002FEF9C; } }
L_002FEF04:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FEF98; } }
    c.f[1] = ld32((c.r[18].w[0] + 496u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);  goto L_002FEF30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (t) { goto L_002FEF4C; } }
L_002FEF30:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[16].d[0] = 0ull + 0ull;  goto L_002FEF48; }
    set32(c.r[16], 0u + 3u);
    c.budget -= 1;
L_002FEF48:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_002FEF4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEF54u);  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x002FEF54u) [[unlikely]] return; }
L_002FEF54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002FEF84; } }
L_002FEF5C:
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEF6Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 15u, depth + 1u); else { c.pc = 0x002043F0u; return; } if (c.pc != 0x002FEF6Cu) [[unlikely]] return; }
L_002FEF6C:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEF78u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0010(c, 150u, depth + 1u); else { c.pc = 0x001615B0u; return; } if (c.pc != 0x002FEF78u) [[unlikely]] return; }
L_002FEF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEF80u); set32(c.r[4], ld32((c.r[18].w[0] + 1432u)));  if (depth < kMaxDepth) unit_000E(c, 213u, depth + 1u); else { c.pc = 0x00159910u; return; } if (c.pc != 0x002FEF80u) [[unlikely]] return; }
L_002FEF80:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002FEF84:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 1168u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF5Cu | kUnwind; return; } goto L_002FEF5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEF98u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x002FEF98u) [[unlikely]] return; }
L_002FEF98:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002FEF9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEFA4u);  if (depth < kMaxDepth) unit_0010(c, 221u, depth + 1u); else { c.pc = 0x00161E10u; return; } if (c.pc != 0x002FEFA4u) [[unlikely]] return; }
L_002FEFA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEFACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002FEFACu) [[unlikely]] return; }
L_002FEFAC:
    set32(c.r[4], ld32((c.r[17].w[0] + 352u)));
    set32(c.r[5], 0u - 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEFBCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x002FEFBCu) [[unlikely]] return; }
L_002FEFBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEFC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 207u, depth + 1u); else { c.pc = 0x00161C50u; return; } if (c.pc != 0x002FEFC4u) [[unlikely]] return; }
L_002FEFC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEFCCu);  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x002FEFCCu) [[unlikely]] return; }
L_002FEFCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002FEFD0:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_002FF000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF014u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 284u, depth + 1u); else { c.pc = 0x00276A70u; return; } if (c.pc != 0x002FF014u) [[unlikely]] return; }
L_002FF014:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 30592u);
    set32(c.r[3], c.r[3].w[0] - 30536u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FF040:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 43u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002FF074; } }
    set32(c.r[3], 0u + 42u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[4].w[0] + 72u)));  goto L_002FF064; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002FF0A0; } }
L_002FF064:
    set32(c.r[3], 0u - 17u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_002FF09C; } }
L_002FF074:
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[4].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF09Cu); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FF09Cu) [[unlikely]] return; }
L_002FF09C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002FF0A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002FF0B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FF14C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 30592u);
    set32(c.r[2], c.r[2].w[0] - 30536u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002FF134; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22928u);
    set32(c.r[2], c.r[2].w[0] + 22984u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002FF134; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF128u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002FF128u) [[unlikely]] return; }
L_002FF128:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF134u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002FF134u) [[unlikely]] return; }
L_002FF134:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002FF150; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF14Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002FF14Cu) [[unlikely]] return; }
L_002FF14C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002FF150:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FF170:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FF1FC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 30496u);
    set32(c.r[2], c.r[2].w[0] - 30440u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002FF1E4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF1CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002FF1CCu) [[unlikely]] return; }
L_002FF1CC:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF1D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002FF1D8u) [[unlikely]] return; }
L_002FF1D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF1E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002FF1E4u) [[unlikely]] return; }
L_002FF1E4:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002FF200; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF1FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002FF1FCu) [[unlikely]] return; }
L_002FF1FC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002FF200:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FF220:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FF170u | kUnwind; return; } goto L_002FF170; }
L_002FF230:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FF0B0u | kUnwind; return; } goto L_002FF0B0; }
L_002FF240:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FF040u | kUnwind; return; } goto L_002FF040; }
L_002FF250:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF280u); set32(c.r[4], 0u + 1424u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002FF280u) [[unlikely]] return; }
L_002FF280:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002FF2A4; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF2A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 327u, depth + 1u); else { c.pc = 0x002FF2C0u; return; } if (c.pc != 0x002FF2A0u) [[unlikely]] return; }
L_002FF2A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002FF2A4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002FF2C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF2D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x002FF2D4u) [[unlikely]] return; }
L_002FF2D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 29776u);
    set32(c.r[3], c.r[3].w[0] - 29720u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FF300:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 15u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002FF3C0; } }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_002FF344; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FF440; } }
L_002FF344:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF34Cu);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002FF34Cu) [[unlikely]] return; }
L_002FF34C:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 220u);  goto L_002FF390; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF364u); set32(c.r[4], 0u + 136u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002FF364u) [[unlikely]] return; }
L_002FF364:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002FF444; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF384u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 340u, depth + 1u); else { c.pc = 0x002FF460u; return; } if (c.pc != 0x002FF384u) [[unlikely]] return; }
L_002FF384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FF440; } }
    set32(c.r[4], 0u + 220u);
    c.budget -= 1;
L_002FF390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF398u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002FF398u) [[unlikely]] return; }
L_002FF398:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FF440; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF3B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 383u, depth + 1u); else { c.pc = 0x002FFC70u; return; } if (c.pc != 0x002FF3B8u) [[unlikely]] return; }
L_002FF3B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FF440; } }
L_002FF3C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF3C8u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002FF3C8u) [[unlikely]] return; }
L_002FF3C8:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 168u);  goto L_002FF40C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF3E0u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002FF3E0u) [[unlikely]] return; }
L_002FF3E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FF440; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF400u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 128u, depth + 1u); else { c.pc = 0x003012C0u; return; } if (c.pc != 0x002FF400u) [[unlikely]] return; }
L_002FF400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FF440; } }
    set32(c.r[4], 0u + 168u);
    c.budget -= 1;
L_002FF40C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF414u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002FF414u) [[unlikely]] return; }
L_002FF414:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FF440; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF434u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 154u, depth + 1u); else { c.pc = 0x00301770u; return; } if (c.pc != 0x002FF434u) [[unlikely]] return; }
L_002FF434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FF440; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FF440:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002FF444:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002FF460:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF474u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 45u, depth + 1u); else { c.pc = 0x0026C620u; return; } if (c.pc != 0x002FF474u) [[unlikely]] return; }
L_002FF474:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 29872u);
    set32(c.r[3], c.r[3].w[0] - 29816u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FF4B0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[3].d[0] = c.r[18].sd[0] < 44ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_002FFC40; } }
    c.r[1].d[0] = c.r[18].sd[0] < 49ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));  goto L_002FF500; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_002FFC44; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_002FF500:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_002FF514; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[3].w[0] + 132u)));  if (t) { goto L_002FF514; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FF514:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002FFC40; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[5].w[0] + 20112u);
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
L_002FF52C:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FF52Cu | kUnwind; return; } goto L_002FF52C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF554u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 262u, depth + 1u); else { c.pc = 0x00282740u; return; } if (c.pc != 0x002FF554u) [[unlikely]] return; }
L_002FF554:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], c.r[2].w[0] + 27u);
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002FF578; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002FF5E0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002FF578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF580u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002FF580u) [[unlikely]] return; }
L_002FF580:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002FF5A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FF5B4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_002FF5A4:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002FF5B4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002FF5E0; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[16], ld32((c.r[3].w[0] + 4u)));  goto L_002FF5D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002FF5D4; } }
    set32(c.r[16], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_002FF5D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FF5E0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FF5E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 3028u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF5F0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002FF5F0u) [[unlikely]] return; }
L_002FF5F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[6], ld32((c.r[19].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.f[1] = ld32((c.r[19].w[0] + 720u));
    c.f[13] = 0u;
    set32(c.r[5], ld32((c.r[3].w[0] + 144u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[8], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.f[20] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[12] = ld32((c.r[2].w[0] + 144u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF634u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x002FF634u) [[unlikely]] return; }
L_002FF634:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF648u); set32(c.r[5], c.r[2].w[0] + 10099u);  if (depth < kMaxDepth) unit_0062(c, 82u, depth + 1u); else { c.pc = 0x002A8A70u; return; } if (c.pc != 0x002FF648u) [[unlikely]] return; }
L_002FF648:
    set32(c.r[3], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_002FF918; } }
    set32(c.r[3], 0u + 47u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 96u)));  goto L_002FF690; }
    set32(c.r[3], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_002FF68C; } }
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_002FF68C; } }
    set32(c.r[3], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_002FF68C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FFC40; } }
L_002FF68C:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_002FF690:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF6A4u); set32(c.r[6], c.r[2].w[0] + 10100u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x002FF6A4u) [[unlikely]] return; }
L_002FF6A4:
    set32(c.r[4], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF6B0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002FF6B0u) [[unlikely]] return; }
L_002FF6B0:
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 144u)));  goto L_002FF6DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF6C8u); set32(c.r[4], ld32((c.r[19].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002FF6C8u) [[unlikely]] return; }
L_002FF6C8:
    c.r[2].d[0] = c.r[2].d[0] ^ 5ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 148u)));  goto L_002FF770; }
    set32(c.r[5], ld32((c.r[19].w[0] + 144u)));
    c.budget -= 1;
L_002FF6DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF6E8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002FF6E8u) [[unlikely]] return; }
L_002FF6E8:
    set32(c.r[3], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[2], 0u + 20047u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);  goto L_002FF730; }
    set32(c.r[2], 0u + 10005u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  goto L_002FF710; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_002FF750; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 1;
L_002FF710:
    st32((c.r[29].w[0] + 240u), 0u);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 248u), 0u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_002FF864; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.budget -= 1;
L_002FF730:
    st32((c.r[29].w[0] + 240u), 0u);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 248u), 0u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_002FF864; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 1;
L_002FF750:
    st32((c.r[29].w[0] + 240u), 0u);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 248u), 0u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_002FF864; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 1;
L_002FF770:
    set32(c.r[2], 0u + 8000u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[19].w[0] + 144u)));  goto L_002FF810; }
    set32(c.r[2], 0u + 3002u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 1320u)));  goto L_002FF7D8; }
    set32(c.r[2], 0u + 3003u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 1320u)));  goto L_002FF7A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[19].w[0] + 144u)));  if (t) { goto L_002FF840; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 1320u)));
    c.budget -= 1;
L_002FF7A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF7B0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002FF7B0u) [[unlikely]] return; }
L_002FF7B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1900000u);
    st32((c.r[29].w[0] + 248u), 0u);
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_002FF864; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 1320u)));
    c.budget -= 1;
L_002FF7D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF7E8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002FF7E8u) [[unlikely]] return; }
L_002FF7E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    st32((c.r[29].w[0] + 248u), 0u);
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_002FF864; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 144u)));
    c.budget -= 1;
L_002FF810:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF81Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002FF81Cu) [[unlikely]] return; }
L_002FF81C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);
    st32((c.r[29].w[0] + 240u), 0u);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 248u), 0u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_002FF864; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 144u)));
    c.budget -= 1;
L_002FF840:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF84Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002FF84Cu) [[unlikely]] return; }
L_002FF84C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 248u), 0u);
    st32((c.r[29].w[0] + 244u), 0u);
    c.f[21] = c.r[2].w[0];
    st32((c.r[29].w[0] + 252u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 240u), 0u);
    c.budget -= 6;
L_002FF864:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 144u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF884u); st32((c.r[16].w[0] + 328u), c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002FF884u) [[unlikely]] return; }
L_002FF884:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF894u); c.f[22] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002FF894u) [[unlikely]] return; }
L_002FF894:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 256u), c.f[0]);
    st32((c.r[29].w[0] + 260u), c.f[22]);
    st32((c.r[29].w[0] + 264u), c.f[20]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF8C0u); st32((c.r[29].w[0] + 268u), c.f[21]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002FF8C0u) [[unlikely]] return; }
L_002FF8C0:
    c.f[1] = ld32((c.r[29].w[0] + 260u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_002FF8E4; }
    st32((c.r[29].w[0] + 260u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 2;
L_002FF8E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF8ECu);  if (depth < kMaxDepth) unit_001C(c, 2u, depth + 1u); else { c.pc = 0x00190050u; return; } if (c.pc != 0x002FF8ECu) [[unlikely]] return; }
L_002FF8EC:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF8FCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x002FF8FCu) [[unlikely]] return; }
L_002FF8FC:
    set32(c.r[4], c.r[16].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF908u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002FF908u) [[unlikely]] return; }
L_002FF908:
    set32(c.r[3], ld32((c.r[16].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 308u), c.r[3].w[0]);  if (t) { goto L_002FFC40; } }
L_002FF918:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[6].w[0] + 20144u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
L_002FF928:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FF928u | kUnwind; return; } goto L_002FF928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 81u);  if (t) { goto L_002FF99C; } }
L_002FF950:
    c.f[0] = c.r[18].w[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[6], ld32((c.r[19].w[0] + 144u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[8], 0u + 1u);
    c.f[13] = 0u;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF97Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x002FF97Cu) [[unlikely]] return; }
L_002FF97C:
    c.f[0] = c.r[18].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[0]);
    c.budget -= 8;
L_002FF99C:
    c.f[0] = c.r[18].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FF950u | kUnwind; return; } goto L_002FF950; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FF9C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF9D8u); set32(c.r[6], c.r[2].w[0] + 10100u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x002FF9D8u) [[unlikely]] return; }
L_002FF9D8:
    set32(c.r[4], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF9E4u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002FF9E4u) [[unlikely]] return; }
L_002FF9E4:
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 148u)));  goto L_002FFA10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF9FCu); set32(c.r[4], ld32((c.r[19].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002FF9FCu) [[unlikely]] return; }
L_002FF9FC:
    c.r[2].d[0] = c.r[2].d[0] ^ 5ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 148u)));  goto L_002FFA88; }
    set32(c.r[3], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 1;
L_002FFA10:
    set32(c.r[2], 0u + 10005u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[19].w[0] + 144u)));  goto L_002FFA28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[19].w[0] + 144u)));  if (t) { goto L_002FFA58; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 144u)));
    c.budget -= 1;
L_002FFA28:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFA34u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002FFA34u) [[unlikely]] return; }
L_002FFA34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st32((c.r[29].w[0] + 240u), 0u);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 248u), 0u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_002FFB7C; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 144u)));
    c.budget -= 1;
L_002FFA58:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFA64u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002FFA64u) [[unlikely]] return; }
L_002FFA64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[29].w[0] + 240u), 0u);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 248u), 0u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_002FFB7C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 1;
L_002FFA88:
    set32(c.r[2], 0u + 8000u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[19].w[0] + 144u)));  goto L_002FFB28; }
    set32(c.r[2], 0u + 3002u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 1320u)));  goto L_002FFAF0; }
    set32(c.r[2], 0u + 3003u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 1320u)));  goto L_002FFAB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[19].w[0] + 144u)));  if (t) { goto L_002FFB58; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 1320u)));
    c.budget -= 1;
L_002FFAB8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFAC8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002FFAC8u) [[unlikely]] return; }
L_002FFAC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1900000u);
    st32((c.r[29].w[0] + 248u), 0u);
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_002FFB7C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 1320u)));
    c.budget -= 1;
L_002FFAF0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFB00u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002FFB00u) [[unlikely]] return; }
L_002FFB00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    st32((c.r[29].w[0] + 248u), 0u);
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_002FFB7C; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 144u)));
    c.budget -= 1;
L_002FFB28:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFB34u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002FFB34u) [[unlikely]] return; }
L_002FFB34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[29].w[0] + 240u), 0u);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 248u), 0u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_002FFB7C; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 144u)));
    c.budget -= 1;
L_002FFB58:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFB64u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002FFB64u) [[unlikely]] return; }
L_002FFB64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 240u), 0u);
    st32((c.r[29].w[0] + 244u), 0u);
    c.f[21] = c.r[2].w[0];
    st32((c.r[29].w[0] + 252u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 248u), 0u);
    c.budget -= 6;
L_002FFB7C:
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 112u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFB94u); st32((c.r[18].w[0] + 328u), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 2u, depth + 1u); else { c.pc = 0x00190050u; return; } if (c.pc != 0x002FFB94u) [[unlikely]] return; }
L_002FFB94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFBA4u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002FFBA4u) [[unlikely]] return; }
L_002FFBA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFBB4u); c.f[22] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002FFBB4u) [[unlikely]] return; }
L_002FFBB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 256u), c.f[0]);
    st32((c.r[29].w[0] + 260u), c.f[22]);
    st32((c.r[29].w[0] + 268u), c.f[21]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFBE0u); st32((c.r[29].w[0] + 264u), c.f[20]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002FFBE0u) [[unlikely]] return; }
L_002FFBE0:
    c.f[1] = ld32((c.r[29].w[0] + 260u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_002FFC04; }
    st32((c.r[29].w[0] + 260u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 2;
L_002FFC04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFC0Cu);  if (depth < kMaxDepth) unit_001C(c, 2u, depth + 1u); else { c.pc = 0x00190050u; return; } if (c.pc != 0x002FFC0Cu) [[unlikely]] return; }
L_002FFC0C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFC1Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x002FFC1Cu) [[unlikely]] return; }
L_002FFC1C:
    set32(c.r[4], c.r[18].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFC28u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002FFC28u) [[unlikely]] return; }
L_002FFC28:
    set32(c.r[4], ld32((c.r[18].w[0] + 308u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 6ll ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[18].w[0] + 308u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FF9C0u | kUnwind; return; } goto L_002FF9C0; } }
L_002FFC40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002FFC44:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_002FFC70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFC84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 45u, depth + 1u); else { c.pc = 0x0026C620u; return; } if (c.pc != 0x002FFC84u) [[unlikely]] return; }
L_002FFC84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 29968u);
    set32(c.r[2], c.r[2].w[0] - 29912u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 136u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFCACu); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002FFCACu) [[unlikely]] return; }
L_002FFCAC:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 216u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FFCD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFCF4u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002FFCF4u) [[unlikely]] return; }
L_002FFCF4:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFD00u); set32(c.r[5], 0u + 10010u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002FFD00u) [[unlikely]] return; }
L_002FFD00:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFD0Cu); set32(c.r[5], 0u + 10020u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002FFD0Cu) [[unlikely]] return; }
L_002FFD0C:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFD18u); set32(c.r[5], 0u + 10030u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002FFD18u) [[unlikely]] return; }
L_002FFD18:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFD24u); set32(c.r[5], 0u + 10040u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002FFD24u) [[unlikely]] return; }
L_002FFD24:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFD30u); c.r[5].d[0] = 0ull | 50000ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002FFD30u) [[unlikely]] return; }
L_002FFD30:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFD3Cu); set32(c.r[5], 0u + 20010u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002FFD3Cu) [[unlikely]] return; }
L_002FFD3C:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFD48u); set32(c.r[5], 0u + 20020u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002FFD48u) [[unlikely]] return; }
L_002FFD48:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 2;
L_002FFD50:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 136u);  if (t) { goto L_002FFD74; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFD70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FFD70u) [[unlikely]] return; }
L_002FFD70:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_002FFD74:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FFD50u | kUnwind; return; } goto L_002FFD50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFD8Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 57u, depth + 1u); else { c.pc = 0x0026C870u; return; } if (c.pc != 0x002FFD8Cu) [[unlikely]] return; }
L_002FFD8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FFDB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 8;
L_002FFDD0:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 136u);  if (t) { goto L_002FFE10; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002FFE14; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FFE10; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFE0Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FFE0Cu) [[unlikely]] return; }
L_002FFE0C:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_002FFE10:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002FFE14:
    c.r[2].d[0] = c.r[16].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FFDD0u | kUnwind; return; } goto L_002FFDD0; }
    set32(c.r[2], ld32((c.r[18].w[0] + 216u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002FFFD8; }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
L_002FFE3C:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] << 2);  goto L_002FFEEC; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] << 2);  goto L_002FFE7C; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002FFE78; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002FFE78; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002FFE78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_002FFFC8; } }
L_002FFE78:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 1;
L_002FFE7C:
    set32(c.r[3], ld32((c.r[18].w[0] + 216u)));
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 196u)));
    set32(c.r[2], c.r[2].w[0] + 26u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FFFC4; } }
    set32(c.r[2], c.r[17].w[0] << 1);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_002FFEA4:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 136u);
    set32(c.r[2], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002FFED4; }
    st32((c.r[2].w[0] + 168u), 0u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 6;
L_002FFED4:
    c.r[2].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FFEA4u | kUnwind; return; } goto L_002FFEA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FFFC4; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 1;
L_002FFEEC:
    set32(c.r[3], ld32((c.r[18].w[0] + 216u)));
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 196u);
    set32(c.r[2], ld32((c.r[2].w[0] + 196u)));
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.budget -= 7;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_002FFF58; }
    set32(c.r[2], c.r[17].w[0] << 1);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_002FFF18:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 136u);
    set32(c.r[2], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002FFF48; }
    st32((c.r[2].w[0] + 168u), 0u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 6;
L_002FFF48:
    c.r[2].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FFF18u | kUnwind; return; } goto L_002FFF18; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_002FFF58:
    set32(c.r[3], ld32((c.r[18].w[0] + 216u)));
    set32(c.r[2], c.r[2].w[0] + 58u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_002FFF88; }
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[5], 0u + 15u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFF84u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FFF84u) [[unlikely]] return; }
L_002FFF84:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_002FFF88:
    set32(c.r[3], ld32((c.r[18].w[0] + 216u)));
    set32(c.r[2], c.r[2].w[0] + 60u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FFFC4; } }
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] + 136u);  if (t) { goto L_002FFFC4; } }
    set32(c.r[2], 0u + 14u);
    st32((c.r[3].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFFC4u); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_007B(c, 43u, depth + 1u); else { c.pc = 0x0030C4B0u; return; } if (c.pc != 0x002FFFC4u) [[unlikely]] return; }
L_002FFFC4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002FFFC8:
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FFE3Cu | kUnwind; return; } goto L_002FFE3C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002FFFD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFFE0u);  if (depth < kMaxDepth) unit_0053(c, 77u, depth + 1u); else { c.pc = 0x0026CAC0u; return; } if (c.pc != 0x002FFFE0u) [[unlikely]] return; }
L_002FFFE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
}

}
