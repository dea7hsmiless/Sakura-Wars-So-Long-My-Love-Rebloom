#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A5[4096] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0,
    0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0,
    14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 16, 0, 0, 0, 0, 17, 0, 18, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0,
    0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 59,
    0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0,
    0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0,
    0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0,
    0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0,
    0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0,
    0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141,
    0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0,
    0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0,
    0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 180,
    0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 195, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0,
    0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0,
    0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205,
    0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0,
    0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0,
    0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0,
    0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0,
    0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0,
    236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0,
    240, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246,
    0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0,
    0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0,
    0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312,
    0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0,
    0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0,
    335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340,
    0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 345, 0, 0, 346, 0,
};

void unit_00A5(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003B4028;
    case 2u: goto L_003B4098;
    case 3u: goto L_003B40F0;
    case 4u: goto L_003B4108;
    case 5u: goto L_003B4120;
    case 6u: goto L_003B4138;
    case 7u: goto L_003B4148;
    case 8u: goto L_003B4188;
    case 9u: goto L_003B41A0;
    case 10u: goto L_003B41B8;
    case 11u: goto L_003B41D0;
    case 12u: goto L_003B41E0;
    case 13u: goto L_003B41F0;
    case 14u: goto L_003B4200;
    case 15u: goto L_003B422C;
    case 16u: goto L_003B4230;
    case 17u: goto L_003B4244;
    case 18u: goto L_003B424C;
    case 19u: goto L_003B4254;
    case 20u: goto L_003B425C;
    case 21u: goto L_003B4290;
    case 22u: goto L_003B42B8;
    case 23u: goto L_003B42F0;
    case 24u: goto L_003B4368;
    case 25u: goto L_003B43AC;
    case 26u: goto L_003B43C0;
    case 27u: goto L_003B43F0;
    case 28u: goto L_003B4408;
    case 29u: goto L_003B4438;
    case 30u: goto L_003B4460;
    case 31u: goto L_003B4498;
    case 32u: goto L_003B44D8;
    case 33u: goto L_003B44EC;
    case 34u: goto L_003B4508;
    case 35u: goto L_003B453C;
    case 36u: goto L_003B4558;
    case 37u: goto L_003B457C;
    case 38u: goto L_003B46C0;
    case 39u: goto L_003B46D4;
    case 40u: goto L_003B4758;
    case 41u: goto L_003B4814;
    case 42u: goto L_003B48D4;
    case 43u: goto L_003B4930;
    case 44u: goto L_003B4984;
    case 45u: goto L_003B4998;
    case 46u: goto L_003B49AC;
    case 47u: goto L_003B4A38;
    case 48u: goto L_003B4A4C;
    case 49u: goto L_003B4A9C;
    case 50u: goto L_003B4AC8;
    case 51u: goto L_003B4BC0;
    case 52u: goto L_003B4BD8;
    case 53u: goto L_003B4C10;
    case 54u: goto L_003B4C20;
    case 55u: goto L_003B4C28;
    case 56u: goto L_003B4C38;
    case 57u: goto L_003B4C5C;
    case 58u: goto L_003B4C68;
    case 59u: goto L_003B4C7C;
    case 60u: goto L_003B4C9C;
    case 61u: goto L_003B4CB0;
    case 62u: goto L_003B4CC4;
    case 63u: goto L_003B4CF4;
    case 64u: goto L_003B4D20;
    case 65u: goto L_003B4D44;
    case 66u: goto L_003B4D70;
    case 67u: goto L_003B4D84;
    case 68u: goto L_003B4DD0;
    case 69u: goto L_003B4DE4;
    case 70u: goto L_003B4E14;
    case 71u: goto L_003B4E40;
    case 72u: goto L_003B4E54;
    case 73u: goto L_003B4E84;
    case 74u: goto L_003B4F18;
    case 75u: goto L_003B4F34;
    case 76u: goto L_003B4F64;
    case 77u: goto L_003B4F80;
    case 78u: goto L_003B4F98;
    case 79u: goto L_003B4FBC;
    case 80u: goto L_003B4FE8;
    case 81u: goto L_003B5008;
    case 82u: goto L_003B5028;
    case 83u: goto L_003B503C;
    case 84u: goto L_003B5050;
    case 85u: goto L_003B5074;
    case 86u: goto L_003B5098;
    case 87u: goto L_003B50AC;
    case 88u: goto L_003B50C0;
    case 89u: goto L_003B50E0;
    case 90u: goto L_003B50F0;
    case 91u: goto L_003B5104;
    case 92u: goto L_003B5118;
    case 93u: goto L_003B512C;
    case 94u: goto L_003B515C;
    case 95u: goto L_003B5190;
    case 96u: goto L_003B51A4;
    case 97u: goto L_003B51D4;
    case 98u: goto L_003B51F0;
    case 99u: goto L_003B5200;
    case 100u: goto L_003B521C;
    case 101u: goto L_003B524C;
    case 102u: goto L_003B5280;
    case 103u: goto L_003B529C;
    case 104u: goto L_003B52CC;
    case 105u: goto L_003B52E8;
    case 106u: goto L_003B5300;
    case 107u: goto L_003B5310;
    case 108u: goto L_003B5320;
    case 109u: goto L_003B533C;
    case 110u: goto L_003B536C;
    case 111u: goto L_003B53C4;
    case 112u: goto L_003B53F0;
    case 113u: goto L_003B5404;
    case 114u: goto L_003B5568;
    case 115u: goto L_003B558C;
    case 116u: goto L_003B55B8;
    case 117u: goto L_003B5600;
    case 118u: goto L_003B5614;
    case 119u: goto L_003B5644;
    case 120u: goto L_003B565C;
    case 121u: goto L_003B5670;
    case 122u: goto L_003B5684;
    case 123u: goto L_003B56B4;
    case 124u: goto L_003B5878;
    case 125u: goto L_003B5890;
    case 126u: goto L_003B58C0;
    case 127u: goto L_003B5930;
    case 128u: goto L_003B5950;
    case 129u: goto L_003B5970;
    case 130u: goto L_003B59A4;
    case 131u: goto L_003B59C8;
    case 132u: goto L_003B59D0;
    case 133u: goto L_003B59E4;
    case 134u: goto L_003B5A0C;
    case 135u: goto L_003B5A40;
    case 136u: goto L_003B5A80;
    case 137u: goto L_003B5A9C;
    case 138u: goto L_003B5AA4;
    case 139u: goto L_003B5AD0;
    case 140u: goto L_003B5B38;
    case 141u: goto L_003B5B7C;
    case 142u: goto L_003B5B8C;
    case 143u: goto L_003B5BA0;
    case 144u: goto L_003B5BC8;
    case 145u: goto L_003B5BD8;
    case 146u: goto L_003B5C10;
    case 147u: goto L_003B5C3C;
    case 148u: goto L_003B5C68;
    case 149u: goto L_003B5C74;
    case 150u: goto L_003B5CA0;
    case 151u: goto L_003B5CF0;
    case 152u: goto L_003B5D00;
    case 153u: goto L_003B5D18;
    case 154u: goto L_003B5D20;
    case 155u: goto L_003B5D34;
    case 156u: goto L_003B5D44;
    case 157u: goto L_003B5D78;
    case 158u: goto L_003B5D98;
    case 159u: goto L_003B5DC0;
    case 160u: goto L_003B5DEC;
    case 161u: goto L_003B5E08;
    case 162u: goto L_003B5E58;
    case 163u: goto L_003B5E78;
    case 164u: goto L_003B5EA8;
    case 165u: goto L_003B5EBC;
    case 166u: goto L_003B5EE0;
    case 167u: goto L_003B5F10;
    case 168u: goto L_003B5F50;
    case 169u: goto L_003B5F60;
    case 170u: goto L_003B5F74;
    case 171u: goto L_003B5FDC;
    case 172u: goto L_003B5FF8;
    case 173u: goto L_003B6044;
    case 174u: goto L_003B6070;
    case 175u: goto L_003B6098;
    case 176u: goto L_003B60B8;
    case 177u: goto L_003B6134;
    case 178u: goto L_003B6158;
    case 179u: goto L_003B6168;
    case 180u: goto L_003B617C;
    case 181u: goto L_003B618C;
    case 182u: goto L_003B61A0;
    case 183u: goto L_003B6220;
    case 184u: goto L_003B6228;
    case 185u: goto L_003B6238;
    case 186u: goto L_003B62AC;
    case 187u: goto L_003B6320;
    case 188u: goto L_003B6328;
    case 189u: goto L_003B6354;
    case 190u: goto L_003B6364;
    case 191u: goto L_003B6374;
    case 192u: goto L_003B63A0;
    case 193u: goto L_003B63DC;
    case 194u: goto L_003B63E8;
    case 195u: goto L_003B63F8;
    case 196u: goto L_003B6438;
    case 197u: goto L_003B6474;
    case 198u: goto L_003B6488;
    case 199u: goto L_003B6490;
    case 200u: goto L_003B64C0;
    case 201u: goto L_003B64C8;
    case 202u: goto L_003B64F8;
    case 203u: goto L_003B650C;
    case 204u: goto L_003B6528;
    case 205u: goto L_003B657C;
    case 206u: goto L_003B6584;
    case 207u: goto L_003B65A0;
    case 208u: goto L_003B6610;
    case 209u: goto L_003B66A4;
    case 210u: goto L_003B66C8;
    case 211u: goto L_003B66DC;
    case 212u: goto L_003B671C;
    case 213u: goto L_003B6730;
    case 214u: goto L_003B6750;
    case 215u: goto L_003B6760;
    case 216u: goto L_003B6774;
    case 217u: goto L_003B6794;
    case 218u: goto L_003B67A8;
    case 219u: goto L_003B67BC;
    case 220u: goto L_003B67E0;
    case 221u: goto L_003B67F4;
    case 222u: goto L_003B6814;
    case 223u: goto L_003B6828;
    case 224u: goto L_003B6848;
    case 225u: goto L_003B6874;
    case 226u: goto L_003B6888;
    case 227u: goto L_003B68A8;
    case 228u: goto L_003B68B8;
    case 229u: goto L_003B68C0;
    case 230u: goto L_003B68D8;
    case 231u: goto L_003B68F8;
    case 232u: goto L_003B690C;
    case 233u: goto L_003B692C;
    case 234u: goto L_003B6948;
    case 235u: goto L_003B6960;
    case 236u: goto L_003B6980;
    case 237u: goto L_003B6998;
    case 238u: goto L_003B69B8;
    case 239u: goto L_003B69E0;
    case 240u: goto L_003B6A00;
    case 241u: goto L_003B6A10;
    case 242u: goto L_003B6A20;
    case 243u: goto L_003B6A6C;
    case 244u: goto L_003B6ADC;
    case 245u: goto L_003B6B50;
    case 246u: goto L_003B6B7C;
    case 247u: goto L_003B6BA0;
    case 248u: goto L_003B6BC8;
    case 249u: goto L_003B6C14;
    case 250u: goto L_003B6C58;
    case 251u: goto L_003B6CB0;
    case 252u: goto L_003B6CD0;
    case 253u: goto L_003B6D14;
    case 254u: goto L_003B6D48;
    case 255u: goto L_003B6D90;
    case 256u: goto L_003B6DA0;
    case 257u: goto L_003B6DD8;
    case 258u: goto L_003B6E38;
    case 259u: goto L_003B6E58;
    case 260u: goto L_003B6E70;
    case 261u: goto L_003B6E90;
    case 262u: goto L_003B6ED4;
    case 263u: goto L_003B6F00;
    case 264u: goto L_003B6F58;
    case 265u: goto L_003B6FB0;
    case 266u: goto L_003B6FCC;
    case 267u: goto L_003B6FEC;
    case 268u: goto L_003B7034;
    case 269u: goto L_003B7058;
    case 270u: goto L_003B70AC;
    case 271u: goto L_003B7114;
    case 272u: goto L_003B7164;
    case 273u: goto L_003B71D0;
    case 274u: goto L_003B722C;
    case 275u: goto L_003B7258;
    case 276u: goto L_003B7280;
    case 277u: goto L_003B72A8;
    case 278u: goto L_003B7340;
    case 279u: goto L_003B7358;
    case 280u: goto L_003B736C;
    case 281u: goto L_003B73C0;
    case 282u: goto L_003B73E4;
    case 283u: goto L_003B7408;
    case 284u: goto L_003B7460;
    case 285u: goto L_003B74C8;
    case 286u: goto L_003B74D8;
    case 287u: goto L_003B7510;
    case 288u: goto L_003B7520;
    case 289u: goto L_003B7538;
    case 290u: goto L_003B7560;
    case 291u: goto L_003B75A8;
    case 292u: goto L_003B75D0;
    case 293u: goto L_003B75E0;
    case 294u: goto L_003B7608;
    case 295u: goto L_003B7630;
    case 296u: goto L_003B7644;
    case 297u: goto L_003B7668;
    case 298u: goto L_003B7684;
    case 299u: goto L_003B76B0;
    case 300u: goto L_003B76F8;
    case 301u: goto L_003B7740;
    case 302u: goto L_003B7780;
    case 303u: goto L_003B77C4;
    case 304u: goto L_003B77F0;
    case 305u: goto L_003B7818;
    case 306u: goto L_003B7838;
    case 307u: goto L_003B7864;
    case 308u: goto L_003B78A8;
    case 309u: goto L_003B78DC;
    case 310u: goto L_003B7908;
    case 311u: goto L_003B7954;
    case 312u: goto L_003B797C;
    case 313u: goto L_003B79A0;
    case 314u: goto L_003B79DC;
    case 315u: goto L_003B79F0;
    case 316u: goto L_003B7A1C;
    case 317u: goto L_003B7A34;
    case 318u: goto L_003B7A60;
    case 319u: goto L_003B7A70;
    case 320u: goto L_003B7A94;
    case 321u: goto L_003B7AD8;
    case 322u: goto L_003B7B78;
    case 323u: goto L_003B7BD0;
    case 324u: goto L_003B7C28;
    case 325u: goto L_003B7C50;
    case 326u: goto L_003B7C80;
    case 327u: goto L_003B7CAC;
    case 328u: goto L_003B7CC4;
    case 329u: goto L_003B7CD8;
    case 330u: goto L_003B7CE8;
    case 331u: goto L_003B7D68;
    case 332u: goto L_003B7DC8;
    case 333u: goto L_003B7E18;
    case 334u: goto L_003B7E60;
    case 335u: goto L_003B7E80;
    case 336u: goto L_003B7EF0;
    case 337u: goto L_003B7F18;
    case 338u: goto L_003B7F34;
    case 339u: goto L_003B7F64;
    case 340u: goto L_003B7F7C;
    case 341u: goto L_003B7F94;
    case 342u: goto L_003B7FA4;
    case 343u: goto L_003B7FD8;
    case 344u: goto L_003B7FE0;
    case 345u: goto L_003B7FEC;
    case 346u: goto L_003B7FF8;
    default: bad_entry(c, 0x003B4000u); return;
    }
L_003B4028:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[2].w[0] + 12328u), c.r[4].d[0]);  c.pc = t; return; }
L_003B4098:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003B40E0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B40E0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003B40E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20080u);
    set32(c.r[6], c.r[6].w[0] + 20104u);
    set32(c.r[5], 0u + 132u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 100u);
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B40E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036DF38u | kUnwind; return; } [[clang::musttail]] return unit_0093(c, 171u, depth); }
L_003B40F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036DED0u | kUnwind; return; } [[clang::musttail]] return unit_0093(c, 167u, depth); }
L_003B4108:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036DFA0u | kUnwind; return; } [[clang::musttail]] return unit_0093(c, 175u, depth); }
L_003B4120:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036E070u | kUnwind; return; } [[clang::musttail]] return unit_0093(c, 183u, depth); }
L_003B4138:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4148u);  if (depth < kMaxDepth) unit_0093(c, 188u, depth + 1u); else { c.pc = 0x0036E128u; return; } if (c.pc != 0x003B4148u) [[unlikely]] return; }
L_003B4148:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B417C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003B417C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B417C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003B417C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003B417C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B4188:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036E4C0u | kUnwind; return; } [[clang::musttail]] return unit_0093(c, 216u, depth); }
L_003B41A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036E580u | kUnwind; return; } [[clang::musttail]] return unit_0093(c, 222u, depth); }
L_003B41B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036F278u | kUnwind; return; } [[clang::musttail]] return unit_0093(c, 325u, depth); }
L_003B41D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B41E0u);  if (depth < kMaxDepth) unit_0093(c, 185u, depth + 1u); else { c.pc = 0x0036E0C8u; return; } if (c.pc != 0x003B41E0u) [[unlikely]] return; }
L_003B41E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A7(c, 35u, depth); }
L_003B41F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 19968u);  c.pc = t; return; }
L_003B4200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 2u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B422Cu); set32(c.r[19], 0u + 3u);  if (depth < kMaxDepth) unit_00A5(c, 281u, depth + 1u); else { c.pc = 0x003B73C0u; return; } if (c.pc != 0x003B422Cu) [[unlikely]] return; }
L_003B422C:
    c.budget -= 1;
L_003B4230:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[4].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4244u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B4244u) [[unlikely]] return; }
L_003B4244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B424Cu);  if (depth < kMaxDepth) unit_00A5(c, 88u, depth + 1u); else { c.pc = 0x003B50C0u; return; } if (c.pc != 0x003B424Cu) [[unlikely]] return; }
L_003B424C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4254u);  if (depth < kMaxDepth) unit_00A6(c, 155u, depth + 1u); else { c.pc = 0x003B94B0u; return; } if (c.pc != 0x003B4254u) [[unlikely]] return; }
L_003B4254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B425Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 43u, depth + 1u); else { c.pc = 0x003B4930u; return; } if (c.pc != 0x003B425Cu) [[unlikely]] return; }
L_003B425C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B4298; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 204u);  if (t) { goto L_003B4298; } }
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 28u)));  goto L_003B4288; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[19].d[0]; set32(c.r[2], 0u - 1000u);  if (t) { goto L_003B4298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 58u)));  if (t) { goto L_003B4298; } }
L_003B4288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4290u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A5(c, 283u, depth + 1u); else { c.pc = 0x003B7408u; return; } if (c.pc != 0x003B4290u) [[unlikely]] return; }
L_003B4290:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; set32(c.r[2], 0u - 201u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4230u | kUnwind; return; } goto L_003B4230; } }
L_003B4298:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B42B8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B42F0u); c.r[19].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 41u, depth + 1u); else { c.pc = 0x003B8530u; return; } if (c.pc != 0x003B42F0u) [[unlikely]] return; }
L_003B42F0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003B4348; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[3], c.r[5].w[0] + 2047u);
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] >> 11);
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[19].w[0]);
    st16((c.r[16].w[0] + 58u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0]), c.r[5].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st16((c.r[16].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 56u), static_cast<std::uint16_t>(0u));
    c.budget -= 20;
L_003B4348:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B4368:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003B4388; } }
    c.budget -= 2;
    if (c.r[9].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 52u)));  goto L_003B4390; }
L_003B4388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B43B0; } }
L_003B4390:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B43B0; } }
    set32(c.r[3], ld32((c.r[9].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B43B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B43ACu);  if (depth < kMaxDepth) unit_00A5(c, 22u, depth + 1u); else { c.pc = 0x003B42B8u; return; } if (c.pc != 0x003B43ACu) [[unlikely]] return; }
L_003B43AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003B43B0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B43B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B43C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003B43F4; } }
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 54u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[9].d[0] == c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B43F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B43F0u);  if (depth < kMaxDepth) unit_00A5(c, 22u, depth + 1u); else { c.pc = 0x003B42B8u; return; } if (c.pc != 0x003B43F0u) [[unlikely]] return; }
L_003B43F0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003B43F4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B43F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B4408:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003B4448; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003B4448; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4438u); set32(c.r[6], 0u + 72u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003B4438u) [[unlikely]] return; }
L_003B4438:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 4;
L_003B4448:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B4460:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B44D0; } }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  goto L_003B447C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
L_003B447C:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[4], c.r[2].w[0] + 4236u);  if (t) { goto L_003B44CC; } }
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 54u)));
    c.budget -= 3;
L_003B4498:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[8].d[0]) { set32(c.r[4], c.r[4].w[0] + 60u);  goto L_003B44BC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_003B44C0; }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003B44D0; } }
    set32(c.r[4], c.r[4].w[0] + 60u);
    c.budget -= 1;
L_003B44BC:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_003B44C0:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 54u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4498u | kUnwind; return; } goto L_003B4498; }
L_003B44CC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B44D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B44D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B44ECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003B8158u; return; } if (c.pc != 0x003B44ECu) [[unlikely]] return; }
L_003B44EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B53A0; }
L_003B4508:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003B4544; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003B4544; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { st16((c.r[16].w[0] + 54u), static_cast<std::uint16_t>(0u));  goto L_003B4540; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B453Cu);  if (depth < kMaxDepth) unit_00A5(c, 50u, depth + 1u); else { c.pc = 0x003B4AC8u; return; } if (c.pc != 0x003B453Cu) [[unlikely]] return; }
L_003B453C:
    st16((c.r[16].w[0] + 54u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_003B4540:
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_003B4544:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B4558:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B457Cu); c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003B8158u; return; } if (c.pc != 0x003B457Cu) [[unlikely]] return; }
L_003B457C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 52u)));  goto L_003B45B8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20120u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 20136u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[5], 0u + 302u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 101u);
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B45B8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003B45F8; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20120u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 20136u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[5], 0u + 305u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 101u);
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B45F8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (t) { goto L_003B4648; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[3].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003B465C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003B4658; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20120u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 20136u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[5], 0u + 324u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 205u);
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B4648:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);  if (t) { goto L_003B465C; } }
    c.budget -= 1;
L_003B4658:
    set32(c.r[3], c.r[4].w[0] + c.r[18].w[0]);
    c.budget -= 1;
L_003B465C:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0; c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;  if (t) { goto L_003B466C; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 20u), c.r[3].w[0]);  goto L_003B46A0; }
L_003B466C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20120u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 20136u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[5], 0u + 329u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 205u);
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B46A0:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B46C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B46D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003B8158u; return; } if (c.pc != 0x003B46D4u) [[unlikely]] return; }
L_003B46D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20120u);
    set32(c.r[6], c.r[6].w[0] + 20152u);
    set32(c.r[5], 0u + 348u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 101u);
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003B4708; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B4708:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003B4740; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20120u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 20152u);
    set32(c.r[5], 0u + 351u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 101u);
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B4740:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B4758:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003B47B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20120u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 20168u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[5], 0u + 367u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[8], 0u - 101u);
    c.budget -= 14;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B47B8:
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 52u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003B4800; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20120u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 20168u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[5], 0u + 370u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[8], 0u - 101u);
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B4800:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 54u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; set32(c.r[2], 0u - 200u);  if (t) { goto L_003B4914; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4814u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 30u, depth + 1u); else { c.pc = 0x003B4460u; return; } if (c.pc != 0x003B4814u) [[unlikely]] return; }
L_003B4814:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[9], ld32((c.r[16].w[0] + 28u)));  goto L_003B4828; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_003B4914; } }
    c.budget -= 1;
L_003B4828:
    c.budget -= 2;
    if (c.r[9].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 20u)));  goto L_003B4868; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20120u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 20168u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[5], 0u + 383u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[8], 0u - 101u);
    c.budget -= 14;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B4868:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[2], 0u - 200u);  if (t) { goto L_003B4914; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[6], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { st16((c.r[16].w[0] + 56u), static_cast<std::uint16_t>(c.r[17].w[0]));  goto L_003B48AC; }
    set32(c.r[2], c.r[6].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[4].w[0] - c.r[6].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[18].d[0] = c.r[3].d[0];
    c.budget -= 6;
    if (c.r[18].sd[0] > 0) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_003B48B8; }
    st16((c.r[16].w[0] + 56u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 1;
L_003B48AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B4914; } }
    c.budget -= 1;
L_003B48B8:
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[9].w[0])));
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B48D4u); set32(c.r[4], ld32((c.r[9].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B48D4u) [[unlikely]] return; }
L_003B48D4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 200u);  if (t) { goto L_003B4914; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003B4908; } }
    st32((c.r[16].w[0] + 48u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[18].w[0]);
    st16((c.r[16].w[0] + 56u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 54u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 44u), c.r[3].w[0]);  if (t) { goto L_003B490C; } }
L_003B4908:
    st16((c.r[16].w[0] + 56u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 1;
L_003B490C:
    set32(c.r[2], 0u - 204u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_003B4914:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B4930:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003B4958; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20120u);
    set32(c.r[6], c.r[6].w[0] + 20184u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 463u);  if (t) { goto L_003B4978; } }
    c.budget -= 1;
L_003B4958:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 56u)));  goto L_003B4988; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20120u);
    set32(c.r[6], c.r[6].w[0] + 20184u);
    set32(c.r[5], 0u + 467u);
    c.budget -= 5;
L_003B4978:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4984u); set32(c.r[8], 0u - 101u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B4984u) [[unlikely]] return; }
L_003B4984:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_003B4988:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B4998:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B49ACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003B8158u; return; } if (c.pc != 0x003B49ACu) [[unlikely]] return; }
L_003B49AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20120u);
    set32(c.r[6], c.r[6].w[0] + 20200u);
    set32(c.r[5], 0u + 485u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[8], 0u - 101u);  if (t) { goto L_003B49E0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B49E0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_003B4A18; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20120u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 20200u);
    set32(c.r[5], 0u + 488u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 101u);
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B4A18:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 11);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B4A38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4A4Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003B8158u; return; } if (c.pc != 0x003B4A4Cu) [[unlikely]] return; }
L_003B4A4C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20120u);
    set32(c.r[6], c.r[6].w[0] + 20216u);
    set32(c.r[5], 0u + 503u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[8], 0u - 101u);  if (t) { goto L_003B4A94; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_003B4AA8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20120u);
    set32(c.r[6], c.r[6].w[0] + 20216u);
    set32(c.r[5], 0u + 506u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 101u);
    c.budget -= 7;
L_003B4A94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4A9Cu);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B4A9Cu) [[unlikely]] return; }
L_003B4A9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003B4AB4; } }
    c.budget -= 1;
L_003B4AA8:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 11);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_003B4AB4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B4AC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003B4B10; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20120u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 20232u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[5], 0u + 520u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 101u);
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B4B10:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 28u)));  goto L_003B4B50; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20120u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 20232u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[5], 0u + 524u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 101u);
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B4B50:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 56u)));  goto L_003B4B88; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20120u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 20232u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[5], 0u + 528u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 101u);
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B4B88:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 54u)));  goto L_003B4BA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 56u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003B4BF8; } }
    c.budget -= 1;
L_003B4BA0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003B4BB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 54u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { goto L_003B4BF8; } }
    c.budget -= 1;
L_003B4BB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4BC0u);  if (depth < kMaxDepth) unit_00A6(c, 7u, depth + 1u); else { c.pc = 0x003B8048u; return; } if (c.pc != 0x003B4BC0u) [[unlikely]] return; }
L_003B4BC0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4BD8u); set32(c.r[4], ld32((c.r[3].w[0])));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B4BD8u) [[unlikely]] return; }
L_003B4BD8:
    st16((c.r[16].w[0] + 54u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A6(c, 8u, depth); }
L_003B4BF8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B4C10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4C20u);  if (depth < kMaxDepth) unit_00A7(c, 36u, depth + 1u); else { c.pc = 0x003BC730u; return; } if (c.pc != 0x003B4C20u) [[unlikely]] return; }
L_003B4C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4C28u);  if (depth < kMaxDepth) unit_00A7(c, 36u, depth + 1u); else { c.pc = 0x003BC730u; return; } if (c.pc != 0x003B4C28u) [[unlikely]] return; }
L_003B4C28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B4C38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[3].w[0] + 20704u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[2].w[0] + 12352u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4C5Cu); c.r[5].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B4C5Cu) [[unlikely]] return; }
L_003B4C5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B4C68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4C7Cu);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003B8158u; return; } if (c.pc != 0x003B4C7Cu) [[unlikely]] return; }
L_003B4C7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[16], c.r[2].w[0] + 12352u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B4CA4; }
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4C9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B4C9Cu) [[unlikely]] return; }
L_003B4C9C:
    st32((c.r[16].w[0]), 0u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003B4CA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B4CB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4CC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003B8158u; return; } if (c.pc != 0x003B4CC4u) [[unlikely]] return; }
L_003B4CC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12352u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 20264u);
    set32(c.r[5], 0u + 138u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], 0u - 203u);  if (t) { goto L_003B4D08; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4CF4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B4CF4u) [[unlikely]] return; }
L_003B4CF4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B4D08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 20248u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B4D20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4D44u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003B8158u; return; } if (c.pc != 0x003B4D44u) [[unlikely]] return; }
L_003B4D44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 12352u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], 0u - 203u);  if (t) { goto L_003B4DA0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4D70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B4D70u) [[unlikely]] return; }
L_003B4D70:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B4D88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4D84u);  if (depth < kMaxDepth) unit_00A5(c, 53u, depth + 1u); else { c.pc = 0x003B4C10u; return; } if (c.pc != 0x003B4D84u) [[unlikely]] return; }
L_003B4D84:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003B4D88:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B4DA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20248u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 20288u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[5], 0u + 163u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B4DD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4DE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003B8158u; return; } if (c.pc != 0x003B4DE4u) [[unlikely]] return; }
L_003B4DE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12352u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 20304u);
    set32(c.r[5], 0u + 178u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], 0u - 203u);  if (t) { goto L_003B4E28; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4E14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B4E14u) [[unlikely]] return; }
L_003B4E14:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B4E28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 20248u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B4E40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4E54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003B8158u; return; } if (c.pc != 0x003B4E54u) [[unlikely]] return; }
L_003B4E54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12352u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 20320u);
    set32(c.r[5], 0u + 193u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], 0u - 203u);  if (t) { goto L_003B4E98; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4E84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B4E84u) [[unlikely]] return; }
L_003B4E84:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B4E98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 20248u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B4F18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4F34u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003B8158u; return; } if (c.pc != 0x003B4F34u) [[unlikely]] return; }
L_003B4F34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12352u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 20368u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], 0u - 203u);  if (t) { goto L_003B4F70; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4F64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B4F64u) [[unlikely]] return; }
L_003B4F64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B4F88; } }
    c.budget -= 1;
L_003B4F70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4F80u); set32(c.r[4], c.r[4].w[0] + 20248u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B4F80u) [[unlikely]] return; }
L_003B4F80:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003B4F88:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B4F98:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4FBCu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003B8158u; return; } if (c.pc != 0x003B4FBCu) [[unlikely]] return; }
L_003B4FBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 12352u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], 0u - 203u);  if (t) { goto L_003B4FF0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4FE8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B4FE8u) [[unlikely]] return; }
L_003B4FE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B5010; } }
L_003B4FF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20248u);
    set32(c.r[6], c.r[6].w[0] + 20384u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5008u); set32(c.r[5], 0u + 240u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B5008u) [[unlikely]] return; }
L_003B5008:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003B5010:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B5028:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B503Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003B8158u; return; } if (c.pc != 0x003B503Cu) [[unlikely]] return; }
L_003B503C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4508u | kUnwind; return; } goto L_003B4508; }
L_003B5050:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5074u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003B8158u; return; } if (c.pc != 0x003B5074u) [[unlikely]] return; }
L_003B5074:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4758u | kUnwind; return; } goto L_003B4758; }
L_003B5098:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B50ACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003B8158u; return; } if (c.pc != 0x003B50ACu) [[unlikely]] return; }
L_003B50AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4AC8u | kUnwind; return; } goto L_003B4AC8; }
L_003B50C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12352u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003B50E0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B50E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B50E0u) [[unlikely]] return; }
L_003B50E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B50F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5104u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003B8158u; return; } if (c.pc != 0x003B5104u) [[unlikely]] return; }
L_003B5104:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4930u | kUnwind; return; } goto L_003B4930; }
L_003B5118:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B512Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003B8158u; return; } if (c.pc != 0x003B512Cu) [[unlikely]] return; }
L_003B512C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12352u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 20400u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], 0u - 203u);  if (t) { goto L_003B5170; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B515Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B515Cu) [[unlikely]] return; }
L_003B515C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B5170:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 20248u);
    set32(c.r[5], 0u + 314u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B5190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B51A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003B8158u; return; } if (c.pc != 0x003B51A4u) [[unlikely]] return; }
L_003B51A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12352u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 20416u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], 0u - 203u);  if (t) { goto L_003B51E0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B51D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B51D4u) [[unlikely]] return; }
L_003B51D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B51F4; } }
    c.budget -= 1;
L_003B51E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 327u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B51F0u); set32(c.r[4], c.r[4].w[0] + 20248u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B51F0u) [[unlikely]] return; }
L_003B51F0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B51F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B5200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B521Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003B8158u; return; } if (c.pc != 0x003B521Cu) [[unlikely]] return; }
L_003B521C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12352u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 20400u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], 0u - 203u);  if (t) { goto L_003B5260; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B524Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B524Cu) [[unlikely]] return; }
L_003B524C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B5260:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 20248u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[5], 0u + 346u);
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B5280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B529Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003B8158u; return; } if (c.pc != 0x003B529Cu) [[unlikely]] return; }
L_003B529C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12352u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 20416u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], 0u - 203u);  if (t) { goto L_003B52D8; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B52CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B52CCu) [[unlikely]] return; }
L_003B52CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B52EC; } }
    c.budget -= 1;
L_003B52D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 360u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B52E8u); set32(c.r[4], c.r[4].w[0] + 20248u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B52E8u) [[unlikely]] return; }
L_003B52E8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B52EC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B5300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5310u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003B8158u; return; } if (c.pc != 0x003B5310u) [[unlikely]] return; }
L_003B5310:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 2048u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B5320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B533Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003B8158u; return; } if (c.pc != 0x003B533Cu) [[unlikely]] return; }
L_003B533C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12352u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 20440u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], 0u - 203u);  if (t) { goto L_003B5380; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B536Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B536Cu) [[unlikely]] return; }
L_003B536C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B5380:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 20248u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[5], 0u + 387u);
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B53A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B53C4u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003B8158u; return; } if (c.pc != 0x003B53C4u) [[unlikely]] return; }
L_003B53C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 12352u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], 0u - 203u);  if (t) { goto L_003B5420; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B53F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B53F0u) [[unlikely]] return; }
L_003B53F0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B5408; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5404u);  if (depth < kMaxDepth) unit_00A5(c, 53u, depth + 1u); else { c.pc = 0x003B4C10u; return; } if (c.pc != 0x003B5404u) [[unlikely]] return; }
L_003B5404:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003B5408:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B5420:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20248u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 20464u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[5], 0u + 409u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B5568:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B558Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003B8158u; return; } if (c.pc != 0x003B558Cu) [[unlikely]] return; }
L_003B558C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 12352u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], 0u - 203u);  if (t) { goto L_003B55D0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B55B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B55B8u) [[unlikely]] return; }
L_003B55B8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B55D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20248u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 20512u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[5], 0u + 455u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B5600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5614u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003B8158u; return; } if (c.pc != 0x003B5614u) [[unlikely]] return; }
L_003B5614:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12352u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 470u);
    set32(c.r[6], c.r[6].w[0] + 20528u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], 0u - 203u);  if (t) { goto L_003B5650; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5644u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B5644u) [[unlikely]] return; }
L_003B5644:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B5664; } }
    c.budget -= 1;
L_003B5650:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B565Cu); set32(c.r[4], c.r[4].w[0] + 20248u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B565Cu) [[unlikely]] return; }
L_003B565C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003B5664:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B5670:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5684u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003B8158u; return; } if (c.pc != 0x003B5684u) [[unlikely]] return; }
L_003B5684:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12352u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 20552u);
    set32(c.r[5], 0u + 486u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], 0u - 203u);  if (t) { goto L_003B56C8; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B56B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B56B4u) [[unlikely]] return; }
L_003B56B4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B56C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 20248u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B5878:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[4].w[0] + 1u);
    set32(c.r[7], c.r[2].w[0] + 20808u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 6;
L_003B5890:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B58B8; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5890u | kUnwind; return; } goto L_003B5890; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003B58B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B58C0:
    set32(c.r[29], c.r[29].w[0] - 576u);
    st64((c.r[29].w[0] + 536u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 528u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 544u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 552u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 560u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 512u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 520u), c.r[17].d[0]);
    c.budget -= 15;
    { const bool t = c.r[19].d[0] == 0ull; st64((c.r[29].w[0] + 568u), c.r[31].d[0]);  if (t) { goto L_003B591C; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B5AA8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 512u));  if (t) { goto L_003B5AAC; } }
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] <= 0;  if (t) { goto L_003B5AAC; } }
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] > 0;  if (t) { goto L_003B5928; } }
L_003B591C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B5AA8; } }
    c.budget -= 1;
L_003B5928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5930u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x003B5930u) [[unlikely]] return; }
L_003B5930:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(513ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B5AA8; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 512u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5950u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003B5950u) [[unlikely]] return; }
L_003B5950:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[2], 0u + 58u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003B599C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 58u);  if (t) { goto L_003B599C; } }
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 2;
L_003B5970:
    set32(c.r[3], c.r[29].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 512ll ? 1ull : 0ull;
    set32(c.r[16], c.r[18].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003B599C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_003B599C; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[16].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5970u | kUnwind; return; } goto L_003B5970; }
L_003B599C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B59A4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x003B59A4u) [[unlikely]] return; }
L_003B59A4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[2].w[0] + 1u);  if (t) { goto L_003B59F0; } }
    c.r[3].d[0] = c.r[20].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B5AA8; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B59C8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x003B59C8u) [[unlikely]] return; }
L_003B59C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B59D0u); st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A5(c, 251u, depth + 1u); else { c.pc = 0x003B6CB0u; return; } if (c.pc != 0x003B59D0u) [[unlikely]] return; }
L_003B59D0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 512u));  goto L_003B5AAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B59E4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x001477A8u; return; } if (c.pc != 0x003B59E4u) [[unlikely]] return; }
L_003B59E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003B5AA8; } }
    c.budget -= 1;
L_003B59F0:
    c.r[3].d[0] = c.r[22].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B5AA8; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5A0Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x003B5A0Cu) [[unlikely]] return; }
L_003B5A0C:
    c.r[2].d[0] = c.r[17].sd[0] < 512ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B5A6C; } }
    set32(c.r[3], c.r[18].w[0] + c.r[17].w[0]);
    set32(c.r[2], 0u + 58u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[5].w[0] - c.r[17].w[0]);  if (t) { goto L_003B5A70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003B5A74; } }
    set32(c.r[7], 0u + 58u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
L_003B5A40:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[4].d[0] = c.r[5].sd[0] < 512ll ? 1ull : 0ull;
    set32(c.r[3], c.r[18].w[0] + c.r[5].w[0]);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { goto L_003B5A6C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[7].d[0]) { set32(c.r[2], c.r[5].w[0] - c.r[17].w[0]);  goto L_003B5A70; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[3].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5A40u | kUnwind; return; } goto L_003B5A40; }
L_003B5A6C:
    set32(c.r[2], c.r[5].w[0] - c.r[17].w[0]);
    c.budget -= 1;
L_003B5A70:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 1;
L_003B5A74:
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5A80u); st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x003B5A80u) [[unlikely]] return; }
L_003B5A80:
    set32(c.r[6], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B5AA8; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5A9Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x003B5A9Cu) [[unlikely]] return; }
L_003B5A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5AA4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 16u, depth + 1u); else { c.pc = 0x003B8190u; return; } if (c.pc != 0x003B5AA4u) [[unlikely]] return; }
L_003B5AA4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003B5AA8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 512u));
    c.budget -= 1;
L_003B5AAC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 520u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 528u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 536u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 544u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 552u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 560u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 568u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 576u);  c.pc = t; return; }
L_003B5AD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 12360u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[6].sd[0] < 0; set32(c.r[7], ld32((c.r[4].w[0] + 12u)));  if (t) { goto L_003B5AF4; } }
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[7].w[0] << 1);  goto L_003B5B00; }
L_003B5AF4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003B5B00:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 24u);
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);  c.pc = t; return; }
L_003B5B38:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] != 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_003B5B70; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B5BF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B5B84; } }
L_003B5B70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5B7Cu); set32(c.r[5], c.r[5].w[0] + 20816u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x003B5B7Cu) [[unlikely]] return; }
L_003B5B7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_003B5BA8; } }
L_003B5B84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5B8Cu);  if (depth < kMaxDepth) unit_00A5(c, 251u, depth + 1u); else { c.pc = 0x003B6CB0u; return; } if (c.pc != 0x003B5B8Cu) [[unlikely]] return; }
L_003B5B8C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_003B5BA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B5BF4; } }
L_003B5BA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B5BF0; } }
L_003B5BA8:
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 12360u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[19].sd[0] <= 0; set32(c.r[5], ld32((c.r[2].w[0] + 40u)));  if (t) { goto L_003B5BEC; } }
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], c.r[5].w[0] + 22u);
    c.budget -= 3;
L_003B5BC8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 52u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5BD8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x003B5BD8u) [[unlikely]] return; }
L_003B5BD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5BA0u | kUnwind; return; } goto L_003B5BA0; } }
    c.r[2].d[0] = c.r[20].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 52u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5BC8u | kUnwind; return; } goto L_003B5BC8; } }
L_003B5BEC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B5BF0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B5BF4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B5C10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5C3Cu); c.r[21].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x003B5C3Cu) [[unlikely]] return; }
L_003B5C3C:
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B5D54; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 12360u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5C68u); set32(c.r[20], ld32((c.r[2].w[0] + 12u)));  if (depth < kMaxDepth) unit_00A6(c, 16u, depth + 1u); else { c.pc = 0x003B8190u; return; } if (c.pc != 0x003B5C68u) [[unlikely]] return; }
L_003B5C68:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5C74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 140u, depth + 1u); else { c.pc = 0x003B5B38u; return; } if (c.pc != 0x003B5C74u) [[unlikely]] return; }
L_003B5C74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B5D54; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B5D58; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 22u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B5CC4; } }
    set32(c.r[3], c.r[18].w[0] + 22u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_003B5CA0:
    c.r[4].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 52u);  if (t) { goto L_003B5D44; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5CA0u | kUnwind; return; } goto L_003B5CA0; }
L_003B5CC4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003B5D44; } }
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[6], 0u + 52u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5CF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003B5CF0u) [[unlikely]] return; }
L_003B5CF0:
    set32(c.r[4], c.r[16].w[0] + 22u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5D00u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0009(c, 232u, depth + 1u); else { c.pc = 0x00147D60u; return; } if (c.pc != 0x003B5D00u) [[unlikely]] return; }
L_003B5D00:
    st32((c.r[16].w[0]), c.r[21].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5D18u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003B5D18u) [[unlikely]] return; }
L_003B5D18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5D20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 139u, depth + 1u); else { c.pc = 0x003B5AD0u; return; } if (c.pc != 0x003B5D20u) [[unlikely]] return; }
L_003B5D20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B5D3C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5D34u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 28u, depth + 1u); else { c.pc = 0x003B4408u; return; } if (c.pc != 0x003B5D34u) [[unlikely]] return; }
L_003B5D34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_003B5D50; } }
L_003B5D3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5D44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x003B5D78u; return; } if (c.pc != 0x003B5D44u) [[unlikely]] return; }
L_003B5D44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B5D54; } }
    c.budget -= 1;
L_003B5D50:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003B5D54:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B5D58:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B5D78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003B5D98; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5D98u); set32(c.r[6], 0u + 52u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003B5D98u) [[unlikely]] return; }
L_003B5D98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12360u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 5;
    if (c.r[16].d[0] == c.r[3].d[0]) { st32((c.r[2].w[0] + 44u), 0u);  goto L_003B5DAC; }
L_003B5DAC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B5DC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003B5DFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 12360u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5DECu); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B5DECu) [[unlikely]] return; }
L_003B5DEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_003B5DFC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B5E08:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    set32(c.r[21], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12360u)));
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5E58u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 335u, depth + 1u); else { c.pc = 0x003B7E80u; return; } if (c.pc != 0x003B5E58u) [[unlikely]] return; }
L_003B5E58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 207u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[21].d[0]; if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_003B5EEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5E78u);  if (depth < kMaxDepth) unit_00A6(c, 187u, depth + 1u); else { c.pc = 0x003B9B78u; return; } if (c.pc != 0x003B5E78u) [[unlikely]] return; }
L_003B5E78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 105u);  if (t) { goto L_003B5EEC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], c.r[18].w[0] + 36u);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5EA8u); st32((c.r[18].w[0] + 32u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 6u, depth + 1u); else { c.pc = 0x003BC0B8u; return; } if (c.pc != 0x003B5EA8u) [[unlikely]] return; }
L_003B5EA8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5EBCu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 335u, depth + 1u); else { c.pc = 0x003B7E80u; return; } if (c.pc != 0x003B5EBCu) [[unlikely]] return; }
L_003B5EBC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[21].d[0]; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003B5ED8; } }
    set32(c.r[2], 0u - 207u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_003B5EEC; } }
L_003B5ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5EE0u);  if (depth < kMaxDepth) unit_00A6(c, 191u, depth + 1u); else { c.pc = 0x003B9C38u; return; } if (c.pc != 0x003B5EE0u) [[unlikely]] return; }
L_003B5EE0:
    set32(c.r[3], 0u - 105u);
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
L_003B5EEC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B5F10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 1;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; st64((c.r[29].w[0]), c.r[2].d[0]);  if (t) { goto L_003B5F40; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003B5F48; } }
L_003B5F40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_003B5FE0; } }
L_003B5F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5F50u); set32(c.r[6], 0u + 1904u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003B5F50u) [[unlikely]] return; }
L_003B5F50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5F60u); set32(c.r[6], 0u + 44u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003B5F60u) [[unlikely]] return; }
L_003B5F60:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5F74u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 21u, depth + 1u); else { c.pc = 0x003B82A8u; return; } if (c.pc != 0x003B5F74u) [[unlikely]] return; }
L_003B5F74:
    set32(c.r[3], 0u + 1u);
    set32(c.r[10], 0u + 2048u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[8], 0u + 4u);
    set32(c.r[9], 0u + 16u);
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[7], c.r[16].w[0] + 36u);
    st32((c.r[17].w[0] + 112u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st8((c.r[17].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st8((c.r[17].w[0] + 97u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[16].w[0] + 16u), c.r[10].w[0]);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 12u), c.r[10].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5FDCu); st32((c.r[16].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 21u, depth + 1u); else { c.pc = 0x003B82A8u; return; } if (c.pc != 0x003B5FDCu) [[unlikely]] return; }
L_003B5FDC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B5FE0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B5FF8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[19], c.r[2].w[0] + 12360u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[18], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[2], c.r[18].w[0] - c.r[2].w[0]);
    set32(c.r[18], c.r[2].w[0] + 16u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6044u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 335u, depth + 1u); else { c.pc = 0x003B7E80u; return; } if (c.pc != 0x003B6044u) [[unlikely]] return; }
L_003B6044:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_003B6068; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B6078; } }
    c.budget -= 1;
L_003B6068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6070u);  if (depth < kMaxDepth) unit_00A6(c, 42u, depth + 1u); else { c.pc = 0x003B8548u; return; } if (c.pc != 0x003B6070u) [[unlikely]] return; }
L_003B6070:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 2;
L_003B6078:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B6098:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[5].w[0] + 156u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B60B8u); c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 100u, depth + 1u); else { c.pc = 0x003B8C90u; return; } if (c.pc != 0x003B60B8u) [[unlikely]] return; }
L_003B60B8:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[10], ld32((c.r[2].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[9].d[0] = ld8((c.r[2].w[0] + 8u));
    set32(c.r[5], c.r[10].w[0] >> 8);
    c.r[7].d[0] = ld8((c.r[2].w[0] + 16u));
    set32(c.r[2], c.r[3].w[0] >> 8);
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[6], c.r[3].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[11], ld32((c.r[8].w[0] + 12360u)));
    set32(c.r[8], c.r[10].w[0] >> 8);
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[9], c.r[9].w[0] << 24);
    c.r[6].d[0] = c.r[6].d[0] & 65280ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[7], c.r[7].w[0] << 24);
    c.r[8].d[0] = c.r[8].d[0] & 65280ull;
    set32(c.r[3], c.r[3].w[0] >> 24);
    set32(c.r[10], c.r[10].w[0] >> 24);
    c.r[7].d[0] = c.r[7].d[0] | c.r[10].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[5].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[5], ld32((c.r[11].w[0] + 72u)));
    c.r[8].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[6].d[0] = c.r[9].d[0] | c.r[6].d[0];
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6134u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 259u, depth + 1u); else { c.pc = 0x003BAA30u; return; } if (c.pc != 0x003B6134u) [[unlikely]] return; }
L_003B6134:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B6148; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u - 105u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 3;
L_003B6148:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B6158:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 20656u);  c.pc = t; return; }
L_003B6168:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B617Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 178u, depth + 1u); else { c.pc = 0x003B6158u; return; } if (c.pc != 0x003B617Cu) [[unlikely]] return; }
L_003B617C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] - 16984u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B618Cu); st32((c.r[3].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003B8158u; return; } if (c.pc != 0x003B618Cu) [[unlikely]] return; }
L_003B618C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4C38u | kUnwind; return; } goto L_003B4C38; }
L_003B61A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    c.budget -= 13;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 64u), c.r[31].d[0]);  if (t) { goto L_003B61DC; } }
    c.budget -= 2;
    if (c.r[22].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  goto L_003B61E8; }
L_003B61DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_003B6408; } }
    c.budget -= 1;
L_003B61E8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_003B6408; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B640C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B640C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B640C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6220u);  if (depth < kMaxDepth) unit_00A5(c, 196u, depth + 1u); else { c.pc = 0x003B6438u; return; } if (c.pc != 0x003B6220u) [[unlikely]] return; }
L_003B6220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6228u);  if (depth < kMaxDepth) unit_00A6(c, 171u, depth + 1u); else { c.pc = 0x003B9670u; return; } if (c.pc != 0x003B6228u) [[unlikely]] return; }
L_003B6228:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6238u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B6238u) [[unlikely]] return; }
L_003B6238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 203u);  if (t) { goto L_003B6408; } }
    set32(c.r[19], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], 0u - 8u);
    set32(c.r[18], ld32((c.r[16].w[0] + 4u)));
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[17], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[16], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 76u);
    set32(c.r[16], c.r[16].w[0] - c.r[17].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[6].w[0] + 7u);
    set32(c.r[16], c.r[16].w[0] << 2);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    set32(c.r[6], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[20], c.r[23].w[0] + 12360u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + 4364u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] - c.r[6].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B62ACu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003B62ACu) [[unlikely]] return; }
L_003B62AC:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[4], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4236u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[3].w[0] + 4236u);
    set32(c.r[7], c.r[3].w[0] + 4296u);
    c.r[5].d[0] = 0ull | 50000ull;
    st32((c.r[3].w[0] + 40u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[19].w[0]);
    st32((c.r[3].w[0] + 16u), c.r[16].w[0]);
    st32((c.r[3].w[0] + 28u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 32u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 36u), c.r[7].w[0]);
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), c.r[17].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[3].w[0] + 20u), 0u);
    st32((c.r[3].w[0] + 24u), 0u);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6320u); st32((c.r[3].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_00A5(c, 13u, depth + 1u); else { c.pc = 0x003B41F0u; return; } if (c.pc != 0x003B6320u) [[unlikely]] return; }
L_003B6320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6328u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 204u, depth + 1u); else { c.pc = 0x003B6528u; return; } if (c.pc != 0x003B6328u) [[unlikely]] return; }
L_003B6328:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B640C; }
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 56u), c.r[21].w[0]);
    st32((c.r[2].w[0] + 60u), c.r[22].w[0]);
    st32((c.r[2].w[0] + 68u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6354u); st32((c.r[2].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 58u, depth + 1u); else { c.pc = 0x003B88A8u; return; } if (c.pc != 0x003B6354u) [[unlikely]] return; }
L_003B6354:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6364u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 58u, depth + 1u); else { c.pc = 0x003B88A8u; return; } if (c.pc != 0x003B6364u) [[unlikely]] return; }
L_003B6364:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6374u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A6(c, 58u, depth + 1u); else { c.pc = 0x003B88A8u; return; } if (c.pc != 0x003B6374u) [[unlikely]] return; }
L_003B6374:
    set32(c.r[5], ld32((c.r[20].w[0])));
    set32(c.r[3], 0u - 64u);
    set32(c.r[2], c.r[5].w[0] + 139u);
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[5].w[0] + 4236u);
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] <= 0; st32((c.r[5].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_003B63BC; } }
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
L_003B63A0:
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 60u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B63A0u | kUnwind; return; } goto L_003B63A0; } }
L_003B63BC:
    set32(c.r[16], c.r[23].w[0] + 12360u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B63DCu); set32(c.r[4], ld32((c.r[2].w[0] + 32u)));  if (depth < kMaxDepth) unit_00A5(c, 26u, depth + 1u); else { c.pc = 0x003B43C0u; return; } if (c.pc != 0x003B63DCu) [[unlikely]] return; }
L_003B63DC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B63E8u); set32(c.r[4], ld32((c.r[3].w[0] + 32u)));  if (depth < kMaxDepth) unit_00A5(c, 34u, depth + 1u); else { c.pc = 0x003B4508u; return; } if (c.pc != 0x003B63E8u) [[unlikely]] return; }
L_003B63E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] + 12368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B63F8u); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_00A7(c, 3u, depth + 1u); else { c.pc = 0x003BC020u; return; } if (c.pc != 0x003B63F8u) [[unlikely]] return; }
L_003B63F8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003B6408:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B640C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B6438:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[16], c.r[18].w[0] + 12360u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003B6510; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B6514; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6474u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 5u, depth + 1u); else { c.pc = 0x003BC078u; return; } if (c.pc != 0x003B6474u) [[unlikely]] return; }
L_003B6474:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[16], c.r[2].w[0] + 4236u);  if (t) { goto L_003B64A8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003B6488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6490u); set32(c.r[16], c.r[16].w[0] + 60u);  if (depth < kMaxDepth) unit_00A5(c, 34u, depth + 1u); else { c.pc = 0x003B4508u; return; } if (c.pc != 0x003B6490u) [[unlikely]] return; }
L_003B6490:
    set32(c.r[3], ld32((c.r[18].w[0] + 12360u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6488u | kUnwind; return; } goto L_003B6488; } }
L_003B64A8:
    set32(c.r[2], ld32((c.r[18].w[0] + 12360u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[16], ld32((c.r[2].w[0] + 40u)));  if (t) { goto L_003B64E0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003B64C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B64C8u); set32(c.r[16], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x003B5D78u; return; } if (c.pc != 0x003B64C8u) [[unlikely]] return; }
L_003B64C8:
    set32(c.r[3], ld32((c.r[18].w[0] + 12360u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B64C0u | kUnwind; return; } goto L_003B64C0; } }
L_003B64E0:
    set32(c.r[16], c.r[18].w[0] + 12360u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[4].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B64F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B64F8u) [[unlikely]] return; }
L_003B64F8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0]), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B650Cu); set32(c.r[6], ld32((c.r[4].w[0] + 16u)));  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003B650Cu) [[unlikely]] return; }
L_003B650C:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_003B6510:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B6514:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B6528:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003B6568; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20824u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 20848u);
    set32(c.r[5], 0u + 942u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 100u);
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B6568:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[16], c.r[16].w[0] + 12360u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B657Cu); st32((c.r[2].w[0] + 52u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 170u, depth + 1u); else { c.pc = 0x003B9660u; return; } if (c.pc != 0x003B657Cu) [[unlikely]] return; }
L_003B657C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6584u);  if (depth < kMaxDepth) unit_00A6(c, 171u, depth + 1u); else { c.pc = 0x003B9670u; return; } if (c.pc != 0x003B6584u) [[unlikely]] return; }
L_003B6584:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 56u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B65A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[5], 0u + 963u);  if (t) { goto L_003B65D8; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_003B65DC; }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_003B6608; }
L_003B65D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 1;
L_003B65DC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20824u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 20872u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[8], 0u - 100u);
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B6608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6610u); set32(c.r[5], c.r[5].w[0] + 20816u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x003B6610u) [[unlikely]] return; }
L_003B6610:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 20872u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], 0u - 103u);  if (t) { goto L_003B6650; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 967u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B6650:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B6670; }
L_003B6670:
    set32(c.r[29], c.r[29].w[0] - 4080u);
    st64((c.r[29].w[0] + 4040u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 4016u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 4056u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 4024u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 4032u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 4048u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 4064u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B66A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 140u, depth + 1u); else { c.pc = 0x003B5B38u; return; } if (c.pc != 0x003B66A4u) [[unlikely]] return; }
L_003B66A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003B66D0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 20888u);
    set32(c.r[5], 0u + 990u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B66C8u); set32(c.r[8], 0u - 104u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B66C8u) [[unlikely]] return; }
L_003B66C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 4016u));  if (t) { goto L_003B69BC; } }
L_003B66D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B66DCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 146u, depth + 1u); else { c.pc = 0x003B5C10u; return; } if (c.pc != 0x003B66DCu) [[unlikely]] return; }
L_003B66DC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_003B6700; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 20904u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 997u);  if (t) { goto L_003B68EC; } }
L_003B6700:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 12360u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B671Cu); set32(c.r[4], ld32((c.r[3].w[0] + 32u)));  if (depth < kMaxDepth) unit_00A5(c, 26u, depth + 1u); else { c.pc = 0x003B43C0u; return; } if (c.pc != 0x003B671Cu) [[unlikely]] return; }
L_003B671C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003B6758; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6730u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x003B5D78u; return; } if (c.pc != 0x003B6730u) [[unlikely]] return; }
L_003B6730:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 20920u);
    set32(c.r[5], 0u + 1009u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6750u); set32(c.r[8], 0u - 206u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B6750u) [[unlikely]] return; }
L_003B6750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 4016u));  if (t) { goto L_003B69BC; } }
L_003B6758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6760u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 30u, depth + 1u); else { c.pc = 0x003B4460u; return; } if (c.pc != 0x003B6760u) [[unlikely]] return; }
L_003B6760:
    set32(c.r[20], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_003B67A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6774u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x003B5D78u; return; } if (c.pc != 0x003B6774u) [[unlikely]] return; }
L_003B6774:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 20888u);
    set32(c.r[5], 0u + 1015u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6794u); set32(c.r[8], 0u - 200u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B6794u) [[unlikely]] return; }
L_003B6794:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 4016u));  if (t) { goto L_003B69BC; } }
    c.budget -= 1;
L_003B67A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B67A8u);  if (depth < kMaxDepth) unit_00A6(c, 156u, depth + 1u); else { c.pc = 0x003B94C8u; return; } if (c.pc != 0x003B67A8u) [[unlikely]] return; }
L_003B67A8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003B67D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B67BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x003B5D78u; return; } if (c.pc != 0x003B67BCu) [[unlikely]] return; }
L_003B67BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 20936u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1024u);  if (t) { goto L_003B6840; } }
L_003B67D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B67E0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 159u, depth + 1u); else { c.pc = 0x003B5DC0u; return; } if (c.pc != 0x003B67E0u) [[unlikely]] return; }
L_003B67E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; set32(c.r[19], c.r[29].w[0] + 1904u);  if (t) { goto L_003B6800; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B67F4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 167u, depth + 1u); else { c.pc = 0x003B5F10u; return; } if (c.pc != 0x003B67F4u) [[unlikely]] return; }
L_003B67F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003B6818; } }
    c.budget -= 1;
L_003B6800:
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6814u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 161u, depth + 1u); else { c.pc = 0x003B5E08u; return; } if (c.pc != 0x003B6814u) [[unlikely]] return; }
L_003B6814:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003B6818:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003B6850; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6828u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 239u, depth + 1u); else { c.pc = 0x003B69E0u; return; } if (c.pc != 0x003B6828u) [[unlikely]] return; }
L_003B6828:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 20960u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1044u);
    c.budget -= 6;
L_003B6840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6848u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B6848u) [[unlikely]] return; }
L_003B6848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 4016u));  if (t) { goto L_003B69BC; } }
L_003B6850:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    ldl(c.r[2], (c.r[29].w[0] + 15u));
    ldr(c.r[2], (c.r[29].w[0] + 8u));
    sdl(c.r[2], (c.r[17].w[0] + 51u));
    sdr(c.r[2], (c.r[17].w[0] + 44u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6874u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 172u, depth + 1u); else { c.pc = 0x003B5FF8u; return; } if (c.pc != 0x003B6874u) [[unlikely]] return; }
L_003B6874:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003B68B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6888u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 239u, depth + 1u); else { c.pc = 0x003B69E0u; return; } if (c.pc != 0x003B6888u) [[unlikely]] return; }
L_003B6888:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 20976u);
    set32(c.r[5], 0u + 1063u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B68A8u); set32(c.r[8], 0u - 207u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B68A8u) [[unlikely]] return; }
L_003B68A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 4016u));  if (t) { goto L_003B69BC; } }
L_003B68B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B68B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 239u, depth + 1u); else { c.pc = 0x003B69E0u; return; } if (c.pc != 0x003B68B8u) [[unlikely]] return; }
L_003B68B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B68C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 124u, depth + 1u); else { c.pc = 0x003B5878u; return; } if (c.pc != 0x003B68C0u) [[unlikely]] return; }
L_003B68C0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[19], c.r[29].w[0] + 1952u);  if (t) { goto L_003B6900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B68D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x003B5D78u; return; } if (c.pc != 0x003B68D8u) [[unlikely]] return; }
L_003B68D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 20984u);
    set32(c.r[5], 0u + 1076u);
    c.budget -= 5;
L_003B68EC:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B68F8u); set32(c.r[8], 0u - 105u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B68F8u) [[unlikely]] return; }
L_003B68F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 4016u));  if (t) { goto L_003B69BC; } }
L_003B6900:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B690Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 61u, depth + 1u); else { c.pc = 0x003B89F0u; return; } if (c.pc != 0x003B690Cu) [[unlikely]] return; }
L_003B690C:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 2092u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4000u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 2084u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B692Cu); st32((c.r[17].w[0] + 12u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 60u, depth + 1u); else { c.pc = 0x003B8988u; return; } if (c.pc != 0x003B692Cu) [[unlikely]] return; }
L_003B692C:
    set32(c.r[3], ld32((c.r[29].w[0] + 4000u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[18].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B69B8; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6948u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 175u, depth + 1u); else { c.pc = 0x003B6098u; return; } if (c.pc != 0x003B6948u) [[unlikely]] return; }
L_003B6948:
    set32(c.r[3], 0u - 109u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_003B6988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6960u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x003B5D78u; return; } if (c.pc != 0x003B6960u) [[unlikely]] return; }
L_003B6960:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21000u);
    set32(c.r[5], 0u + 1115u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6980u); set32(c.r[8], 0u - 109u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B6980u) [[unlikely]] return; }
L_003B6980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 4016u));  if (t) { goto L_003B69BC; } }
L_003B6988:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 4016u));  goto L_003B69BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6998u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x003B5D78u; return; } if (c.pc != 0x003B6998u) [[unlikely]] return; }
L_003B6998:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1119u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B69B8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B69B8u) [[unlikely]] return; }
L_003B69B8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 4016u));
    c.budget -= 1;
L_003B69BC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 4024u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 4032u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 4040u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 4048u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 4056u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 4064u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 4080u);  c.pc = t; return; }
L_003B69E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003B6A00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6A00u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x003B5D78u; return; } if (c.pc != 0x003B6A00u) [[unlikely]] return; }
L_003B6A00:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B6A14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6A10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 34u, depth + 1u); else { c.pc = 0x003B4508u; return; } if (c.pc != 0x003B6A10u) [[unlikely]] return; }
L_003B6A10:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B6A14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A6(c, 158u, depth); }
L_003B6A20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003B6A60; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20824u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 21016u);
    set32(c.r[5], 0u + 1149u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 100u);
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B6A60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6A6Cu); set32(c.r[5], c.r[5].w[0] + 20816u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x003B6A6Cu) [[unlikely]] return; }
L_003B6A6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21016u);
    set32(c.r[5], 0u + 1154u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], 0u - 103u);  if (t) { goto L_003B6AA0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B6AA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B6AB8; }
L_003B6AB8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6ADCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 140u, depth + 1u); else { c.pc = 0x003B5B38u; return; } if (c.pc != 0x003B6ADCu) [[unlikely]] return; }
L_003B6ADC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_003B6B28; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20824u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 21032u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[5], 0u + 1171u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[8], 0u - 105u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 15;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B6B28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_003B6B98; } }
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 12360u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[16], c.r[2].w[0] + 4236u);  if (t) { goto L_003B6B98; } }
    set32(c.r[20], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 52u)));
    c.budget -= 3;
L_003B6B50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; set32(c.r[3], ld32((c.r[19].w[0] + 12360u)));  if (t) { goto L_003B6B84; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 12360u)));  goto L_003B6B84; }
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[16], c.r[16].w[0] + 60u);  goto L_003B6B80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6B7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 34u, depth + 1u); else { c.pc = 0x003B4508u; return; } if (c.pc != 0x003B6B7Cu) [[unlikely]] return; }
L_003B6B7C:
    set32(c.r[16], c.r[16].w[0] + 60u);
    c.budget -= 1;
L_003B6B80:
    set32(c.r[3], ld32((c.r[19].w[0] + 12360u)));
    c.budget -= 1;
L_003B6B84:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6B50u | kUnwind; return; } goto L_003B6B50; }
L_003B6B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6BA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x003B5D78u; return; } if (c.pc != 0x003B6BA0u) [[unlikely]] return; }
L_003B6BA0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B6BC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003B6C08; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20824u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 21048u);
    set32(c.r[5], 0u + 1203u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 100u);
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B6C08:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6C14u); set32(c.r[5], c.r[5].w[0] + 20816u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x003B6C14u) [[unlikely]] return; }
L_003B6C14:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 21048u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], 0u - 103u);  if (t) { goto L_003B6C50; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[5], 0u + 1208u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B6C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6C58u);  if (depth < kMaxDepth) unit_00A5(c, 140u, depth + 1u); else { c.pc = 0x003B5B38u; return; } if (c.pc != 0x003B6C58u) [[unlikely]] return; }
L_003B6C58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 21032u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[8], 0u - 103u);
    c.budget -= 10;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[5], 0u + 1214u);  if (t) { goto L_003B6C90; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B6C90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], ld32((c.r[3].w[0] + 12360u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[4].w[0] + 44u), c.r[9].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B6CB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12360u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.r[4].d[0] = c.r[2].d[0] ^ 0ull;
    set32(c.r[2], c.r[2].w[0] + 22u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[4].d[0] == 0) c.r[2].d[0] = 0ull;  c.pc = t; return; }
L_003B6CD0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[6], 0u + 9u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    set32(c.r[18], c.r[29].w[0] + 16u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], 0u + 32u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6D14u); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 126u, depth + 1u); else { c.pc = 0x003B58C0u; return; } if (c.pc != 0x003B6D14u) [[unlikely]] return; }
L_003B6D14:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[29].d[0] + 0ull;  goto L_003B6D40; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21072u);
    set32(c.r[5], 0u + 1247u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u - 100u);  if (t) { goto L_003B6ECC; } }
    c.budget -= 1;
L_003B6D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6D48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 140u, depth + 1u); else { c.pc = 0x003B5B38u; return; } if (c.pc != 0x003B6D48u) [[unlikely]] return; }
L_003B6D48:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003B6D70; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21032u);
    set32(c.r[5], 0u + 1253u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u - 105u);  if (t) { goto L_003B6ECC; } }
L_003B6D70:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003B6D80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[19].w[0] + 16u)));  if (t) { goto L_003B6DC8; } }
L_003B6D80:
    set32(c.r[17], c.r[16].w[0] + 12u);
    set32(c.r[4], c.r[4].w[0] + 21088u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6D90u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x003B6D90u) [[unlikely]] return; }
L_003B6D90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B6DC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6DA0u); set32(c.r[4], c.r[19].w[0] + 22u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x003B6DA0u) [[unlikely]] return; }
L_003B6DA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003B6DC8; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21104u);
    set32(c.r[5], 0u + 1268u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u - 108u);  if (t) { goto L_003B6ECC; } }
    c.budget -= 1;
L_003B6DC8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6DD8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 289u, depth + 1u); else { c.pc = 0x003BAEE8u; return; } if (c.pc != 0x003B6DD8u) [[unlikely]] return; }
L_003B6DD8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_003B6E08; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21112u);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1278u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u - 107u);  if (t) { goto L_003B6ECC; } }
    c.budget -= 1;
L_003B6E08:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0] + 12360u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[17], ld32((c.r[3].w[0] + 36u)));  if (t) { goto L_003B6EB0; } }
    set32(c.r[2], c.r[18].w[0] << 1);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[2].w[0] << 4);
    c.budget -= 6;
L_003B6E38:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 12360u)));  goto L_003B6E98; }
    set32(c.r[16], c.r[16].w[0] + c.r[5].w[0]);
    set32(c.r[16], c.r[16].w[0] - 24u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6E58u); set32(c.r[5], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00A6(c, 40u, depth + 1u); else { c.pc = 0x003B8518u; return; } if (c.pc != 0x003B6E58u) [[unlikely]] return; }
L_003B6E58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6E70u); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 24u, depth + 1u); else { c.pc = 0x003B4368u; return; } if (c.pc != 0x003B6E70u) [[unlikely]] return; }
L_003B6E70:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B6ED8; } }
    set32(c.r[4], c.r[21].w[0] + 20824u);
    set32(c.r[6], c.r[20].w[0] + 21136u);
    set32(c.r[5], 0u + 1301u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6E90u); set32(c.r[8], 0u - 102u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B6E90u) [[unlikely]] return; }
L_003B6E90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B6ED8; } }
L_003B6E98:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 60u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6E38u | kUnwind; return; } goto L_003B6E38; } }
L_003B6EB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21152u);
    set32(c.r[5], 0u + 1308u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 102u);
    c.budget -= 7;
L_003B6ECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6ED4u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B6ED4u) [[unlikely]] return; }
L_003B6ED4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B6ED8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003B6F00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.budget -= 9;
    { const bool t = c.r[17].sd[0] < 0; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003B6F2C; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_003B6F50; } }
L_003B6F2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21168u);
    set32(c.r[5], 0u + 1323u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u - 100u);  if (t) { goto L_003B702C; } }
    c.budget -= 1;
L_003B6F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6F58u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 140u, depth + 1u); else { c.pc = 0x003B5B38u; return; } if (c.pc != 0x003B6F58u) [[unlikely]] return; }
L_003B6F58:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_003B6F88; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21032u);
    set32(c.r[5], 0u + 1330u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u - 105u);  if (t) { goto L_003B702C; } }
    c.budget -= 1;
L_003B6F88:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 12360u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[16], ld32((c.r[3].w[0] + 36u)));  if (t) { goto L_003B7010; } }
    set32(c.r[7], c.r[17].w[0] << 11);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
L_003B6FB0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 12360u)));  goto L_003B6FF8; }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6FCCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 24u, depth + 1u); else { c.pc = 0x003B4368u; return; } if (c.pc != 0x003B6FCCu) [[unlikely]] return; }
L_003B6FCC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B7038; } }
    set32(c.r[4], c.r[17].w[0] + 20824u);
    set32(c.r[6], c.r[19].w[0] + 21136u);
    set32(c.r[5], 0u + 1341u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6FECu); set32(c.r[8], 0u - 102u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B6FECu) [[unlikely]] return; }
L_003B6FEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B7038; } }
    c.budget -= 1;
L_003B6FF8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 60u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6FB0u | kUnwind; return; } goto L_003B6FB0; } }
L_003B7010:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21168u);
    set32(c.r[5], 0u + 1348u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 102u);
    c.budget -= 7;
L_003B702C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7034u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B7034u) [[unlikely]] return; }
L_003B7034:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B7038:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B7058:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 64u), c.r[31].d[0]);  if (t) { goto L_003B725C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_003B725C; } }
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[19], c.r[21].w[0] + 12360u);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B70ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B70ACu) [[unlikely]] return; }
L_003B70AC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003B7238; } }
    set32(c.r[20], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[20].d[0]; c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003B7100; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003B70D8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].d[0] = c.r[18].d[0] & 255ull;  if (t) { goto L_003B70F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003B71F8; } }
L_003B70D8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_003B7150; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[18].d[0] & 255ull;  if (t) { goto L_003B71B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003B71F8; } }
L_003B70F0:
    st16((c.r[16].w[0] + 54u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 56u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003B7258; } }
    c.budget -= 1;
L_003B7100:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7114u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B7114u) [[unlikely]] return; }
L_003B7114:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], c.r[4].w[0] << 11);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_003B7170; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 40u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st16((c.r[16].w[0] + 56u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 54u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003B7258; } }
    c.budget -= 1;
L_003B7150:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7164u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B7164u) [[unlikely]] return; }
L_003B7164:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003B7180; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_003B7170:
    set32(c.r[3], 0u - 202u);
    st16((c.r[16].w[0] + 56u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 58u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003B7200; } }
L_003B7180:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[3].w[0] + 2047u);
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    set32(c.r[2], c.r[2].w[0] << 11);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_003B7258; } }
    c.budget -= 1;
L_003B71B0:
    set32(c.r[2], 0u - 202u);
    st16((c.r[16].w[0] + 54u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 58u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    st16((c.r[16].w[0] + 56u), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[5], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B71D0u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 60u, depth + 1u); else { c.pc = 0x003B8988u; return; } if (c.pc != 0x003B71D0u) [[unlikely]] return; }
L_003B71D0:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[20].d[0]; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003B725C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 58u)));
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21192u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1484u);  if (t) { goto L_003B7224; } }
L_003B71F8:
    st16((c.r[16].w[0] + 56u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 54u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003B7200:
    set32(c.r[2], ld32((c.r[21].w[0] + 12360u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003B7258; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 58u)));
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21208u);
    set32(c.r[5], 0u + 1496u);
    c.budget -= 5;
L_003B7224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B722Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B722Cu) [[unlikely]] return; }
L_003B722C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003B725C; } }
    c.budget -= 1;
L_003B7238:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21208u);
    set32(c.r[5], 0u + 1502u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7258u); set32(c.r[8], 0u - 1000u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B7258u) [[unlikely]] return; }
L_003B7258:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003B725C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B7280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B72A8u); set32(c.r[16], c.r[18].w[0] + 12360u);  if (depth < kMaxDepth) unit_00A6(c, 159u, depth + 1u); else { c.pc = 0x003B9530u; return; } if (c.pc != 0x003B72A8u) [[unlikely]] return; }
L_003B72A8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0])));  goto L_003B72D8; }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00A6(c, 160u, depth); }
L_003B72D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_003B7300; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00A6(c, 160u, depth); }
L_003B7300:
    set32(c.r[3], c.r[20].w[0] + 12368u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));  if (t) { goto L_003B7330; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00A6(c, 160u, depth); }
L_003B7330:
    set32(c.r[2], 0u + 1u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7340u); st32((c.r[3].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 160u, depth + 1u); else { c.pc = 0x003B9548u; return; } if (c.pc != 0x003B7340u) [[unlikely]] return; }
L_003B7340:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[16], c.r[2].w[0] + 4236u);  if (t) { goto L_003B7384; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 2;
L_003B7358:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 54u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0]; set32(c.r[3], ld32((c.r[18].w[0] + 12360u)));  if (t) { goto L_003B7370; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B736Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 269u, depth + 1u); else { c.pc = 0x003B7058u; return; } if (c.pc != 0x003B736Cu) [[unlikely]] return; }
L_003B736C:
    set32(c.r[3], ld32((c.r[18].w[0] + 12360u)));
    c.budget -= 1;
L_003B7370:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 60u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7358u | kUnwind; return; } goto L_003B7358; } }
L_003B7384:
    set32(c.r[2], ld32((c.r[18].w[0] + 12360u)));
    set32(c.r[4], c.r[20].w[0] + 12368u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B73C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], c.r[16].w[0] - 17000u);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B73E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003B73E4u) [[unlikely]] return; }
L_003B73E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12360u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B7408:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_003B74B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 12360u)));
    set32(c.r[17], c.r[18].w[0] - 17000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], c.r[16].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] - 17000u);  if (t) { goto L_003B7480; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7460u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B7460u) [[unlikely]] return; }
L_003B7460:
    c.r[3].d[0] = ld64((c.r[17].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] - c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B74B0; } }
    st64((c.r[17].w[0]), c.r[4].d[0]);
    st32((c.r[17].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[3], c.r[18].w[0] - 17000u);
    c.budget -= 3;
L_003B7480:
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2049ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[18].w[0] - 17000u);  if (t) { goto L_003B74A0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B74B0; } }
    st32((c.r[3].w[0] + 12u), 0u);
    set32(c.r[4], c.r[18].w[0] - 17000u);
    c.budget -= 2;
L_003B74A0:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 4;
L_003B74B0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B74C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B74D8u);  if (depth < kMaxDepth) unit_00A5(c, 287u, depth + 1u); else { c.pc = 0x003B7510u; return; } if (c.pc != 0x003B74D8u) [[unlikely]] return; }
L_003B74D8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] < 0; c.r[4].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;  if (t) { goto L_003B7500; } }
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[5].d[0];
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 3;
L_003B7500:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B7510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7520u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 290u, depth + 1u); else { c.pc = 0x003B7560u; return; } if (c.pc != 0x003B7520u) [[unlikely]] return; }
L_003B7520:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003B754C; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7538u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A6(c, 40u, depth + 1u); else { c.pc = 0x003B8518u; return; } if (c.pc != 0x003B7538u) [[unlikely]] return; }
L_003B7538:
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 1;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_003B754C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B7560:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[7], 0u + 32u);
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[20], c.r[29].w[0] + 16u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 9u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B75A8u); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 126u, depth + 1u); else { c.pc = 0x003B58C0u; return; } if (c.pc != 0x003B75A8u) [[unlikely]] return; }
L_003B75A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003B75D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21072u);
    set32(c.r[5], 0u + 1668u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B75D0u); set32(c.r[8], 0u - 100u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B75D0u) [[unlikely]] return; }
L_003B75D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003B76D4; } }
L_003B75D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B75E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 140u, depth + 1u); else { c.pc = 0x003B5B38u; return; } if (c.pc != 0x003B75E0u) [[unlikely]] return; }
L_003B75E0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003B7610; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21032u);
    set32(c.r[5], 0u + 1673u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7608u); set32(c.r[8], 0u - 105u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B7608u) [[unlikely]] return; }
L_003B7608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003B76D4; } }
L_003B7610:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003B7620; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 16u)));  if (t) { goto L_003B7674; } }
L_003B7620:
    set32(c.r[16], c.r[18].w[0] + 12u);
    set32(c.r[4], c.r[4].w[0] + 21088u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7630u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x003B7630u) [[unlikely]] return; }
L_003B7630:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = c.r[18].d[0] + 0ull;  goto L_003B7674; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7644u); set32(c.r[4], c.r[17].w[0] + 22u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x003B7644u) [[unlikely]] return; }
L_003B7644:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003B7670; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21224u);
    set32(c.r[5], 0u + 1685u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7668u); set32(c.r[8], 0u - 108u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B7668u) [[unlikely]] return; }
L_003B7668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003B76D4; } }
L_003B7670:
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003B7674:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7684u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 289u, depth + 1u); else { c.pc = 0x003BAEE8u; return; } if (c.pc != 0x003B7684u) [[unlikely]] return; }
L_003B7684:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 1);  if (t) { goto L_003B76B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21112u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1696u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B76B0u); set32(c.r[8], 0u - 107u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B76B0u) [[unlikely]] return; }
L_003B76B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003B76D4; } }
L_003B76B8:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] - 24u);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 7;
L_003B76D4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003B76F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[5], 0u + 1713u);  if (t) { goto L_003B7738; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20824u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 21248u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 100u);
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B7738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7740u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 140u, depth + 1u); else { c.pc = 0x003B5B38u; return; } if (c.pc != 0x003B7740u) [[unlikely]] return; }
L_003B7740:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] + 22u);  if (t) { goto L_003B7760; } }
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], 0u - 105u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_003B776C; } }
L_003B7760:
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_003B776C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B7780:
    set32(c.r[29], c.r[29].w[0] - 576u);
    set32(c.r[7], 0u + 512u);
    st64((c.r[29].w[0] + 552u), c.r[19].d[0]);
    set32(c.r[19], c.r[29].w[0] + 16u);
    st64((c.r[29].w[0] + 560u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 536u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 544u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 9u);
    st64((c.r[29].w[0] + 528u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 568u), c.r[31].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B77C4u); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 126u, depth + 1u); else { c.pc = 0x003B58C0u; return; } if (c.pc != 0x003B77C4u) [[unlikely]] return; }
L_003B77C4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[29].d[0] + 0ull;  goto L_003B77E8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21072u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1742u);  if (t) { goto L_003B7858; } }
    c.budget -= 1;
L_003B77E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B77F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 140u, depth + 1u); else { c.pc = 0x003B5B38u; return; } if (c.pc != 0x003B77F0u) [[unlikely]] return; }
L_003B77F0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003B7820; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21032u);
    set32(c.r[5], 0u + 1748u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7818u); set32(c.r[8], 0u - 105u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B7818u) [[unlikely]] return; }
L_003B7818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 528u));  if (t) { goto L_003B7980; } }
L_003B7820:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B7830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 16u)));  if (t) { goto L_003B7870; } }
L_003B7830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7838u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 28u, depth + 1u); else { c.pc = 0x003B4408u; return; } if (c.pc != 0x003B7838u) [[unlikely]] return; }
L_003B7838:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 16u)));  if (t) { goto L_003B7874; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21272u);
    set32(c.r[5], 0u + 1759u);
    c.budget -= 5;
L_003B7858:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7864u); set32(c.r[8], 0u - 100u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B7864u) [[unlikely]] return; }
L_003B7864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 528u));  if (t) { goto L_003B7980; } }
    c.budget -= 1;
L_003B7870:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 16u)));
    c.budget -= 1;
L_003B7874:
    set32(c.r[2], 0u + 47u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 92u);  if (t) { goto L_003B7888; } }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 16u)));  goto L_003B78D0; }
L_003B7888:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12360u)));
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B78A8u); set32(c.r[5], ld32((c.r[2].w[0] + 72u)));  if (depth < kMaxDepth) unit_00A6(c, 299u, depth + 1u); else { c.pc = 0x003BB120u; return; } if (c.pc != 0x003B78A8u) [[unlikely]] return; }
L_003B78A8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[6].sd[0] > 0) { set32(c.r[8], 0u + 2048u);  goto L_003B7968; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21296u);
    set32(c.r[5], 0u + 1778u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003B7900; } }
L_003B78D0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B78DCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 289u, depth + 1u); else { c.pc = 0x003BAEE8u; return; } if (c.pc != 0x003B78DCu) [[unlikely]] return; }
L_003B78DC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 1);  if (t) { goto L_003B7910; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21112u);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1790u);
    c.budget -= 6;
L_003B7900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7908u); set32(c.r[8], 0u - 107u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B7908u) [[unlikely]] return; }
L_003B7908:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 528u));  if (t) { goto L_003B7980; } }
L_003B7910:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 24u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[8], ld32((c.r[3].w[0])));  goto L_003B7960; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21320u);
    set32(c.r[5], 0u + 1799u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7954u); set32(c.r[8], 0u - 106u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B7954u) [[unlikely]] return; }
L_003B7954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 528u));  if (t) { goto L_003B7980; } }
    c.budget -= 1;
L_003B7960:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 2;
L_003B7968:
    set32(c.r[2], ld32((c.r[18].w[0] + 12360u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B797Cu); set32(c.r[5], ld32((c.r[2].w[0] + 72u)));  if (depth < kMaxDepth) unit_00A6(c, 259u, depth + 1u); else { c.pc = 0x003BAA30u; return; } if (c.pc != 0x003B797Cu) [[unlikely]] return; }
L_003B797C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 528u));
    c.budget -= 1;
L_003B7980:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 536u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 544u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 552u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 560u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 568u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 576u);  c.pc = t; return; }
L_003B79A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.budget -= 7;
    { const bool t = c.r[18].d[0] != 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_003B79E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21104u);
    set32(c.r[5], 0u + 1831u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B79DCu); set32(c.r[8], 0u - 100u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B79DCu) [[unlikely]] return; }
L_003B79DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003B7B64; } }
    c.budget -= 1;
L_003B79E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B79F0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 140u, depth + 1u); else { c.pc = 0x003B5B38u; return; } if (c.pc != 0x003B79F0u) [[unlikely]] return; }
L_003B79F0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003B7A28; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21032u);
    set32(c.r[5], 0u + 1837u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7A1Cu); set32(c.r[8], 0u - 105u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B7A1Cu) [[unlikely]] return; }
L_003B7A1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003B7B64; } }
    c.budget -= 1;
L_003B7A28:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7A34u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 60u, depth + 1u); else { c.pc = 0x003B8988u; return; } if (c.pc != 0x003B7A34u) [[unlikely]] return; }
L_003B7A34:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003B7A50; } }
    st32((c.r[17].w[0] + 16u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B7B60; } }
L_003B7A50:
    set32(c.r[16], c.r[18].w[0] + 12u);
    set32(c.r[4], c.r[4].w[0] + 21088u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7A60u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x003B7A60u) [[unlikely]] return; }
L_003B7A60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B7AA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7A70u); set32(c.r[4], c.r[17].w[0] + 22u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x003B7A70u) [[unlikely]] return; }
L_003B7A70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003B7AA0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21104u);
    set32(c.r[5], 0u + 1853u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7A94u); set32(c.r[8], 0u - 108u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B7A94u) [[unlikely]] return; }
L_003B7A94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003B7B64; } }
    c.budget -= 1;
L_003B7AA0:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[9], c.r[18].w[0] + 24u);
    set32(c.r[10], ld32((c.r[18].w[0])));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[6], c.r[4].w[0] + 24u);
    c.r[7].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[10].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[7].d[0] = c.r[5].d[0];
    c.budget -= 12;
    { const bool t = c.r[7].sd[0] <= 0; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_003B7B50; } }
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 2;
L_003B7AD8:
    ldl(c.r[2], (c.r[9].w[0] + 7u));
    ldr(c.r[2], (c.r[9].w[0]));
    ldl(c.r[3], (c.r[9].w[0] + 15u));
    ldr(c.r[3], (c.r[9].w[0] + 8u));
    ldl(c.r[11], (c.r[9].w[0] + 23u));
    ldr(c.r[11], (c.r[9].w[0] + 16u));
    ldl(c.r[12], (c.r[9].w[0] + 31u));
    ldr(c.r[12], (c.r[9].w[0] + 24u));
    sdl(c.r[2], (c.r[6].w[0] + 7u));
    sdr(c.r[2], (c.r[6].w[0]));
    sdl(c.r[3], (c.r[6].w[0] + 15u));
    sdr(c.r[3], (c.r[6].w[0] + 8u));
    sdl(c.r[11], (c.r[6].w[0] + 23u));
    sdr(c.r[11], (c.r[6].w[0] + 16u));
    sdl(c.r[12], (c.r[6].w[0] + 31u));
    sdr(c.r[12], (c.r[6].w[0] + 24u));
    ldl(c.r[2], (c.r[9].w[0] + 39u));
    ldr(c.r[2], (c.r[9].w[0] + 32u));
    ldl(c.r[3], (c.r[9].w[0] + 47u));
    ldr(c.r[3], (c.r[9].w[0] + 40u));
    sdl(c.r[2], (c.r[6].w[0] + 39u));
    sdr(c.r[2], (c.r[6].w[0] + 32u));
    sdl(c.r[3], (c.r[6].w[0] + 47u));
    set32(c.r[8], c.r[8].w[0] - 1u);
    sdr(c.r[3], (c.r[6].w[0] + 40u));
    set32(c.r[6], c.r[6].w[0] + 48u);
    c.budget -= 29;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7AD8u | kUnwind; return; } goto L_003B7AD8; } }
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_003B7B50:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    set32(c.r[2], 0u - 109u);
    st32((c.r[4].w[0]), c.r[8].w[0]);
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 4;
L_003B7B60:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003B7B64:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B7B78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[5], 0u + 1896u);  if (t) { goto L_003B7BC8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20824u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 21104u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 100u);
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B7BC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7BD0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 140u, depth + 1u); else { c.pc = 0x003B5B38u; return; } if (c.pc != 0x003B7BD0u) [[unlikely]] return; }
L_003B7BD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21032u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], 0u - 105u);  if (t) { goto L_003B7C08; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 1902u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B7C08:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], ld32((c.r[2].w[0] + 16u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A6(c, 263u, depth); }
L_003B7C28:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 9u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7C50u); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_00A5(c, 126u, depth + 1u); else { c.pc = 0x003B58C0u; return; } if (c.pc != 0x003B7C50u) [[unlikely]] return; }
L_003B7C50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21072u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], 0u - 100u);  if (t) { goto L_003B7C78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1919u);  if (t) { goto L_003B7CA4; } }
L_003B7C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7C80u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 140u, depth + 1u); else { c.pc = 0x003B5B38u; return; } if (c.pc != 0x003B7C80u) [[unlikely]] return; }
L_003B7C80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 1925u);
    set32(c.r[6], c.r[6].w[0] + 21032u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], 0u - 105u);  if (t) { goto L_003B7CB8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    c.budget -= 2;
L_003B7CA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7CACu);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B7CACu) [[unlikely]] return; }
L_003B7CAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B7CC8; } }
    c.budget -= 1;
L_003B7CB8:
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7CC4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 289u, depth + 1u); else { c.pc = 0x003BAEE8u; return; } if (c.pc != 0x003B7CC4u) [[unlikely]] return; }
L_003B7CC4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003B7CC8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B7CD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7CE8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 140u, depth + 1u); else { c.pc = 0x003B5B38u; return; } if (c.pc != 0x003B7CE8u) [[unlikely]] return; }
L_003B7CE8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21032u);
    set32(c.r[5], 0u + 1949u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], 0u - 105u);  if (t) { goto L_003B7D18; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B7D18:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[3].w[0] + 16u)));  goto L_003B7D50; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21344u);
    set32(c.r[5], 0u + 1952u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 105u);
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B7D50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B7D68:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].sd[0] < 0; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003B7D8C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003B7DC0; } }
L_003B7D8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20824u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 21368u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[5], 0u + 1971u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 100u);
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B7DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7DC8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 140u, depth + 1u); else { c.pc = 0x003B5B38u; return; } if (c.pc != 0x003B7DC8u) [[unlikely]] return; }
L_003B7DC8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 16u)));  goto L_003B7E00; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20824u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 21032u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[5], 0u + 1975u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 105u);
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A6(c, 9u, depth); }
L_003B7E00:
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[17].d[0];
    c.budget -= 5;
    { const bool t = c.r[6].sd[0] <= 0; set32(c.r[4], c.r[3].w[0] + 24u);  if (t) { goto L_003B7E48; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_003B7E18:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[4].w[0] + 14u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 12u));
    set32(c.r[4], c.r[4].w[0] + 48u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7E18u | kUnwind; return; } goto L_003B7E18; } }
L_003B7E48:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B7E60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12360u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B7E78; } }
    st32((c.r[2].w[0] + 68u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 64u), c.r[4].w[0]);
    c.budget -= 2;
L_003B7E78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B7E80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_003B7EAC; } }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0])));  goto L_003B7EC8; }
L_003B7EAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21392u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 2028u);  if (t) { goto L_003B7EE4; } }
    c.budget -= 1;
L_003B7EC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_003B7EF8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21392u);
    set32(c.r[5], 0u + 2031u);
    c.budget -= 5;
L_003B7EE4:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7EF0u); set32(c.r[8], 0u - 100u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B7EF0u) [[unlikely]] return; }
L_003B7EF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { [[clang::musttail]] return unit_00A6(c, 6u, depth); } }
L_003B7EF8:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], c.r[2].w[0] + 12360u);
    set32(c.r[7], c.r[17].w[0] << 11);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7F18u); set32(c.r[4], ld32((c.r[2].w[0] + 32u)));  if (depth < kMaxDepth) unit_00A5(c, 26u, depth + 1u); else { c.pc = 0x003B43C0u; return; } if (c.pc != 0x003B7F18u) [[unlikely]] return; }
L_003B7F18:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B7F70; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7F34u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 60u, depth + 1u); else { c.pc = 0x003B8988u; return; } if (c.pc != 0x003B7F34u) [[unlikely]] return; }
L_003B7F34:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], 0u - 200u);  [[clang::musttail]] return unit_00A6(c, 5u, depth); }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21392u);
    set32(c.r[5], 0u + 2040u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7F64u); set32(c.r[8], 0u - 200u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B7F64u) [[unlikely]] return; }
L_003B7F64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { [[clang::musttail]] return unit_00A6(c, 6u, depth); } }
    c.budget -= 1;
L_003B7F70:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7F7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 40u, depth + 1u); else { c.pc = 0x003B4758u; return; } if (c.pc != 0x003B7F7Cu) [[unlikely]] return; }
L_003B7F7C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_003B7FD0; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7F94u); set32(c.r[4], ld32((c.r[2].w[0] + 32u)));  if (depth < kMaxDepth) unit_00A5(c, 34u, depth + 1u); else { c.pc = 0x003B4508u; return; } if (c.pc != 0x003B7F94u) [[unlikely]] return; }
L_003B7F94:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7FA4u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 60u, depth + 1u); else { c.pc = 0x003B8988u; return; } if (c.pc != 0x003B7FA4u) [[unlikely]] return; }
L_003B7FA4:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00A6(c, 5u, depth); } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21408u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 2056u);  if (t) { [[clang::musttail]] return unit_00A6(c, 2u, depth); } }
L_003B7FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7FD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 7u, depth + 1u); else { c.pc = 0x003B8048u; return; } if (c.pc != 0x003B7FD8u) [[unlikely]] return; }
L_003B7FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7FE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 14u, depth + 1u); else { c.pc = 0x003B4200u; return; } if (c.pc != 0x003B7FE0u) [[unlikely]] return; }
L_003B7FE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7FECu); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 8u, depth + 1u); else { c.pc = 0x003B8060u; return; } if (c.pc != 0x003B7FECu) [[unlikely]] return; }
L_003B7FEC:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7FF8u); set32(c.r[4], ld32((c.r[2].w[0] + 32u)));  if (depth < kMaxDepth) unit_00A5(c, 34u, depth + 1u); else { c.pc = 0x003B4508u; return; } if (c.pc != 0x003B7FF8u) [[unlikely]] return; }
L_003B7FF8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { [[clang::musttail]] return unit_00A6(c, 4u, depth); } }
    [[clang::musttail]] return unit_00A6(c, 1u, depth);
}

}
