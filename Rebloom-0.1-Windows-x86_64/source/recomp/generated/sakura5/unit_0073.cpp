#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0073[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 6,
    0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0,
    0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0,
    0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 87, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 104,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107,
    0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0,
    124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0,
    0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157,
    0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0,
    0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0,
    0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0,
    224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0,
    0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    250, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0,
    0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 263, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0,
    0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292,
    0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0,
    301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0,
    0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319,
    0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0,
    0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0,
    356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0073(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002EC000;
    case 2u: goto L_002EC004;
    case 3u: goto L_002EC030;
    case 4u: goto L_002EC060;
    case 5u: goto L_002EC070;
    case 6u: goto L_002EC07C;
    case 7u: goto L_002EC0A0;
    case 8u: goto L_002EC0C4;
    case 9u: goto L_002EC110;
    case 10u: goto L_002EC11C;
    case 11u: goto L_002EC12C;
    case 12u: goto L_002EC1B0;
    case 13u: goto L_002EC1F0;
    case 14u: goto L_002EC220;
    case 15u: goto L_002EC22C;
    case 16u: goto L_002EC250;
    case 17u: goto L_002EC2BC;
    case 18u: goto L_002EC2D8;
    case 19u: goto L_002EC32C;
    case 20u: goto L_002EC330;
    case 21u: goto L_002EC39C;
    case 22u: goto L_002EC3F0;
    case 23u: goto L_002EC4D8;
    case 24u: goto L_002EC500;
    case 25u: goto L_002EC540;
    case 26u: goto L_002EC548;
    case 27u: goto L_002EC5BC;
    case 28u: goto L_002EC5E8;
    case 29u: goto L_002EC614;
    case 30u: goto L_002EC640;
    case 31u: goto L_002EC694;
    case 32u: goto L_002EC6B8;
    case 33u: goto L_002EC700;
    case 34u: goto L_002EC718;
    case 35u: goto L_002EC788;
    case 36u: goto L_002EC7CC;
    case 37u: goto L_002EC7DC;
    case 38u: goto L_002EC7F8;
    case 39u: goto L_002EC804;
    case 40u: goto L_002EC85C;
    case 41u: goto L_002EC868;
    case 42u: goto L_002EC890;
    case 43u: goto L_002EC8BC;
    case 44u: goto L_002EC8D0;
    case 45u: goto L_002EC904;
    case 46u: goto L_002EC918;
    case 47u: goto L_002EC950;
    case 48u: goto L_002EC994;
    case 49u: goto L_002EC9B4;
    case 50u: goto L_002EC9C0;
    case 51u: goto L_002ECA50;
    case 52u: goto L_002ECA60;
    case 53u: goto L_002ECA80;
    case 54u: goto L_002ECAC4;
    case 55u: goto L_002ECAE4;
    case 56u: goto L_002ECAF0;
    case 57u: goto L_002ECB80;
    case 58u: goto L_002ECB90;
    case 59u: goto L_002ECBB0;
    case 60u: goto L_002ECBE4;
    case 61u: goto L_002ECBEC;
    case 62u: goto L_002ECC1C;
    case 63u: goto L_002ECC24;
    case 64u: goto L_002ECC30;
    case 65u: goto L_002ECD04;
    case 66u: goto L_002ECE58;
    case 67u: goto L_002ECE70;
    case 68u: goto L_002ECEB0;
    case 69u: goto L_002ECED0;
    case 70u: goto L_002ECED8;
    case 71u: goto L_002ECEF8;
    case 72u: goto L_002ECF00;
    case 73u: goto L_002ECF44;
    case 74u: goto L_002ECF60;
    case 75u: goto L_002ECF74;
    case 76u: goto L_002ECFC0;
    case 77u: goto L_002ECFE4;
    case 78u: goto L_002ED038;
    case 79u: goto L_002ED064;
    case 80u: goto L_002ED080;
    case 81u: goto L_002ED09C;
    case 82u: goto L_002ED0E4;
    case 83u: goto L_002ED108;
    case 84u: goto L_002ED120;
    case 85u: goto L_002ED164;
    case 86u: goto L_002ED170;
    case 87u: goto L_002ED178;
    case 88u: goto L_002ED190;
    case 89u: goto L_002ED1C0;
    case 90u: goto L_002ED1D0;
    case 91u: goto L_002ED224;
    case 92u: goto L_002ED270;
    case 93u: goto L_002ED2C4;
    case 94u: goto L_002ED2FC;
    case 95u: goto L_002ED350;
    case 96u: goto L_002ED388;
    case 97u: goto L_002ED3DC;
    case 98u: goto L_002ED414;
    case 99u: goto L_002ED468;
    case 100u: goto L_002ED4A0;
    case 101u: goto L_002ED4AC;
    case 102u: goto L_002ED4E0;
    case 103u: goto L_002ED4F0;
    case 104u: goto L_002ED4FC;
    case 105u: goto L_002ED530;
    case 106u: goto L_002ED554;
    case 107u: goto L_002ED57C;
    case 108u: goto L_002ED588;
    case 109u: goto L_002ED594;
    case 110u: goto L_002ED5A0;
    case 111u: goto L_002ED5AC;
    case 112u: goto L_002ED5BC;
    case 113u: goto L_002ED5C8;
    case 114u: goto L_002ED5D8;
    case 115u: goto L_002ED5E4;
    case 116u: goto L_002ED600;
    case 117u: goto L_002ED618;
    case 118u: goto L_002ED680;
    case 119u: goto L_002ED6A0;
    case 120u: goto L_002ED700;
    case 121u: goto L_002ED728;
    case 122u: goto L_002ED9E0;
    case 123u: goto L_002ED9F0;
    case 124u: goto L_002EDA00;
    case 125u: goto L_002EDA10;
    case 126u: goto L_002EDA20;
    case 127u: goto L_002EDA30;
    case 128u: goto L_002EDA40;
    case 129u: goto L_002EDA50;
    case 130u: goto L_002EDA60;
    case 131u: goto L_002EDA70;
    case 132u: goto L_002EDAB8;
    case 133u: goto L_002EDAD0;
    case 134u: goto L_002EDB24;
    case 135u: goto L_002EDB3C;
    case 136u: goto L_002EDB70;
    case 137u: goto L_002EDBDC;
    case 138u: goto L_002EDBF4;
    case 139u: goto L_002EDC24;
    case 140u: goto L_002EDC30;
    case 141u: goto L_002EDC3C;
    case 142u: goto L_002EDC80;
    case 143u: goto L_002EDC98;
    case 144u: goto L_002EDCCC;
    case 145u: goto L_002EDCDC;
    case 146u: goto L_002EDCE8;
    case 147u: goto L_002EDCF4;
    case 148u: goto L_002EDD04;
    case 149u: goto L_002EDD44;
    case 150u: goto L_002EDD5C;
    case 151u: goto L_002EDD8C;
    case 152u: goto L_002EDDA0;
    case 153u: goto L_002EDDB0;
    case 154u: goto L_002EDDC0;
    case 155u: goto L_002EDDD4;
    case 156u: goto L_002EDDDC;
    case 157u: goto L_002EDDFC;
    case 158u: goto L_002EDE04;
    case 159u: goto L_002EDE58;
    case 160u: goto L_002EDE90;
    case 161u: goto L_002EDEA8;
    case 162u: goto L_002EDF5C;
    case 163u: goto L_002EDF74;
    case 164u: goto L_002EDFB8;
    case 165u: goto L_002EDFC8;
    case 166u: goto L_002EDFD8;
    case 167u: goto L_002EE024;
    case 168u: goto L_002EE034;
    case 169u: goto L_002EE04C;
    case 170u: goto L_002EE060;
    case 171u: goto L_002EE06C;
    case 172u: goto L_002EE078;
    case 173u: goto L_002EE088;
    case 174u: goto L_002EE09C;
    case 175u: goto L_002EE0AC;
    case 176u: goto L_002EE0C0;
    case 177u: goto L_002EE0E4;
    case 178u: goto L_002EE120;
    case 179u: goto L_002EE134;
    case 180u: goto L_002EE160;
    case 181u: goto L_002EE180;
    case 182u: goto L_002EE194;
    case 183u: goto L_002EE1B0;
    case 184u: goto L_002EE1DC;
    case 185u: goto L_002EE230;
    case 186u: goto L_002EE260;
    case 187u: goto L_002EE2A0;
    case 188u: goto L_002EE2C4;
    case 189u: goto L_002EE2E0;
    case 190u: goto L_002EE308;
    case 191u: goto L_002EE320;
    case 192u: goto L_002EE344;
    case 193u: goto L_002EE354;
    case 194u: goto L_002EE380;
    case 195u: goto L_002EE3A8;
    case 196u: goto L_002EE3C0;
    case 197u: goto L_002EE3F0;
    case 198u: goto L_002EE414;
    case 199u: goto L_002EE430;
    case 200u: goto L_002EE460;
    case 201u: goto L_002EE490;
    case 202u: goto L_002EE4D4;
    case 203u: goto L_002EE4EC;
    case 204u: goto L_002EE51C;
    case 205u: goto L_002EE534;
    case 206u: goto L_002EE550;
    case 207u: goto L_002EE580;
    case 208u: goto L_002EE5F4;
    case 209u: goto L_002EE610;
    case 210u: goto L_002EE640;
    case 211u: goto L_002EE6A4;
    case 212u: goto L_002EE6B0;
    case 213u: goto L_002EE6BC;
    case 214u: goto L_002EE6E0;
    case 215u: goto L_002EE6F8;
    case 216u: goto L_002EE704;
    case 217u: goto L_002EE724;
    case 218u: goto L_002EE754;
    case 219u: goto L_002EE760;
    case 220u: goto L_002EE790;
    case 221u: goto L_002EE7A8;
    case 222u: goto L_002EE7E0;
    case 223u: goto L_002EE7F0;
    case 224u: goto L_002EE800;
    case 225u: goto L_002EE820;
    case 226u: goto L_002EE894;
    case 227u: goto L_002EE8A0;
    case 228u: goto L_002EE8AC;
    case 229u: goto L_002EE8DC;
    case 230u: goto L_002EE8F4;
    case 231u: goto L_002EE930;
    case 232u: goto L_002EE948;
    case 233u: goto L_002EE980;
    case 234u: goto L_002EE9A0;
    case 235u: goto L_002EE9AC;
    case 236u: goto L_002EE9BC;
    case 237u: goto L_002EE9F0;
    case 238u: goto L_002EEA54;
    case 239u: goto L_002EEA68;
    case 240u: goto L_002EEA78;
    case 241u: goto L_002EEAA0;
    case 242u: goto L_002EEAC0;
    case 243u: goto L_002EEAF4;
    case 244u: goto L_002EEB10;
    case 245u: goto L_002EEB24;
    case 246u: goto L_002EEB60;
    case 247u: goto L_002EEBBC;
    case 248u: goto L_002EEBC8;
    case 249u: goto L_002EEBE0;
    case 250u: goto L_002EEC00;
    case 251u: goto L_002EEC10;
    case 252u: goto L_002EEC24;
    case 253u: goto L_002EEC2C;
    case 254u: goto L_002EEC60;
    case 255u: goto L_002EEC98;
    case 256u: goto L_002EECA4;
    case 257u: goto L_002EECB0;
    case 258u: goto L_002EECC8;
    case 259u: goto L_002EECE0;
    case 260u: goto L_002EED04;
    case 261u: goto L_002EED1C;
    case 262u: goto L_002EED34;
    case 263u: goto L_002EED3C;
    case 264u: goto L_002EED44;
    case 265u: goto L_002EED58;
    case 266u: goto L_002EED88;
    case 267u: goto L_002EEDE8;
    case 268u: goto L_002EEE24;
    case 269u: goto L_002EEE60;
    case 270u: goto L_002EEE90;
    case 271u: goto L_002EEEAC;
    case 272u: goto L_002EEEDC;
    case 273u: goto L_002EEEEC;
    case 274u: goto L_002EEF10;
    case 275u: goto L_002EEF48;
    case 276u: goto L_002EEF68;
    case 277u: goto L_002EEF9C;
    case 278u: goto L_002EEFB4;
    case 279u: goto L_002EEFD8;
    case 280u: goto L_002EF010;
    case 281u: goto L_002EF040;
    case 282u: goto L_002EF05C;
    case 283u: goto L_002EF090;
    case 284u: goto L_002EF0A4;
    case 285u: goto L_002EF0B8;
    case 286u: goto L_002EF0F0;
    case 287u: goto L_002EF114;
    case 288u: goto L_002EF160;
    case 289u: goto L_002EF1A0;
    case 290u: goto L_002EF1D0;
    case 291u: goto L_002EF1E0;
    case 292u: goto L_002EF1FC;
    case 293u: goto L_002EF208;
    case 294u: goto L_002EF244;
    case 295u: goto L_002EF260;
    case 296u: goto L_002EF2A0;
    case 297u: goto L_002EF2AC;
    case 298u: goto L_002EF2C4;
    case 299u: goto L_002EF2E0;
    case 300u: goto L_002EF2F4;
    case 301u: goto L_002EF300;
    case 302u: goto L_002EF320;
    case 303u: goto L_002EF378;
    case 304u: goto L_002EF390;
    case 305u: goto L_002EF3C0;
    case 306u: goto L_002EF3C8;
    case 307u: goto L_002EF3EC;
    case 308u: goto L_002EF440;
    case 309u: goto L_002EF5A0;
    case 310u: goto L_002EF5C8;
    case 311u: goto L_002EF5E8;
    case 312u: goto L_002EF5F0;
    case 313u: goto L_002EF6B4;
    case 314u: goto L_002EF6C8;
    case 315u: goto L_002EF700;
    case 316u: goto L_002EF778;
    case 317u: goto L_002EF788;
    case 318u: goto L_002EF790;
    case 319u: goto L_002EF7FC;
    case 320u: goto L_002EF80C;
    case 321u: goto L_002EF814;
    case 322u: goto L_002EF854;
    case 323u: goto L_002EF85C;
    case 324u: goto L_002EF8A4;
    case 325u: goto L_002EF8B4;
    case 326u: goto L_002EF8D0;
    case 327u: goto L_002EF8E0;
    case 328u: goto L_002EF8EC;
    case 329u: goto L_002EF930;
    case 330u: goto L_002EF940;
    case 331u: goto L_002EF948;
    case 332u: goto L_002EF990;
    case 333u: goto L_002EF9E0;
    case 334u: goto L_002EFA38;
    case 335u: goto L_002EFA68;
    case 336u: goto L_002EFAAC;
    case 337u: goto L_002EFAC0;
    case 338u: goto L_002EFB80;
    case 339u: goto L_002EFBC4;
    case 340u: goto L_002EFBDC;
    case 341u: goto L_002EFC08;
    case 342u: goto L_002EFC40;
    case 343u: goto L_002EFCD0;
    case 344u: goto L_002EFD80;
    case 345u: goto L_002EFDB0;
    case 346u: goto L_002EFDC8;
    case 347u: goto L_002EFDD8;
    case 348u: goto L_002EFDF8;
    case 349u: goto L_002EFE34;
    case 350u: goto L_002EFE84;
    case 351u: goto L_002EFEC0;
    case 352u: goto L_002EFEF0;
    case 353u: goto L_002EFF0C;
    case 354u: goto L_002EFF48;
    case 355u: goto L_002EFF78;
    case 356u: goto L_002EFF80;
    case 357u: goto L_002EFFA4;
    case 358u: goto L_002EFFE0;
    default: bad_entry(c, 0x002EC000u); return;
    }
L_002EC000:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002EC004:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002EC030:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[17].w[0] + 16896u);
    set32(c.r[16], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC060u); st32((c.r[17].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_0072(c, 289u, depth + 1u); else { c.pc = 0x002EBC00u; return; } if (c.pc != 0x002EC060u) [[unlikely]] return; }
L_002EC060:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC070u); st32((c.r[17].w[0] + 28u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0072(c, 242u, depth + 1u); else { c.pc = 0x002EAF90u; return; } if (c.pc != 0x002EC070u) [[unlikely]] return; }
L_002EC070:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC07Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 250u, depth + 1u); else { c.pc = 0x002EB180u; return; } if (c.pc != 0x002EC07Cu) [[unlikely]] return; }
L_002EC07C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EC0A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC0C4u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0073(c, 116u, depth + 1u); else { c.pc = 0x002ED600u; return; } if (c.pc != 0x002EC0C4u) [[unlikely]] return; }
L_002EC0C4:
    set32(c.r[4], ld32((c.r[18].w[0] + 620u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 3ull;  if (t) { goto L_002EC0DC; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[18].w[0] + 80u), c.r[3].w[0]);  goto L_002EC0E0; }
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 1;
L_002EC0DC:
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 1;
L_002EC0E0:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002EC230; }
    st32((c.r[18].w[0] + 604u), c.r[3].w[0]);
    c.f[12] = 0u;
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[5], 0u + 36u);
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC110u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002EC110u) [[unlikely]] return; }
L_002EC110:
    set32(c.r[16], ld32((c.r[18].w[0] + 604u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
L_002EC11C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002EC14C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC12Cu);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x002EC12Cu) [[unlikely]] return; }
L_002EC12C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));  goto L_002EC140; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EC14C; } }
L_002EC140:
    c.r[2].d[0] = ld64((c.r[2].w[0] + 152u));
    c.r[2].d[0] = c.r[2].d[0] & 1025ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002EC14C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_002EC160; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { goto L_002EC164; } }
L_002EC160:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002EC164:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_002EC178; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002EC184; } }
L_002EC178:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 80u)));  goto L_002EC188; }
    set32(c.r[16], 0u + 3u);
    c.budget -= 1;
L_002EC184:
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 1;
L_002EC188:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC11Cu | kUnwind; return; } goto L_002EC11C; }
    set32(c.r[2], c.r[17].w[0] << 4);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] - c.r[17].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    c.f[12] = c.f[20];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC1B0u); set32(c.r[5], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0073(c, 16u, depth + 1u); else { c.pc = 0x002EC250u; return; } if (c.pc != 0x002EC1B0u) [[unlikely]] return; }
L_002EC1B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002EC224; }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_002EC1F8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 58u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC1F0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002EC1F0u) [[unlikely]] return; }
L_002EC1F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EC220; } }
L_002EC1F8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_002EC220; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 57u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC220u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002EC220u) [[unlikely]] return; }
L_002EC220:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002EC224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC22Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 59u, depth + 1u); else { c.pc = 0x002ECBB0u; return; } if (c.pc != 0x002EC22Cu) [[unlikely]] return; }
L_002EC22C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002EC230:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002EC250:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[17].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_002EC4D8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[20]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[6], ld32((c.r[18].w[0] + 612u)));  goto L_002EC3B4; }
    set32(c.r[2], ld32((c.r[18].w[0] + 612u)));
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 360ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[3].sd[0] < -359ll ? 1ull : 0ull;  goto L_002EC2C4; }
    set32(c.r[5], 0u - 360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC2BCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 16u, depth + 1u); else { c.pc = 0x002EC250u; return; } if (c.pc != 0x002EC2BCu) [[unlikely]] return; }
L_002EC2BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 612u)));  if (t) { goto L_002EC2DC; } }
L_002EC2C4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EC2D8; } }
    set32(c.r[5], 0u + 360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC2D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 16u, depth + 1u); else { c.pc = 0x002EC250u; return; } if (c.pc != 0x002EC2D8u) [[unlikely]] return; }
L_002EC2D8:
    set32(c.r[4], ld32((c.r[18].w[0] + 612u)));
    c.budget -= 1;
L_002EC2DC:
    set32(c.r[7], 0u + 360u);
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], 0u + 24u);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[8], c.r[4].w[0] << 16);
    mmi::div(c, 0, c.r[8].w[0], c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 264u)));
    st32((c.r[29].w[0] + 152u), 0u);
    set32(c.r[4], c.r[4].w[0] + 488u);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 152u), c.f[20]);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 148u), 0u);
    st32((c.r[29].w[0] + 156u), 0u);
    c.r[19].d[0] = c.lo.d[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC32Cu); st32((c.r[29].w[0] + 164u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002EC32Cu) [[unlikely]] return; }
L_002EC32C:
    set32(c.r[20], 0u + 13u);
    c.budget -= 1;
L_002EC330:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[20].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 6448u);
    set32(c.r[2], 0u + 360u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[3].w[0] - 208u)));
    set32(c.r[6], c.r[20].w[0] << 2);
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[4], ld32((c.r[5].w[0])));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    set32(c.r[6], 0u + 24u);
    set32(c.r[8], ld32((c.r[4].w[0] + 264u)));
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 120u), 0u);
    set32(c.r[4], c.r[4].w[0] + 488u);
    st32((c.r[29].w[0] + 112u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 120u), c.f[20]);
    st32((c.r[29].w[0] + 128u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[29].w[0] + 124u), 0u);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC39Cu); st32((c.r[29].w[0] + 132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002EC39Cu) [[unlikely]] return; }
L_002EC39C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC330u | kUnwind; return; } goto L_002EC330; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 612u)));  if (t) { goto L_002EC43C; } }
L_002EC3B4:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[4], 0u + 360u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], c.r[6].w[0] + c.r[17].w[0]);
    set32(c.r[8], c.r[8].w[0] + 6448u);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[7], ld32((c.r[3].w[0] + 48u)));
    mmi::div(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[7].w[0] + 264u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 292u)));
    c.r[6].d[0] = c.r[6].d[0] | c.r[10].d[0];
    st32((c.r[7].w[0] + 292u), c.r[6].w[0]);
    c.budget -= 15;
L_002EC3F0:
    set32(c.r[7], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[9], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] << 4);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[9], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[7], ld32((c.r[6].w[0] - 208u)));
    set32(c.r[9], ld32((c.r[9].w[0])));
    set32(c.r[7], c.r[7].w[0] << 16);
    c.r[6].d[0] = c.r[5].sd[0] < 21ll ? 1ull : 0ull;
    mmi::div(c, 0, c.r[7].w[0], c.r[4].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[9].w[0] + 264u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[9].w[0] + 292u)));
    c.r[7].d[0] = c.r[7].d[0] | c.r[10].d[0];
    c.budget -= 18;
    { const bool t = c.r[6].d[0] != 0ull; st32((c.r[9].w[0] + 292u), c.r[7].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC3F0u | kUnwind; return; } goto L_002EC3F0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 612u)));
    c.budget -= 1;
L_002EC43C:
    set32(c.r[4], 0u + 360u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    st32((c.r[18].w[0] + 612u), c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[18].w[0] + 612u), c.r[3].w[0]);  if (t) { goto L_002EC4D8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 612u)));
    set32(c.r[2], 0u + 45u);
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 620u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[18].w[0] + 620u), c.r[2].w[0]);  if (t) { goto L_002EC48C; } }
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[18].w[0] + 620u), c.r[2].w[0]);
    c.budget -= 2;
L_002EC48C:
    set32(c.r[3], ld32((c.r[18].w[0] + 620u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_002EC4B8; }
    set32(c.r[2], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[18].w[0] + 620u), c.r[2].w[0]);  if (t) { goto L_002EC4B4; } }
    set32(c.r[2], c.r[2].w[0] - 8u);
    st32((c.r[18].w[0] + 620u), c.r[2].w[0]);
    c.budget -= 2;
L_002EC4B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_002EC4B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::ee::div(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC4D8u);  if (depth < kMaxDepth) unit_0073(c, 24u, depth + 1u); else { c.pc = 0x002EC500u; return; } if (c.pc != 0x002EC4D8u) [[unlikely]] return; }
L_002EC4D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002EC500:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.f[20] = c.f[12];
    set32(c.r[5], ld32((c.r[20].w[0] + 484u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC540u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EC540u) [[unlikely]] return; }
L_002EC540:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002EC548:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; c.r[16].d[0] = c.r[18].d[0] & 3ull;  if (t) { goto L_002EC55C; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 620u)));  goto L_002EC560; }
    set32(c.r[16], c.r[16].w[0] - 4u);
    c.budget -= 1;
L_002EC55C:
    set32(c.r[2], ld32((c.r[20].w[0] + 620u)));
    c.budget -= 1;
L_002EC560:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_002EC584; } }
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 6448u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[22], 0u + 1u);  if (t) { goto L_002EC64C; } }
L_002EC584:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 6448u);
    set32(c.r[21], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[17], ld32((c.r[21].w[0] + 12u)));  if (t) { goto L_002EC64C; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], 0u + 3u);  goto L_002EC5C8; }
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC5BCu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EC5BCu) [[unlikely]] return; }
L_002EC5BC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[21].w[0] + 8u)));  goto L_002EC64C; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_002EC5C8:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_002EC5F4; }
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC5E8u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EC5E8u) [[unlikely]] return; }
L_002EC5E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EC648; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002EC5F4:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[7], 0u + 1u);  goto L_002EC620; }
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC614u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EC614u) [[unlikely]] return; }
L_002EC614:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EC648; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 1;
L_002EC620:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[7].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 96u)));  goto L_002EC650; }
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC640u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EC640u) [[unlikely]] return; }
L_002EC640:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EC64C; } }
L_002EC648:
    set32(c.r[17], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_002EC64C:
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 1;
L_002EC650:
    set32(c.r[4], c.r[18].w[0] << 2);
    c.f[0] = ld32((c.r[28].w[0] - 32692u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 52u)));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 412u), c.r[2].w[0]);  if (t) { goto L_002EC69C; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002EC69C; } }
    c.f[13] = 0u;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC694u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_005E(c, 209u, depth + 1u); else { c.pc = 0x0029A3C0u; return; } if (c.pc != 0x002EC694u) [[unlikely]] return; }
L_002EC694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld16((c.r[16].w[0] + 360u));  if (t) { goto L_002EC6BC; } }
L_002EC69C:
    c.f[12] = 0u;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC6B8u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002EC6B8u) [[unlikely]] return; }
L_002EC6B8:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 360u));
    c.budget -= 1;
L_002EC6BC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] & 49151ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[16].w[0] + 360u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC548u | kUnwind; return; } goto L_002EC548; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002EC700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC718u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0073(c, 116u, depth + 1u); else { c.pc = 0x002ED600u; return; } if (c.pc != 0x002EC718u) [[unlikely]] return; }
L_002EC718:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002EC878; }
    set32(c.r[4], ld32((c.r[17].w[0] + 620u)));
    set32(c.r[3], 0u + 39u);
    set32(c.r[5], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 340u)));
    c.budget -= 9;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002EC77C; }
    set32(c.r[3], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002EC778; } }
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002EC778; } }
    set32(c.r[3], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002EC778; } }
    set32(c.r[3], 0u + 70u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002EC874; } }
L_002EC778:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002EC77C:
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC788u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EC788u) [[unlikely]] return; }
L_002EC788:
    set32(c.r[4], ld32((c.r[2].w[0] + 1104u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  goto L_002EC814; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], 0u + 70u);
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 340u)));
    c.budget -= 7;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[3].d[0] = ld16((c.r[16].w[0] + 360u));  goto L_002EC808; }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC7CCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002EC7CCu) [[unlikely]] return; }
L_002EC7CC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC7DCu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EC7DCu) [[unlikely]] return; }
L_002EC7DC:
    set32(c.r[25], ld32((c.r[2].w[0] + 16u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 160u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC7F8u); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EC7F8u) [[unlikely]] return; }
L_002EC7F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC804u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 59u, depth + 1u); else { c.pc = 0x002ECBB0u; return; } if (c.pc != 0x002EC804u) [[unlikely]] return; }
L_002EC804:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 360u));
    c.budget -= 1;
L_002EC808:
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 360u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002EC874; } }
L_002EC814:
    set32(c.r[3], 0u - 257u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 6452u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 620u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 340u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 12;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[3].d[0] = ld16((c.r[16].w[0] + 360u));  goto L_002EC86C; }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC85Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002EC85Cu) [[unlikely]] return; }
L_002EC85C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC868u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 59u, depth + 1u); else { c.pc = 0x002ECBB0u; return; } if (c.pc != 0x002EC868u) [[unlikely]] return; }
L_002EC868:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 360u));
    c.budget -= 1;
L_002EC86C:
    c.r[3].d[0] = c.r[3].d[0] & 49151ull;
    st16((c.r[16].w[0] + 360u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002EC874:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002EC878:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EC890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC8BCu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EC8BCu) [[unlikely]] return; }
L_002EC8BC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC8D0u); set32(c.r[5], 0u + 300u);  if (depth < kMaxDepth) unit_0067(c, 372u, depth + 1u); else { c.pc = 0x002BFFD0u; return; } if (c.pc != 0x002EC8D0u) [[unlikely]] return; }
L_002EC8D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[3].w[0] + 24u), 0u);
    st32((c.r[3].w[0] + 28u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC904u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EC904u) [[unlikely]] return; }
L_002EC904:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 300u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC918u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 14u, depth + 1u); else { c.pc = 0x002C02C0u; return; } if (c.pc != 0x002EC918u) [[unlikely]] return; }
L_002EC918:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[3].w[0] + 24u), 0u);
    st32((c.r[3].w[0] + 28u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[3].w[0] + 24u), 0u);
    st32((c.r[3].w[0] + 28u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EC950:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[2].w[0] + 112u);
    set32(c.r[2], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC994u); set32(c.r[5], ld32((c.r[17].w[0] + 484u)));  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EC994u) [[unlikely]] return; }
L_002EC994:
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[19].sd[0] > 0) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 110u)));  goto L_002EC9AC; }
    c.f[2] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECA00; } }
L_002EC9AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC9B4u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002EC9B4u) [[unlikely]] return; }
L_002EC9B4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC9C0u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002EC9C0u) [[unlikely]] return; }
L_002EC9C0:
    c.f[2] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EC9E8; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_002EC9E8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002ECA00; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_002ECA00:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[18].w[0] + 24u), 0u);  goto L_002ECA3C; }
    c.f[1] = ld32((c.r[18].w[0] + 28u));
    set32(c.r[2], 0u + 1u);
    c.f[0] = ld32((c.r[28].w[0] - 32668u));
    st32((c.r[18].w[0] + 32u), 0u);
    st32((c.r[18].w[0] + 36u), 0u);
    st32((c.r[18].w[0] + 40u), 0u);
    st32((c.r[18].w[0] + 44u), 0u);
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 48u), c.f[1]);
    st32((c.r[18].w[0] + 52u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 44u), 0u);  if (t) { goto L_002ECA40; } }
L_002ECA3C:
    st32((c.r[18].w[0] + 28u), c.f[2]);
    c.budget -= 1;
L_002ECA40:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECA50u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002ECA50u) [[unlikely]] return; }
L_002ECA50:
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECA60u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 5u, depth + 1u); else { c.pc = 0x002C0080u; return; } if (c.pc != 0x002ECA60u) [[unlikely]] return; }
L_002ECA60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002ECA80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[4], c.r[2].w[0] + 112u);
    set32(c.r[2], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECAC4u); set32(c.r[5], ld32((c.r[17].w[0] + 484u)));  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002ECAC4u) [[unlikely]] return; }
L_002ECAC4:
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 114u)));
    c.budget -= 3;
    if (c.r[19].sd[0] > 0) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 116u)));  goto L_002ECADC; }
    c.f[2] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECB30; } }
L_002ECADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECAE4u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002ECAE4u) [[unlikely]] return; }
L_002ECAE4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECAF0u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002ECAF0u) [[unlikely]] return; }
L_002ECAF0:
    c.f[2] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002ECB18; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_002ECB18:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002ECB30; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_002ECB30:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[18].w[0] + 24u), 0u);  goto L_002ECB6C; }
    c.f[1] = ld32((c.r[18].w[0] + 28u));
    set32(c.r[2], 0u + 1u);
    c.f[0] = ld32((c.r[28].w[0] - 32668u));
    st32((c.r[18].w[0] + 32u), 0u);
    st32((c.r[18].w[0] + 36u), 0u);
    st32((c.r[18].w[0] + 40u), 0u);
    st32((c.r[18].w[0] + 44u), 0u);
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 48u), c.f[1]);
    st32((c.r[18].w[0] + 52u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 44u), 0u);  if (t) { goto L_002ECB70; } }
L_002ECB6C:
    st32((c.r[18].w[0] + 28u), c.f[2]);
    c.budget -= 1;
L_002ECB70:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECB80u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002ECB80u) [[unlikely]] return; }
L_002ECB80:
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECB90u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 17u, depth + 1u); else { c.pc = 0x002C0380u; return; } if (c.pc != 0x002ECB90u) [[unlikely]] return; }
L_002ECB90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002ECBB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 484u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECBE4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002ECBE4u) [[unlikely]] return; }
L_002ECBE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECBECu); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002ECBECu) [[unlikely]] return; }
L_002ECBEC:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002ECC04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002ECE50; } }
L_002ECC04:
    c.f[21] = 0u;
    set32(c.r[5], ld32((c.r[18].w[0] + 484u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[4], c.r[3].w[0] + 112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECC1Cu); set32(c.r[16], c.r[2].w[0] + 592u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002ECC1Cu) [[unlikely]] return; }
L_002ECC1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECC24u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 114u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002ECC24u) [[unlikely]] return; }
L_002ECC24:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECC30u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 116u, depth + 1u); else { c.pc = 0x002ED600u; return; } if (c.pc != 0x002ECC30u) [[unlikely]] return; }
L_002ECC30:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  goto L_002ECCDC; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 104u)));  goto L_002ECD68; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002ECC9C; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));  goto L_002ECC64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECD64; } }
L_002ECC64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[21] = fp::ee::div(c.fcr31, c.f[1], c.f[20]);
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002ECD64; } }
    c.f[21] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECD64; } }
L_002ECC9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 188u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[21] = fp::ee::div(c.fcr31, c.f[1], c.f[20]);
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002ECD64; } }
    c.f[21] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECD64; } }
L_002ECCDC:
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));  goto L_002ECD54; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));  goto L_002ECD34; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECD04u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x002ECD04u) [[unlikely]] return; }
L_002ECD04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ECD30; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[21] = fp::ee::div(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECD64; } }
L_002ECD30:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002ECD34:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[21] = fp::ee::div(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECD64; } }
L_002ECD54:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[21] = fp::ee::div(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 4;
L_002ECD64:
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 1;
L_002ECD68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[7], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_002ECE38; } }
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[7].w[0] + 24u), 0u);  goto L_002ECE3C; }
    st32((c.r[7].w[0] + 24u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st32((c.r[7].w[0] + 28u), c.f[21]);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[6], ld32((c.r[7].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFD80000u);
    set32(c.r[3], 0u - 3u);
    set32(c.r[5], 0u + 1u);
    c.f[0] = ld32((c.r[28].w[0] - 32180u));
    c.r[2].d[0] = c.r[2].d[0] | 63487ull;
    c.r[6].d[0] = c.r[6].d[0] | 1ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st32((c.r[7].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 56u)));
    st32((c.r[7].w[0] + 80u), 0u);
    st32((c.r[7].w[0] + 84u), c.f[1]);
    st32((c.r[7].w[0] + 88u), c.f[1]);
    st32((c.r[7].w[0] + 92u), c.f[1]);
    st32((c.r[7].w[0] + 80u), c.r[5].w[0]);
    st32((c.r[7].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[7].w[0] + 100u), c.r[4].w[0]);
    st32((c.r[7].w[0] + 88u), c.f[0]);
    st32((c.r[7].w[0] + 92u), c.f[1]);
    set32(c.r[3], ld32((c.r[7].w[0] + 60u)));
    st32((c.r[7].w[0] + 104u), 0u);
    st32((c.r[7].w[0] + 108u), c.f[1]);
    st32((c.r[7].w[0] + 112u), c.f[1]);
    st32((c.r[7].w[0] + 116u), c.f[1]);
    st32((c.r[7].w[0] + 104u), c.r[5].w[0]);
    st32((c.r[7].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[7].w[0] + 124u), c.r[4].w[0]);
    st32((c.r[7].w[0] + 112u), c.f[0]);
    st32((c.r[7].w[0] + 116u), c.f[1]);
    st32((c.r[7].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[7].w[0] + 68u), c.r[4].w[0]);
    st32((c.r[7].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 39;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 76u), c.r[4].w[0]);  if (t) { goto L_002ECE4C; } }
L_002ECE38:
    st32((c.r[7].w[0] + 24u), 0u);
    c.budget -= 1;
L_002ECE3C:
    st32((c.r[7].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[7].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_002ECE4C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002ECE50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.budget -= 2;
L_002ECE58:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002ECE70:
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[3].w[0] + 24u), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 28u), 0u);  c.pc = t; return; }
L_002ECEB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECED0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002ECED0u) [[unlikely]] return; }
L_002ECED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECED8u); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002ECED8u) [[unlikely]] return; }
L_002ECED8:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 62u);  goto L_002ECF28; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECEF8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002ECEF8u) [[unlikely]] return; }
L_002ECEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECF00u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x002ECF00u) [[unlikely]] return; }
L_002ECF00:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[5], 0u + 61u);  goto L_002ECF28; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[5], 0u + 60u);  goto L_002ECF28; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 59u);  goto L_002ECF28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002ECF48; } }
L_002ECF28:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECF44u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002ECF44u) [[unlikely]] return; }
L_002ECF44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002ECF48:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002ECF60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[8].d[0] = 0ull + 0ull;
    c.f[1] = c.r[3].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);  if (t) { goto L_002ECFA0; } }
L_002ECF74:
    set32(c.r[6], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.f[0] = ld32((c.r[3].w[0] + 492u));
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    st32((c.r[6].w[0] + 212u), c.f[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[6].w[0] + 292u), c.r[3].w[0]);
    c.budget -= 11;
L_002ECFA0:
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    c.r[3].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[7], c.r[8].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ECF74u | kUnwind; return; } goto L_002ECF74; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ECFC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002ED03C; } }
L_002ECFE4:
    set32(c.r[7], c.r[16].w[0] << 2);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], c.r[18].w[0] + c.r[7].w[0]);
    set32(c.r[3], 0u + 1u);
    c.f[1] = ld32((c.r[2].w[0] + 492u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[6], 0u + 24u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = ld32((c.r[4].w[0] + 212u));
    set32(c.r[4], c.r[4].w[0] + 464u);
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED038u); st32((c.r[29].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002ED038u) [[unlikely]] return; }
L_002ED038:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002ED03C:
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ECFE4u | kUnwind; return; } goto L_002ECFE4; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002ED068; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED064u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 119u, depth + 1u); else { c.pc = 0x002ED6A0u; return; } if (c.pc != 0x002ED064u) [[unlikely]] return; }
L_002ED064:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002ED068:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002ED080:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002ED0E8; } }
L_002ED09C:
    set32(c.r[5], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[3], 0u + 1u);
    c.f[1] = ld32((c.r[2].w[0] + 492u));
    set32(c.r[6], 0u + 24u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = ld32((c.r[4].w[0] + 212u));
    set32(c.r[4], c.r[4].w[0] + 464u);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 52u), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED0E4u); st32((c.r[29].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002ED0E4u) [[unlikely]] return; }
L_002ED0E4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002ED0E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED09Cu | kUnwind; return; } goto L_002ED09C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED108u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 119u, depth + 1u); else { c.pc = 0x002ED6A0u; return; } if (c.pc != 0x002ED108u) [[unlikely]] return; }
L_002ED108:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002ED120:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002ED178; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002ED17C; }
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002ED178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED164u);  if (depth < kMaxDepth) unit_0073(c, 74u, depth + 1u); else { c.pc = 0x002ECF60u; return; } if (c.pc != 0x002ED164u) [[unlikely]] return; }
L_002ED164:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED170u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 88u, depth + 1u); else { c.pc = 0x002ED190u; return; } if (c.pc != 0x002ED170u) [[unlikely]] return; }
L_002ED170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED178u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 80u, depth + 1u); else { c.pc = 0x002ED080u; return; } if (c.pc != 0x002ED178u) [[unlikely]] return; }
L_002ED178:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002ED17C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002ED190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002ED5E4; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002ED5E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED1C0u); st32((c.r[16].w[0] + 484u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0072(c, 264u, depth + 1u); else { c.pc = 0x002EB530u; return; } if (c.pc != 0x002ED1C0u) [[unlikely]] return; }
L_002ED1C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED1D0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002ED1D0u) [[unlikely]] return; }
L_002ED1D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 126u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 120u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] + 0ull;  goto L_002ED1F0; }
L_002ED1F0:
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
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED224u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002ED224u) [[unlikely]] return; }
L_002ED224:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 36u)));
    st32((c.r[4].w[0] + 208u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 484u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 488u)));
    c.budget -= 15;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002ED37C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED270u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002ED270u) [[unlikely]] return; }
L_002ED270:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 126u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 120u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] + 0ull;  goto L_002ED290; }
L_002ED290:
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
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED2C4u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002ED2C4u) [[unlikely]] return; }
L_002ED2C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED2FCu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002ED2FCu) [[unlikely]] return; }
L_002ED2FC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 126u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 120u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] + 0ull;  goto L_002ED31C; }
L_002ED31C:
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
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED350u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002ED350u) [[unlikely]] return; }
L_002ED350:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[2].w[0] + 24u), 0u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), c.f[0]);  if (t) { goto L_002ED490; } }
L_002ED37C:
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED388u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002ED388u) [[unlikely]] return; }
L_002ED388:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 126u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 124u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] + 0ull;  goto L_002ED3A8; }
L_002ED3A8:
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
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED3DCu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002ED3DCu) [[unlikely]] return; }
L_002ED3DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED414u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002ED414u) [[unlikely]] return; }
L_002ED414:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 126u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 124u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] + 0ull;  goto L_002ED434; }
L_002ED434:
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
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED468u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002ED468u) [[unlikely]] return; }
L_002ED468:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), c.f[0]);
    c.budget -= 10;
L_002ED490:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED4A0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002ED4A0u) [[unlikely]] return; }
L_002ED4A0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED4ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x002ED4ACu) [[unlikely]] return; }
L_002ED4AC:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[6], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 126u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 544u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[2].d[0] << 48;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED4E0u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (depth < kMaxDepth) unit_0072(c, 228u, depth + 1u); else { c.pc = 0x002EAC10u; return; } if (c.pc != 0x002ED4E0u) [[unlikely]] return; }
L_002ED4E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED4F0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002ED4F0u) [[unlikely]] return; }
L_002ED4F0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED4FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x002ED4FCu) [[unlikely]] return; }
L_002ED4FC:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[6], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 126u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 546u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[2].d[0] << 48;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED530u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (depth < kMaxDepth) unit_0072(c, 228u, depth + 1u); else { c.pc = 0x002EAC10u; return; } if (c.pc != 0x002ED530u) [[unlikely]] return; }
L_002ED530:
    set32(c.r[2], ld32((c.r[16].w[0] + 620u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[17].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_002ED548; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002ED54C; }
    set32(c.r[17], c.r[17].w[0] - 4u);
    c.budget -= 1;
L_002ED548:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002ED54C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED554u);  if (depth < kMaxDepth) unit_0073(c, 116u, depth + 1u); else { c.pc = 0x002ED600u; return; } if (c.pc != 0x002ED554u) [[unlikely]] return; }
L_002ED554:
    set32(c.r[3], c.r[17].w[0] - c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED57Cu); set32(c.r[5], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0073(c, 16u, depth + 1u); else { c.pc = 0x002EC250u; return; } if (c.pc != 0x002ED57Cu) [[unlikely]] return; }
L_002ED57C:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED588u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 24u, depth + 1u); else { c.pc = 0x002EC500u; return; } if (c.pc != 0x002ED588u) [[unlikely]] return; }
L_002ED588:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED594u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 47u, depth + 1u); else { c.pc = 0x002EC950u; return; } if (c.pc != 0x002ED594u) [[unlikely]] return; }
L_002ED594:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED5A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 53u, depth + 1u); else { c.pc = 0x002ECA80u; return; } if (c.pc != 0x002ED5A0u) [[unlikely]] return; }
L_002ED5A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED5ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 59u, depth + 1u); else { c.pc = 0x002ECBB0u; return; } if (c.pc != 0x002ED5ACu) [[unlikely]] return; }
L_002ED5AC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002ED5C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED5BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 67u, depth + 1u); else { c.pc = 0x002ECE70u; return; } if (c.pc != 0x002ED5BCu) [[unlikely]] return; }
L_002ED5BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002ED5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED5C8u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002ECEB0u; return; } if (c.pc != 0x002ED5C8u) [[unlikely]] return; }
L_002ED5C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED5D8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002ED5D8u) [[unlikely]] return; }
L_002ED5D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 624u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED5E4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 46u, depth + 1u); else { c.pc = 0x002C0830u; return; } if (c.pc != 0x002ED5E4u) [[unlikely]] return; }
L_002ED5E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002ED5E8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002ED600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 484u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED618u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002ED618u) [[unlikely]] return; }
L_002ED618:
    set32(c.r[5], ld32((c.r[2].w[0] + 1100u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002ED66C; }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[2], 0u + 3u);  goto L_002ED66C; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[2].d[0] = c.r[4].d[0] + 0ull;  goto L_002ED66C; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002ED66C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED66C; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED66C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED66C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ED66C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002ED680:
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[4].w[0] + 464u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 624u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 464u), c.r[3].w[0]);  c.pc = t; return; }
L_002ED6A0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 468u), c.f[12]);  if (t) { goto L_002ED6C4; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 464u), c.r[3].w[0]);
    c.budget -= 4;
L_002ED6C4:
    set32(c.r[5], ld32((c.r[4].w[0] + 624u)));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[5].w[0] + 468u), c.f[12]);  if (t) { goto L_002ED6EC; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 464u)));
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 464u), c.r[3].w[0]);
    c.budget -= 4;
L_002ED6EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ED700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED728u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002ED728u) [[unlikely]] return; }
L_002ED728:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 84u);  goto L_002ED74C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002ED748; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002EE0B0; }
L_002ED748:
    set32(c.r[3], 0u + 84u);
    c.budget -= 1;
L_002ED74C:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002EE0A4; }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  goto L_002EE090; }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002EE03C; }
    set32(c.r[3], 0u + 98u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002EE02C; }
    set32(c.r[3], 0u + 111u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_002EDFE0; }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002EDFD0; }
    set32(c.r[3], 0u + 99u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002EDFC0; }
    set32(c.r[3], 0u + 48u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002EDFB0; }
    set32(c.r[3], 0u + 47u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002EDFAC; } }
    set32(c.r[3], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002EDFAC; } }
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002EDFAC; } }
    set32(c.r[3], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002EDFAC; } }
    set32(c.r[3], 0u + 94u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_002EDEF8; }
    set32(c.r[3], 0u + 92u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_002EDED0; }
    set32(c.r[3], 0u + 65u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 76u)));  goto L_002EDE2C; }
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002EDE28; } }
    set32(c.r[3], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002EDE28; } }
    set32(c.r[3], 0u + 62u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002EDDC8; }
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002EDDB8; }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002EDDA8; }
    set32(c.r[3], 0u + 56u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002EDD98; }
    set32(c.r[3], 0u + 60u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002EDD94; } }
    set32(c.r[3], 0u + 54u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002EDD94; } }
    set32(c.r[3], 0u + 72u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002EDD84; }
    set32(c.r[3], 0u + 74u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002EDCC0; } }
    set32(c.r[3], 0u + 118u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[6], ld32((c.r[28].w[0] - 30316u)));  goto L_002EDC44; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_002EDB78; }
    set32(c.r[3], 0u + 79u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002EDAF8; }
    set32(c.r[3], 0u + 25u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_002EDA8C; }
    set32(c.r[3], 0u + 120u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002EDA88; } }
    set32(c.r[3], 0u + 83u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002EDA88; } }
    set32(c.r[3], 0u + 116u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002EDA88; } }
    set32(c.r[3], 0u + 91u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002EDA88; } }
    set32(c.r[3], 0u + 22u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_002EDA7C; }
    set32(c.r[3], 0u + 119u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002EDA78; } }
    set32(c.r[3], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002EDA78; } }
    set32(c.r[3], 0u + 55u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002EDA78; } }
    set32(c.r[3], 0u + 73u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002EDA78; } }
    set32(c.r[3], 0u + 117u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002EDA78; } }
    set32(c.r[3], 0u + 115u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002EDA78; } }
    set32(c.r[3], 0u + 112u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002EDA78; } }
    set32(c.r[3], 0u + 57u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002EDA78; } }
    set32(c.r[3], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002EDA78; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002EDA78; } }
    set32(c.r[3], 0u + 29u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002EDA68; }
    set32(c.r[3], 0u + 28u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002EDA58; }
    set32(c.r[3], 0u + 39u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002EDA48; }
    set32(c.r[3], 0u + 37u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002EDA38; }
    set32(c.r[3], 0u + 35u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002EDA28; }
    set32(c.r[3], 0u + 33u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002EDA18; }
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002EDA08; }
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002ED9F8; }
    set32(c.r[3], 0u + 86u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002ED9E8; }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002ED9D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE0AC; } }
L_002ED9D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED9E0u);  if (depth < kMaxDepth) unit_0073(c, 176u, depth + 1u); else { c.pc = 0x002EE0C0u; return; } if (c.pc != 0x002ED9E0u) [[unlikely]] return; }
L_002ED9E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE0AC; } }
L_002ED9E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED9F0u);  if (depth < kMaxDepth) unit_0073(c, 178u, depth + 1u); else { c.pc = 0x002EE120u; return; } if (c.pc != 0x002ED9F0u) [[unlikely]] return; }
L_002ED9F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE0AC; } }
L_002ED9F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDA00u);  if (depth < kMaxDepth) unit_0073(c, 180u, depth + 1u); else { c.pc = 0x002EE160u; return; } if (c.pc != 0x002EDA00u) [[unlikely]] return; }
L_002EDA00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE0AC; } }
L_002EDA08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDA10u);  if (depth < kMaxDepth) unit_0073(c, 183u, depth + 1u); else { c.pc = 0x002EE1B0u; return; } if (c.pc != 0x002EDA10u) [[unlikely]] return; }
L_002EDA10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE0AC; } }
L_002EDA18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDA20u);  if (depth < kMaxDepth) unit_0073(c, 187u, depth + 1u); else { c.pc = 0x002EE2A0u; return; } if (c.pc != 0x002EDA20u) [[unlikely]] return; }
L_002EDA20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE0AC; } }
L_002EDA28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDA30u);  if (depth < kMaxDepth) unit_0073(c, 189u, depth + 1u); else { c.pc = 0x002EE2E0u; return; } if (c.pc != 0x002EDA30u) [[unlikely]] return; }
L_002EDA30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE0AC; } }
L_002EDA38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDA40u);  if (depth < kMaxDepth) unit_0073(c, 194u, depth + 1u); else { c.pc = 0x002EE380u; return; } if (c.pc != 0x002EDA40u) [[unlikely]] return; }
L_002EDA40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE0AC; } }
L_002EDA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDA50u);  if (depth < kMaxDepth) unit_0073(c, 197u, depth + 1u); else { c.pc = 0x002EE3F0u; return; } if (c.pc != 0x002EDA50u) [[unlikely]] return; }
L_002EDA50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE0AC; } }
L_002EDA58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDA60u);  if (depth < kMaxDepth) unit_0073(c, 185u, depth + 1u); else { c.pc = 0x002EE230u; return; } if (c.pc != 0x002EDA60u) [[unlikely]] return; }
L_002EDA60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE0AC; } }
L_002EDA68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDA70u);  if (depth < kMaxDepth) unit_0073(c, 199u, depth + 1u); else { c.pc = 0x002EE430u; return; } if (c.pc != 0x002EDA70u) [[unlikely]] return; }
L_002EDA70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE0AC; } }
L_002EDA78:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002EDA7C:
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002EE0AC; } }
L_002EDA88:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002EDA8C:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EDAA4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002EDAA4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EE0AC; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDAB8u); set32(c.r[4], c.r[4].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EDAB8u) [[unlikely]] return; }
L_002EDAB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_002EDAE8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDAD0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EDAD0u) [[unlikely]] return; }
L_002EDAD0:
    set32(c.r[4], ld32((c.r[2].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EE0AC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002EDAE8:
    set32(c.r[3], 0u - 17u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002EE0AC; } }
L_002EDAF8:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EDB10; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002EDB10:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002EDB64; }
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDB24u); set32(c.r[4], c.r[3].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EDB24u) [[unlikely]] return; }
L_002EDB24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_002EDB54; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDB3Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EDB3Cu) [[unlikely]] return; }
L_002EDB3C:
    set32(c.r[3], ld32((c.r[2].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EDB60; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002EDB54:
    set32(c.r[2], 0u - 17u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_002EDB60:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002EDB64:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDB70u);  if (depth < kMaxDepth) unit_0073(c, 24u, depth + 1u); else { c.pc = 0x002EC500u; return; } if (c.pc != 0x002EDB70u) [[unlikely]] return; }
L_002EDB70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE0AC; } }
L_002EDB78:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002EDBB0; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EDBAC; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 1180u)));
    set32(c.r[2], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EDBAC; } }
    set32(c.r[2], 0u + 7u);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 2;
L_002EDBAC:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002EDBB0:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EDBC8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002EDBC8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002EDC1C; }
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDBDCu); set32(c.r[4], c.r[3].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EDBDCu) [[unlikely]] return; }
L_002EDBDC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_002EDC0C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDBF4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EDBF4u) [[unlikely]] return; }
L_002EDBF4:
    set32(c.r[3], ld32((c.r[2].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EDC18; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002EDC0C:
    set32(c.r[2], 0u - 17u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_002EDC18:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002EDC1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDC24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 47u, depth + 1u); else { c.pc = 0x002EC950u; return; } if (c.pc != 0x002EDC24u) [[unlikely]] return; }
L_002EDC24:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDC30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 53u, depth + 1u); else { c.pc = 0x002ECA80u; return; } if (c.pc != 0x002EDC30u) [[unlikely]] return; }
L_002EDC30:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDC3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 24u, depth + 1u); else { c.pc = 0x002EC500u; return; } if (c.pc != 0x002EDC3Cu) [[unlikely]] return; }
L_002EDC3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE0AC; } }
L_002EDC44:
    set32(c.r[3], 0u + 25u);
    set32(c.r[5], ld32((c.r[6].w[0] + 116u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 1180u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[6].w[0] + 112u);  if (t) { goto L_002EE0AC; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EDC70; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002EDC70:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EE0AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDC80u); set32(c.r[5], ld32((c.r[17].w[0] + 484u)));  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EDC80u) [[unlikely]] return; }
L_002EDC80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_002EDCB0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDC98u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EDC98u) [[unlikely]] return; }
L_002EDC98:
    set32(c.r[4], ld32((c.r[2].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EE0AC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002EDCB0:
    set32(c.r[3], 0u - 17u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002EE0AC; } }
L_002EDCC0:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDCCCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 3u, depth + 1u); else { c.pc = 0x002EC030u; return; } if (c.pc != 0x002EDCCCu) [[unlikely]] return; }
L_002EDCCC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDCDCu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EDCDCu) [[unlikely]] return; }
L_002EDCDC:
    set32(c.r[4], ld32((c.r[17].w[0] + 624u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDCE8u); set32(c.r[5], ld32((c.r[2].w[0] + 1296u)));  if (depth < kMaxDepth) unit_0068(c, 50u, depth + 1u); else { c.pc = 0x002C0890u; return; } if (c.pc != 0x002EDCE8u) [[unlikely]] return; }
L_002EDCE8:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDCF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 24u, depth + 1u); else { c.pc = 0x002EC500u; return; } if (c.pc != 0x002EDCF4u) [[unlikely]] return; }
L_002EDCF4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDD04u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EDD04u) [[unlikely]] return; }
L_002EDD04:
    set32(c.r[3], ld32((c.r[2].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EE0AC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EDD30; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002EDD30:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EE0AC; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDD44u); set32(c.r[4], c.r[4].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EDD44u) [[unlikely]] return; }
L_002EDD44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_002EDD74; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDD5Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EDD5Cu) [[unlikely]] return; }
L_002EDD5C:
    set32(c.r[4], ld32((c.r[2].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EE0AC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002EDD74:
    set32(c.r[3], 0u - 17u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002EE0AC; } }
L_002EDD84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDD8Cu);  if (depth < kMaxDepth) unit_0073(c, 201u, depth + 1u); else { c.pc = 0x002EE490u; return; } if (c.pc != 0x002EDD8Cu) [[unlikely]] return; }
L_002EDD8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE0AC; } }
L_002EDD94:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002EDD98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDDA0u);  if (depth < kMaxDepth) unit_0073(c, 214u, depth + 1u); else { c.pc = 0x002EE6E0u; return; } if (c.pc != 0x002EDDA0u) [[unlikely]] return; }
L_002EDDA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE0AC; } }
L_002EDDA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDDB0u);  if (depth < kMaxDepth) unit_0073(c, 222u, depth + 1u); else { c.pc = 0x002EE7E0u; return; } if (c.pc != 0x002EDDB0u) [[unlikely]] return; }
L_002EDDB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE0AC; } }
L_002EDDB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDDC0u);  if (depth < kMaxDepth) unit_0073(c, 223u, depth + 1u); else { c.pc = 0x002EE7F0u; return; } if (c.pc != 0x002EDDC0u) [[unlikely]] return; }
L_002EDDC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE0AC; } }
L_002EDDC8:
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDDD4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EDDD4u) [[unlikely]] return; }
L_002EDDD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDDDCu); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002EDDDCu) [[unlikely]] return; }
L_002EDDDC:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EE0AC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDDFCu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EDDFCu) [[unlikely]] return; }
L_002EDDFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDE04u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x002EDE04u) [[unlikely]] return; }
L_002EDE04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EE0AC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002EE0AC; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_002EE0AC; } }
L_002EDE28:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_002EDE2C:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 7u);  goto L_002EDE4C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EDE50; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 1;
L_002EDE4C:
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 1;
L_002EDE50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDE58u);  if (depth < kMaxDepth) unit_006B(c, 6u, depth + 1u); else { c.pc = 0x002CC0F0u; return; } if (c.pc != 0x002EDE58u) [[unlikely]] return; }
L_002EDE58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EE0AC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EDE7C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002EDE7C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EE0AC; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDE90u); set32(c.r[4], c.r[4].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EDE90u) [[unlikely]] return; }
L_002EDE90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_002EDEC0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDEA8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EDEA8u) [[unlikely]] return; }
L_002EDEA8:
    set32(c.r[4], ld32((c.r[2].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EE0AC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002EDEC0:
    set32(c.r[3], 0u - 17u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002EE0AC; } }
L_002EDED0:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_002EDEEC; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
L_002EDEEC:
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002EE0AC; } }
L_002EDEF8:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_002EDF18; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_002EDF30; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002EDF18:
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EDF2C; } }
    set32(c.r[3], 0u + 7u);
    st32((c.r[17].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 2;
L_002EDF2C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002EDF30:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EDF48; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002EDF48:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_002EDF9C; }
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDF5Cu); set32(c.r[4], c.r[4].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EDF5Cu) [[unlikely]] return; }
L_002EDF5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_002EDF8C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDF74u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EDF74u) [[unlikely]] return; }
L_002EDF74:
    set32(c.r[4], ld32((c.r[2].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EDF98; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002EDF8C:
    set32(c.r[3], 0u - 17u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_002EDF98:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002EDF9C:
    set32(c.r[3], 0u - 65u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002EE0AC; } }
L_002EDFAC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002EDFB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDFB8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 225u, depth + 1u); else { c.pc = 0x002EE820u; return; } if (c.pc != 0x002EDFB8u) [[unlikely]] return; }
L_002EDFB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE0AC; } }
L_002EDFC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDFC8u);  if (depth < kMaxDepth) unit_0073(c, 231u, depth + 1u); else { c.pc = 0x002EE930u; return; } if (c.pc != 0x002EDFC8u) [[unlikely]] return; }
L_002EDFC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE0AC; } }
L_002EDFD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDFD8u);  if (depth < kMaxDepth) unit_0073(c, 233u, depth + 1u); else { c.pc = 0x002EE980u; return; } if (c.pc != 0x002EDFD8u) [[unlikely]] return; }
L_002EDFD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE0AC; } }
L_002EDFE0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002EDFEC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_002EDFEC:
    set32(c.r[2], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 544u)));  goto L_002EE000; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002EE01C; } }
L_002EE000:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 912u)));  goto L_002EE010; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002EE01C; } }
L_002EE010:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 516u)));
    c.budget -= 3;
L_002EE01C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE024u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 84u, depth + 1u); else { c.pc = 0x002ED120u; return; } if (c.pc != 0x002EE024u) [[unlikely]] return; }
L_002EE024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE0AC; } }
L_002EE02C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE034u);  if (depth < kMaxDepth) unit_0073(c, 237u, depth + 1u); else { c.pc = 0x002EE9F0u; return; } if (c.pc != 0x002EE034u) [[unlikely]] return; }
L_002EE034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE0AC; } }
L_002EE03C:
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE04Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EE04Cu) [[unlikely]] return; }
L_002EE04C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_002EE0AC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE060u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0073(c, 47u, depth + 1u); else { c.pc = 0x002EC950u; return; } if (c.pc != 0x002EE060u) [[unlikely]] return; }
L_002EE060:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE06Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0073(c, 53u, depth + 1u); else { c.pc = 0x002ECA80u; return; } if (c.pc != 0x002EE06Cu) [[unlikely]] return; }
L_002EE06C:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE078u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 24u, depth + 1u); else { c.pc = 0x002EC500u; return; } if (c.pc != 0x002EE078u) [[unlikely]] return; }
L_002EE078:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE088u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 3u, depth + 1u); else { c.pc = 0x002EC030u; return; } if (c.pc != 0x002EE088u) [[unlikely]] return; }
L_002EE088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE0AC; } }
L_002EE090:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE09Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 3u, depth + 1u); else { c.pc = 0x002EC030u; return; } if (c.pc != 0x002EE09Cu) [[unlikely]] return; }
L_002EE09C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE0AC; } }
L_002EE0A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE0ACu);  if (depth < kMaxDepth) unit_0073(c, 241u, depth + 1u); else { c.pc = 0x002EEAA0u; return; } if (c.pc != 0x002EE0ACu) [[unlikely]] return; }
L_002EE0AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002EE0B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EE0C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE0E4u); st32((c.r[4].w[0] + 484u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 116u, depth + 1u); else { c.pc = 0x002ED600u; return; } if (c.pc != 0x002EE0E4u) [[unlikely]] return; }
L_002EE0E4:
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 2u);  goto L_002EE104; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_002EE108; } }
L_002EE104:
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 1;
L_002EE108:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EE120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE134u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 184u, depth + 1u); else { c.pc = 0x002EA080u; return; } if (c.pc != 0x002EE134u) [[unlikely]] return; }
L_002EE134:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 137u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EE160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE180u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EE180u) [[unlikely]] return; }
L_002EE180:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002EE198; }
    c.f[12] = ld32((c.r[28].w[0] - 32272u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE194u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 7u, depth + 1u); else { c.pc = 0x002EC0A0u; return; } if (c.pc != 0x002EE194u) [[unlikely]] return; }
L_002EE194:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002EE198:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EE1B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 608u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002EE214; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002EE1FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE1DCu);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x002EE1DCu) [[unlikely]] return; }
L_002EE1DC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_002EE1F0; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE1FC; } }
L_002EE1F0:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 1025ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002EE1FC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u - 5u);  goto L_002EE210; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 616u), c.r[3].w[0]);  if (t) { goto L_002EE214; } }
L_002EE210:
    st32((c.r[16].w[0] + 616u), c.r[3].w[0]);
    c.budget -= 1;
L_002EE214:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EE230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 13u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE260u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002EE260u) [[unlikely]] return; }
L_002EE260:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[5], ld32((c.r[3].w[0] + 96u)));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 360u));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st16((c.r[5].w[0] + 360u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 96u)));
    st32((c.r[3].w[0] + 356u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EE2A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_002EE2CC; }
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE2C4u);  if (depth < kMaxDepth) unit_0073(c, 24u, depth + 1u); else { c.pc = 0x002EC500u; return; } if (c.pc != 0x002EE2C4u) [[unlikely]] return; }
L_002EE2C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002EE2D8; } }
L_002EE2CC:
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_002EE2D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002EE2E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002EE310; } }
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE308u);  if (depth < kMaxDepth) unit_0073(c, 24u, depth + 1u); else { c.pc = 0x002EC500u; return; } if (c.pc != 0x002EE308u) [[unlikely]] return; }
L_002EE308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002EE36C; } }
L_002EE310:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE320u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EE320u) [[unlikely]] return; }
L_002EE320:
    set32(c.r[4], ld32((c.r[2].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_002EE360; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE344u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EE344u) [[unlikely]] return; }
L_002EE344:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE354u); set32(c.r[4], c.r[3].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 372u, depth + 1u); else { c.pc = 0x002A3860u; return; } if (c.pc != 0x002EE354u) [[unlikely]] return; }
L_002EE354:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002EE368; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002EE360:
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 2;
L_002EE368:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002EE36C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EE380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002EE3B0; } }
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE3A8u);  if (depth < kMaxDepth) unit_0073(c, 24u, depth + 1u); else { c.pc = 0x002EC500u; return; } if (c.pc != 0x002EE3A8u) [[unlikely]] return; }
L_002EE3A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002EE3E4; } }
L_002EE3B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE3C0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EE3C0u) [[unlikely]] return; }
L_002EE3C0:
    set32(c.r[4], ld32((c.r[2].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EE3E0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_002EE3E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002EE3E4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EE3F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_002EE41C; }
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE414u);  if (depth < kMaxDepth) unit_0073(c, 24u, depth + 1u); else { c.pc = 0x002EC500u; return; } if (c.pc != 0x002EE414u) [[unlikely]] return; }
L_002EE414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002EE428; } }
L_002EE41C:
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_002EE428:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002EE430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 12u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE460u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002EE460u) [[unlikely]] return; }
L_002EE460:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 96u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 360u));
    c.r[3].d[0] = c.r[3].d[0] & 49151ull;
    st16((c.r[4].w[0] + 360u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EE490:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002EE4C0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002EE4C0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002EE514; }
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE4D4u); set32(c.r[4], c.r[3].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EE4D4u) [[unlikely]] return; }
L_002EE4D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_002EE504; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE4ECu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EE4ECu) [[unlikely]] return; }
L_002EE4EC:
    set32(c.r[3], ld32((c.r[2].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EE510; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002EE504:
    set32(c.r[2], 0u - 17u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_002EE510:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002EE514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE51Cu);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002ECEB0u; return; } if (c.pc != 0x002EE51Cu) [[unlikely]] return; }
L_002EE51C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    set32(c.r[16], c.r[16].w[0] + 17024u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE534u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EE534u) [[unlikely]] return; }
L_002EE534:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002EE548; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EE578; } }
L_002EE548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE550u);  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x002EE550u) [[unlikely]] return; }
L_002EE550:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 126u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 544u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 10;
L_002EE578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE580u); set32(c.r[4], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002EE580u) [[unlikely]] return; }
L_002EE580:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.f[3] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43020000u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43CC0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[16], c.r[16].w[0] + 17060u);
    set32(c.r[5], ld32((c.r[3].w[0])));
    st32((c.r[5].w[0] + 208u), c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[5].w[0] + 292u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[5].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE5F4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EE5F4u) [[unlikely]] return; }
L_002EE5F4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002EE608; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EE638; } }
L_002EE608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE610u);  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x002EE610u) [[unlikely]] return; }
L_002EE610:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 126u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 546u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 10;
L_002EE638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE640u); set32(c.r[4], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002EE640u) [[unlikely]] return; }
L_002EE640:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.f[2] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43020000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.f[12] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[12], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43CC0000u);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[6].w[0] + 208u), c.f[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[6].w[0] + 292u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE6A4u); st32((c.r[6].w[0] + 292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0072(c, 242u, depth + 1u); else { c.pc = 0x002EAF90u; return; } if (c.pc != 0x002EE6A4u) [[unlikely]] return; }
L_002EE6A4:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE6B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 250u, depth + 1u); else { c.pc = 0x002EB180u; return; } if (c.pc != 0x002EE6B0u) [[unlikely]] return; }
L_002EE6B0:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE6BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 24u, depth + 1u); else { c.pc = 0x002EC500u; return; } if (c.pc != 0x002EE6BCu) [[unlikely]] return; }
L_002EE6BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EE6E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE6F8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 47u, depth + 1u); else { c.pc = 0x002EC950u; return; } if (c.pc != 0x002EE6F8u) [[unlikely]] return; }
L_002EE6F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE704u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 53u, depth + 1u); else { c.pc = 0x002ECA80u; return; } if (c.pc != 0x002EE704u) [[unlikely]] return; }
L_002EE704:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], c.r[2].w[0] + 16928u);
    set32(c.r[3], c.r[3].w[0] + 16896u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    st32((c.r[3].w[0] + 24u), c.r[4].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE724u); st32((c.r[3].w[0] + 20u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002EE724u) [[unlikely]] return; }
L_002EE724:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.f[1] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[2].w[0] + 24u), 0u);
    c.f[12] = 0u;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE754u); st32((c.r[2].w[0] + 28u), c.f[0]);  if (depth < kMaxDepth) unit_0072(c, 242u, depth + 1u); else { c.pc = 0x002EAF90u; return; } if (c.pc != 0x002EE754u) [[unlikely]] return; }
L_002EE754:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE760u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 250u, depth + 1u); else { c.pc = 0x002EB180u; return; } if (c.pc != 0x002EE760u) [[unlikely]] return; }
L_002EE760:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EE77C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002EE77C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002EE7D0; }
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE790u); set32(c.r[4], c.r[4].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EE790u) [[unlikely]] return; }
L_002EE790:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_002EE7C0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE7A8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EE7A8u) [[unlikely]] return; }
L_002EE7A8:
    set32(c.r[4], ld32((c.r[2].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EE7CC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002EE7C0:
    set32(c.r[3], 0u - 17u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_002EE7CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002EE7D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EE7E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 16924u), 0u);  c.pc = t; return; }
L_002EE7F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE800u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002ECEB0u; return; } if (c.pc != 0x002EE800u) [[unlikely]] return; }
L_002EE800:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[3].w[0] + 16924u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002EE820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[5].w[0] - 44u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002EE874; } }
    set32(c.r[2], 0u + 47u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 96u)));  goto L_002EE878; }
    set32(c.r[2], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002EE874; } }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002EE874; } }
    set32(c.r[2], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002EE874; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE894; } }
L_002EE874:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 1;
L_002EE878:
    c.f[12] = 0u;
    set32(c.r[5], c.r[3].w[0] + 63u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE894u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002EE894u) [[unlikely]] return; }
L_002EE894:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE8A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 242u, depth + 1u); else { c.pc = 0x002EAF90u; return; } if (c.pc != 0x002EE8A0u) [[unlikely]] return; }
L_002EE8A0:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE8ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 250u, depth + 1u); else { c.pc = 0x002EB180u; return; } if (c.pc != 0x002EE8ACu) [[unlikely]] return; }
L_002EE8AC:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EE8C8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002EE8C8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002EE91C; }
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE8DCu); set32(c.r[4], c.r[4].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EE8DCu) [[unlikely]] return; }
L_002EE8DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_002EE90C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE8F4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EE8F4u) [[unlikely]] return; }
L_002EE8F4:
    set32(c.r[4], ld32((c.r[2].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EE918; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002EE90C:
    set32(c.r[3], 0u - 17u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_002EE918:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002EE91C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EE930:
    set32(c.r[3], ld32((c.r[4].w[0] + 484u)));
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 488u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 16864u);
    c.budget -= 6;
L_002EE948:
    c.budget -= 2;
    if (c.r[6].d[0] == c.r[5].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_002EE960; }
    set32(c.r[3], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 28u), c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 4;
L_002EE960:
    c.r[3].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EE948u | kUnwind; return; } goto L_002EE948; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EE980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 488u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE9A0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EE9A0u) [[unlikely]] return; }
L_002EE9A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE9ACu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 84u, depth + 1u); else { c.pc = 0x002ED120u; return; } if (c.pc != 0x002EE9ACu) [[unlikely]] return; }
L_002EE9AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 16864u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
L_002EE9BC:
    c.budget -= 2;
    if (c.r[6].d[0] == c.r[5].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_002EE9D4; }
    set32(c.r[3], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 28u), 0u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 4;
L_002EE9D4:
    c.r[3].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EE9BCu | kUnwind; return; } goto L_002EE9BC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EE9F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002EEA10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 132u)));  if (t) { goto L_002EEA14; } }
L_002EEA10:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EEA14:
    set32(c.r[4], ld32((c.r[3].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_002EEA80; }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[5].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002EEA70; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_002EEA48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002EEA8C; } }
L_002EEA48:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEA54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 289u, depth + 1u); else { c.pc = 0x002EBC00u; return; } if (c.pc != 0x002EEA54u) [[unlikely]] return; }
L_002EEA54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEA68u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0072(c, 289u, depth + 1u); else { c.pc = 0x002EBC00u; return; } if (c.pc != 0x002EEA68u) [[unlikely]] return; }
L_002EEA68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EEA88; } }
L_002EEA70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEA78u);  if (depth < kMaxDepth) unit_0072(c, 184u, depth + 1u); else { c.pc = 0x002EA080u; return; } if (c.pc != 0x002EEA78u) [[unlikely]] return; }
L_002EEA78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EEA88; } }
L_002EEA80:
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 2;
L_002EEA88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002EEA8C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EEAA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEAC0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002EEAC0u) [[unlikely]] return; }
L_002EEAC0:
    set32(c.r[4], ld32((c.r[2].w[0] + 1180u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002EEAF8; }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  goto L_002EEAE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EEAF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_002EEAE8:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEAF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 3u, depth + 1u); else { c.pc = 0x002EC030u; return; } if (c.pc != 0x002EEAF4u) [[unlikely]] return; }
L_002EEAF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002EEAF8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EEB10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEB24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00289920u; return; } if (c.pc != 0x002EEB24u) [[unlikely]] return; }
L_002EEB24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 30160u);
    set32(c.r[3], c.r[3].w[0] + 30216u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F580000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 17747ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EEB60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002EEBE0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 30160u);
    set32(c.r[2], c.r[2].w[0] + 30216u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002EEBC8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEBBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002EEBBCu) [[unlikely]] return; }
L_002EEBBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEBC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002EEBC8u) [[unlikely]] return; }
L_002EEBC8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002EEBE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEBE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002EEBE0u) [[unlikely]] return; }
L_002EEBE0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002EEBE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EEC00:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EEB60u | kUnwind; return; } goto L_002EEB60; }
L_002EEC10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x002EEC24u) [[unlikely]] return; }
L_002EEC24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC2Cu); set32(c.r[4], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_003D(c, 75u, depth + 1u); else { c.pc = 0x00214A00u; return; } if (c.pc != 0x002EEC2Cu) [[unlikely]] return; }
L_002EEC2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 30256u);
    set32(c.r[3], c.r[3].w[0] + 30276u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 60u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EEC60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002EECC8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 30256u);
    set32(c.r[2], c.r[2].w[0] + 30276u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC98u); st32((c.r[17].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 269u, depth + 1u); else { c.pc = 0x002EEE60u; return; } if (c.pc != 0x002EEC98u) [[unlikely]] return; }
L_002EEC98:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EECA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 76u, depth + 1u); else { c.pc = 0x00214A60u; return; } if (c.pc != 0x002EECA4u) [[unlikely]] return; }
L_002EECA4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EECB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002EECB0u) [[unlikely]] return; }
L_002EECB0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002EECCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EECC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002EECC8u) [[unlikely]] return; }
L_002EECC8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002EECCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EECE0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[19].w[0] + 20u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EED04u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_003D(c, 79u, depth + 1u); else { c.pc = 0x00214AE0u; return; } if (c.pc != 0x002EED04u) [[unlikely]] return; }
L_002EED04:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[19].w[0] + 48u)));  goto L_002EED14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EEE40; } }
L_002EED14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EED1Cu); set32(c.r[4], c.r[17].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002EED1Cu) [[unlikely]] return; }
L_002EED1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_002EEE3C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] << 2);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EED34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002EED34u) [[unlikely]] return; }
L_002EED34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002EEE28; } }
L_002EED3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EED44u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002EED44u) [[unlikely]] return; }
L_002EED44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 60u)));  goto L_002EED5C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EED58u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0051(c, 303u, depth + 1u); else { c.pc = 0x00266780u; return; } if (c.pc != 0x002EED58u) [[unlikely]] return; }
L_002EED58:
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 1;
L_002EED5C:
    set32(c.r[16], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002EEE40; }
    set32(c.r[4], c.r[19].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EED88u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 93u, depth + 1u); else { c.pc = 0x00214C90u; return; } if (c.pc != 0x002EED88u) [[unlikely]] return; }
L_002EED88:
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002EEDCC; }
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
L_002EEDCC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[7].d[0] = 0ull + 0ull;  goto L_002EEDD8; }
    set32(c.r[7], c.r[2].w[0] + 272u);
    c.budget -= 1;
L_002EEDD8:
    set32(c.r[4], c.r[19].w[0] + 20u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEDE8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 96u, depth + 1u); else { c.pc = 0x00214CF0u; return; } if (c.pc != 0x002EEDE8u) [[unlikely]] return; }
L_002EEDE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002EEE28; }
    set32(c.r[4], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[5].w[0] + 112u);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[3]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[5].w[0] + 32u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEE24u); st32((c.r[5].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x002EEE24u) [[unlikely]] return; }
L_002EEE24:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002EEE28:
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EED3Cu | kUnwind; return; } goto L_002EED3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002EEE40; } }
L_002EEE3C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EEE40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002EEE60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002EEEE0; } }
    set32(c.r[17], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002EEEBC; } }
L_002EEE90:
    set32(c.r[16], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002EEEBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEEACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002EEEACu) [[unlikely]] return; }
L_002EEEAC:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
L_002EEEBC:
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EEE90u | kUnwind; return; } goto L_002EEE90; }
    set32(c.r[4], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[19].w[0] + 20u);  goto L_002EEEE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEEDCu);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x002EEEDCu) [[unlikely]] return; }
L_002EEEDC:
    st32((c.r[19].w[0] + 60u), 0u);
    c.budget -= 1;
L_002EEEE0:
    set32(c.r[4], c.r[19].w[0] + 20u);
    c.budget -= 1;
L_002EEEE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEEECu);  if (depth < kMaxDepth) unit_003D(c, 85u, depth + 1u); else { c.pc = 0x00214B80u; return; } if (c.pc != 0x002EEEECu) [[unlikely]] return; }
L_002EEEEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002EEF10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002EEFEC; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002EEF6C; } }
L_002EEF48:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEF68u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 405u, depth + 1u); else { c.pc = 0x00267750u; return; } if (c.pc != 0x002EEF68u) [[unlikely]] return; }
L_002EEF68:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002EEF6C:
    c.r[3].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EEF48u | kUnwind; return; } goto L_002EEF48; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002EEF88; }
    set32(c.r[4], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 1;
L_002EEF88:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_002EEFF0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEF9Cu); set32(c.r[5], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0052(c, 96u, depth + 1u); else { c.pc = 0x00268F00u; return; } if (c.pc != 0x002EEF9Cu) [[unlikely]] return; }
L_002EEF9C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002EEFEC; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002EEFE0; } }
L_002EEFB4:
    set32(c.r[3], c.r[18].w[0] << 2);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEFD8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 29u, depth + 1u); else { c.pc = 0x002F0860u; return; } if (c.pc != 0x002EEFD8u) [[unlikely]] return; }
L_002EEFD8:
    st32((c.r[20].w[0] + 160u), c.r[19].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_002EEFE0:
    c.r[3].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EEFB4u | kUnwind; return; } goto L_002EEFB4; }
L_002EEFEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002EEFF0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002EF010:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002EF0CC; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002EF060; } }
L_002EF040:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF05Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0051(c, 406u, depth + 1u); else { c.pc = 0x00267770u; return; } if (c.pc != 0x002EF05Cu) [[unlikely]] return; }
L_002EF05C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002EF060:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF040u | kUnwind; return; } goto L_002EF040; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002EF07C; }
    set32(c.r[4], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 1;
L_002EF07C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002EF0D0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF090u); set32(c.r[5], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0052(c, 96u, depth + 1u); else { c.pc = 0x00268F00u; return; } if (c.pc != 0x002EF090u) [[unlikely]] return; }
L_002EF090:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EF0CC; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002EF0C0; } }
L_002EF0A4:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF0B8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 319u, depth + 1u); else { c.pc = 0x00266B90u; return; } if (c.pc != 0x002EF0B8u) [[unlikely]] return; }
L_002EF0B8:
    st32((c.r[19].w[0] + 160u), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_002EF0C0:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF0A4u | kUnwind; return; } goto L_002EF0A4; }
L_002EF0CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002EF0D0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002EF0F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002EF1A4; } }
L_002EF114:
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002EF144; }
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
L_002EF144:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[7].d[0] = 0ull + 0ull;  goto L_002EF150; }
    set32(c.r[7], c.r[2].w[0] + 272u);
    c.budget -= 1;
L_002EF150:
    set32(c.r[4], c.r[18].w[0] + 20u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF160u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 96u, depth + 1u); else { c.pc = 0x00214CF0u; return; } if (c.pc != 0x002EF160u) [[unlikely]] return; }
L_002EF160:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002EF1A4; }
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[5], c.r[17].w[0] << 2);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[5].w[0] + 112u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[3]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[5].w[0] + 32u), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF1A0u); st32((c.r[5].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x002EF1A0u) [[unlikely]] return; }
L_002EF1A0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002EF1A4:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF114u | kUnwind; return; } goto L_002EF114; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002EF1D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EEC60u | kUnwind; return; } goto L_002EEC60; }
L_002EF1E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF1FCu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x002EF1FCu) [[unlikely]] return; }
L_002EF1FC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF208u); set32(c.r[4], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x002EF208u) [[unlikely]] return; }
L_002EF208:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 30288u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 30344u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44520000u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 18259ull;
    set32(c.r[4], c.r[4].w[0] + 29136u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 76u), 0u);
    st32((c.r[17].w[0] + 72u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF244u); st32((c.r[17].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002EF244u) [[unlikely]] return; }
L_002EF244:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EF260:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002EF2C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 30288u);
    set32(c.r[2], c.r[2].w[0] + 30344u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF2A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002EF2A0u) [[unlikely]] return; }
L_002EF2A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF2ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002EF2ACu) [[unlikely]] return; }
L_002EF2AC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002EF2C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF2C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002EF2C4u) [[unlikely]] return; }
L_002EF2C4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002EF2C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EF2E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF2F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 304u, depth + 1u); else { c.pc = 0x002EF390u; return; } if (c.pc != 0x002EF2F4u) [[unlikely]] return; }
L_002EF2F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF300u); set32(c.r[4], c.r[4].w[0] + 29168u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002EF300u) [[unlikely]] return; }
L_002EF300:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EF320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002EF380; }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EF358; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EF380; } }
L_002EF358:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EF37C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 80u), 0u);  goto L_002EF37C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF378u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF378u) [[unlikely]] return; }
L_002EF378:
    st32((c.r[16].w[0] + 80u), 0u);
    c.budget -= 1;
L_002EF37C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002EF380:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EF390:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[19], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002EF3F0; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002EF3D0; } }
L_002EF3C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF3C8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 78u, depth + 1u); else { c.pc = 0x002F14A0u; return; } if (c.pc != 0x002EF3C8u) [[unlikely]] return; }
L_002EF3C8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.budget -= 2;
L_002EF3D0:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF3C0u | kUnwind; return; } goto L_002EF3C0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF3ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x002EF3ECu) [[unlikely]] return; }
L_002EF3EC:
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 1;
L_002EF3F0:
    st32((c.r[16].w[0] + 72u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002EF440:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 16;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002EF6BC; } }
    set32(c.r[9], ld32((c.r[5].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 18756ull;
    set32(c.r[4], c.r[9].w[0] << 8);
    set32(c.r[8], c.r[9].w[0] << 24);
    c.r[6].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[4], c.r[9].w[0] >> 8);
    c.r[6].d[0] = c.r[8].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 65280ull;
    c.r[6].d[0] = c.r[4].d[0] | c.r[6].d[0];
    set32(c.r[4], c.r[9].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.budget -= 15;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002EF6BC; } }
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47440000u);
    c.r[4].d[0] = c.r[3].d[0] | 18758ull;
    set32(c.r[10], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[9], ld32((c.r[10].w[0])));
    set32(c.r[5], c.r[9].w[0] << 8);
    set32(c.r[8], c.r[9].w[0] << 24);
    c.r[6].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[5], c.r[9].w[0] >> 8);
    c.r[6].d[0] = c.r[8].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    c.r[6].d[0] = c.r[5].d[0] | c.r[6].d[0];
    set32(c.r[5], c.r[9].w[0] >> 24);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.budget -= 16;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_002EF6BC; } }
    set32(c.r[5], ld32((c.r[10].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] | 17228ull;
    set32(c.r[4], ld32((c.r[10].w[0] + 4u)));
    set32(c.r[8], c.r[10].w[0] + c.r[5].w[0]);
    set32(c.r[18], c.r[8].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[6].w[0] >> 8);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65280ull;
    c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[2], c.r[6].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002EF6BC; } }
    c.f[0] = ld32((c.r[8].w[0]));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[17].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    st32((c.r[17].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 12u));
    st32((c.r[17].w[0] + 116u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 16u)));
    st16((c.r[17].w[0] + 120u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 18u)));
    st16((c.r[17].w[0] + 122u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 20u)));
    st32((c.r[17].w[0] + 124u), c.r[3].w[0]);
    c.budget -= 17;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_002EF58C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EF598; } }
L_002EF58C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30364u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_002EF5A4; } }
L_002EF598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF5A0u);  if (depth < kMaxDepth) unit_0024(c, 344u, depth + 1u); else { c.pc = 0x001B2780u; return; } if (c.pc != 0x002EF5A0u) [[unlikely]] return; }
L_002EF5A0:
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 1;
L_002EF5A4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 120u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 122u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_002EF620; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[5], c.r[2].w[0] << 4);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF5C8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x002EF5C8u) [[unlikely]] return; }
L_002EF5C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_002EF6BC; } }
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[21], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);  if (t) { goto L_002EF614; } }
L_002EF5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF5F0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 82u, depth + 1u); else { c.pc = 0x002F1510u; return; } if (c.pc != 0x002EF5F0u) [[unlikely]] return; }
L_002EF5F0:
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8u)));
    st16((c.r[20].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[18], c.r[18].w[0] + 12u);
    set32(c.r[20], c.r[20].w[0] + 16u);
    c.budget -= 9;
L_002EF614:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF5E8u | kUnwind; return; } goto L_002EF5E8; } }
L_002EF620:
    st32((c.r[17].w[0] + 92u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002EF650; }
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_002EF650:
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_002EF69C; }
    c.f[2] = ld32((c.r[17].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[3] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.f[1] = ld32((c.r[28].w[0] - 32184u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = ld32((c.r[2].w[0] + 96u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 88u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.f[0] = ld32((c.r[2].w[0] + 144u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 84u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 15;
L_002EF69C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 29200u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF6B4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002EF6B4u) [[unlikely]] return; }
L_002EF6B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002EF6DC; } }
L_002EF6BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF6C8u); set32(c.r[4], c.r[4].w[0] + 29248u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002EF6C8u) [[unlikely]] return; }
L_002EF6C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_002EF6DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002EF700:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 124u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002EF83C; } }
    c.f[1] = ld32((c.r[19].w[0] + 104u));
    c.f[0] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  goto L_002EF74C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_002EF7B4; } }
L_002EF74C:
    c.f[1] = ld32((c.r[19].w[0] + 112u));
    c.f[0] = 0u;
    c.f[12] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EF780; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF778u); c.f[12] = c.f[12] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x002EF778u) [[unlikely]] return; }
L_002EF778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_002EF788; } }
L_002EF780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF788u);  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x002EF788u) [[unlikely]] return; }
L_002EF788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF790u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002EF790u) [[unlikely]] return; }
L_002EF790:
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 120u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[16].w[0] + 8u));  goto L_002EF7B8; }
    set32(c.r[3], c.r[4].w[0] - 1u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002EF7B4:
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 1;
L_002EF7B8:
    c.f[1] = ld32((c.r[19].w[0] + 108u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  goto L_002EF7D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_002EF96C; } }
L_002EF7D0:
    c.f[1] = ld32((c.r[19].w[0] + 116u));
    c.f[0] = 0u;
    c.f[12] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EF804; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF7FCu); c.f[12] = c.f[12] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x002EF7FCu) [[unlikely]] return; }
L_002EF7FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_002EF80C; } }
L_002EF804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF80Cu);  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x002EF80Cu) [[unlikely]] return; }
L_002EF80C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF814u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002EF814u) [[unlikely]] return; }
L_002EF814:
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 122u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002EF970; }
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002EF96C; } }
L_002EF83C:
    ld128((c.r[16].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[19].w[0] + 92u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF854u); set32(c.r[6], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_0060(c, 374u, depth + 1u); else { c.pc = 0x002A38B0u; return; } if (c.pc != 0x002EF854u) [[unlikely]] return; }
L_002EF854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF85Cu); set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002EF85Cu) [[unlikely]] return; }
L_002EF85C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BB40000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 112u));
    c.f[0] = 0u;
    c.f[12] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EF8BC; } }
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EF8AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF8A4u); c.f[12] = c.f[12] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x002EF8A4u) [[unlikely]] return; }
L_002EF8A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_002EF8B4; } }
L_002EF8AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF8B4u);  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x002EF8B4u) [[unlikely]] return; }
L_002EF8B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[0];  if (t) { goto L_002EF8E4; } }
L_002EF8BC:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EF8D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF8D0u); c.f[12] = c.f[12] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x002EF8D0u) [[unlikely]] return; }
L_002EF8D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_002EF8E0; } }
L_002EF8D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF8E0u);  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x002EF8E0u) [[unlikely]] return; }
L_002EF8E0:
    c.f[12] = c.f[0];
    c.budget -= 1;
L_002EF8E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF8ECu);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002EF8ECu) [[unlikely]] return; }
L_002EF8EC:
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = 0u;
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[19].w[0] + 116u));  goto L_002EF90C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_002EF96C; } }
L_002EF90C:
    c.f[12] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EF938; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF930u); c.f[12] = c.f[12] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x002EF930u) [[unlikely]] return; }
L_002EF930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_002EF940; } }
L_002EF938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF940u);  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x002EF940u) [[unlikely]] return; }
L_002EF940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF948u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002EF948u) [[unlikely]] return; }
L_002EF948:
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 122u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EF96C; } }
    set32(c.r[3], c.r[4].w[0] - 1u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002EF96C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002EF970:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002EF990:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF9E0u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0073(c, 342u, depth + 1u); else { c.pc = 0x002EFC40u; return; } if (c.pc != 0x002EF9E0u) [[unlikely]] return; }
L_002EF9E0:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[16].d[0] = 0ull + 0ull;  goto L_002EFA0C; }
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 76u)));  goto L_002EFA04; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EFA0C; } }
L_002EFA04:
    set32(c.r[4], c.r[2].w[0] << 4);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 2;
L_002EFA0C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_002EFC0C; }
    set32(c.r[2], ld32((c.r[20].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] << 48;  goto L_002EFA98; }
    c.r[4].d[0] = c.r[17].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[22] = ld32((c.r[20].w[0] + 116u));
    c.f[21] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFA38u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002EFA38u) [[unlikely]] return; }
L_002EFA38:
    c.f[2] = ld32((c.r[20].w[0] + 108u));
    c.r[4].d[0] = c.r[18].d[0] << 48;
    c.f[1] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[23] = ld32((c.r[16].w[0] + 8u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[0]);
    c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[22]);
    c.f[22] = ld32((c.r[20].w[0] + 112u));
    c.f[20] = c.r[2].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFA68u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002EFA68u) [[unlikely]] return; }
L_002EFA68:
    c.f[2] = ld32((c.r[20].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[22]);
    st32((c.r[19].w[0]), c.f[0]);
    st32((c.r[19].w[0] + 4u), c.f[23]);
    st32((c.r[19].w[0] + 8u), c.f[21]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_002EFC08; } }
L_002EFA98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[21] = ld32((c.r[20].w[0] + 112u));
    c.f[20] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFAACu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002EFAACu) [[unlikely]] return; }
L_002EFAAC:
    c.facc = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32688u));
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[21]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFAC0u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002EFAC0u) [[unlikely]] return; }
L_002EFAC0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[21].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002EFB08; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002EFB00; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 9;
L_002EFB00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[4].w[0] + 96u));  if (t) { goto L_002EFB3C; } }
L_002EFB08:
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002EFB38; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 9;
L_002EFB38:
    c.f[20] = ld32((c.r[4].w[0] + 144u));
    c.budget -= 1;
L_002EFB3C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002EFB68; }
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
L_002EFB68:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002EFB74; }
    set32(c.r[5], c.r[3].w[0] + 208u);
    c.budget -= 1;
L_002EFB74:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFB80u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 243u, depth + 1u); else { c.pc = 0x0018FE00u; return; } if (c.pc != 0x002EFB80u) [[unlikely]] return; }
L_002EFB80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 19696u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[2] = ld32((c.r[2].w[0] + 19700u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 19704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 19708u));
    st32((c.r[29].w[0] + 132u), c.f[2]);
    st32((c.r[29].w[0] + 136u), c.f[1]);
    st32((c.r[29].w[0] + 140u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFBC4u); st32((c.r[29].w[0] + 132u), c.f[20]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x002EFBC4u) [[unlikely]] return; }
L_002EFBC4:
    c.r[4].d[0] = c.r[17].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[21] = ld32((c.r[20].w[0] + 116u));
    c.f[20] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFBDCu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002EFBDCu) [[unlikely]] return; }
L_002EFBDC:
    c.facc = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    st32((c.r[19].w[0]), 0u);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[21]);
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFC08u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002EFC08u) [[unlikely]] return; }
L_002EFC08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_002EFC0C:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002EFC40:
    set32(c.r[2], ld32((c.r[4].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[6].d[0] = c.r[6].d[0] << 48;  goto L_002EFC78; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u - 1u);  goto L_002EFCC4; }
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[6].sd[0] >= 0) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 120u)));  goto L_002EFCB4; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EFCC4; } }
L_002EFC78:
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[6].sd[0] >= 0) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 120u)));  goto L_002EFC8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002EFCC4; } }
L_002EFC8C:
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002EFCB0; } }
    set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 3;
L_002EFCB0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 120u)));
    c.budget -= 1;
L_002EFCB4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_002EFCC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EFCD0:
    set32(c.r[29], c.r[29].w[0] - 512u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.f[24]);
    st32((c.r[29].w[0] + 28u), c.f[23]);
    st32((c.r[29].w[0] + 24u), c.f[22]);
    st32((c.r[29].w[0] + 20u), c.f[21]);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 124u)));
    c.f[21] = ld32((c.r[4].w[0] + 116u));
    c.budget -= 25;
    { const bool t = c.r[3].d[0] != 0ull; c.f[23] = c.f[12];  if (t) { goto L_002EFD40; } }
    c.f[22] = ld32((c.r[21].w[0] + 112u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] | 1024ull;  if (t) { goto L_002EFD5C; } }
L_002EFD40:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[23].d[0] != c.r[2].d[0]) { c.f[22] = ld32((c.r[21].w[0] + 84u));  goto L_002EFD58; }
    c.f[22] = ld32((c.r[21].w[0] + 88u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] | 2048ull;  if (t) { goto L_002EFD5C; } }
L_002EFD58:
    c.r[18].d[0] = c.r[18].d[0] | 4096ull;
    c.budget -= 1;
L_002EFD5C:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { c.r[18].d[0] = c.r[18].d[0] | 256ull;  goto L_002EFD68; }
    c.r[18].d[0] = c.r[18].d[0] | 512ull;
    c.budget -= 1;
L_002EFD68:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 288u);  goto L_002EFDA4; }
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFD80u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002EFD80u) [[unlikely]] return; }
L_002EFD80:
    c.f[0] = ld32((c.r[29].w[0] + 280u));
    c.f[2] = ld32((c.r[29].w[0] + 272u));
    c.f[1] = ld32((c.r[29].w[0] + 276u));
    st32((c.r[29].w[0] + 488u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 284u));
    st32((c.r[29].w[0] + 480u), c.f[2]);
    st32((c.r[29].w[0] + 484u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 492u), c.f[0]);  if (t) { goto L_002EFDD8; } }
L_002EFDA4:
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFDB0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002EFDB0u) [[unlikely]] return; }
L_002EFDB0:
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 400u);
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[21].w[0] + 96u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFDC8u); set32(c.r[5], c.r[2].w[0] + 208u);  if (depth < kMaxDepth) unit_001B(c, 222u, depth + 1u); else { c.pc = 0x0018F5B0u; return; } if (c.pc != 0x002EFDC8u) [[unlikely]] return; }
L_002EFDC8:
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[5], c.r[29].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFDD8u); set32(c.r[6], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x002EFDD8u) [[unlikely]] return; }
L_002EFDD8:
    c.f[0] = ld32((c.r[29].w[0] + 480u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[22]);
    c.f[24] = ld32((c.r[19].w[0] + 32u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFDF8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x002EFDF8u) [[unlikely]] return; }
L_002EFDF8:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[24], c.f[23]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[29].w[0] + 480u));  goto L_002EFE20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EFE4C; } }
L_002EFE20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[24] = ld32((c.r[19].w[0] + 32u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFE34u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x002EFE34u) [[unlikely]] return; }
L_002EFE34:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[24], c.f[23]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 6;
L_002EFE4C:
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[22]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[29].w[0] + 480u));  goto L_002EFEF8; }
    c.f[0] = ld32((c.r[29].w[0] + 480u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[24] = ld32((c.r[19].w[0] + 32u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFE84u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x002EFE84u) [[unlikely]] return; }
L_002EFE84:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[24], c.f[23]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[29].w[0] + 480u));  goto L_002EFEAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EFED8; } }
L_002EFEAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[24] = ld32((c.r[19].w[0] + 32u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFEC0u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x002EFEC0u) [[unlikely]] return; }
L_002EFEC0:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[24], c.f[23]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 6;
L_002EFED8:
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[22]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFEF0u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x002EFEF0u) [[unlikely]] return; }
L_002EFEF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_002EFF78; } }
L_002EFEF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[24] = ld32((c.r[19].w[0] + 32u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFF0Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x002EFF0Cu) [[unlikely]] return; }
L_002EFF0C:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[24], c.f[23]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[29].w[0] + 480u));  goto L_002EFF34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EFF60; } }
L_002EFF34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[24] = ld32((c.r[19].w[0] + 32u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFF48u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x002EFF48u) [[unlikely]] return; }
L_002EFF48:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[24], c.f[23]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 6;
L_002EFF60:
    c.f[12] = fp::ee::div(c.fcr31, c.f[1], c.f[22]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFF78u);  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x002EFF78u) [[unlikely]] return; }
L_002EFF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFF80u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002EFF80u) [[unlikely]] return; }
L_002EFF80:
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[17], c.r[3].w[0] + 1u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 488u));
    c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[21]);
    c.f[22] = ld32((c.r[19].w[0] + 32u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFFA4u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x002EFFA4u) [[unlikely]] return; }
L_002EFFA4:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[23]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[29].w[0] + 488u));  goto L_002EFFCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EFFF8; } }
L_002EFFCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[22] = ld32((c.r[19].w[0] + 32u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFFE0u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x002EFFE0u) [[unlikely]] return; }
L_002EFFE0:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[23]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 6;
L_002EFFF8:
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 2;
    [[clang::musttail]] return unit_0074(c, 1u, depth);
}

}
