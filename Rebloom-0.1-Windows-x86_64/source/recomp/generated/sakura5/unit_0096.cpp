#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0096[4096] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0,
    0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 15,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0,
    0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0,
    0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 89, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 99, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 115, 0, 116, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0,
    120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0,
    0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0,
    0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0,
    0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 161, 0, 162, 0, 0, 0, 163, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 167, 0, 168, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 173,
    0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178,
    0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0,
    0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0,
    0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0,
    212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0,
    0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 227, 0, 228, 0, 0, 0, 229, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 233, 0, 234, 0, 0, 0, 235, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238,
    0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    0, 0, 243, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 250, 0, 251, 0, 0, 0, 0, 252, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0,
    0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    258, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0,
    0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0,
    289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0,
    0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0,
    301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 307, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0,
    0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0,
    0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0,
    0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0,
    349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0,
    0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0096(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00378150;
    case 2u: goto L_003781B0;
    case 3u: goto L_003781C4;
    case 4u: goto L_003781D0;
    case 5u: goto L_003781D8;
    case 6u: goto L_003781E0;
    case 7u: goto L_003781E8;
    case 8u: goto L_003781F0;
    case 9u: goto L_003781F8;
    case 10u: goto L_00378210;
    case 11u: goto L_00378258;
    case 12u: goto L_003782C8;
    case 13u: goto L_003782E0;
    case 14u: goto L_003782E8;
    case 15u: goto L_003782FC;
    case 16u: goto L_00378310;
    case 17u: goto L_00378324;
    case 18u: goto L_00378360;
    case 19u: goto L_00378398;
    case 20u: goto L_003783AC;
    case 21u: goto L_003783D0;
    case 22u: goto L_003783EC;
    case 23u: goto L_00378408;
    case 24u: goto L_00378420;
    case 25u: goto L_00378434;
    case 26u: goto L_00378458;
    case 27u: goto L_0037846C;
    case 28u: goto L_003784A0;
    case 29u: goto L_00378510;
    case 30u: goto L_00378558;
    case 31u: goto L_00378570;
    case 32u: goto L_003785B0;
    case 33u: goto L_00378600;
    case 34u: goto L_00378610;
    case 35u: goto L_00378644;
    case 36u: goto L_00378658;
    case 37u: goto L_00378668;
    case 38u: goto L_00378740;
    case 39u: goto L_003787A0;
    case 40u: goto L_003787B0;
    case 41u: goto L_003787D8;
    case 42u: goto L_00378808;
    case 43u: goto L_00378838;
    case 44u: goto L_00378870;
    case 45u: goto L_00378930;
    case 46u: goto L_00378968;
    case 47u: goto L_003789AC;
    case 48u: goto L_003789D0;
    case 49u: goto L_00378A14;
    case 50u: goto L_00378A30;
    case 51u: goto L_00378A80;
    case 52u: goto L_00378A88;
    case 53u: goto L_00378AA8;
    case 54u: goto L_00378AF8;
    case 55u: goto L_00378B18;
    case 56u: goto L_00378B34;
    case 57u: goto L_00378B58;
    case 58u: goto L_00378B70;
    case 59u: goto L_00378BAC;
    case 60u: goto L_00378BBC;
    case 61u: goto L_00378BF0;
    case 62u: goto L_00378C2C;
    case 63u: goto L_00378C38;
    case 64u: goto L_00378C4C;
    case 65u: goto L_00378C60;
    case 66u: goto L_00378C68;
    case 67u: goto L_00378CE0;
    case 68u: goto L_00378D10;
    case 69u: goto L_00378D70;
    case 70u: goto L_00378D88;
    case 71u: goto L_00378DC8;
    case 72u: goto L_00378E18;
    case 73u: goto L_00378E48;
    case 74u: goto L_00378E8C;
    case 75u: goto L_00379068;
    case 76u: goto L_0037909C;
    case 77u: goto L_003790F8;
    case 78u: goto L_0037912C;
    case 79u: goto L_003791E0;
    case 80u: goto L_003791F8;
    case 81u: goto L_00379210;
    case 82u: goto L_00379248;
    case 83u: goto L_00379278;
    case 84u: goto L_00379290;
    case 85u: goto L_003792A8;
    case 86u: goto L_003792C0;
    case 87u: goto L_003792E0;
    case 88u: goto L_00379300;
    case 89u: goto L_0037930C;
    case 90u: goto L_00379314;
    case 91u: goto L_00379328;
    case 92u: goto L_00379338;
    case 93u: goto L_00379340;
    case 94u: goto L_00379348;
    case 95u: goto L_00379358;
    case 96u: goto L_00379388;
    case 97u: goto L_003793A8;
    case 98u: goto L_003793B8;
    case 99u: goto L_003793C0;
    case 100u: goto L_003793C8;
    case 101u: goto L_003793D8;
    case 102u: goto L_00379428;
    case 103u: goto L_00379444;
    case 104u: goto L_00379450;
    case 105u: goto L_00379458;
    case 106u: goto L_00379470;
    case 107u: goto L_003794A0;
    case 108u: goto L_00379524;
    case 109u: goto L_00379538;
    case 110u: goto L_0037954C;
    case 111u: goto L_00379554;
    case 112u: goto L_00379568;
    case 113u: goto L_003795D8;
    case 114u: goto L_003795F0;
    case 115u: goto L_00379604;
    case 116u: goto L_0037960C;
    case 117u: goto L_00379614;
    case 118u: goto L_00379628;
    case 119u: goto L_0037966C;
    case 120u: goto L_00379680;
    case 121u: goto L_003796A4;
    case 122u: goto L_003796B4;
    case 123u: goto L_003796D0;
    case 124u: goto L_00379730;
    case 125u: goto L_00379744;
    case 126u: goto L_0037974C;
    case 127u: goto L_00379760;
    case 128u: goto L_003797C8;
    case 129u: goto L_00379800;
    case 130u: goto L_00379810;
    case 131u: goto L_0037983C;
    case 132u: goto L_00379850;
    case 133u: goto L_00379870;
    case 134u: goto L_00379940;
    case 135u: goto L_00379950;
    case 136u: goto L_00379974;
    case 137u: goto L_00379984;
    case 138u: goto L_003799A0;
    case 139u: goto L_00379A30;
    case 140u: goto L_00379A40;
    case 141u: goto L_00379A64;
    case 142u: goto L_00379A74;
    case 143u: goto L_00379A90;
    case 144u: goto L_00379B60;
    case 145u: goto L_00379B80;
    case 146u: goto L_00379B90;
    case 147u: goto L_00379BBC;
    case 148u: goto L_00379BD0;
    case 149u: goto L_00379BD8;
    case 150u: goto L_00379BF8;
    case 151u: goto L_00379C54;
    case 152u: goto L_00379CA4;
    case 153u: goto L_00379CD0;
    case 154u: goto L_00379CD8;
    case 155u: goto L_00379CF8;
    case 156u: goto L_00379D18;
    case 157u: goto L_00379D24;
    case 158u: goto L_00379D2C;
    case 159u: goto L_00379D40;
    case 160u: goto L_00379D50;
    case 161u: goto L_00379D58;
    case 162u: goto L_00379D60;
    case 163u: goto L_00379D70;
    case 164u: goto L_00379DA0;
    case 165u: goto L_00379DC0;
    case 166u: goto L_00379DD0;
    case 167u: goto L_00379DD8;
    case 168u: goto L_00379DE0;
    case 169u: goto L_00379DF0;
    case 170u: goto L_00379E40;
    case 171u: goto L_00379E64;
    case 172u: goto L_00379E74;
    case 173u: goto L_00379E7C;
    case 174u: goto L_00379E98;
    case 175u: goto L_00379ED0;
    case 176u: goto L_00379F50;
    case 177u: goto L_00379F68;
    case 178u: goto L_00379F7C;
    case 179u: goto L_00379F84;
    case 180u: goto L_00379F98;
    case 181u: goto L_0037A008;
    case 182u: goto L_0037A020;
    case 183u: goto L_0037A028;
    case 184u: goto L_0037A038;
    case 185u: goto L_0037A04C;
    case 186u: goto L_0037A054;
    case 187u: goto L_0037A068;
    case 188u: goto L_0037A0E8;
    case 189u: goto L_0037A124;
    case 190u: goto L_0037A138;
    case 191u: goto L_0037A164;
    case 192u: goto L_0037A178;
    case 193u: goto L_0037A198;
    case 194u: goto L_0037A328;
    case 195u: goto L_0037A338;
    case 196u: goto L_0037A35C;
    case 197u: goto L_0037A36C;
    case 198u: goto L_0037A388;
    case 199u: goto L_0037A44C;
    case 200u: goto L_0037A48C;
    case 201u: goto L_0037A4F0;
    case 202u: goto L_0037A508;
    case 203u: goto L_0037A52C;
    case 204u: goto L_0037A53C;
    case 205u: goto L_0037A558;
    case 206u: goto L_0037A674;
    case 207u: goto L_0037A6F4;
    case 208u: goto L_0037A720;
    case 209u: goto L_0037A738;
    case 210u: goto L_0037A764;
    case 211u: goto L_0037A778;
    case 212u: goto L_0037A780;
    case 213u: goto L_0037A7A0;
    case 214u: goto L_0037A7FC;
    case 215u: goto L_0037A874;
    case 216u: goto L_0037A898;
    case 217u: goto L_0037A8A0;
    case 218u: goto L_0037A8A8;
    case 219u: goto L_0037A8C8;
    case 220u: goto L_0037A8E0;
    case 221u: goto L_0037A900;
    case 222u: goto L_0037A920;
    case 223u: goto L_0037A92C;
    case 224u: goto L_0037A934;
    case 225u: goto L_0037A948;
    case 226u: goto L_0037A958;
    case 227u: goto L_0037A960;
    case 228u: goto L_0037A968;
    case 229u: goto L_0037A978;
    case 230u: goto L_0037A9A8;
    case 231u: goto L_0037A9C8;
    case 232u: goto L_0037A9D8;
    case 233u: goto L_0037A9E0;
    case 234u: goto L_0037A9E8;
    case 235u: goto L_0037A9F8;
    case 236u: goto L_0037AA48;
    case 237u: goto L_0037AA6C;
    case 238u: goto L_0037AA7C;
    case 239u: goto L_0037AA84;
    case 240u: goto L_0037AAA0;
    case 241u: goto L_0037AAD8;
    case 242u: goto L_0037AB70;
    case 243u: goto L_0037AB88;
    case 244u: goto L_0037AB9C;
    case 245u: goto L_0037ABA4;
    case 246u: goto L_0037ABB8;
    case 247u: goto L_0037AC28;
    case 248u: goto L_0037AC40;
    case 249u: goto L_0037AC54;
    case 250u: goto L_0037AC5C;
    case 251u: goto L_0037AC64;
    case 252u: goto L_0037AC78;
    case 253u: goto L_0037ACBC;
    case 254u: goto L_0037ACD0;
    case 255u: goto L_0037ACF4;
    case 256u: goto L_0037AD04;
    case 257u: goto L_0037AD20;
    case 258u: goto L_0037AD80;
    case 259u: goto L_0037AD94;
    case 260u: goto L_0037AD9C;
    case 261u: goto L_0037ADB0;
    case 262u: goto L_0037AE18;
    case 263u: goto L_0037AE60;
    case 264u: goto L_0037AE88;
    case 265u: goto L_0037AEA4;
    case 266u: goto L_0037AEB0;
    case 267u: goto L_0037AEB8;
    case 268u: goto L_0037AED0;
    case 269u: goto L_0037AF14;
    case 270u: goto L_0037AF40;
    case 271u: goto L_0037AF58;
    case 272u: goto L_0037AF88;
    case 273u: goto L_0037AFB4;
    case 274u: goto L_0037AFC8;
    case 275u: goto L_0037AFE8;
    case 276u: goto L_0037B018;
    case 277u: goto L_0037B040;
    case 278u: goto L_0037B068;
    case 279u: goto L_0037B0F4;
    case 280u: goto L_0037B138;
    case 281u: goto L_0037B15C;
    case 282u: goto L_0037B16C;
    case 283u: goto L_0037B188;
    case 284u: goto L_0037B20C;
    case 285u: goto L_0037B280;
    case 286u: goto L_0037B2B0;
    case 287u: goto L_0037B2D4;
    case 288u: goto L_0037B2E4;
    case 289u: goto L_0037B300;
    case 290u: goto L_0037B3DC;
    case 291u: goto L_0037B420;
    case 292u: goto L_0037B44C;
    case 293u: goto L_0037B460;
    case 294u: goto L_0037B468;
    case 295u: goto L_0037B488;
    case 296u: goto L_0037B4CC;
    case 297u: goto L_0037B4F8;
    case 298u: goto L_0037B550;
    case 299u: goto L_0037B56C;
    case 300u: goto L_0037B578;
    case 301u: goto L_0037B580;
    case 302u: goto L_0037B598;
    case 303u: goto L_0037B5DC;
    case 304u: goto L_0037B5F8;
    case 305u: goto L_0037B628;
    case 306u: goto L_0037B63C;
    case 307u: goto L_0037B644;
    case 308u: goto L_0037B64C;
    case 309u: goto L_0037B660;
    case 310u: goto L_0037B6A4;
    case 311u: goto L_0037B6B8;
    case 312u: goto L_0037B6E0;
    case 313u: goto L_0037B740;
    case 314u: goto L_0037B7D8;
    case 315u: goto L_0037B888;
    case 316u: goto L_0037B8B0;
    case 317u: goto L_0037B8C0;
    case 318u: goto L_0037B8E8;
    case 319u: goto L_0037B908;
    case 320u: goto L_0037B920;
    case 321u: goto L_0037B968;
    case 322u: goto L_0037B978;
    case 323u: goto L_0037B988;
    case 324u: goto L_0037B9AC;
    case 325u: goto L_0037B9C4;
    case 326u: goto L_0037B9F0;
    case 327u: goto L_0037BA30;
    case 328u: goto L_0037BA48;
    case 329u: goto L_0037BA84;
    case 330u: goto L_0037BA98;
    case 331u: goto L_0037BAD8;
    case 332u: goto L_0037BAF0;
    case 333u: goto L_0037BB90;
    case 334u: goto L_0037BC30;
    case 335u: goto L_0037BCD0;
    case 336u: goto L_0037BD0C;
    case 337u: goto L_0037BD20;
    case 338u: goto L_0037BD68;
    case 339u: goto L_0037BD88;
    case 340u: goto L_0037BDBC;
    case 341u: goto L_0037BDD8;
    case 342u: goto L_0037BE18;
    case 343u: goto L_0037BE30;
    case 344u: goto L_0037BE58;
    case 345u: goto L_0037BE68;
    case 346u: goto L_0037BE94;
    case 347u: goto L_0037BEB8;
    case 348u: goto L_0037BEF8;
    case 349u: goto L_0037BF00;
    case 350u: goto L_0037BF20;
    case 351u: goto L_0037BF74;
    case 352u: goto L_0037BF98;
    case 353u: goto L_0037BFC8;
    case 354u: goto L_0037BFE0;
    default: bad_entry(c, 0x00378000u); return;
    }
L_00378150:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17912u)));
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_00378180; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17904u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003781FC; } }
L_00378180:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] + 17980u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003781F8; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[16], c.r[16].w[0] + 17932u);
    set32(c.r[17], c.r[17].w[0] + 28816u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003781B0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0003(c, 134u, depth + 1u); else { c.pc = 0x0012D400u; return; } if (c.pc != 0x003781B0u) [[unlikely]] return; }
L_003781B0:
    st32((c.r[16].w[0]), 0u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003781C4u); set32(c.r[16], c.r[16].w[0] + 17988u);  if (depth < kMaxDepth) unit_0094(c, 142u, depth + 1u); else { c.pc = 0x00371378u; return; } if (c.pc != 0x003781C4u) [[unlikely]] return; }
L_003781C4:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003781D0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0003(c, 134u, depth + 1u); else { c.pc = 0x0012D400u; return; } if (c.pc != 0x003781D0u) [[unlikely]] return; }
L_003781D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003781D8u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_0095(c, 353u, depth + 1u); else { c.pc = 0x003774F8u; return; } if (c.pc != 0x003781D8u) [[unlikely]] return; }
L_003781D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003781E0u);  if (depth < kMaxDepth) unit_0095(c, 394u, depth + 1u); else { c.pc = 0x00377E30u; return; } if (c.pc != 0x003781E0u) [[unlikely]] return; }
L_003781E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003781E8u);  if (depth < kMaxDepth) unit_0094(c, 161u, depth + 1u); else { c.pc = 0x00371650u; return; } if (c.pc != 0x003781E8u) [[unlikely]] return; }
L_003781E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003781F0u);  if (depth < kMaxDepth) unit_0097(c, 13u, depth + 1u); else { c.pc = 0x0037C178u; return; } if (c.pc != 0x003781F0u) [[unlikely]] return; }
L_003781F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003781F8u);  if (depth < kMaxDepth) unit_0096(c, 341u, depth + 1u); else { c.pc = 0x0037BDD8u; return; } if (c.pc != 0x003781F8u) [[unlikely]] return; }
L_003781F8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003781FC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00378210:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    set32(c.r[19], c.r[2].w[0] + 27216u);
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; c.r[22].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0037827C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_00378258:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 100u);
    c.r[2].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 100u);  if (t) { goto L_0037827C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[3].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00378258u | kUnwind; return; } goto L_00378258; } }
L_0037827C:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00378588; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 17912u)));
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003782B8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17904u)));
    c.budget -= 4;
    if (c.r[3].sd[0] > 0) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003782B8; }
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00378588; } }
L_003782B8:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003782C8u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003782C8u) [[unlikely]] return; }
L_003782C8:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; st32((c.r[19].w[0] + 4u), c.r[18].w[0]);  if (t) { goto L_00378348; } }
    set32(c.r[20], c.r[19].w[0] + 8u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
L_003782E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003782E8u);  if (depth < kMaxDepth) unit_0095(c, 360u, depth + 1u); else { c.pc = 0x003775D8u; return; } if (c.pc != 0x003782E8u) [[unlikely]] return; }
L_003782E8:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { goto L_00378338; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003782FCu); set32(c.r[4], c.r[21].w[0] + 3776u);  if (depth < kMaxDepth) unit_008F(c, 57u, depth + 1u); else { c.pc = 0x0035C9E8u; return; } if (c.pc != 0x003782FCu) [[unlikely]] return; }
L_003782FC:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00378588; } }
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
L_00378310:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00378324; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378324u);  if (depth < kMaxDepth) unit_0095(c, 362u, depth + 1u); else { c.pc = 0x00377650u; return; } if (c.pc != 0x00378324u) [[unlikely]] return; }
L_00378324:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00378310u | kUnwind; return; } goto L_00378310; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00378588; } }
L_00378338:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003782E0u | kUnwind; return; } goto L_003782E0; } }
L_00378348:
    st32((c.r[29].w[0]), c.r[18].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] <= 0; st32((c.r[29].w[0] + 4u), 0u);  if (t) { goto L_00378380; } }
    set32(c.r[6], c.r[29].w[0] + 8u);
    set32(c.r[5], c.r[19].w[0] + 8u);
    c.budget -= 2;
L_00378360:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00378360u | kUnwind; return; } goto L_00378360; } }
L_00378380:
    set32(c.r[4], 0u + 8u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378398u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0094(c, 164u, depth + 1u); else { c.pc = 0x003716C8u; return; } if (c.pc != 0x00378398u) [[unlikely]] return; }
L_00378398:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_003783B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003783ACu); set32(c.r[4], c.r[4].w[0] + 3816u);  if (depth < kMaxDepth) unit_008F(c, 57u, depth + 1u); else { c.pc = 0x0035C9E8u; return; } if (c.pc != 0x003783ACu) [[unlikely]] return; }
L_003783AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00378588; } }
    c.budget -= 1;
L_003783B8:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00378490; } }
    set32(c.r[20], c.r[19].w[0] + 8u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[16], c.r[19].w[0] + 16u);
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 4;
L_003783D0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003783ECu); set32(c.r[5], ld32((c.r[6].w[0] + 8u)));  if (depth < kMaxDepth) unit_0094(c, 104u, depth + 1u); else { c.pc = 0x00370D48u; return; } if (c.pc != 0x003783ECu) [[unlikely]] return; }
L_003783EC:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { goto L_00378488; } }
    set32(c.r[4], c.r[21].w[0] + 3856u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378408u); c.r[21].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 57u, depth + 1u); else { c.pc = 0x0035C9E8u; return; } if (c.pc != 0x00378408u) [[unlikely]] return; }
L_00378408:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00378588; } }
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], c.r[19].w[0] + 16u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
L_00378420:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00378434; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378434u);  if (depth < kMaxDepth) unit_0094(c, 110u, depth + 1u); else { c.pc = 0x00370E38u; return; } if (c.pc != 0x00378434u) [[unlikely]] return; }
L_00378434:
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 9u);  if (t) { goto L_00378458; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378458u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0094(c, 164u, depth + 1u); else { c.pc = 0x003716C8u; return; } if (c.pc != 0x00378458u) [[unlikely]] return; }
L_00378458:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { goto L_0037846C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037846Cu);  if (depth < kMaxDepth) unit_0095(c, 362u, depth + 1u); else { c.pc = 0x00377650u; return; } if (c.pc != 0x0037846Cu) [[unlikely]] return; }
L_0037846C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00378420u | kUnwind; return; } goto L_00378420; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00378588; } }
    c.budget -= 1;
L_00378488:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003783D0u | kUnwind; return; } goto L_003783D0; } }
L_00378490:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003784BC; } }
    set32(c.r[5], c.r[19].w[0] + 24u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 2;
L_003784A0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003784A0u | kUnwind; return; } goto L_003784A0; } }
L_003784BC:
    st8((c.r[19].w[0] + 80u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st8((c.r[19].w[0] + 81u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 17976u);
    st8((c.r[19].w[0] + 82u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[19].w[0] + 83u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[19].w[0] + 84u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 85u), static_cast<std::uint8_t>(0u));
    st32((c.r[19].w[0] + 56u), 0u);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st32((c.r[19].w[0] + 60u), 0u);
    st8((c.r[19].w[0] + 86u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[19].w[0] + 91u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 87u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 17;
    { const bool t = c.r[18].sd[0] <= 0; st8((c.r[19].w[0] + 90u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0037852C; } }
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 8u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
L_00378510:
    set32(c.r[2], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[17], c.r[17].w[0] - 1u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[3].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00378510u | kUnwind; return; } goto L_00378510; } }
L_0037852C:
    set32(c.r[17], 0u + 1u);
    st8((c.r[19].w[0] + 88u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 89u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[19].w[0] + 92u), 0u);
    set32(c.r[4], ld32((c.r[22].w[0])));
    st32((c.r[19].w[0] + 96u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[19].w[0] + 36u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00378558u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00378558u) [[unlikely]] return; }
L_00378558:
    set32(c.r[4], ld32((c.r[22].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00378570u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00378570u) [[unlikely]] return; }
L_00378570:
    set32(c.r[3], 0u + 16384u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 40u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 44u), c.r[3].w[0]);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 6;
L_00378588:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003785B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17912u)));
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_003785E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17904u)));
    c.budget -= 4;
    if (c.r[3].sd[0] <= 0) { st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));  goto L_00378680; }
L_003785E8:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00378624; } }
    set32(c.r[16], c.r[17].w[0] + 16u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
L_00378600:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { goto L_00378614; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378610u);  if (depth < kMaxDepth) unit_0094(c, 110u, depth + 1u); else { c.pc = 0x00370E38u; return; } if (c.pc != 0x00378610u) [[unlikely]] return; }
L_00378610:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00378614:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00378600u | kUnwind; return; } goto L_00378600; }
L_00378624:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[4], 0u + 9u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378644u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0094(c, 164u, depth + 1u); else { c.pc = 0x003716C8u; return; } if (c.pc != 0x00378644u) [[unlikely]] return; }
L_00378644:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0037867C; } }
    set32(c.r[16], c.r[17].w[0] + 8u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_00378658:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { goto L_0037866C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378668u);  if (depth < kMaxDepth) unit_0095(c, 362u, depth + 1u); else { c.pc = 0x00377650u; return; } if (c.pc != 0x00378668u) [[unlikely]] return; }
L_00378668:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0037866C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00378658u | kUnwind; return; } goto L_00378658; }
L_0037867C:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00378680:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00378740:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 17912u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 82u)));  if (t) { goto L_00378780; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17904u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003787C0; } }
L_00378780:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; st8((c.r[18].w[0] + 88u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003787BC; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003787C0; } }
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], 0u + 1u);
    set32(c.r[16], c.r[18].w[0] + 16u);
    c.budget -= 4;
L_003787A0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003787B0u); set32(c.r[17], c.r[17].w[0] - 1u);  if (depth < kMaxDepth) unit_0094(c, 113u, depth + 1u); else { c.pc = 0x00370E70u; return; } if (c.pc != 0x003787B0u) [[unlikely]] return; }
L_003787B0:
    st8((c.r[18].w[0] + 89u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; st8((c.r[18].w[0] + 88u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003787A0u | kUnwind; return; } goto L_003787A0; } }
L_003787BC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003787C0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003787D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17912u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[6].d[0]) { st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[5].w[0]));  goto L_003787FC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17904u)));
    c.budget -= 4;
    if (c.r[3].sd[0] > 0) { st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[5].w[0]));  goto L_003787FC; }
L_003787FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378808:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17912u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);  if (t) { goto L_0037882C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17904u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);  if (t) { goto L_00378830; } }
L_0037882C:
    st32((c.r[2].w[0] + 17956u), c.r[4].w[0]);
    c.budget -= 1;
L_00378830:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378838:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17912u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);  if (t) { goto L_00378860; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 17904u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00378864; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 1;
L_00378860:
    set32(c.r[2], ld32((c.r[3].w[0] + 17956u)));
    c.budget -= 1;
L_00378864:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378870:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17912u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[6].d[0]) { st8((c.r[4].w[0] + 91u), static_cast<std::uint8_t>(c.r[5].w[0]));  goto L_00378894; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17904u)));
    c.budget -= 4;
    if (c.r[3].sd[0] > 0) { st8((c.r[4].w[0] + 91u), static_cast<std::uint8_t>(c.r[5].w[0]));  goto L_00378894; }
L_00378894:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378930:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17912u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[2].d[0] = 0ull | 48000ull;  if (t) { goto L_00378954; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17904u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].d[0] = 0ull | 48000ull;  if (t) { goto L_0037895C; } }
L_00378954:
    st32((c.r[5].w[0]), 0u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0037895C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378968:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17912u)));
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00378994; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 17904u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003789C0; } }
L_00378994:
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003789ACu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003789ACu) [[unlikely]] return; }
L_003789AC:
    set32(c.r[3], 0u + 16384u);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 5;
L_003789C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003789D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17912u)));
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003789FC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 17904u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00378A20; } }
L_003789FC:
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00378A14u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00378A14u) [[unlikely]] return; }
L_00378A14:
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 3;
L_00378A20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00378A30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 88u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00378BD0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 82u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld8((c.r[17].w[0] + 82u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00378AD0; } }
    set32(c.r[20], 0u + 1u);
    set32(c.r[16], c.r[17].w[0] + 8u);
    c.budget -= 3;
L_00378A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378A88u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0094(c, 95u, depth + 1u); else { c.pc = 0x00370C00u; return; } if (c.pc != 0x00378A88u) [[unlikely]] return; }
L_00378A88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[20].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00378AB8; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00378AA8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00378AA8u) [[unlikely]] return; }
L_00378AA8:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    if (c.r[2].d[0] == 0) c.r[18].d[0] = c.r[4].d[0];
    c.budget -= 4;
L_00378AB8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 82u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = ld8((c.r[17].w[0] + 82u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00378A80u | kUnwind; return; } goto L_00378A80; } }
L_00378AD0:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00378BD0; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00378BD0; } }
    set32(c.r[18], c.r[17].w[0] + 16u);
    set32(c.r[16], c.r[17].w[0] + 8u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
L_00378AF8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00378B18u); c.r[6].d[0] = c.r[6].d[0] | 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00378B18u) [[unlikely]] return; }
L_00378B18:
    set32(c.r[7], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00378B34u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00378B34u) [[unlikely]] return; }
L_00378B34:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00378B58u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00378B58u) [[unlikely]] return; }
L_00378B58:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_00378B90; } }
    c.budget -= 1;
L_00378B70:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00378B70u | kUnwind; return; } goto L_00378B70; } }
    c.budget -= 1;
L_00378B90:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00378BACu); set32(c.r[19], c.r[19].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00378BACu) [[unlikely]] return; }
L_00378BAC:
    st8((c.r[17].w[0] + 91u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378BBCu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0094(c, 112u, depth + 1u); else { c.pc = 0x00370E60u; return; } if (c.pc != 0x00378BBCu) [[unlikely]] return; }
L_00378BBC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 82u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00378AF8u | kUnwind; return; } goto L_00378AF8; }
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00378BD0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00378BF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17912u)));
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_00378C24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17904u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00378C80; } }
L_00378C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378C2Cu); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_0096(c, 79u, depth + 1u); else { c.pc = 0x003791E0u; return; } if (c.pc != 0x00378C2Cu) [[unlikely]] return; }
L_00378C2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[16], c.r[2].w[0] + 27216u);
    set32(c.r[17], 0u + 15u);
    c.budget -= 3;
L_00378C38:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_00378C50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378C4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 50u, depth + 1u); else { c.pc = 0x00378A30u; return; } if (c.pc != 0x00378C4Cu) [[unlikely]] return; }
L_00378C4C:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00378C50:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 100u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00378C38u | kUnwind; return; } goto L_00378C38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378C60u);  if (depth < kMaxDepth) unit_0096(c, 80u, depth + 1u); else { c.pc = 0x003791F8u; return; } if (c.pc != 0x00378C60u) [[unlikely]] return; }
L_00378C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378C68u);  if (depth < kMaxDepth) unit_0094(c, 96u, depth + 1u); else { c.pc = 0x00370C08u; return; } if (c.pc != 0x00378C68u) [[unlikely]] return; }
L_00378C68:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_0037BFC8; }
L_00378C80:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00378CE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17912u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[6].d[0]) { st8((c.r[4].w[0] + 82u), static_cast<std::uint8_t>(c.r[5].w[0]));  goto L_00378D04; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17904u)));
    c.budget -= 4;
    if (c.r[3].sd[0] > 0) { st8((c.r[4].w[0] + 82u), static_cast<std::uint8_t>(c.r[5].w[0]));  goto L_00378D04; }
L_00378D04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378D10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17912u)));
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_00378D48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17904u)));
    c.budget -= 4;
    if (c.r[3].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00378D78; }
L_00378D48:
    c.r[2].d[0] = 0ull | 48000ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x00378D50u);  goto L_00378D54; }
L_00378D54:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[17].w[0] + 48u), c.r[16].w[0]);  goto L_00378D74; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378D70u); set32(c.r[4], c.r[4].w[0] + 4048u);  if (depth < kMaxDepth) unit_008F(c, 54u, depth + 1u); else { c.pc = 0x0035C970u; return; } if (c.pc != 0x00378D70u) [[unlikely]] return; }
L_00378D70:
    st32((c.r[17].w[0] + 48u), c.r[16].w[0]);
    c.budget -= 1;
L_00378D74:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00378D78:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00378D88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17912u)));
    c.r[2].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; if (c.r[2].d[0] != 0) c.r[5].d[0] = 0ull;  if (t) { goto L_00378DB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17904u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00378DC0; } }
L_00378DB0:
    c.r[3].d[0] = c.r[5].sd[0] < -999ll ? 1ull : 0ull;
    set32(c.r[2], 0u - 999u);
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[2].d[0];
    st32((c.r[4].w[0] + 56u), c.r[5].w[0]);
    c.budget -= 4;
L_00378DC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378DC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17912u)));
    c.r[9].d[0] = c.r[6].sd[0] < -15ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[7].d[0]; c.r[8].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00378DF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17904u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00378E10; } }
L_00378DF0:
    set32(c.r[2], 0u - 15u);
    set32(c.r[4], c.r[5].w[0] << 2);
    if (c.r[9].d[0] == 0) c.r[2].d[0] = c.r[6].d[0];
    set32(c.r[5], 0u + 15u);
    c.r[3].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[5].d[0];
    st32((c.r[4].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 8;
L_00378E10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378E18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17912u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[6].d[0]) { st32((c.r[4].w[0] + 92u), c.r[5].w[0]);  goto L_00378E3C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17904u)));
    c.budget -= 4;
    if (c.r[3].sd[0] > 0) { st32((c.r[4].w[0] + 92u), c.r[5].w[0]);  goto L_00378E3C; }
L_00378E3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378E48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17912u)));
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00378E74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17904u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00378E90; } }
L_00378E74:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00378E90; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378E8Cu); set32(c.r[4], c.r[4].w[0] + 4112u);  if (depth < kMaxDepth) unit_008F(c, 57u, depth + 1u); else { c.pc = 0x0035C9E8u; return; } if (c.pc != 0x00378E8Cu) [[unlikely]] return; }
L_00378E8C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00378E90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00379068:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17912u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00379090; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 17904u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003790A0; } }
L_00379090:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037909Cu); set32(c.r[4], c.r[4].w[0] + 4280u);  if (depth < kMaxDepth) unit_008F(c, 57u, depth + 1u); else { c.pc = 0x0035C9E8u; return; } if (c.pc != 0x0037909Cu) [[unlikely]] return; }
L_0037909C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003790A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003790F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17912u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00379120; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 17904u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00379130; } }
L_00379120:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037912Cu); set32(c.r[4], c.r[4].w[0] + 4368u);  if (depth < kMaxDepth) unit_008F(c, 57u, depth + 1u); else { c.pc = 0x0035C9E8u; return; } if (c.pc != 0x0037912Cu) [[unlikely]] return; }
L_0037912C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00379130:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003791E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] + 31080u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_003791F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] + 31080u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_00379210:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 31096u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);  if (t) { goto L_0037923C; } }
    set32(c.r[2], c.r[2].w[0] + 31088u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 2;
L_0037923C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00379248:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] + 31096u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);  if (t) { goto L_00379270; } }
    set32(c.r[2], c.r[2].w[0] + 31088u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 2;
L_00379270:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00379278:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0097(c, 28u, depth); }
L_00379290:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0097(c, 29u, depth); }
L_003792A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0097(c, 40u, depth); }
L_003792C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 4424u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003792A8u | kUnwind; return; } goto L_003792A8; }
L_003792E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379300u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x001477A8u; return; } if (c.pc != 0x00379300u) [[unlikely]] return; }
L_00379300:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037930Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00147530u; return; } if (c.pc != 0x0037930Cu) [[unlikely]] return; }
L_0037930C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379314u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 85u, depth + 1u); else { c.pc = 0x003792A8u; return; } if (c.pc != 0x00379314u) [[unlikely]] return; }
L_00379314:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00379328:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379338u);  if (depth < kMaxDepth) unit_0096(c, 81u, depth + 1u); else { c.pc = 0x00379210u; return; } if (c.pc != 0x00379338u) [[unlikely]] return; }
L_00379338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379340u);  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x00379340u) [[unlikely]] return; }
L_00379340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379348u);  if (depth < kMaxDepth) unit_0096(c, 95u, depth + 1u); else { c.pc = 0x00379358u; return; } if (c.pc != 0x00379348u) [[unlikely]] return; }
L_00379348:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379290u | kUnwind; return; } goto L_00379290; }
L_00379358:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 31152u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_0037938C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 31160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379388u); set32(c.r[6], 0u + 1152u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x00379388u) [[unlikely]] return; }
L_00379388:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0037938C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003793A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003793B8u);  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x003793B8u) [[unlikely]] return; }
L_003793B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003793C0u);  if (depth < kMaxDepth) unit_0096(c, 101u, depth + 1u); else { c.pc = 0x003793D8u; return; } if (c.pc != 0x003793C0u) [[unlikely]] return; }
L_003793C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003793C8u);  if (depth < kMaxDepth) unit_0096(c, 84u, depth + 1u); else { c.pc = 0x00379290u; return; } if (c.pc != 0x003793C8u) [[unlikely]] return; }
L_003793C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379248u | kUnwind; return; } goto L_00379248; }
L_003793D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 31152u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_00379418; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 31160u);
    set32(c.r[6], 0u + 1152u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00145560u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 81u, depth); }
L_00379418:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00379428:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379444u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x00379444u) [[unlikely]] return; }
L_00379444:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379450u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 106u, depth + 1u); else { c.pc = 0x00379470u; return; } if (c.pc != 0x00379450u) [[unlikely]] return; }
L_00379450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379458u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 84u, depth + 1u); else { c.pc = 0x00379290u; return; } if (c.pc != 0x00379458u) [[unlikely]] return; }
L_00379458:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00379470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[6].w[0] + 31160u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[3], c.r[2].w[0] + 4u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003794C4; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_003794A0:
    c.r[2].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 36u);  if (t) { goto L_003794C4; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003794A0u | kUnwind; return; } goto L_003794A0; }
L_003794C4:
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00379528; } }
    set32(c.r[16], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[6].w[0] + 31160u);
    set32(c.r[16], c.r[16].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[16], c.r[16].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 31104u);
    set32(c.r[6], c.r[6].w[0] + 4408u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] - 27968u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[5].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379524u); st32((c.r[16].w[0] + 32u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0096(c, 127u, depth + 1u); else { c.pc = 0x00379760u; return; } if (c.pc != 0x00379524u) [[unlikely]] return; }
L_00379524:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00379528:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00379538:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037954Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x0037954Cu) [[unlikely]] return; }
L_0037954C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379554u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 112u, depth + 1u); else { c.pc = 0x00379568u; return; } if (c.pc != 0x00379554u) [[unlikely]] return; }
L_00379554:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379290u | kUnwind; return; } goto L_00379290; }
L_00379568:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003795A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4440u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] + 4456u);
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003792E0u | kUnwind; return; } goto L_003792E0; }
L_003795A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003795D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4488u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] + 4504u);
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003792E0u | kUnwind; return; } goto L_003792E0; }
L_003795D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003795D8u); set32(c.r[6], 0u + 36u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003795D8u) [[unlikely]] return; }
L_003795D8:
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003795F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379604u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x00379604u) [[unlikely]] return; }
L_00379604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037960Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 118u, depth + 1u); else { c.pc = 0x00379628u; return; } if (c.pc != 0x0037960Cu) [[unlikely]] return; }
L_0037960C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379614u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 84u, depth + 1u); else { c.pc = 0x00379290u; return; } if (c.pc != 0x00379614u) [[unlikely]] return; }
L_00379614:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00379628:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00379648; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 4536u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 4456u);  if (t) { goto L_00379664; } }
L_00379648:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  goto L_00379670; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 4552u);
    set32(c.r[5], c.r[5].w[0] + 4504u);
    c.budget -= 4;
L_00379664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037966Cu);  if (depth < kMaxDepth) unit_0096(c, 87u, depth + 1u); else { c.pc = 0x003792E0u; return; } if (c.pc != 0x0037966Cu) [[unlikely]] return; }
L_0037966C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00379670:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00379680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003796A4u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x003796A4u) [[unlikely]] return; }
L_003796A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003796B4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 123u, depth + 1u); else { c.pc = 0x003796D0u; return; } if (c.pc != 0x003796B4u) [[unlikely]] return; }
L_003796B4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379290u | kUnwind; return; } goto L_00379290; }
L_003796D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003796F8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4568u);
    set32(c.r[5], c.r[5].w[0] + 4456u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003792E0u | kUnwind; return; } goto L_003792E0; }
L_003796F8:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00379720; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 4584u);
    set32(c.r[5], c.r[5].w[0] + 4504u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003792E0u | kUnwind; return; } goto L_003792E0; }
L_00379720:
    st32((c.r[4].w[0] + 32u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00379730:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379744u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x00379744u) [[unlikely]] return; }
L_00379744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037974Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 127u, depth + 1u); else { c.pc = 0x00379760u; return; } if (c.pc != 0x0037974Cu) [[unlikely]] return; }
L_0037974C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379290u | kUnwind; return; } goto L_00379290; }
L_00379760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00379788; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4600u);
    set32(c.r[5], c.r[5].w[0] + 4456u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003792E0u | kUnwind; return; } goto L_003792E0; }
L_00379788:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 24u)));  goto L_003797B0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4616u);
    set32(c.r[5], c.r[5].w[0] + 4504u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003792E0u | kUnwind; return; } goto L_003792E0; }
L_003797B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003797C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003797E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  if (t) { goto L_00379804; } }
L_003797E0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00379804; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00379804; }
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00379800u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00379800u) [[unlikely]] return; }
L_00379800:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00379804:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00379810:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037983Cu); c.r[19].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x0037983Cu) [[unlikely]] return; }
L_0037983C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379850u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 133u, depth + 1u); else { c.pc = 0x00379870u; return; } if (c.pc != 0x00379850u) [[unlikely]] return; }
L_00379850:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379290u | kUnwind; return; } goto L_00379290; }
L_00379870:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003798A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4632u);
    set32(c.r[5], c.r[5].w[0] + 4456u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003792E0u | kUnwind; return; } goto L_003792E0; }
L_003798A0:
    set32(c.r[2], ld32((c.r[8].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003798C8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4648u);
    set32(c.r[5], c.r[5].w[0] + 4504u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003792E0u | kUnwind; return; } goto L_003792E0; }
L_003798C8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003798E0; } }
    st32((c.r[7].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 4u), 0u);  if (t) { goto L_00379940; } }
    c.budget -= 1;
L_003798E0:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[8].w[0] + 28u)));  goto L_00379928; }
    set32(c.r[2], ld32((c.r[8].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[8].w[0] + 20u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[6].d[0];
    st32((c.r[7].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[8].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 12u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[8].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[7].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00379940; } }
    c.budget -= 1;
L_00379928:
    st32((c.r[7].w[0]), 0u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[7].w[0] + 4u), 0u);  if (t) { goto L_00379940; } }
    set32(c.r[4], ld32((c.r[8].w[0] + 32u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00379940u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00379940u) [[unlikely]] return; }
L_00379940:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00379950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379974u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x00379974u) [[unlikely]] return; }
L_00379974:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379984u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 138u, depth + 1u); else { c.pc = 0x003799A0u; return; } if (c.pc != 0x00379984u) [[unlikely]] return; }
L_00379984:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379290u | kUnwind; return; } goto L_00379290; }
L_003799A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003799C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4664u);
    set32(c.r[5], c.r[5].w[0] + 4456u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003792E0u | kUnwind; return; } goto L_003792E0; }
L_003799C8:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[6].w[0] + 4u)));  goto L_003799F0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4680u);
    set32(c.r[5], c.r[5].w[0] + 4504u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003792E0u | kUnwind; return; } goto L_003792E0; }
L_003799F0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00379A34; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379A34; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00379A34; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00379A34; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    st32((c.r[6].w[0]), 0u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[6].w[0] + 4u), 0u);  if (t) { goto L_00379A34; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00379A30u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00379A30u) [[unlikely]] return; }
L_00379A30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00379A34:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00379A40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379A64u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x00379A64u) [[unlikely]] return; }
L_00379A64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379A74u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 143u, depth + 1u); else { c.pc = 0x00379A90u; return; } if (c.pc != 0x00379A74u) [[unlikely]] return; }
L_00379A74:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379290u | kUnwind; return; } goto L_00379290; }
L_00379A90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; c.r[3].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00379AC0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4696u);
    set32(c.r[5], c.r[5].w[0] + 4456u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003792E0u | kUnwind; return; } goto L_003792E0; }
L_00379AC0:
    set32(c.r[2], ld32((c.r[8].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[3].w[0] + 4u)));  goto L_00379AE8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4712u);
    set32(c.r[5], c.r[5].w[0] + 4504u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003792E0u | kUnwind; return; } goto L_003792E0; }
L_00379AE8:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] <= 0; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00379B84; } }
    set32(c.r[9], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_00379B84; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00379B48; } }
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[8].w[0] + 28u)));  goto L_00379B68; }
    set32(c.r[4], ld32((c.r[8].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[8].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[8].w[0] + 20u)));
    c.r[2].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[7], ld32((c.r[8].w[0] + 24u)));
    if (c.r[2].d[0] != 0) c.r[4].d[0] = 0ull;
    set32(c.r[6], c.r[9].w[0] - c.r[6].w[0]);
    st32((c.r[8].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[7].d[0];
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == c.r[6].d[0]; st32((c.r[8].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_00379B84; } }
L_00379B48:
    set32(c.r[2], ld32((c.r[8].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00379B84; }
    set32(c.r[4], ld32((c.r[8].w[0] + 32u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00379B60u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00379B60u) [[unlikely]] return; }
L_00379B60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00379B84; } }
L_00379B68:
    st32((c.r[3].w[0]), 0u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[3].w[0] + 4u), 0u);  if (t) { goto L_00379B80; } }
    set32(c.r[4], ld32((c.r[8].w[0] + 32u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00379B80u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00379B80u) [[unlikely]] return; }
L_00379B80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00379B84:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00379B90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379BBCu); c.r[19].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x00379BBCu) [[unlikely]] return; }
L_00379BBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379BD0u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 150u, depth + 1u); else { c.pc = 0x00379BF8u; return; } if (c.pc != 0x00379BD0u) [[unlikely]] return; }
L_00379BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379BD8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 84u, depth + 1u); else { c.pc = 0x00379290u; return; } if (c.pc != 0x00379BD8u) [[unlikely]] return; }
L_00379BD8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00379BF8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_00379C30; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 4728u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 4456u);  if (t) { goto L_00379C4C; } }
    c.budget -= 1;
L_00379C30:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00379C60; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 4744u);
    set32(c.r[5], c.r[5].w[0] + 4504u);
    c.budget -= 4;
L_00379C4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379C54u);  if (depth < kMaxDepth) unit_0096(c, 87u, depth + 1u); else { c.pc = 0x003792E0u; return; } if (c.pc != 0x00379C54u) [[unlikely]] return; }
L_00379C54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00379CB0; } }
    c.budget -= 1;
L_00379C60:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00379CA4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 28u)));  goto L_00379C90; }
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00379CA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00379CA4; } }
    c.budget -= 1;
L_00379C90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00379CA4; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00379CA4u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00379CA4u) [[unlikely]] return; }
L_00379CA4:
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[17].d[0];
    st32((c.r[18].w[0]), c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_00379CB0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00379CD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 24u)));  c.pc = t; return; }
L_00379CD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 4776u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003792A8u | kUnwind; return; } goto L_003792A8; }
L_00379CF8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379D18u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x001477A8u; return; } if (c.pc != 0x00379D18u) [[unlikely]] return; }
L_00379D18:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379D24u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00147530u; return; } if (c.pc != 0x00379D24u) [[unlikely]] return; }
L_00379D24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379D2Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 85u, depth + 1u); else { c.pc = 0x003792A8u; return; } if (c.pc != 0x00379D2Cu) [[unlikely]] return; }
L_00379D2C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00379D40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379D50u);  if (depth < kMaxDepth) unit_0096(c, 81u, depth + 1u); else { c.pc = 0x00379210u; return; } if (c.pc != 0x00379D50u) [[unlikely]] return; }
L_00379D50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379D58u);  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x00379D58u) [[unlikely]] return; }
L_00379D58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379D60u);  if (depth < kMaxDepth) unit_0096(c, 163u, depth + 1u); else { c.pc = 0x00379D70u; return; } if (c.pc != 0x00379D60u) [[unlikely]] return; }
L_00379D60:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379290u | kUnwind; return; } goto L_00379290; }
L_00379D70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 32408u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00379DA4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 32416u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379DA0u); set32(c.r[6], 0u + 16384u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x00379DA0u) [[unlikely]] return; }
L_00379DA0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00379DA4:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00379DC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379DD0u);  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x00379DD0u) [[unlikely]] return; }
L_00379DD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379DD8u);  if (depth < kMaxDepth) unit_0096(c, 169u, depth + 1u); else { c.pc = 0x00379DF0u; return; } if (c.pc != 0x00379DD8u) [[unlikely]] return; }
L_00379DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379DE0u);  if (depth < kMaxDepth) unit_0096(c, 84u, depth + 1u); else { c.pc = 0x00379290u; return; } if (c.pc != 0x00379DE0u) [[unlikely]] return; }
L_00379DE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379248u | kUnwind; return; } goto L_00379248; }
L_00379DF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 32408u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_00379E30; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 32416u);
    set32(c.r[6], 0u + 16384u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00145560u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 81u, depth); }
L_00379E30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00379E40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379E64u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x00379E64u) [[unlikely]] return; }
L_00379E64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379E74u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 174u, depth + 1u); else { c.pc = 0x00379E98u; return; } if (c.pc != 0x00379E74u) [[unlikely]] return; }
L_00379E74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379E7Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 84u, depth + 1u); else { c.pc = 0x00379290u; return; } if (c.pc != 0x00379E7Cu) [[unlikely]] return; }
L_00379E7C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00379E98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[7].w[0] + 32416u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[3], c.r[2].w[0] + 4u);
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00379EF4; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_00379ED0:
    c.r[2].d[0] = c.r[4].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 64u);  if (t) { goto L_00379EF4; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379ED0u | kUnwind; return; } goto L_00379ED0; }
L_00379EF4:
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00379F50; } }
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[2], c.r[7].w[0] + 32416u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 32360u);
    set32(c.r[5], c.r[5].w[0] + 4760u);
    set32(c.r[6], c.r[6].w[0] - 25384u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[10].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[6].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379F50u); st32((c.r[16].w[0] + 60u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0096(c, 187u, depth + 1u); else { c.pc = 0x0037A068u; return; } if (c.pc != 0x00379F50u) [[unlikely]] return; }
L_00379F50:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00379F68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379F7Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x00379F7Cu) [[unlikely]] return; }
L_00379F7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379F84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 180u, depth + 1u); else { c.pc = 0x00379F98u; return; } if (c.pc != 0x00379F84u) [[unlikely]] return; }
L_00379F84:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379290u | kUnwind; return; } goto L_00379290; }
L_00379F98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00379FD0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4792u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] + 4808u);
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379CF8u | kUnwind; return; } goto L_00379CF8; }
L_00379FD0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0037A000; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4840u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] + 4856u);
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379CF8u | kUnwind; return; } goto L_00379CF8; }
L_0037A000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A008u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x0037A008u) [[unlikely]] return; }
L_0037A008:
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037A020:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_0037A028:
    st32((c.r[4].w[0] + 60u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 56u), c.r[5].w[0]);  c.pc = t; return; }
L_0037A038:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A04Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x0037A04Cu) [[unlikely]] return; }
L_0037A04C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A054u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 187u, depth + 1u); else { c.pc = 0x0037A068u; return; } if (c.pc != 0x0037A054u) [[unlikely]] return; }
L_0037A054:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379290u | kUnwind; return; } goto L_00379290; }
L_0037A068:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0037A090; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4888u);
    set32(c.r[5], c.r[5].w[0] + 4808u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379CF8u | kUnwind; return; } goto L_00379CF8; }
L_0037A090:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 32u)));  goto L_0037A0B8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4904u);
    set32(c.r[5], c.r[5].w[0] + 4856u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379CF8u | kUnwind; return; } goto L_00379CF8; }
L_0037A0B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037A0E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0037A100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  if (t) { goto L_0037A128; } }
L_0037A100:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 56u)));  goto L_0037A110; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  if (t) { goto L_0037A128; } }
L_0037A110:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0037A128; }
    set32(c.r[4], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A124u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037A124u) [[unlikely]] return; }
L_0037A124:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0037A128:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037A138:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A164u); c.r[19].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x0037A164u) [[unlikely]] return; }
L_0037A164:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A178u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 193u, depth + 1u); else { c.pc = 0x0037A198u; return; } if (c.pc != 0x0037A178u) [[unlikely]] return; }
L_0037A178:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379290u | kUnwind; return; } goto L_00379290; }
L_0037A198:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; c.r[9].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0037A1C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4920u);
    set32(c.r[5], c.r[5].w[0] + 4808u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379CF8u | kUnwind; return; } goto L_00379CF8; }
L_0037A1C8:
    set32(c.r[2], ld32((c.r[8].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[8].w[0] + 32u)));  goto L_0037A1F0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4936u);
    set32(c.r[5], c.r[5].w[0] + 4856u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379CF8u | kUnwind; return; } goto L_00379CF8; }
L_0037A1F0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0037A210; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 4952u);
    set32(c.r[5], c.r[5].w[0] + 4968u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379CF8u | kUnwind; return; } goto L_00379CF8; }
L_0037A210:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037A290; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[8].w[0] + 16u)));
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[8].w[0] + 28u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    c.r[4].d[0] = c.r[2].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[9].d[0];
    st32((c.r[7].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[8].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 32u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    st32((c.r[7].w[0]), c.r[6].w[0]);
    c.budget -= 19;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0037A260u);  goto L_0037A264; }
L_0037A264:
    set32(c.r[4], ld32((c.r[8].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 40u)));
    c.r[5].d[0] = c.hi.d[0];
    st32((c.r[8].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    st32((c.r[8].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_0037A328; } }
L_0037A290:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[8].w[0] + 56u)));  goto L_0037A310; }
    set32(c.r[2], ld32((c.r[8].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[8].w[0] + 12u)));
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[8].w[0] + 28u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    c.r[4].d[0] = c.r[2].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[9].d[0];
    st32((c.r[7].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[8].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 32u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    st32((c.r[7].w[0]), c.r[6].w[0]);
    c.budget -= 19;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0037A2E0u);  goto L_0037A2E4; }
L_0037A2E4:
    set32(c.r[4], ld32((c.r[8].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 48u)));
    c.r[5].d[0] = c.hi.d[0];
    st32((c.r[8].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    st32((c.r[8].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_0037A328; } }
L_0037A310:
    st32((c.r[7].w[0]), 0u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[7].w[0] + 4u), 0u);  if (t) { goto L_0037A328; } }
    set32(c.r[4], ld32((c.r[8].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A328u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037A328u) [[unlikely]] return; }
L_0037A328:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037A338:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A35Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x0037A35Cu) [[unlikely]] return; }
L_0037A35C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A36Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 198u, depth + 1u); else { c.pc = 0x0037A388u; return; } if (c.pc != 0x0037A36Cu) [[unlikely]] return; }
L_0037A36C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379290u | kUnwind; return; } goto L_00379290; }
L_0037A388:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_0037A3D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4992u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] + 4808u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379CF8u | kUnwind; return; } goto L_00379CF8; }
L_0037A3D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[8], ld32((c.r[17].w[0] + 4u)));  goto L_0037A400; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 5008u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] + 4856u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379CF8u | kUnwind; return; } goto L_00379CF8; }
L_0037A400:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0; c.r[9].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0037A4F0; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037A4F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0037A4B0; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], c.r[5].w[0] - c.r[7].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  if (t) { goto L_0037A460; } }
    set32(c.r[6], c.r[6].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[8].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A44Cu); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x0037A44Cu) [[unlikely]] return; }
L_0037A44C:
    set32(c.r[9], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[7], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[5].w[0] - c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 5;
L_0037A460:
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_0037A494; }
    set32(c.r[6], c.r[3].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = c.r[9].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[9].d[0];
    set32(c.r[5], c.r[3].w[0] - c.r[6].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A48Cu); set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x0037A48Cu) [[unlikely]] return; }
L_0037A48C:
    set32(c.r[9], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 2;
L_0037A494:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[4].w[0]);  if (t) { goto L_0037A4F0; } }
L_0037A4B0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 56u)));  goto L_0037A4D8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 44u), c.r[4].w[0]);  if (t) { goto L_0037A4F0; } }
L_0037A4D8:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_0037A4F0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A4F0u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037A4F0u) [[unlikely]] return; }
L_0037A4F0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037A508:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A52Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x0037A52Cu) [[unlikely]] return; }
L_0037A52C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A53Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 205u, depth + 1u); else { c.pc = 0x0037A558u; return; } if (c.pc != 0x0037A53Cu) [[unlikely]] return; }
L_0037A53C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379290u | kUnwind; return; } goto L_00379290; }
L_0037A558:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_0037A598; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 5024u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] + 4808u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379CF8u | kUnwind; return; } goto L_00379CF8; }
L_0037A598:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 32u)));  goto L_0037A5C8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 5040u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] + 4856u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379CF8u | kUnwind; return; } goto L_00379CF8; }
L_0037A5C8:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[7], ld32((c.r[17].w[0] + 4u)));  goto L_0037A5F8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 5056u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] + 4968u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379CF8u | kUnwind; return; } goto L_00379CF8; }
L_0037A5F8:
    c.budget -= 2;
    if (c.r[7].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0037A724; }
    set32(c.r[8], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[8].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0037A724; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037A688; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x0037A61Cu);  goto L_0037A620; }
L_0037A620:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[3], c.r[8].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[6].w[0]);
    mmi::div(c, 1, c.r[3].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.r[5].d[0] = c.hi.d[1];
    c.budget -= 10;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 56u)));  goto L_0037A660; }
    st32((c.r[16].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0037A674; } }
L_0037A660:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_0037A67C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A674u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037A674u) [[unlikely]] return; }
L_0037A674:
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 2;
L_0037A67C:
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_0037A720; } }
L_0037A688:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 56u)));  goto L_0037A708; }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x0037A698u);  goto L_0037A69C; }
L_0037A69C:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[4], c.r[8].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[6].w[0]);
    mmi::div(c, 1, c.r[4].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.hi.d[1];
    c.budget -= 10;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 56u)));  goto L_0037A6E0; }
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0037A6F4; } }
    c.budget -= 1;
L_0037A6E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 48u)));  goto L_0037A6FC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A6F4u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037A6F4u) [[unlikely]] return; }
L_0037A6F4:
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 2;
L_0037A6FC:
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_0037A720; } }
L_0037A708:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_0037A720; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A720u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037A720u) [[unlikely]] return; }
L_0037A720:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0037A724:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037A738:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A764u); c.r[19].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x0037A764u) [[unlikely]] return; }
L_0037A764:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A778u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 213u, depth + 1u); else { c.pc = 0x0037A7A0u; return; } if (c.pc != 0x0037A778u) [[unlikely]] return; }
L_0037A778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A780u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 84u, depth + 1u); else { c.pc = 0x00379290u; return; } if (c.pc != 0x0037A780u) [[unlikely]] return; }
L_0037A780:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037A7A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_0037A7D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 5072u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 4808u);  if (t) { goto L_0037A7F4; } }
    c.budget -= 1;
L_0037A7D8:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037A808; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 5088u);
    set32(c.r[5], c.r[5].w[0] + 4856u);
    c.budget -= 4;
L_0037A7F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A7FCu);  if (depth < kMaxDepth) unit_0096(c, 155u, depth + 1u); else { c.pc = 0x00379CF8u; return; } if (c.pc != 0x0037A7FCu) [[unlikely]] return; }
L_0037A7FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0037A880; } }
    c.budget -= 1;
L_0037A808:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037A828; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 16u)));  if (t) { goto L_0037A844; } }
L_0037A828:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 56u)));  goto L_0037A860; }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
L_0037A844:
    set32(c.r[16], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[4].d[0];
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[17].d[0];  if (t) { goto L_0037A874; } }
    c.budget -= 1;
L_0037A860:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0037A874; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A874u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037A874u) [[unlikely]] return; }
L_0037A874:
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[17].d[0];
    st32((c.r[18].w[0]), c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0037A880:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037A898:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 28u)));  c.pc = t; return; }
L_0037A8A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 32u)));  c.pc = t; return; }
L_0037A8A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 36u)));  c.pc = t; return; }
L_0037A8C8:
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[5].w[0] + 40u)));  c.pc = t; return; }
L_0037A8E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 5120u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003792A8u | kUnwind; return; } goto L_003792A8; }
L_0037A900:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A920u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x001477A8u; return; } if (c.pc != 0x0037A920u) [[unlikely]] return; }
L_0037A920:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A92Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00147530u; return; } if (c.pc != 0x0037A92Cu) [[unlikely]] return; }
L_0037A92C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A934u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 85u, depth + 1u); else { c.pc = 0x003792A8u; return; } if (c.pc != 0x0037A934u) [[unlikely]] return; }
L_0037A934:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0037A948:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A958u);  if (depth < kMaxDepth) unit_0096(c, 81u, depth + 1u); else { c.pc = 0x00379210u; return; } if (c.pc != 0x0037A958u) [[unlikely]] return; }
L_0037A958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A960u);  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x0037A960u) [[unlikely]] return; }
L_0037A960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A968u);  if (depth < kMaxDepth) unit_0096(c, 229u, depth + 1u); else { c.pc = 0x0037A978u; return; } if (c.pc != 0x0037A968u) [[unlikely]] return; }
L_0037A968:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379290u | kUnwind; return; } goto L_00379290; }
L_0037A978:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] - 16688u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_0037A9AC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 16680u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A9A8u); set32(c.r[6], 0u + 3072u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x0037A9A8u) [[unlikely]] return; }
L_0037A9A8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0037A9AC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037A9C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A9D8u);  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x0037A9D8u) [[unlikely]] return; }
L_0037A9D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A9E0u);  if (depth < kMaxDepth) unit_0096(c, 235u, depth + 1u); else { c.pc = 0x0037A9F8u; return; } if (c.pc != 0x0037A9E0u) [[unlikely]] return; }
L_0037A9E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A9E8u);  if (depth < kMaxDepth) unit_0096(c, 84u, depth + 1u); else { c.pc = 0x00379290u; return; } if (c.pc != 0x0037A9E8u) [[unlikely]] return; }
L_0037A9E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379248u | kUnwind; return; } goto L_00379248; }
L_0037A9F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 16688u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_0037AA38; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 16680u);
    set32(c.r[6], 0u + 3072u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00145560u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 81u, depth); }
L_0037AA38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037AA48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AA6Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x0037AA6Cu) [[unlikely]] return; }
L_0037AA6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AA7Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 240u, depth + 1u); else { c.pc = 0x0037AAA0u; return; } if (c.pc != 0x0037AA7Cu) [[unlikely]] return; }
L_0037AA7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AA84u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 84u, depth + 1u); else { c.pc = 0x00379290u; return; } if (c.pc != 0x0037AA84u) [[unlikely]] return; }
L_0037AA84:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037AAA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[8].w[0] - 16680u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0037AAFC; } }
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
L_0037AAD8:
    c.r[2].d[0] = c.r[4].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 48u);  if (t) { goto L_0037AAFC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037AAD8u | kUnwind; return; } goto L_0037AAD8; }
L_0037AAFC:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0037AB74; } }
    set32(c.r[16], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[8].w[0] - 16680u);
    set32(c.r[16], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[7].w[0] + 15u);
    c.r[2].d[0] = c.r[7].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] << 4);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    if (c.r[2].d[0] != 0) c.r[7].d[0] = c.r[4].d[0];
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[3], c.r[3].w[0] - 16736u);
    set32(c.r[5], c.r[5].w[0] + 5104u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 4));
    set32(c.r[6], c.r[6].w[0] - 22304u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[16].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[10].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[6].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AB70u); st32((c.r[16].w[0] + 44u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0096(c, 261u, depth + 1u); else { c.pc = 0x0037ADB0u; return; } if (c.pc != 0x0037AB70u) [[unlikely]] return; }
L_0037AB70:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0037AB74:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037AB88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AB9Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x0037AB9Cu) [[unlikely]] return; }
L_0037AB9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ABA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 246u, depth + 1u); else { c.pc = 0x0037ABB8u; return; } if (c.pc != 0x0037ABA4u) [[unlikely]] return; }
L_0037ABA4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379290u | kUnwind; return; } goto L_00379290; }
L_0037ABB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_0037ABF0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 5136u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] + 5152u);
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A900u | kUnwind; return; } goto L_0037A900; }
L_0037ABF0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0037AC20; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 5184u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] + 5200u);
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A900u | kUnwind; return; } goto L_0037A900; }
L_0037AC20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AC28u); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x0037AC28u) [[unlikely]] return; }
L_0037AC28:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037AC40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AC54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x0037AC54u) [[unlikely]] return; }
L_0037AC54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AC5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 252u, depth + 1u); else { c.pc = 0x0037AC78u; return; } if (c.pc != 0x0037AC5Cu) [[unlikely]] return; }
L_0037AC5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AC64u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 84u, depth + 1u); else { c.pc = 0x00379290u; return; } if (c.pc != 0x0037AC64u) [[unlikely]] return; }
L_0037AC64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037AC78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0037AC98; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 5232u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 5152u);  if (t) { goto L_0037ACB4; } }
L_0037AC98:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  goto L_0037ACC0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 5248u);
    set32(c.r[5], c.r[5].w[0] + 5200u);
    c.budget -= 4;
L_0037ACB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ACBCu);  if (depth < kMaxDepth) unit_0096(c, 221u, depth + 1u); else { c.pc = 0x0037A900u; return; } if (c.pc != 0x0037ACBCu) [[unlikely]] return; }
L_0037ACBC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0037ACC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037ACD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ACF4u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x0037ACF4u) [[unlikely]] return; }
L_0037ACF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AD04u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 257u, depth + 1u); else { c.pc = 0x0037AD20u; return; } if (c.pc != 0x0037AD04u) [[unlikely]] return; }
L_0037AD04:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379290u | kUnwind; return; } goto L_00379290; }
L_0037AD20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0037AD48; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 5264u);
    set32(c.r[5], c.r[5].w[0] + 5152u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A900u | kUnwind; return; } goto L_0037A900; }
L_0037AD48:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0037AD70; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 5280u);
    set32(c.r[5], c.r[5].w[0] + 5200u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A900u | kUnwind; return; } goto L_0037A900; }
L_0037AD70:
    st32((c.r[4].w[0] + 44u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037AD80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AD94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x0037AD94u) [[unlikely]] return; }
L_0037AD94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AD9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 261u, depth + 1u); else { c.pc = 0x0037ADB0u; return; } if (c.pc != 0x0037AD9Cu) [[unlikely]] return; }
L_0037AD9C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379290u | kUnwind; return; } goto L_00379290; }
L_0037ADB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0037ADD8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 5296u);
    set32(c.r[5], c.r[5].w[0] + 5152u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A900u | kUnwind; return; } goto L_0037A900; }
L_0037ADD8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  goto L_0037AE00; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 5312u);
    set32(c.r[5], c.r[5].w[0] + 5200u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A900u | kUnwind; return; } goto L_0037A900; }
L_0037AE00:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[4].w[0] + 20u), c.r[7].w[0]);  if (t) { goto L_0037AE40; } }
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_0037AE18:
    st32((c.r[5].w[0] + 12u), 0u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[5].w[0] + 16u);
    st32((c.r[5].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037AE18u | kUnwind; return; } goto L_0037AE18; } }
L_0037AE40:
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + 36u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 8;
L_0037AE60:
    set32(c.r[6], c.r[6].w[0] - 1u);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[4], c.r[4].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037AE60u | kUnwind; return; } goto L_0037AE60; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037AE88:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AEA4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x0037AEA4u) [[unlikely]] return; }
L_0037AEA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AEB0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 268u, depth + 1u); else { c.pc = 0x0037AED0u; return; } if (c.pc != 0x0037AEB0u) [[unlikely]] return; }
L_0037AEB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AEB8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 84u, depth + 1u); else { c.pc = 0x00379290u; return; } if (c.pc != 0x0037AEB8u) [[unlikely]] return; }
L_0037AEB8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037AED0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0037AEF0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 5328u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 5152u);  if (t) { goto L_0037AF0C; } }
L_0037AEF0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;  goto L_0037AF20; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 5344u);
    set32(c.r[5], c.r[5].w[0] + 5200u);
    c.budget -= 4;
L_0037AF0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AF14u);  if (depth < kMaxDepth) unit_0096(c, 221u, depth + 1u); else { c.pc = 0x0037A900u; return; } if (c.pc != 0x0037AF14u) [[unlikely]] return; }
L_0037AF14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0037AF78; } }
    c.budget -= 1;
L_0037AF20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { goto L_0037AF48; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0037AF78; }
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AF40u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037AF40u) [[unlikely]] return; }
L_0037AF40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0037AF78; } }
L_0037AF48:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0037AF74; } }
L_0037AF58:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037AF58u | kUnwind; return; } goto L_0037AF58; } }
L_0037AF74:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0037AF78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037AF88:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AFB4u); c.r[19].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x0037AFB4u) [[unlikely]] return; }
L_0037AFB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AFC8u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 275u, depth + 1u); else { c.pc = 0x0037AFE8u; return; } if (c.pc != 0x0037AFC8u) [[unlikely]] return; }
L_0037AFC8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379290u | kUnwind; return; } goto L_00379290; }
L_0037AFE8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 56u), c.r[31].d[0]);  if (t) { goto L_0037B020; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 5360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B018u); set32(c.r[5], c.r[5].w[0] + 5152u);  if (depth < kMaxDepth) unit_0096(c, 221u, depth + 1u); else { c.pc = 0x0037A900u; return; } if (c.pc != 0x0037B018u) [[unlikely]] return; }
L_0037B018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0037B124; } }
L_0037B020:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;  if (t) { goto L_0037B048; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 5376u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B040u); set32(c.r[5], c.r[5].w[0] + 5200u);  if (depth < kMaxDepth) unit_0096(c, 221u, depth + 1u); else { c.pc = 0x0037A900u; return; } if (c.pc != 0x0037B040u) [[unlikely]] return; }
L_0037B040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0037B124; } }
L_0037B048:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { goto L_0037B070; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), 0u);  goto L_0037B11C; }
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B068u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037B068u) [[unlikely]] return; }
L_0037B068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_0037B11C; } }
L_0037B070:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[2].w[0] + 24u);
    set32(c.r[7], ld32((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[18], c.r[7].w[0] + 8u);  if (t) { goto L_0037B118; } }
    ldl(c.r[2], (c.r[18].w[0] + 7u));
    ldr(c.r[2], (c.r[18].w[0]));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));  goto L_0037B0D0; }
    set32(c.r[3], ld32((c.r[7].w[0])));
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    sdl(c.r[2], (c.r[17].w[0] + 7u));
    sdr(c.r[2], (c.r[17].w[0]));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.r[7].w[0]);  if (t) { goto L_0037B120; } }
    c.budget -= 1;
L_0037B0D0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[17].w[0] + 4u), 0u);  goto L_0037B11C; }
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B0F4u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 312u, depth + 1u); else { c.pc = 0x0037B6E0u; return; } if (c.pc != 0x0037B0F4u) [[unlikely]] return; }
L_0037B0F4:
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    sdl(c.r[2], (c.r[17].w[0] + 7u));
    sdr(c.r[2], (c.r[17].w[0]));
    ldl(c.r[6], (c.r[16].w[0] + 7u));
    ldr(c.r[6], (c.r[16].w[0]));
    sdl(c.r[6], (c.r[18].w[0] + 7u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; sdr(c.r[6], (c.r[18].w[0]));  if (t) { goto L_0037B120; } }
L_0037B118:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_0037B11C:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_0037B120:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0037B124:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0037B138:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B15Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x0037B15Cu) [[unlikely]] return; }
L_0037B15C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B16Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 283u, depth + 1u); else { c.pc = 0x0037B188u; return; } if (c.pc != 0x0037B16Cu) [[unlikely]] return; }
L_0037B16C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379290u | kUnwind; return; } goto L_00379290; }
L_0037B188:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0037B1B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 5392u);
    set32(c.r[5], c.r[5].w[0] + 5152u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A900u | kUnwind; return; } goto L_0037A900; }
L_0037B1B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;  if (t) { goto L_0037B1D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 5408u);
    set32(c.r[5], c.r[5].w[0] + 5200u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A900u | kUnwind; return; } goto L_0037A900; }
L_0037B1D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 40u)));  goto L_0037B26C; }
    set32(c.r[9], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[9].sd[0] <= 0; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0037B2A8; } }
    set32(c.r[8], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { goto L_0037B2A8; } }
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0037B228; } }
L_0037B20C:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037B20Cu | kUnwind; return; } goto L_0037B20C; } }
L_0037B228:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[7], ld32((c.r[4].w[0] + 20u)));  goto L_0037B260; }
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[7], ld32((c.r[4].w[0] + 20u)));  goto L_0037B260; }
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[8].d[0]) { set32(c.r[7], ld32((c.r[4].w[0] + 20u)));  goto L_0037B260; }
    set32(c.r[2], c.r[3].w[0] + c.r[9].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0037B2A4; } }
L_0037B260:
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { set32(c.r[2], ld32((c.r[7].w[0])));  goto L_0037B288; }
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 1;
L_0037B26C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0037B2A8; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B280u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037B280u) [[unlikely]] return; }
L_0037B280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0037B2A8; } }
L_0037B288:
    ldl(c.r[3], (c.r[6].w[0] + 7u));
    ldr(c.r[3], (c.r[6].w[0]));
    sdl(c.r[3], (c.r[7].w[0] + 15u));
    sdr(c.r[3], (c.r[7].w[0] + 8u));
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[7].w[0]), 0u);
    st32((c.r[5].w[0]), c.r[7].w[0]);
    c.budget -= 7;
L_0037B2A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0037B2A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037B2B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B2D4u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x0037B2D4u) [[unlikely]] return; }
L_0037B2D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B2E4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 289u, depth + 1u); else { c.pc = 0x0037B300u; return; } if (c.pc != 0x0037B2E4u) [[unlikely]] return; }
L_0037B2E4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379290u | kUnwind; return; } goto L_00379290; }
L_0037B300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0037B330; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 5424u);
    set32(c.r[5], c.r[5].w[0] + 5152u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A900u | kUnwind; return; } goto L_0037A900; }
L_0037B330:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;  if (t) { goto L_0037B358; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 5440u);
    set32(c.r[5], c.r[5].w[0] + 5200u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A900u | kUnwind; return; } goto L_0037A900; }
L_0037B358:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[8].w[0] + 40u)));  goto L_0037B3C8; }
    set32(c.r[10], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[10].sd[0] <= 0; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0037B418; } }
    set32(c.r[9], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] << 2);  if (t) { goto L_0037B418; } }
    set32(c.r[11], c.r[8].w[0] + 8u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 5u)));
    set32(c.r[3], c.r[5].w[0] + c.r[11].w[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[7], ld32((c.r[3].w[0] + 16u)));  if (t) { goto L_0037B3B8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[2], c.r[9].w[0] + c.r[10].w[0]);  if (t) { goto L_0037B3B8; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[7], ld32((c.r[8].w[0] + 20u)));  goto L_0037B3BC; }
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    st32((c.r[7].w[0] + 8u), c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0037B418; } }
L_0037B3B8:
    set32(c.r[7], ld32((c.r[8].w[0] + 20u)));
    c.budget -= 1;
L_0037B3BC:
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { set32(c.r[2], ld32((c.r[7].w[0])));  goto L_0037B3E8; }
    set32(c.r[2], ld32((c.r[8].w[0] + 40u)));
    c.budget -= 1;
L_0037B3C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0037B418; } }
    set32(c.r[4], ld32((c.r[8].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B3DCu); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037B3DCu) [[unlikely]] return; }
L_0037B3DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0037B418; } }
    c.budget -= 1;
L_0037B3E8:
    set32(c.r[3], c.r[5].w[0] + 16u);
    set32(c.r[3], c.r[11].w[0] + c.r[3].w[0]);
    ldl(c.r[4], (c.r[6].w[0] + 7u));
    ldr(c.r[4], (c.r[6].w[0]));
    sdl(c.r[4], (c.r[7].w[0] + 15u));
    sdr(c.r[4], (c.r[7].w[0] + 8u));
    st32((c.r[8].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[7].w[0]), 0u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[7].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[7].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
L_0037B418:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037B420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B44Cu); c.r[19].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x0037B44Cu) [[unlikely]] return; }
L_0037B44C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B460u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 295u, depth + 1u); else { c.pc = 0x0037B488u; return; } if (c.pc != 0x0037B460u) [[unlikely]] return; }
L_0037B460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B468u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 84u, depth + 1u); else { c.pc = 0x00379290u; return; } if (c.pc != 0x0037B468u) [[unlikely]] return; }
L_0037B468:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037B488:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_0037B4A8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 5456u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 5152u);  if (t) { goto L_0037B4C4; } }
L_0037B4A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;  goto L_0037B4D8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 5472u);
    set32(c.r[5], c.r[5].w[0] + 5200u);
    c.budget -= 4;
L_0037B4C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B4CCu);  if (depth < kMaxDepth) unit_0096(c, 221u, depth + 1u); else { c.pc = 0x0037A900u; return; } if (c.pc != 0x0037B4CCu) [[unlikely]] return; }
L_0037B4CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0037B544; } }
    c.budget -= 1;
L_0037B4D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[7].w[0]), 0u);  if (t) { goto L_0037B500; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0037B544; }
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B4F8u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037B4F8u) [[unlikely]] return; }
L_0037B4F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0037B544; } }
L_0037B500:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0037B544; } }
    ldl(c.r[2], (c.r[3].w[0] + 15u));
    ldr(c.r[2], (c.r[3].w[0] + 8u));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[7].w[0]), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 10;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = c.r[5].d[0] ^ c.r[6].d[0];  goto L_0037B540; }
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0037B540:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 1;
L_0037B544:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037B550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B56Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x0037B56Cu) [[unlikely]] return; }
L_0037B56C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B578u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 302u, depth + 1u); else { c.pc = 0x0037B598u; return; } if (c.pc != 0x0037B578u) [[unlikely]] return; }
L_0037B578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B580u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 84u, depth + 1u); else { c.pc = 0x00379290u; return; } if (c.pc != 0x0037B580u) [[unlikely]] return; }
L_0037B580:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037B598:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0037B5B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 5488u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 5152u);  if (t) { goto L_0037B5D4; } }
L_0037B5B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 2);  goto L_0037B5E8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 5504u);
    set32(c.r[5], c.r[5].w[0] + 5200u);
    c.budget -= 4;
L_0037B5D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B5DCu);  if (depth < kMaxDepth) unit_0096(c, 221u, depth + 1u); else { c.pc = 0x0037A900u; return; } if (c.pc != 0x0037B5DCu) [[unlikely]] return; }
L_0037B5DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0037B618; } }
    c.budget -= 1;
L_0037B5E8:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0037B614; } }
L_0037B5F8:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037B5F8u | kUnwind; return; } goto L_0037B5F8; } }
L_0037B614:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0037B618:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037B628:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B63Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x0037B63Cu) [[unlikely]] return; }
L_0037B63C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B644u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 309u, depth + 1u); else { c.pc = 0x0037B660u; return; } if (c.pc != 0x0037B644u) [[unlikely]] return; }
L_0037B644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B64Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 84u, depth + 1u); else { c.pc = 0x00379290u; return; } if (c.pc != 0x0037B64Cu) [[unlikely]] return; }
L_0037B64C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037B660:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0037B680; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 5520u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 5152u);  if (t) { goto L_0037B69C; } }
L_0037B680:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0037B6B0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 5536u);
    set32(c.r[5], c.r[5].w[0] + 5200u);
    c.budget -= 4;
L_0037B69C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B6A4u);  if (depth < kMaxDepth) unit_0096(c, 221u, depth + 1u); else { c.pc = 0x0037A900u; return; } if (c.pc != 0x0037B6A4u) [[unlikely]] return; }
L_0037B6A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0037B6D4; } }
    c.budget -= 1;
L_0037B6B0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0037B6D4; } }
L_0037B6B8:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037B6B8u | kUnwind; return; } goto L_0037B6B8; } }
L_0037B6D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037B6E0:
    ldl(c.r[2], (c.r[4].w[0] + 7u));
    ldr(c.r[2], (c.r[4].w[0]));
    sdl(c.r[2], (c.r[6].w[0] + 7u));
    sdr(c.r[2], (c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[7].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[7].w[0] + 4u)));  goto L_0037B714; }
    st32((c.r[6].w[0] + 4u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 3;
L_0037B714:
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[7].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0037B728; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0]), 0u);  c.pc = t; return; }
L_0037B728:
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_0037B740:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[3], c.r[3].w[0] - 13608u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    c.r[7].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[8].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    c.r[9].d[0] = ld8((c.r[6].w[0]));
    c.r[7].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 37;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_0037B7D8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[6], c.r[6].w[0] - 13584u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[9], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[9].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[9], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[5].w[0])));
    set32(c.r[5], c.r[9].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[9], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[5], c.r[9].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[9], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[4], c.r[9].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[9], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[9].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[9], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[9].w[0] << 4);
    c.budget -= 43;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);  c.pc = t; return; }
L_0037B888:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B8B0u); set32(c.r[6], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x0037B8B0u) [[unlikely]] return; }
L_0037B8B0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B8C0u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_0009(c, 232u, depth + 1u); else { c.pc = 0x00147D60u; return; } if (c.pc != 0x0037B8C0u) [[unlikely]] return; }
L_0037B8C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 16u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037B740u | kUnwind; return; } goto L_0037B740; }
L_0037B8E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[4].w[0] + 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B908u); set32(c.r[4], c.r[4].w[0] + 8u);  if (depth < kMaxDepth) unit_0096(c, 314u, depth + 1u); else { c.pc = 0x0037B7D8u; return; } if (c.pc != 0x0037B908u) [[unlikely]] return; }
L_0037B908:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037B920:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st32((c.r[19].w[0]), 0u);
    st32((c.r[19].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 18;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0037B990; } }
L_0037B968:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0037B980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B978u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x00147BA8u; return; } if (c.pc != 0x0037B978u) [[unlikely]] return; }
L_0037B978:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0037B9D0; }
L_0037B980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B988u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0096(c, 314u, depth + 1u); else { c.pc = 0x0037B7D8u; return; } if (c.pc != 0x0037B988u) [[unlikely]] return; }
L_0037B988:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 16u);
    c.budget -= 2;
L_0037B990:
    c.r[17].d[0] = c.r[16].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0037B9C8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B9ACu); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x00147BA8u; return; } if (c.pc != 0x0037B9ACu) [[unlikely]] return; }
L_0037B9AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 7u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037B968u | kUnwind; return; } goto L_0037B968; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B9C4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 318u, depth + 1u); else { c.pc = 0x0037B8E8u; return; } if (c.pc != 0x0037B9C4u) [[unlikely]] return; }
L_0037B9C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0037B9C8:
    if (c.r[17].d[0] != 0) c.r[2].d[0] = c.r[16].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0037B9D0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0037B9F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 24384u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] - 24128u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[6], 0u + 3u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 32u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BA30u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0094(c, 164u, depth + 1u); else { c.pc = 0x003716C8u; return; } if (c.pc != 0x0037BA30u) [[unlikely]] return; }
L_0037BA30:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037BA48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 24384u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] - 24128u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 33u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BA84u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0094(c, 164u, depth + 1u); else { c.pc = 0x003716C8u; return; } if (c.pc != 0x0037BA84u) [[unlikely]] return; }
L_0037BA84:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037BA98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 24384u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] - 24128u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[6], 0u + 3u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 34u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BAD8u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0094(c, 164u, depth + 1u); else { c.pc = 0x003716C8u; return; } if (c.pc != 0x0037BAD8u) [[unlikely]] return; }
L_0037BAD8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037BAF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 24384u);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[4], 0u + 35u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003716C8u | kUnwind; return; } [[clang::musttail]] return unit_0094(c, 164u, depth); }
L_0037BB90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 24384u);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[4], 0u + 37u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003716C8u | kUnwind; return; } [[clang::musttail]] return unit_0094(c, 164u, depth); }
L_0037BC30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 24384u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[3], ld32((c.r[9].w[0])));
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[4], 0u + 39u);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[3], ld32((c.r[9].w[0] + 4u)));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 19;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003716C8u | kUnwind; return; } [[clang::musttail]] return unit_0094(c, 164u, depth); }
L_0037BCD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 24384u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] - 24128u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 41u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BD0Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0094(c, 164u, depth + 1u); else { c.pc = 0x003716C8u; return; } if (c.pc != 0x0037BD0Cu) [[unlikely]] return; }
L_0037BD0C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037BD20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 24384u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] - 24128u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[4], 0u + 42u);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[6], 0u + 3u);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BD68u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0094(c, 164u, depth + 1u); else { c.pc = 0x003716C8u; return; } if (c.pc != 0x0037BD68u) [[unlikely]] return; }
L_0037BD68:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037BD88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] - 13132u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 13136u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_0037BDC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BDBCu);  if (depth < kMaxDepth) unit_0094(c, 155u, depth + 1u); else { c.pc = 0x00371560u; return; } if (c.pc != 0x0037BDBCu) [[unlikely]] return; }
L_0037BDBC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_0037BDC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037BDD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 13132u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_0037BE08; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00371650u | kUnwind; return; } [[clang::musttail]] return unit_0094(c, 161u, depth); }
L_0037BE08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037BE18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_0037BE50; } }
L_0037BE30:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037BE30u | kUnwind; return; } goto L_0037BE30; } }
    c.budget -= 1;
L_0037BE50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BE58u); set32(c.r[17], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x0037BE58u) [[unlikely]] return; }
L_0037BE58:
    c.budget -= 2;
    if (c.r[17].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0037BEA4; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0037BE68:
    set32(c.r[16], c.r[5].w[0] + 16u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_0037BE98; }
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[6], c.r[5].w[0] + 24u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BE94u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 17u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037BE94u) [[unlikely]] return; }
L_0037BE94:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_0037BE98:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037BE68u | kUnwind; return; } goto L_0037BE68; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0037BEA4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379290u | kUnwind; return; } goto L_00379290; }
L_0037BEB8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    set32(c.r[23], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BEF8u); set32(c.r[21], c.r[22].w[0] + 16u);  if (depth < kMaxDepth) unit_0096(c, 83u, depth + 1u); else { c.pc = 0x00379278u; return; } if (c.pc != 0x0037BEF8u) [[unlikely]] return; }
L_0037BEF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[17], c.r[2].w[0] - 13104u);
    c.budget -= 2;
L_0037BF00:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[23].d[0]) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0037BF84; }
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[20], 0u + 128u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[21].w[0]);  if (t) { goto L_0037BF50; } }
    c.budget -= 1;
L_0037BF20:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 12u));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 2u));
    ldl(c.r[3], (c.r[29].w[0] + 7u));
    ldr(c.r[3], (c.r[29].w[0]));
    sdl(c.r[3], (c.r[16].w[0] + 15u));
    sdr(c.r[3], (c.r[16].w[0] + 8u));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 12;
L_0037BF50:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[20].d[0]; c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_0037BF90; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BF74u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037BF74u) [[unlikely]] return; }
L_0037BF74:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037BF20u | kUnwind; return; } goto L_0037BF20; }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0037BF84:
    c.r[2].d[0] = c.r[19].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037BF00u | kUnwind; return; } goto L_0037BF00; } }
L_0037BF90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BF98u);  if (depth < kMaxDepth) unit_0096(c, 84u, depth + 1u); else { c.pc = 0x00379290u; return; } if (c.pc != 0x0037BF98u) [[unlikely]] return; }
L_0037BF98:
    st32((c.r[22].w[0]), c.r[18].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0037BFC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003717D0u | kUnwind; return; } [[clang::musttail]] return unit_0094(c, 170u, depth); }
L_0037BFE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[21].w[0] - 13124u)));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.budget -= 8;
    [[clang::musttail]] return unit_0097(c, 1u, depth);
}

}
