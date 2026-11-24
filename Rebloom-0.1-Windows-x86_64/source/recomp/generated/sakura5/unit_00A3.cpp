#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A3[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0,
    0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0,
    0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 37, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72,
    0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0,
    0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0,
    0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0,
    0, 110, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0,
    0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0,
    0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0,
    0, 0, 0, 0, 137, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0,
    0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0,
    0, 154, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0,
    161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0,
    0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0,
    0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0,
    0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0,
    195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0,
    200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0,
    0, 0, 210, 0, 0, 0, 211, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218,
    0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 226, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0,
    0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    260, 0, 261, 0, 262, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0,
    0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 277, 0, 0, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0,
    0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 286, 0, 287, 0, 288, 0, 289, 0,
    290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0,
    294, 0, 295, 0, 296, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 300, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0,
    0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0,
    0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 312, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 315, 0, 316, 0, 317, 0, 318, 0, 319, 0, 320, 0, 321, 0,
    0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0,
    325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0,
    337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0,
    0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0,
    0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    374, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0,
    0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    391, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0,
};

void unit_00A3(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003AC000;
    case 2u: goto L_003AC018;
    case 3u: goto L_003AC0B8;
    case 4u: goto L_003AC0F8;
    case 5u: goto L_003AC138;
    case 6u: goto L_003AC144;
    case 7u: goto L_003AC154;
    case 8u: goto L_003AC180;
    case 9u: goto L_003AC194;
    case 10u: goto L_003AC1A0;
    case 11u: goto L_003AC1D0;
    case 12u: goto L_003AC1EC;
    case 13u: goto L_003AC210;
    case 14u: goto L_003AC240;
    case 15u: goto L_003AC278;
    case 16u: goto L_003AC2A0;
    case 17u: goto L_003AC2B8;
    case 18u: goto L_003AC2E8;
    case 19u: goto L_003AC31C;
    case 20u: goto L_003AC380;
    case 21u: goto L_003AC394;
    case 22u: goto L_003AC3A8;
    case 23u: goto L_003AC3C0;
    case 24u: goto L_003AC3DC;
    case 25u: goto L_003AC3F0;
    case 26u: goto L_003AC410;
    case 27u: goto L_003AC440;
    case 28u: goto L_003AC464;
    case 29u: goto L_003AC474;
    case 30u: goto L_003AC4A0;
    case 31u: goto L_003AC4F8;
    case 32u: goto L_003AC518;
    case 33u: goto L_003AC528;
    case 34u: goto L_003AC54C;
    case 35u: goto L_003AC5A0;
    case 36u: goto L_003AC5D4;
    case 37u: goto L_003AC618;
    case 38u: goto L_003AC61C;
    case 39u: goto L_003AC650;
    case 40u: goto L_003AC674;
    case 41u: goto L_003AC6C8;
    case 42u: goto L_003AC6E0;
    case 43u: goto L_003AC700;
    case 44u: goto L_003AC724;
    case 45u: goto L_003AC778;
    case 46u: goto L_003AC7A4;
    case 47u: goto L_003AC7B0;
    case 48u: goto L_003AC7E0;
    case 49u: goto L_003AC7EC;
    case 50u: goto L_003AC810;
    case 51u: goto L_003AC82C;
    case 52u: goto L_003AC858;
    case 53u: goto L_003AC87C;
    case 54u: goto L_003AC8B8;
    case 55u: goto L_003AC8C8;
    case 56u: goto L_003AC8D8;
    case 57u: goto L_003AC904;
    case 58u: goto L_003AC93C;
    case 59u: goto L_003AC948;
    case 60u: goto L_003AC9D0;
    case 61u: goto L_003ACA20;
    case 62u: goto L_003ACA34;
    case 63u: goto L_003ACA80;
    case 64u: goto L_003ACA9C;
    case 65u: goto L_003ACAD8;
    case 66u: goto L_003ACAF0;
    case 67u: goto L_003ACB0C;
    case 68u: goto L_003ACB44;
    case 69u: goto L_003ACB5C;
    case 70u: goto L_003ACB78;
    case 71u: goto L_003ACBA8;
    case 72u: goto L_003ACBFC;
    case 73u: goto L_003ACC0C;
    case 74u: goto L_003ACC28;
    case 75u: goto L_003ACC38;
    case 76u: goto L_003ACC68;
    case 77u: goto L_003ACC98;
    case 78u: goto L_003ACCAC;
    case 79u: goto L_003ACCF0;
    case 80u: goto L_003ACD04;
    case 81u: goto L_003ACD30;
    case 82u: goto L_003ACD44;
    case 83u: goto L_003ACD58;
    case 84u: goto L_003ACD7C;
    case 85u: goto L_003ACDA8;
    case 86u: goto L_003ACDD8;
    case 87u: goto L_003ACDE8;
    case 88u: goto L_003ACE54;
    case 89u: goto L_003ACE58;
    case 90u: goto L_003ACE74;
    case 91u: goto L_003ACE88;
    case 92u: goto L_003ACF18;
    case 93u: goto L_003ACF38;
    case 94u: goto L_003ACF50;
    case 95u: goto L_003ACF70;
    case 96u: goto L_003ACF88;
    case 97u: goto L_003ACFA8;
    case 98u: goto L_003ACFC0;
    case 99u: goto L_003AD060;
    case 100u: goto L_003AD0F8;
    case 101u: goto L_003AD1A0;
    case 102u: goto L_003AD1D0;
    case 103u: goto L_003AD1E0;
    case 104u: goto L_003AD1F0;
    case 105u: goto L_003AD200;
    case 106u: goto L_003AD224;
    case 107u: goto L_003AD230;
    case 108u: goto L_003AD250;
    case 109u: goto L_003AD268;
    case 110u: goto L_003AD284;
    case 111u: goto L_003AD290;
    case 112u: goto L_003AD2A4;
    case 113u: goto L_003AD2B8;
    case 114u: goto L_003AD2F8;
    case 115u: goto L_003AD31C;
    case 116u: goto L_003AD370;
    case 117u: goto L_003AD394;
    case 118u: goto L_003AD3E0;
    case 119u: goto L_003AD400;
    case 120u: goto L_003AD438;
    case 121u: goto L_003AD45C;
    case 122u: goto L_003AD470;
    case 123u: goto L_003AD494;
    case 124u: goto L_003AD4F8;
    case 125u: goto L_003AD528;
    case 126u: goto L_003AD59C;
    case 127u: goto L_003AD5C0;
    case 128u: goto L_003AD608;
    case 129u: goto L_003AD650;
    case 130u: goto L_003AD6D0;
    case 131u: goto L_003AD710;
    case 132u: goto L_003AD75C;
    case 133u: goto L_003AD788;
    case 134u: goto L_003AD878;
    case 135u: goto L_003AD8BC;
    case 136u: goto L_003AD8F8;
    case 137u: goto L_003AD910;
    case 138u: goto L_003AD918;
    case 139u: goto L_003AD920;
    case 140u: goto L_003AD940;
    case 141u: goto L_003AD980;
    case 142u: goto L_003ADA18;
    case 143u: goto L_003ADA58;
    case 144u: goto L_003ADA88;
    case 145u: goto L_003ADAB0;
    case 146u: goto L_003ADAE8;
    case 147u: goto L_003ADB00;
    case 148u: goto L_003ADB14;
    case 149u: goto L_003ADB68;
    case 150u: goto L_003ADB88;
    case 151u: goto L_003ADBB0;
    case 152u: goto L_003ADBDC;
    case 153u: goto L_003ADBE8;
    case 154u: goto L_003ADC04;
    case 155u: goto L_003ADC10;
    case 156u: goto L_003ADC20;
    case 157u: goto L_003ADC3C;
    case 158u: goto L_003ADC48;
    case 159u: goto L_003ADC58;
    case 160u: goto L_003ADC74;
    case 161u: goto L_003ADC80;
    case 162u: goto L_003ADC90;
    case 163u: goto L_003ADCA0;
    case 164u: goto L_003ADCD0;
    case 165u: goto L_003ADCF4;
    case 166u: goto L_003ADD14;
    case 167u: goto L_003ADD20;
    case 168u: goto L_003ADD30;
    case 169u: goto L_003ADD4C;
    case 170u: goto L_003ADD58;
    case 171u: goto L_003ADD6C;
    case 172u: goto L_003ADD88;
    case 173u: goto L_003ADDC0;
    case 174u: goto L_003ADDE4;
    case 175u: goto L_003ADDF4;
    case 176u: goto L_003ADE10;
    case 177u: goto L_003ADE20;
    case 178u: goto L_003ADE60;
    case 179u: goto L_003ADE84;
    case 180u: goto L_003ADE94;
    case 181u: goto L_003ADEB0;
    case 182u: goto L_003ADEC0;
    case 183u: goto L_003ADF00;
    case 184u: goto L_003ADF20;
    case 185u: goto L_003ADF40;
    case 186u: goto L_003ADF60;
    case 187u: goto L_003ADF80;
    case 188u: goto L_003ADFE0;
    case 189u: goto L_003AE018;
    case 190u: goto L_003AE048;
    case 191u: goto L_003AE04C;
    case 192u: goto L_003AE084;
    case 193u: goto L_003AE0B0;
    case 194u: goto L_003AE0F4;
    case 195u: goto L_003AE100;
    case 196u: goto L_003AE118;
    case 197u: goto L_003AE130;
    case 198u: goto L_003AE148;
    case 199u: goto L_003AE160;
    case 200u: goto L_003AE180;
    case 201u: goto L_003AE19C;
    case 202u: goto L_003AE1C0;
    case 203u: goto L_003AE260;
    case 204u: goto L_003AE280;
    case 205u: goto L_003AE2A0;
    case 206u: goto L_003AE2A8;
    case 207u: goto L_003AE2C0;
    case 208u: goto L_003AE2D8;
    case 209u: goto L_003AE2F0;
    case 210u: goto L_003AE308;
    case 211u: goto L_003AE318;
    case 212u: goto L_003AE320;
    case 213u: goto L_003AE328;
    case 214u: goto L_003AE354;
    case 215u: goto L_003AE360;
    case 216u: goto L_003AE380;
    case 217u: goto L_003AE464;
    case 218u: goto L_003AE47C;
    case 219u: goto L_003AE488;
    case 220u: goto L_003AE4A8;
    case 221u: goto L_003AE500;
    case 222u: goto L_003AE50C;
    case 223u: goto L_003AE588;
    case 224u: goto L_003AE594;
    case 225u: goto L_003AE5E0;
    case 226u: goto L_003AE608;
    case 227u: goto L_003AE618;
    case 228u: goto L_003AE624;
    case 229u: goto L_003AE654;
    case 230u: goto L_003AE678;
    case 231u: goto L_003AE698;
    case 232u: goto L_003AE6C4;
    case 233u: goto L_003AE6E8;
    case 234u: goto L_003AE6F4;
    case 235u: goto L_003AE7E8;
    case 236u: goto L_003AE82C;
    case 237u: goto L_003AE848;
    case 238u: goto L_003AE868;
    case 239u: goto L_003AE890;
    case 240u: goto L_003AE8A8;
    case 241u: goto L_003AE8C0;
    case 242u: goto L_003AE938;
    case 243u: goto L_003AE99C;
    case 244u: goto L_003AEA28;
    case 245u: goto L_003AEA3C;
    case 246u: goto L_003AEA44;
    case 247u: goto L_003AEA70;
    case 248u: goto L_003AEAC8;
    case 249u: goto L_003AEADC;
    case 250u: goto L_003AEBCC;
    case 251u: goto L_003AEBE4;
    case 252u: goto L_003AEC48;
    case 253u: goto L_003AEC88;
    case 254u: goto L_003AED2C;
    case 255u: goto L_003AED40;
    case 256u: goto L_003AED70;
    case 257u: goto L_003AEDA8;
    case 258u: goto L_003AEE44;
    case 259u: goto L_003AEE58;
    case 260u: goto L_003AEE80;
    case 261u: goto L_003AEE88;
    case 262u: goto L_003AEE90;
    case 263u: goto L_003AEEA8;
    case 264u: goto L_003AEEB0;
    case 265u: goto L_003AEEBC;
    case 266u: goto L_003AEED8;
    case 267u: goto L_003AEEF8;
    case 268u: goto L_003AEF08;
    case 269u: goto L_003AEF18;
    case 270u: goto L_003AEF58;
    case 271u: goto L_003AEF60;
    case 272u: goto L_003AEF80;
    case 273u: goto L_003AEF90;
    case 274u: goto L_003AEFA0;
    case 275u: goto L_003AEFE0;
    case 276u: goto L_003AEFE8;
    case 277u: goto L_003AEFF0;
    case 278u: goto L_003AF010;
    case 279u: goto L_003AF020;
    case 280u: goto L_003AF050;
    case 281u: goto L_003AF058;
    case 282u: goto L_003AF074;
    case 283u: goto L_003AF098;
    case 284u: goto L_003AF0C0;
    case 285u: goto L_003AF0D8;
    case 286u: goto L_003AF0E0;
    case 287u: goto L_003AF0E8;
    case 288u: goto L_003AF0F0;
    case 289u: goto L_003AF0F8;
    case 290u: goto L_003AF100;
    case 291u: goto L_003AF120;
    case 292u: goto L_003AF140;
    case 293u: goto L_003AF160;
    case 294u: goto L_003AF180;
    case 295u: goto L_003AF188;
    case 296u: goto L_003AF190;
    case 297u: goto L_003AF198;
    case 298u: goto L_003AF1B4;
    case 299u: goto L_003AF1C4;
    case 300u: goto L_003AF1CC;
    case 301u: goto L_003AF1D8;
    case 302u: goto L_003AF1F0;
    case 303u: goto L_003AF210;
    case 304u: goto L_003AF220;
    case 305u: goto L_003AF230;
    case 306u: goto L_003AF270;
    case 307u: goto L_003AF288;
    case 308u: goto L_003AF2A0;
    case 309u: goto L_003AF2B8;
    case 310u: goto L_003AF2D8;
    case 311u: goto L_003AF2E8;
    case 312u: goto L_003AF2F8;
    case 313u: goto L_003AF338;
    case 314u: goto L_003AF340;
    case 315u: goto L_003AF348;
    case 316u: goto L_003AF350;
    case 317u: goto L_003AF358;
    case 318u: goto L_003AF360;
    case 319u: goto L_003AF368;
    case 320u: goto L_003AF370;
    case 321u: goto L_003AF378;
    case 322u: goto L_003AF398;
    case 323u: goto L_003AF3B8;
    case 324u: goto L_003AF3F0;
    case 325u: goto L_003AF400;
    case 326u: goto L_003AF428;
    case 327u: goto L_003AF430;
    case 328u: goto L_003AF450;
    case 329u: goto L_003AF490;
    case 330u: goto L_003AF4A0;
    case 331u: goto L_003AF4E0;
    case 332u: goto L_003AF528;
    case 333u: goto L_003AF580;
    case 334u: goto L_003AF59C;
    case 335u: goto L_003AF5B4;
    case 336u: goto L_003AF5F0;
    case 337u: goto L_003AF600;
    case 338u: goto L_003AF640;
    case 339u: goto L_003AF658;
    case 340u: goto L_003AF670;
    case 341u: goto L_003AF698;
    case 342u: goto L_003AF6A4;
    case 343u: goto L_003AF6C0;
    case 344u: goto L_003AF6D0;
    case 345u: goto L_003AF6E4;
    case 346u: goto L_003AF718;
    case 347u: goto L_003AF740;
    case 348u: goto L_003AF774;
    case 349u: goto L_003AF7B8;
    case 350u: goto L_003AF7E4;
    case 351u: goto L_003AF830;
    case 352u: goto L_003AF858;
    case 353u: goto L_003AF86C;
    case 354u: goto L_003AF8A0;
    case 355u: goto L_003AF8DC;
    case 356u: goto L_003AF910;
    case 357u: goto L_003AF928;
    case 358u: goto L_003AF938;
    case 359u: goto L_003AF950;
    case 360u: goto L_003AF970;
    case 361u: goto L_003AF988;
    case 362u: goto L_003AF9B8;
    case 363u: goto L_003AF9D8;
    case 364u: goto L_003AF9F0;
    case 365u: goto L_003AFA28;
    case 366u: goto L_003AFA48;
    case 367u: goto L_003AFA60;
    case 368u: goto L_003AFA98;
    case 369u: goto L_003AFABC;
    case 370u: goto L_003AFAD4;
    case 371u: goto L_003AFB30;
    case 372u: goto L_003AFB68;
    case 373u: goto L_003AFB84;
    case 374u: goto L_003AFC00;
    case 375u: goto L_003AFC24;
    case 376u: goto L_003AFC3C;
    case 377u: goto L_003AFCD8;
    case 378u: goto L_003AFCFC;
    case 379u: goto L_003AFD28;
    case 380u: goto L_003AFD50;
    case 381u: goto L_003AFD78;
    case 382u: goto L_003AFD9C;
    case 383u: goto L_003AFDC8;
    case 384u: goto L_003AFDEC;
    case 385u: goto L_003AFE18;
    case 386u: goto L_003AFE3C;
    case 387u: goto L_003AFE54;
    case 388u: goto L_003AFE60;
    case 389u: goto L_003AFE78;
    case 390u: goto L_003AFEB8;
    case 391u: goto L_003AFF00;
    case 392u: goto L_003AFF24;
    case 393u: goto L_003AFF50;
    case 394u: goto L_003AFF74;
    case 395u: goto L_003AFFA0;
    case 396u: goto L_003AFFC4;
    case 397u: goto L_003AFFF0;
    default: bad_entry(c, 0x003AC000u); return;
    }
L_003AC000:
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_003AC018:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u - 5u);
    set32(c.r[6], ld32((c.r[8].w[0] + 660u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003AC038; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[8].w[0] + 660u), c.r[10].w[0]);  c.pc = t; return; }
L_003AC038:
    set32(c.r[7], c.r[10].w[0] - c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_003AC0AC; } }
    set32(c.r[3], ld32((c.r[8].w[0] + 668u)));
    set32(c.r[2], ld32((c.r[8].w[0] + 672u)));
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[6].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[9], ld32((c.r[8].w[0] + 664u)));
    c.r[4].d[0] = c.r[2].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    if (c.r[6].d[0] == 0) c.r[3].d[0] = c.r[7].d[0];
    if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[7].d[0];
    st32((c.r[8].w[0] + 660u), c.r[10].w[0]);
    st32((c.r[8].w[0] + 668u), c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = c.r[9].d[0] == c.r[5].d[0]; st32((c.r[8].w[0] + 672u), c.r[2].w[0]);  if (t) { goto L_003AC0A8; } }
    c.r[2].d[0] = c.r[7].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[8].w[0] + 664u), c.r[7].w[0]);  goto L_003AC0AC; }
    set32(c.r[2], c.r[9].w[0] - c.r[7].w[0]);
    set32(c.r[4], c.r[2].w[0] + 7u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[9].w[0] - c.r[2].w[0]);  if (t) { goto L_003AC0A8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[8].w[0] + 664u), c.r[2].w[0]);  c.pc = t; return; }
L_003AC0A8:
    st32((c.r[8].w[0] + 664u), c.r[7].w[0]);
    c.budget -= 1;
L_003AC0AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003AC0B8:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 660u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 664u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 668u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003AC0EC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[5].d[0];
    c.budget -= 4;
L_003AC0EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; return; }
L_003AC0F8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[3], c.r[3].w[0] + 10280u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 7u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[19], 0u - 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[17], c.r[3].w[0] + 84u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 16;
L_003AC138:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC144u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AC144u) [[unlikely]] return; }
L_003AC144:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[19].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AC154; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC154u);  if (depth < kMaxDepth) unit_00A3(c, 8u, depth + 1u); else { c.pc = 0x003AC180u; return; } if (c.pc != 0x003AC154u) [[unlikely]] return; }
L_003AC154:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 3;
    if (c.r[18].sd[0] >= 0) { set32(c.r[16], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC138u | kUnwind; return; } goto L_003AC138; }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AC180:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC194u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 11u, depth + 1u); else { c.pc = 0x003AC1D0u; return; } if (c.pc != 0x003AC194u) [[unlikely]] return; }
L_003AC194:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC1A0u); set32(c.r[5], 0u + 71u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003AC1A0u) [[unlikely]] return; }
L_003AC1A0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AC1C0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003ACD58; }
L_003AC1C0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AC1D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC1ECu); set32(c.r[17], c.r[16].w[0] + 3368u);  if (depth < kMaxDepth) unit_00A3(c, 14u, depth + 1u); else { c.pc = 0x003AC240u; return; } if (c.pc != 0x003AC1ECu) [[unlikely]] return; }
L_003AC1EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003AC208; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 680u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 684u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 680u), c.r[2].w[0]);
    c.budget -= 4;
L_003AC208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC210u);  if (depth < kMaxDepth) unit_00A3(c, 15u, depth + 1u); else { c.pc = 0x003AC278u; return; } if (c.pc != 0x003AC210u) [[unlikely]] return; }
L_003AC210:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003AC22C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 716u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 684u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 716u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
L_003AC22C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AC240:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], ld32((c.r[5].w[0] + 72u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[6], c.r[5].w[0] + 2384u);  if (t) { goto L_003AC26C; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AC26C; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_003AC26C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003AC278:
    set32(c.r[3], ld32((c.r[5].w[0] + 716u)));
    set32(c.r[6], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AC294; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_003AC294:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003AC2A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC2B8u); set32(c.r[5], 0u + 71u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003AC2B8u) [[unlikely]] return; }
L_003AC2B8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003AC2D0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 680u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 720u), c.r[2].w[0]);  if (t) { goto L_003AC2D8; } }
L_003AC2D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 732u)));
    st32((c.r[16].w[0] + 720u), c.r[2].w[0]);
    c.budget -= 2;
L_003AC2D8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AC2E8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 71u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[19], c.r[2].w[0] + 10280u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC31Cu); c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003AC31Cu) [[unlikely]] return; }
L_003AC31C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003AC348; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 720u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 680u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_003AC360; } }
    c.budget -= 1;
L_003AC348:
    set32(c.r[2], ld32((c.r[16].w[0] + 732u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 720u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 736u)));
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_003AC360:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AC380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC394u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 23u, depth + 1u); else { c.pc = 0x003AC3C0u; return; } if (c.pc != 0x003AC394u) [[unlikely]] return; }
L_003AC394:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AC3AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC3A8u); c.r[5].d[0] = c.r[5].d[0] | 546ull;  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x003AC3A8u) [[unlikely]] return; }
L_003AC3A8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003AC3AC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AC3C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC3DCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003AC3DCu) [[unlikely]] return; }
L_003AC3DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 51u);  if (t) { goto L_003AC42C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC3F0u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003AC3F0u) [[unlikely]] return; }
L_003AC3F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[4].w[0] + 3368u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[7], c.r[29].w[0] + 4u);  if (t) { goto L_003AC42C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC410u);  if (depth < kMaxDepth) unit_00A3(c, 18u, depth + 1u); else { c.pc = 0x003AC2E8u; return; } if (c.pc != 0x003AC410u) [[unlikely]] return; }
L_003AC410:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003AC41Cu);  goto L_003AC420; }
L_003AC420:
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003AC42C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AC440:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[16].d[0] = ld64((c.r[4].w[0] + 344u));
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] < 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AC490; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC464u);  if (depth < kMaxDepth) unit_000B(c, 7u, depth + 1u); else { c.pc = 0x0014C158u; return; } if (c.pc != 0x003AC464u) [[unlikely]] return; }
L_003AC464:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[5].d[0] | 24464ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC474u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 8u, depth + 1u); else { c.pc = 0x0014C1D0u; return; } if (c.pc != 0x003AC474u) [[unlikely]] return; }
L_003AC474:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[3].w[0] + 10440u), c.r[16].d[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[5].w[0] + 10448u), c.r[4].w[0]);
    c.budget -= 7;
L_003AC490:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AC4A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[4].w[0] + 280u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[4], c.r[4].w[0] + 236u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { goto L_003AC4D0; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 36u)));  if (t) { goto L_003AC4F0; } }
    c.budget -= 1;
L_003AC4D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003AC4E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[4].w[0] + 40u)));  if (t) { goto L_003AC4F0; } }
    c.budget -= 1;
L_003AC4E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003AC508; } }
L_003AC4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC4F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 173u, depth + 1u); else { c.pc = 0x0038E0D0u; return; } if (c.pc != 0x003AC4F8u) [[unlikely]] return; }
L_003AC4F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[3].w[0] + 10452u), c.r[16].w[0]);
    st32((c.r[4].w[0] + 10456u), c.r[2].w[0]);
    c.budget -= 4;
L_003AC508:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AC518:
    st32((c.r[4].w[0] + 328u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 324u), c.r[5].w[0]);  c.pc = t; return; }
L_003AC528:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC54Cu); c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AC54Cu) [[unlikely]] return; }
L_003AC54C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 289ull;  if (t) { goto L_003AC580; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AC580:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003AC5A0; }
L_003AC5A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[2].w[0] + 3648u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC5D4u); set32(c.r[19], c.r[2].w[0] + 3368u);  if (depth < kMaxDepth) unit_00A3(c, 41u, depth + 1u); else { c.pc = 0x003AC6C8u; return; } if (c.pc != 0x003AC5D4u) [[unlikely]] return; }
L_003AC5D4:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003AC62C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 328u)));
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_003AC608; }
    set32(c.r[3], ld32((c.r[19].w[0] + 324u)));
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_003AC628; } }
    c.budget -= 1;
L_003AC608:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[20].d[0] + 0ull;  goto L_003AC62C; }
    set32(c.r[6], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC61Cu); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_009B(c, 173u, depth + 1u); else { c.pc = 0x0038E0D0u; return; } if (c.pc != 0x003AC61Cu) [[unlikely]] return; }
    goto L_003AC61C;
L_003AC618:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_003AC61C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003AC628:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003AC62C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AC650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC674u); c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AC674u) [[unlikely]] return; }
L_003AC674:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 295ull;  if (t) { goto L_003AC6A8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AC6A8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003AC6C8; }
L_003AC6C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003AC6E0; }
L_003AC6E0:
    set32(c.r[4], c.r[4].w[0] + 3368u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 652u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 656u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_003AC700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC724u); c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AC724u) [[unlikely]] return; }
L_003AC724:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 296ull;  if (t) { goto L_003AC758; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AC758:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003AC778; }
L_003AC778:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC7A4u); c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 269u, depth + 1u); else { c.pc = 0x0039E838u; return; } if (c.pc != 0x003AC7A4u) [[unlikely]] return; }
L_003AC7A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC7B0u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003AC7B0u) [[unlikely]] return; }
L_003AC7B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[17].w[0] + 3368u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003AC7D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] - 14320u);
    c.budget -= 2;
L_003AC7D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC7E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AC7E0u) [[unlikely]] return; }
L_003AC7E0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC7ECu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 270u, depth + 1u); else { c.pc = 0x0039E850u; return; } if (c.pc != 0x003AC7ECu) [[unlikely]] return; }
L_003AC7EC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003AC810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC82Cu); c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 60u, depth + 1u); else { c.pc = 0x003AC9D0u; return; } if (c.pc != 0x003AC82Cu) [[unlikely]] return; }
L_003AC82C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003AC844; } }
    set32(c.r[2], 0u - 2u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003AC844:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AC858:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC87Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 60u, depth + 1u); else { c.pc = 0x003AC9D0u; return; } if (c.pc != 0x003AC87Cu) [[unlikely]] return; }
L_003AC87C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 3368u);  if (t) { goto L_003AC89C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 680u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 10288u)));
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_003AC89C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AC8B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC8C8u);  if (depth < kMaxDepth) unit_00A3(c, 60u, depth + 1u); else { c.pc = 0x003AC9D0u; return; } if (c.pc != 0x003AC8C8u) [[unlikely]] return; }
L_003AC8C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AC8D8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC904u); c.r[20].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 60u, depth + 1u); else { c.pc = 0x003AC9D0u; return; } if (c.pc != 0x003AC904u) [[unlikely]] return; }
L_003AC904:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 3368u);  if (t) { goto L_003AC9B0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 724u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 744u)));  goto L_003AC930; }
    set32(c.r[2], 0u - 2u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AC9AC; } }
    c.budget -= 1;
L_003AC930:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC93Cu); set32(c.r[6], c.r[29].w[0] + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AC93Cu) [[unlikely]] return; }
L_003AC93C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC948u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 14u, depth + 1u); else { c.pc = 0x003AC240u; return; } if (c.pc != 0x003AC948u) [[unlikely]] return; }
L_003AC948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0])));  if (t) { goto L_003AC990; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 728u)));
    set32(c.r[2], 0u - 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[3], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003AC994; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 728u)));
    set32(c.r[3], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003AC97C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 740u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 3;
L_003AC97C:
    set32(c.r[2], ld32((c.r[16].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 732u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003AC994; } }
L_003AC990:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_003AC994:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 728u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 736u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 732u)));
    st32((c.r[19].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 736u)));
    c.budget -= 6;
L_003AC9AC:
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_003AC9B0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003AC9D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003ACA18; } }
    set32(c.r[2], 0u - 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003ACA18; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003ACA18; } }
    set32(c.r[2], 0u - 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_003ACA18; } }
    set32(c.r[4], 0u + 1u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.r[4].w[0]);  c.pc = t; return; }
L_003ACA18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003ACA20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACA34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003ACA34u) [[unlikely]] return; }
L_003ACA34:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[6], c.r[16].w[0] + 3368u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 290ull;  if (t) { goto L_003ACA58; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003ACA58:
    set32(c.r[3], ld32((c.r[6].w[0] + 676u)));
    set32(c.r[4], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[6].w[0] + 676u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[4].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003ACA80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACA9Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003ACA9Cu) [[unlikely]] return; }
L_003ACA9C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003ACAC0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 292ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003ACAC0:
    st32((c.r[16].w[0] + 3392u), c.r[17].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ACAD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00381AF0u | kUnwind; return; } [[clang::musttail]] return unit_0098(c, 42u, depth); }
L_003ACAF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACB0Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003ACB0Cu) [[unlikely]] return; }
L_003ACB0C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 291ull;  if (t) { goto L_003ACB38; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003ACB38:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACB44u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 86u, depth + 1u); else { c.pc = 0x003ACDD8u; return; } if (c.pc != 0x003ACB44u) [[unlikely]] return; }
L_003ACB44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[6], 0u + 4u);  if (t) { goto L_003ACB5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACB5Cu);  if (depth < kMaxDepth) unit_00A2(c, 393u, depth + 1u); else { c.pc = 0x003AB7D8u; return; } if (c.pc != 0x003ACB5Cu) [[unlikely]] return; }
L_003ACB5C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ACB78:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACBA8u); c.r[20].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003ACBA8u) [[unlikely]] return; }
L_003ACBA8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003ACBD8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 297ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003ACBD8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 3368u);  if (t) { goto L_003ACC18; } }
    st32((c.r[16].w[0] + 744u), c.r[19].w[0]);
    set32(c.r[5], 0u + 15u);
    st32((c.r[16].w[0] + 724u), c.r[18].w[0]);
    set32(c.r[6], 0u + 5u);
    st32((c.r[16].w[0] + 740u), c.r[20].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACBFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 393u, depth + 1u); else { c.pc = 0x003AB7D8u; return; } if (c.pc != 0x003ACBFCu) [[unlikely]] return; }
L_003ACBFC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 71u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACC0Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 393u, depth + 1u); else { c.pc = 0x003AB7D8u; return; } if (c.pc != 0x003ACC0Cu) [[unlikely]] return; }
L_003ACC0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003ACC48; } }
    c.budget -= 1;
L_003ACC18:
    set32(c.r[5], 0u + 71u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACC28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 393u, depth + 1u); else { c.pc = 0x003AB7D8u; return; } if (c.pc != 0x003ACC28u) [[unlikely]] return; }
L_003ACC28:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACC38u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 393u, depth + 1u); else { c.pc = 0x003AB7D8u; return; } if (c.pc != 0x003ACC38u) [[unlikely]] return; }
L_003ACC38:
    st32((c.r[16].w[0] + 744u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 740u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 724u), 0u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
L_003ACC48:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003ACC68:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_003ACCD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[2].w[0] + 10364u);
    set32(c.r[16], 0u + 7u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 6;
L_003ACC98:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003ACCB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACCACu);  if (depth < kMaxDepth) unit_00A3(c, 79u, depth + 1u); else { c.pc = 0x003ACCF0u; return; } if (c.pc != 0x003ACCACu) [[unlikely]] return; }
L_003ACCAC:
    if (c.r[2].d[0] != 0) c.r[18].d[0] = c.r[2].d[0];
    c.budget -= 1;
L_003ACCB0:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    if (c.r[16].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003ACC98u | kUnwind; return; } goto L_003ACC98; }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ACCD8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003ACCF0; }
L_003ACCF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACD04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003ACD04u) [[unlikely]] return; }
L_003ACD04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 298ull;  if (t) { goto L_003ACD28; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003ACD28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACD30u); set32(c.r[5], 0u + 71u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003ACD30u) [[unlikely]] return; }
L_003ACD30:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003ACD44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACD44u);  if (depth < kMaxDepth) unit_00A3(c, 83u, depth + 1u); else { c.pc = 0x003ACD58u; return; } if (c.pc != 0x003ACD44u) [[unlikely]] return; }
L_003ACD44:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003ACD58:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACD7Cu); set32(c.r[16], c.r[17].w[0] + 3368u);  if (depth < kMaxDepth) unit_00A3(c, 45u, depth + 1u); else { c.pc = 0x003AC778u; return; } if (c.pc != 0x003ACD7Cu) [[unlikely]] return; }
L_003ACD7C:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 652u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003ACDA0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 656u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003ACDBC; } }
L_003ACDA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACDA8u);  if (depth < kMaxDepth) unit_00A3(c, 16u, depth + 1u); else { c.pc = 0x003AC2A0u; return; } if (c.pc != 0x003ACDA8u) [[unlikely]] return; }
L_003ACDA8:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[16].w[0] + 652u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 656u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
L_003ACDBC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003ACDD8:
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 3368u), c.r[5].w[0]);  c.pc = t; return; }
L_003ACDE8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 545ull;
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[1], c.r[1].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 17104u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[1], c.r[1].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 17144u)));
    c.budget -= 25;
    { const bool t = c.r[3].d[0] != 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003ACE68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACE54u);  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x003ACE54u) [[unlikely]] return; }
L_003ACE54:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003ACE58:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003ACE74; } }
    c.budget -= 1;
L_003ACE68:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACE74u); c.r[5].d[0] = c.r[8].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ACE74u) [[unlikely]] return; }
L_003ACE74:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ACE88:
    set32(c.r[10], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[12], ld32((c.r[5].w[0] + 12u)));
    mmi::mult(c, 0, c.r[10].w[0], c.r[4].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[11], ld32((c.r[5].w[0] + 20u)));
    mmi::mult(c, 0, c.r[12].w[0], c.r[4].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 30u)));
    set32(c.r[11], c.r[11].w[0] + c.r[2].w[0]);
    set32(c.r[9], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[2], c.r[10].w[0] << 3);
    set32(c.r[3], c.r[11].w[0] << 5);
    set32(c.r[5], c.r[13].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - c.r[10].w[0]);
    mmi::mult(c, 0, c.r[9].w[0], c.r[4].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] - c.r[13].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[11].w[0]);
    set32(c.r[8], c.r[12].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] - c.r[12].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[13].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[9], c.r[9].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[9], c.r[9].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0]), c.r[9].w[0]);
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0]), c.r[4].w[0]);  c.pc = t; return; }
L_003ACF18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 24000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACF38u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 91u, depth + 1u); else { c.pc = 0x003ACE88u; return; } if (c.pc != 0x003ACF38u) [[unlikely]] return; }
L_003ACF38:
    st32((c.r[16].w[0]), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ACF50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 30000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACF70u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 91u, depth + 1u); else { c.pc = 0x003ACE88u; return; } if (c.pc != 0x003ACF70u) [[unlikely]] return; }
L_003ACF70:
    st32((c.r[16].w[0]), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ACF88:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = 0ull | 60000ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACFA8u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 91u, depth + 1u); else { c.pc = 0x003ACE88u; return; } if (c.pc != 0x003ACFA8u) [[unlikely]] return; }
L_003ACFA8:
    st32((c.r[16].w[0]), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ACFC0:
    set32(c.r[8], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[11], 0u + 10u);
    set32(c.r[12], ld32((c.r[5].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    mmi::div(c, 0, c.r[8].w[0], c.r[11].w[0]);
    set32(c.r[10], ld32((c.r[5].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 20756ull;
    set32(c.r[9], 0u + 1438u);
    set32(c.r[3], c.r[12].w[0] << 1);
    c.budget -= 11;
    if (c.r[11].d[0] == 0ull) { breakpoint(c, 0x003ACFE8u);  goto L_003ACFEC; }
L_003ACFEC:
    set32(c.r[3], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[12], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[13].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[10].w[0], c.r[2].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[9].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[9], ld32((c.r[5].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 30u)));
    set32(c.r[3], c.r[3].w[0] + c.r[13].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[12], c.r[12].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[2].w[0] << 5);
    set32(c.r[10], c.r[10].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0]), c.r[4].w[0]);  c.pc = t; return; }
L_003AD060:
    set32(c.r[9], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[11], 0u + 10u);
    set32(c.r[13], ld32((c.r[5].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    mmi::div(c, 0, c.r[9].w[0], c.r[11].w[0]);
    set32(c.r[10], ld32((c.r[5].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 42356ull;
    set32(c.r[3], 0u + 1798u);
    mmi::mult(c, 1, c.r[9].w[0], c.r[3].w[0]);
    c.r[9].d[0] = c.lo.d[1];
    set32(c.r[8], c.r[10].w[0] << 4);
    c.budget -= 12;
    if (c.r[11].d[0] == 0ull) { breakpoint(c, 0x003AD08Cu);  goto L_003AD090; }
L_003AD090:
    set32(c.r[8], c.r[8].w[0] - c.r[10].w[0]);
    set32(c.r[12], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[10], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[12], c.r[12].w[0] + c.r[10].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[13].w[0], c.r[2].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 30u)));
    set32(c.r[8], c.r[8].w[0] + c.r[14].w[0]);
    set32(c.r[8], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[13], c.r[13].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[13].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[12].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[8].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0]), c.r[4].w[0]);  c.pc = t; return; }
L_003AD0F8:
    set32(c.r[8], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[12], 0u + 10u);
    set32(c.r[11], ld32((c.r[5].w[0] + 16u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00030000u);
    mmi::div(c, 0, c.r[8].w[0], c.r[12].w[0]);
    set32(c.r[10], ld32((c.r[5].w[0] + 8u)));
    c.r[9].d[0] = c.r[9].d[0] | 19284ull;
    set32(c.r[2], c.r[8].w[0] << 3);
    set32(c.r[3], c.r[11].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[8], c.r[2].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 30u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 19;
    if (c.r[12].d[0] == 0ull) { breakpoint(c, 0x003AD140u);  goto L_003AD144; }
L_003AD144:
    c.r[13].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[10].w[0], c.r[9].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[13].w[0]);
    set32(c.r[9], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[5], c.r[8].w[0] << 5);
    set32(c.r[9], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[8].w[0]);
    set32(c.r[10], c.r[10].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0]), c.r[4].w[0]);  c.pc = t; return; }
L_003AD1A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_003AD1F0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003AD1F4; }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD1D0u); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00A3(c, 113u, depth + 1u); else { c.pc = 0x003AD2B8u; return; } if (c.pc != 0x003AD1D0u) [[unlikely]] return; }
L_003AD1D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD1E0u); set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_00A3(c, 105u, depth + 1u); else { c.pc = 0x003AD200u; return; } if (c.pc != 0x003AD1E0u) [[unlikely]] return; }
L_003AD1E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD1F0u); set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_00A3(c, 109u, depth + 1u); else { c.pc = 0x003AD268u; return; } if (c.pc != 0x003AD1F0u) [[unlikely]] return; }
L_003AD1F0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003AD1F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AD200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[16], c.r[4].w[0] + 3368u);
    set32(c.r[4], ld32((c.r[2].w[0] + 10288u)));
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD224u);  if (depth < kMaxDepth) unit_009B(c, 173u, depth + 1u); else { c.pc = 0x0038E0D0u; return; } if (c.pc != 0x003AD224u) [[unlikely]] return; }
L_003AD224:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD230u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 269u, depth + 1u); else { c.pc = 0x0039E838u; return; } if (c.pc != 0x003AD230u) [[unlikely]] return; }
L_003AD230:
    set32(c.r[3], ld32((c.r[16].w[0] + 680u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[16].w[0] + 680u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 716u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD250u); st32((c.r[16].w[0] + 716u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009F(c, 270u, depth + 1u); else { c.pc = 0x0039E850u; return; } if (c.pc != 0x003AD250u) [[unlikely]] return; }
L_003AD250:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AD268:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[16], c.r[4].w[0] + 3368u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD284u); set32(c.r[4], ld32((c.r[16].w[0] + 736u)));  if (depth < kMaxDepth) unit_009B(c, 173u, depth + 1u); else { c.pc = 0x0038E0D0u; return; } if (c.pc != 0x003AD284u) [[unlikely]] return; }
L_003AD284:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD290u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 269u, depth + 1u); else { c.pc = 0x0039E838u; return; } if (c.pc != 0x003AD290u) [[unlikely]] return; }
L_003AD290:
    set32(c.r[2], ld32((c.r[16].w[0] + 732u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD2A4u); st32((c.r[16].w[0] + 732u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009F(c, 270u, depth + 1u); else { c.pc = 0x0039E850u; return; } if (c.pc != 0x003AD2A4u) [[unlikely]] return; }
L_003AD2A4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AD2B8:
    set32(c.r[2], ld32((c.r[4].w[0] + 2336u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_003AD2D8; } }
    set32(c.r[2], 0u + 29970u);
    st32((c.r[5].w[0]), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_003AD2D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[1], c.r[1].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 17104u)));
    set32(c.r[2], 0u + 1000u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003AD2F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD31Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AD31Cu) [[unlikely]] return; }
L_003AD31C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003AD340; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 283ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AD340:
    set32(c.r[3], ld32((c.r[16].w[0] + 2336u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] << 2);  if (t) { goto L_003AD35C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 17104u)));
    st32((c.r[17].w[0]), c.r[4].w[0]);
    c.budget -= 4;
L_003AD35C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AD370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD394u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AD394u) [[unlikely]] return; }
L_003AD394:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003AD3B8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 280ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AD3B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 2336u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 3368u);  if (t) { goto L_003AD3E8; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[5], ld32((c.r[4].w[0] + 684u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 17104u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD3E0u); set32(c.r[6], 0u + 1000u);  if (depth < kMaxDepth) unit_009B(c, 173u, depth + 1u); else { c.pc = 0x0038E0D0u; return; } if (c.pc != 0x003AD3E0u) [[unlikely]] return; }
L_003AD3E0:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003AD3E8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AD400:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003AD428; } }
    set32(c.r[6], ld32((c.r[5].w[0] + 24u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003AD438; }
L_003AD428:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AD438:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[7], c.r[4].w[0] + 2564u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AD460; } }
    set32(c.r[8], ld32((c.r[7].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD45Cu); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 127u, depth + 1u); else { c.pc = 0x003AD5C0u; return; } if (c.pc != 0x003AD45Cu) [[unlikely]] return; }
L_003AD45C:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003AD460:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AD470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD494u); c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AD494u) [[unlikely]] return; }
L_003AD494:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[6], c.r[16].w[0] + 3368u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 293ull;  if (t) { goto L_003AD4C0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AD4C0:
    set32(c.r[3], ld32((c.r[6].w[0] + 688u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[6].w[0] + 696u), c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[6].w[0] + 692u), c.r[18].w[0]);
    st32((c.r[6].w[0] + 688u), c.r[3].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0] + 68u), c.r[4].w[0]);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AD4F8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD528u); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AD528u) [[unlikely]] return; }
L_003AD528:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[6], c.r[16].w[0] + 2564u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 294ull;  if (t) { goto L_003AD558; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AD558:
    set32(c.r[3], ld32((c.r[6].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_003AD570; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_003AD5A0; } }
L_003AD570:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[8], ld32((c.r[6].w[0] + 180u)));  goto L_003AD588; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_003AD5A0; } }
    c.budget -= 1;
L_003AD588:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD59Cu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 127u, depth + 1u); else { c.pc = 0x003AD5C0u; return; } if (c.pc != 0x003AD59Cu) [[unlikely]] return; }
L_003AD59C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AD5A0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AD5C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD608u); set32(c.r[21], c.r[2].w[0] + 10280u);  if (depth < kMaxDepth) unit_00A3(c, 42u, depth + 1u); else { c.pc = 0x003AC6E0u; return; } if (c.pc != 0x003AD608u) [[unlikely]] return; }
L_003AD608:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[6], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[3] = c.r[1].w[0];
    set32(c.r[3], 0u - 2u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]); c.r[4].d[0] = c.lo.d[0];  if (t) { goto L_003AD658; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003AD640; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[6].w[0]);  if (t) { goto L_003AD6E8; } }
    c.budget -= 1;
L_003AD640:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD650u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 131u, depth + 1u); else { c.pc = 0x003AD710u; return; } if (c.pc != 0x003AD650u) [[unlikely]] return; }
L_003AD650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003AD6EC; } }
L_003AD658:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.f[0] = c.r[19].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[20].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003AD674u);  goto L_003AD678; }
L_003AD678:
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    set32(c.r[5], ld32((c.r[18].w[0] + 2624u)));
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[12] = c.f[1];
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[13] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 19;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; st32((c.r[29].w[0]), c.r[2].w[0]);  if (t) { goto L_003AD6D8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD6D0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 133u, depth + 1u); else { c.pc = 0x003AD788u; return; } if (c.pc != 0x003AD6D0u) [[unlikely]] return; }
L_003AD6D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003AD6EC; } }
L_003AD6D8:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[13]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[17].w[0]), 0u);  goto L_003AD6E8; }
    st32((c.r[17].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_003AD6E8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003AD6EC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003AD710:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[8], c.r[4].w[0] + 3368u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[8].w[0] + 716u)));
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], c.r[2].w[0] + 10280u);  if (t) { goto L_003AD750; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[8].w[0] + 716u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003AD774; } }
    c.budget -= 1;
L_003AD750:
    set32(c.r[6], ld32((c.r[8].w[0] + 716u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD75Cu); set32(c.r[7], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0098(c, 42u, depth + 1u); else { c.pc = 0x00381AF0u; return; } if (c.pc != 0x003AD75Cu) [[unlikely]] return; }
L_003AD75C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AD770; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003AD774; } }
    c.budget -= 1;
L_003AD770:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_003AD774:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AD788:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[7].w[0] + 2748u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[13], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[6], c.r[7].w[0] + 3368u);  if (t) { goto L_003AD7B0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), 0u);  c.pc = t; return; }
L_003AD7B0:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[13], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_003AD7F8; } }
    c.f[0] = ld32((c.r[6].w[0] + 712u));
    set32(c.r[2], 0u + 1u);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_003AD86C; } }
    c.f[0] = ld32((c.r[6].w[0] + 704u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003AD86C; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 700u)));
    st32((c.r[6].w[0] + 704u), c.f[12]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0] + 700u), c.r[2].w[0]);  c.pc = t; return; }
L_003AD7F8:
    c.r[4].d[0] = 0ull | 59940ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 10288u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003AD824; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 2336u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[6].w[0] + 700u)));  goto L_003AD828; }
    set32(c.r[2], ld32((c.r[6].w[0] + 684u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1000ull;
    c.r[8].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_003AD824:
    set32(c.r[2], ld32((c.r[6].w[0] + 700u)));
    c.budget -= 1;
L_003AD828:
    c.r[2].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AD840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[6].w[0] + 708u)));  if (t) { goto L_003AD858; } }
    c.budget -= 1;
L_003AD840:
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[12]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_003AD858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), 0u);  if (t) { goto L_003AD85C; } }
    c.budget -= 1;
L_003AD858:
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003AD85C:
    st32((c.r[6].w[0] + 700u), 0u);
    st32((c.r[6].w[0] + 712u), c.f[12]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[6].w[0] + 708u), c.r[2].w[0]);
    c.budget -= 4;
L_003AD86C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003AD878:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 2384u)));
    set32(c.r[3], c.r[3].w[0] + 3368u);
    set32(c.r[16], ld32((c.r[3].w[0] + 640u)));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 636u)));  if (t) { goto L_003AD8FC; } }
    set32(c.r[3], 0u - 5u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AD8FC; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD8BCu); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00A3(c, 42u, depth + 1u); else { c.pc = 0x003AC6E0u; return; } if (c.pc != 0x003AD8BCu) [[unlikely]] return; }
L_003AD8BC:
    c.r[3].d[0] = 0ull | 59940ull;
    set32(c.r[4], c.r[16].w[0] << 5);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003AD8C8u);  goto L_003AD8CC; }
L_003AD8CC:
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[7], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] << 4);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD8F8u); set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0098(c, 42u, depth + 1u); else { c.pc = 0x00381AF0u; return; } if (c.pc != 0x003AD8F8u) [[unlikely]] return; }
L_003AD8F8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003AD8FC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AD910:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4052u), c.r[5].w[0]);  c.pc = t; return; }
L_003AD918:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 4052u)));  c.pc = t; return; }
L_003AD920:
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 1;
    st32((c.r[4].w[0] + 24u), 0u);
    st64((c.r[4].w[0] + 8u), c.r[2].d[0]);
    st64((c.r[4].w[0]), 0ull);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0] + 16u), 0ull);  c.pc = t; return; }
L_003AD940:
    c.r[7].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[8].d[0] = ld64((c.r[4].w[0] + 16u));
    c.r[6].d[0] = ld64((c.r[4].w[0]));
    c.r[9].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[8].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[8].d[0] = c.r[5].d[0];
    c.r[6].d[0] = c.r[6].d[0] + c.r[5].d[0];
    if (c.r[9].d[0] != 0) c.r[7].d[0] = c.r[5].d[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    st64((c.r[4].w[0]), c.r[6].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[7].d[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0] + 16u), c.r[8].d[0]);  c.pc = t; return; }
L_003AD980:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    ldl(c.r[3], (c.r[2].w[0] + 7u));
    ldr(c.r[3], (c.r[2].w[0]));
    ldl(c.r[6], (c.r[2].w[0] + 15u));
    ldr(c.r[6], (c.r[2].w[0] + 8u));
    ldl(c.r[7], (c.r[2].w[0] + 23u));
    ldr(c.r[7], (c.r[2].w[0] + 16u));
    ldl(c.r[8], (c.r[2].w[0] + 31u));
    ldr(c.r[8], (c.r[2].w[0] + 24u));
    sdl(c.r[3], (c.r[4].w[0] + 7u));
    sdr(c.r[3], (c.r[4].w[0]));
    sdl(c.r[6], (c.r[4].w[0] + 15u));
    sdr(c.r[6], (c.r[4].w[0] + 8u));
    sdl(c.r[7], (c.r[4].w[0] + 23u));
    sdr(c.r[7], (c.r[4].w[0] + 16u));
    sdl(c.r[8], (c.r[4].w[0] + 31u));
    sdr(c.r[8], (c.r[4].w[0] + 24u));
    ldl(c.r[3], (c.r[2].w[0] + 39u));
    ldr(c.r[3], (c.r[2].w[0] + 32u));
    ldl(c.r[6], (c.r[2].w[0] + 47u));
    ldr(c.r[6], (c.r[2].w[0] + 40u));
    ldl(c.r[7], (c.r[2].w[0] + 55u));
    ldr(c.r[7], (c.r[2].w[0] + 48u));
    set32(c.r[8], ld32((c.r[2].w[0] + 56u)));
    sdl(c.r[3], (c.r[4].w[0] + 39u));
    sdr(c.r[3], (c.r[4].w[0] + 32u));
    sdl(c.r[6], (c.r[4].w[0] + 47u));
    sdr(c.r[6], (c.r[4].w[0] + 40u));
    sdl(c.r[7], (c.r[4].w[0] + 55u));
    sdr(c.r[7], (c.r[4].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[4].w[0] + 56u), c.r[8].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 38;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003ADA30; }
L_003ADA18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003ADA30; }
L_003ADA30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[5].w[0] << 2);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 10;
L_003ADA58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_003ADA94; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);  if (t) { goto L_003ADA94; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADA88u); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ADA88u) [[unlikely]] return; }
L_003ADA88:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[17].sd[0] < 15ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADA58u | kUnwind; return; } goto L_003ADA58; } }
L_003ADA94:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ADAB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[19], ld32((c.r[6].w[0])));
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 8u);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 14;
L_003ADAE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 68u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADB00u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_00A3(c, 149u, depth + 1u); else { c.pc = 0x003ADB68u; return; } if (c.pc != 0x003ADB00u) [[unlikely]] return; }
L_003ADB00:
    c.budget -= 2;
    if (c.r[18].sd[0] >= 0) { st32((c.r[16].w[0] + 8u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADAE8u | kUnwind; return; } goto L_003ADAE8; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADB14u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 151u, depth + 1u); else { c.pc = 0x003ADBB0u; return; } if (c.pc != 0x003ADB14u) [[unlikely]] return; }
L_003ADB14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003ADB48; } }
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] | 770ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003ADB48:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003ADB68:
    set32(c.r[2], 0u + 8u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0]), 0u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[5], 0u + 8u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + 28u);
    c.budget -= 8;
L_003ADB88:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], c.r[2].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADB88u | kUnwind; return; } goto L_003ADB88; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), c.r[2].w[0]);  c.pc = t; return; }
L_003ADBB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003ADBF0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADBDCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 184u, depth + 1u); else { c.pc = 0x003ADF20u; return; } if (c.pc != 0x003ADBDCu) [[unlikely]] return; }
L_003ADBDC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADBE8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 164u, depth + 1u); else { c.pc = 0x003ADCD0u; return; } if (c.pc != 0x003ADBE8u) [[unlikely]] return; }
L_003ADBE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003ADCBC; } }
L_003ADBF0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_003ADC28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADC04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 184u, depth + 1u); else { c.pc = 0x003ADF20u; return; } if (c.pc != 0x003ADC04u) [[unlikely]] return; }
L_003ADC04:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADC10u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 173u, depth + 1u); else { c.pc = 0x003ADDC0u; return; } if (c.pc != 0x003ADC10u) [[unlikely]] return; }
L_003ADC10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADC20u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 393u, depth + 1u); else { c.pc = 0x003AB7D8u; return; } if (c.pc != 0x003ADC20u) [[unlikely]] return; }
L_003ADC20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 2988u), 0u);  if (t) { goto L_003ADCB8; } }
L_003ADC28:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 2u);  if (t) { goto L_003ADC60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADC3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 184u, depth + 1u); else { c.pc = 0x003ADF20u; return; } if (c.pc != 0x003ADC3Cu) [[unlikely]] return; }
L_003ADC3C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADC48u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 178u, depth + 1u); else { c.pc = 0x003ADE60u; return; } if (c.pc != 0x003ADC48u) [[unlikely]] return; }
L_003ADC48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADC58u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 393u, depth + 1u); else { c.pc = 0x003AB7D8u; return; } if (c.pc != 0x003ADC58u) [[unlikely]] return; }
L_003ADC58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 2984u), 0u);  if (t) { goto L_003ADCB8; } }
L_003ADC60:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 7u);  if (t) { goto L_003ADCB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADC74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 184u, depth + 1u); else { c.pc = 0x003ADF20u; return; } if (c.pc != 0x003ADC74u) [[unlikely]] return; }
L_003ADC74:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADC80u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 183u, depth + 1u); else { c.pc = 0x003ADF00u; return; } if (c.pc != 0x003ADC80u) [[unlikely]] return; }
L_003ADC80:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADC90u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 393u, depth + 1u); else { c.pc = 0x003AB7D8u; return; } if (c.pc != 0x003ADC90u) [[unlikely]] return; }
L_003ADC90:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADCA0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 393u, depth + 1u); else { c.pc = 0x003AB7D8u; return; } if (c.pc != 0x003ADCA0u) [[unlikely]] return; }
L_003ADCA0:
    st32((c.r[17].w[0] + 2988u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 2984u), 0u);  if (t) { goto L_003ADCB8; } }
    c.budget -= 1;
L_003ADCB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003ADCBC; } }
L_003ADCB8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003ADCBC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ADCD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADCF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 188u, depth + 1u); else { c.pc = 0x003ADFE0u; return; } if (c.pc != 0x003ADCF4u) [[unlikely]] return; }
L_003ADCF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], 0u + 5u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003ADD28; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADD14u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A3(c, 185u, depth + 1u); else { c.pc = 0x003ADF40u; return; } if (c.pc != 0x003ADD14u) [[unlikely]] return; }
L_003ADD14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADD20u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 173u, depth + 1u); else { c.pc = 0x003ADDC0u; return; } if (c.pc != 0x003ADD20u) [[unlikely]] return; }
L_003ADD20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_003ADD38; } }
L_003ADD28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADD30u);  if (depth < kMaxDepth) unit_00A2(c, 393u, depth + 1u); else { c.pc = 0x003AB7D8u; return; } if (c.pc != 0x003ADD30u) [[unlikely]] return; }
L_003ADD30:
    st32((c.r[16].w[0] + 2984u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 2;
L_003ADD38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003ADD60; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADD4Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00A3(c, 186u, depth + 1u); else { c.pc = 0x003ADF60u; return; } if (c.pc != 0x003ADD4Cu) [[unlikely]] return; }
L_003ADD4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADD58u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 178u, depth + 1u); else { c.pc = 0x003ADE60u; return; } if (c.pc != 0x003ADD58u) [[unlikely]] return; }
L_003ADD58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 32u)));  if (t) { goto L_003ADD74; } }
L_003ADD60:
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADD6Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 393u, depth + 1u); else { c.pc = 0x003AB7D8u; return; } if (c.pc != 0x003ADD6Cu) [[unlikely]] return; }
L_003ADD6C:
    st32((c.r[16].w[0] + 2988u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 2;
L_003ADD74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003ADDA8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADD88u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_00A3(c, 187u, depth + 1u); else { c.pc = 0x003ADF80u; return; } if (c.pc != 0x003ADD88u) [[unlikely]] return; }
L_003ADD88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003ADF00; }
L_003ADDA8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ADDC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 2u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADDE4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A3(c, 188u, depth + 1u); else { c.pc = 0x003ADFE0u; return; } if (c.pc != 0x003ADDE4u) [[unlikely]] return; }
L_003ADDE4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADDF4u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_00A3(c, 184u, depth + 1u); else { c.pc = 0x003ADF20u; return; } if (c.pc != 0x003ADDF4u) [[unlikely]] return; }
L_003ADDF4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 4u);  if (t) { goto L_003ADE40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADE10u);  if (depth < kMaxDepth) unit_00A3(c, 188u, depth + 1u); else { c.pc = 0x003ADFE0u; return; } if (c.pc != 0x003ADE10u) [[unlikely]] return; }
L_003ADE10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADE20u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_00A3(c, 184u, depth + 1u); else { c.pc = 0x003ADF20u; return; } if (c.pc != 0x003ADE20u) [[unlikely]] return; }
L_003ADE20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 5u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], 0u + 6u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003ADFE0; }
L_003ADE40:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 3u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[6], 0u + 6u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003ADFE0; }
L_003ADE60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 3u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADE84u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00A3(c, 188u, depth + 1u); else { c.pc = 0x003ADFE0u; return; } if (c.pc != 0x003ADE84u) [[unlikely]] return; }
L_003ADE84:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADE94u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00A3(c, 184u, depth + 1u); else { c.pc = 0x003ADF20u; return; } if (c.pc != 0x003ADE94u) [[unlikely]] return; }
L_003ADE94:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 5u);  if (t) { goto L_003ADEE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADEB0u);  if (depth < kMaxDepth) unit_00A3(c, 188u, depth + 1u); else { c.pc = 0x003ADFE0u; return; } if (c.pc != 0x003ADEB0u) [[unlikely]] return; }
L_003ADEB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADEC0u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_00A3(c, 184u, depth + 1u); else { c.pc = 0x003ADF20u; return; } if (c.pc != 0x003ADEC0u) [[unlikely]] return; }
L_003ADEC0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 6u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], 0u + 7u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003ADFE0; }
L_003ADEE0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 4u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[6], 0u + 7u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003ADFE0; }
L_003ADF00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 8u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003ADFE0; }
L_003ADF20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003ADFA0; }
L_003ADF40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003ADFA0; }
L_003ADF60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003ADFA0; }
L_003ADF80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 2u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003ADFA0; }
L_003ADFA0:
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0] + 7996u), c.r[7].w[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4948u), c.r[5].w[0]);  c.pc = t; return; }
L_003ADFE0:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st32((c.r[3].w[0] + 7992u), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4952u), c.r[6].w[0]);  c.pc = t; return; }
L_003AE018:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[18].w[0] + 7976u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[19], c.r[5].w[0] << 2);
    c.budget -= 12;
L_003AE048:
    c.r[2].d[0] = c.r[17].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 1;
L_003AE04C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_003AE090; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[16], c.r[16].w[0] + 68u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE048u | kUnwind; return; } goto L_003AE048; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE084u); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AE084u) [[unlikely]] return; }
L_003AE084:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[17].sd[0] < 9ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE04Cu | kUnwind; return; } goto L_003AE04C; } }
L_003AE090:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AE0B0:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[3].w[0] + 7988u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[6].w[0] + c.r[9].w[0]);
    c.budget -= 14;
    { const bool t = c.r[9].d[0] == 0ull; c.r[6].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003AE0F4; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE0F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AE0F4u) [[unlikely]] return; }
L_003AE0F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AE100:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 7976u), c.r[6].w[0]);  c.pc = t; return; }
L_003AE118:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 7976u)));  c.pc = t; return; }
L_003AE130:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 7980u), c.r[6].w[0]);  c.pc = t; return; }
L_003AE148:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 7980u)));  c.pc = t; return; }
L_003AE160:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 7988u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_003AE180:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 448u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE19Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003AE19Cu) [[unlikely]] return; }
L_003AE19C:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 10u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE1C0u); st32((c.r[16].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_00A3(c, 203u, depth + 1u); else { c.pc = 0x003AE260u; return; } if (c.pc != 0x003AE1C0u) [[unlikely]] return; }
L_003AE1C0:
    st64((c.r[16].w[0] + 264u), 0ull);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 16960ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 16683u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[5].d[0] = c.r[5].d[0] | 3392ull;
    set32(c.r[6], 0u - 1u);
    st64((c.r[16].w[0] + 304u), c.r[2].d[0]);
    st64((c.r[16].w[0] + 312u), c.r[4].d[0]);
    st64((c.r[16].w[0] + 328u), c.r[5].d[0]);
    st64((c.r[16].w[0] + 368u), c.r[3].d[0]);
    st64((c.r[16].w[0] + 376u), c.r[6].d[0]);
    st32((c.r[16].w[0] + 440u), 0u);
    st64((c.r[16].w[0] + 272u), c.r[2].d[0]);
    st64((c.r[16].w[0] + 280u), 0ull);
    st64((c.r[16].w[0] + 288u), c.r[2].d[0]);
    st64((c.r[16].w[0] + 296u), 0ull);
    st64((c.r[16].w[0] + 320u), c.r[3].d[0]);
    st64((c.r[16].w[0] + 336u), c.r[3].d[0]);
    st64((c.r[16].w[0] + 344u), 0ull);
    st64((c.r[16].w[0] + 352u), c.r[3].d[0]);
    st64((c.r[16].w[0] + 360u), 0ull);
    st64((c.r[16].w[0] + 384u), 0ull);
    st64((c.r[16].w[0] + 392u), 0ull);
    st32((c.r[16].w[0] + 400u), 0u);
    st32((c.r[16].w[0] + 404u), 0u);
    st32((c.r[16].w[0] + 408u), 0u);
    st32((c.r[16].w[0] + 412u), 0u);
    st32((c.r[16].w[0] + 416u), 0u);
    st32((c.r[16].w[0] + 420u), 0u);
    st32((c.r[16].w[0] + 424u), 0u);
    st32((c.r[16].w[0] + 428u), 0u);
    st32((c.r[16].w[0] + 432u), 0u);
    st32((c.r[16].w[0] + 436u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 39;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003AE910; }
L_003AE260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 24u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE280u); set32(c.r[6], 0u + 240u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003AE280u) [[unlikely]] return; }
L_003AE280:
    set32(c.r[2], ld32((c.r[16].w[0] + 412u)));
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0] + 412u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AE2A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_003AE2A8:
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    st64((c.r[4].w[0] + 312u), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[5].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0] + 320u), c.r[3].d[0]);  c.pc = t; return; }
L_003AE2C0:
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    st64((c.r[4].w[0] + 328u), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[5].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0] + 336u), c.r[3].d[0]);  c.pc = t; return; }
L_003AE2D8:
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    st64((c.r[4].w[0] + 344u), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[5].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0] + 352u), c.r[3].d[0]);  c.pc = t; return; }
L_003AE2F0:
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    st64((c.r[4].w[0] + 360u), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[5].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0] + 368u), c.r[3].d[0]);  c.pc = t; return; }
L_003AE308:
    c.budget -= 2;
    if (c.r[5].sd[0] > 0) { st32((c.r[4].w[0] + 16u), c.r[5].w[0]);  goto L_003AE310; }
L_003AE310:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003AE318:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[5].w[0]);  c.pc = t; return; }
L_003AE320:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[5].w[0]);  c.pc = t; return; }
L_003AE328:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003AE36C; } }
    c.r[5].d[0] = ld64((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE354u); c.r[4].d[0] = ld64((c.r[16].w[0] + 304u));  if (depth < kMaxDepth) unit_000B(c, 7u, depth + 1u); else { c.pc = 0x0014C158u; return; } if (c.pc != 0x003AE354u) [[unlikely]] return; }
L_003AE354:
    c.r[5].d[0] = ld64((c.r[17].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE360u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 8u, depth + 1u); else { c.pc = 0x0014C1D0u; return; } if (c.pc != 0x003AE360u) [[unlikely]] return; }
L_003AE360:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 296u));
    c.r[3].d[0] = c.r[3].d[0] + c.r[2].d[0];
    st64((c.r[16].w[0] + 296u), c.r[3].d[0]);
    c.budget -= 3;
L_003AE36C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AE380:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[2].d[0] = ld64((c.r[21].w[0] + 8u));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[22].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003AE3CC; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = ld64((c.r[19].w[0]));  goto L_003AE408; }
L_003AE3CC:
    c.r[2].d[0] = ld64((c.r[19].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st64((c.r[22].w[0]), c.r[2].d[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[3].d[0] = ld64((c.r[19].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    st64((c.r[22].w[0] + 8u), c.r[3].d[0]);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003AE408:
    set32(c.r[7], 0u + 1u);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 392u));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[7].d[0]; st64((c.r[19].w[0]), c.r[5].d[0]);  if (t) { goto L_003AE430; } }
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003AE4D0; } }
L_003AE430:
    set32(c.r[18], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; c.r[6].d[0] = ld64((c.r[16].w[0] + 392u));  if (t) { goto L_003AE4D4; } }
    c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_003AE4B8; }
    c.r[3].d[0] = ld64((c.r[16].w[0] + 376u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[16].w[0] + 8u), c.r[7].w[0]);  if (t) { goto L_003AE470; } }
    c.r[5].d[0] = ld64((c.r[16].w[0] + 344u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE464u); c.r[4].d[0] = ld64((c.r[19].w[0] + 8u));  if (depth < kMaxDepth) unit_000B(c, 7u, depth + 1u); else { c.pc = 0x0014C158u; return; } if (c.pc != 0x003AE464u) [[unlikely]] return; }
L_003AE464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld64((c.r[16].w[0] + 352u));  if (t) { goto L_003AE480; } }
    c.budget -= 1;
L_003AE470:
    c.r[5].d[0] = ld64((c.r[16].w[0] + 360u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE47Cu); c.r[4].d[0] = ld64((c.r[19].w[0] + 8u));  if (depth < kMaxDepth) unit_000B(c, 7u, depth + 1u); else { c.pc = 0x0014C158u; return; } if (c.pc != 0x003AE47Cu) [[unlikely]] return; }
L_003AE47C:
    c.r[5].d[0] = ld64((c.r[16].w[0] + 368u));
    c.budget -= 1;
L_003AE480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE488u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 8u, depth + 1u); else { c.pc = 0x0014C1D0u; return; } if (c.pc != 0x003AE488u) [[unlikely]] return; }
L_003AE488:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld64((c.r[21].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[16].w[0] + 376u), c.r[3].d[0]);
    c.r[2].d[0] = ld64((c.r[19].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + c.r[5].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE4A8u); st64((c.r[16].w[0] + 384u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00A3(c, 203u, depth + 1u); else { c.pc = 0x003AE260u; return; } if (c.pc != 0x003AE4A8u) [[unlikely]] return; }
L_003AE4A8:
    c.r[6].d[0] = ld64((c.r[16].w[0] + 392u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_003AE4D4; } }
    c.budget -= 1;
L_003AE4B8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld64((c.r[19].w[0]));  goto L_003AE4D8; }
    st32((c.r[16].w[0] + 8u), c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_003AE4D4; } }
    c.budget -= 1;
L_003AE4D0:
    c.r[6].d[0] = ld64((c.r[16].w[0] + 392u));
    c.budget -= 1;
L_003AE4D4:
    c.r[2].d[0] = ld64((c.r[19].w[0]));
    c.budget -= 1;
L_003AE4D8:
    set32(c.r[4], 0u - 1u);
    c.r[17].d[0] = ld64((c.r[16].w[0] + 376u));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == c.r[4].d[0]; st64((c.r[16].w[0] + 392u), c.r[2].d[0]);  if (t) { goto L_003AE518; } }
    c.r[5].d[0] = ld64((c.r[21].w[0]));
    c.r[4].d[0] = ld64((c.r[19].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE500u); c.r[5].d[0] = c.r[5].d[0] - c.r[17].d[0];  if (depth < kMaxDepth) unit_000B(c, 7u, depth + 1u); else { c.pc = 0x0014C158u; return; } if (c.pc != 0x003AE500u) [[unlikely]] return; }
L_003AE500:
    c.r[5].d[0] = ld64((c.r[21].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE50Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 8u, depth + 1u); else { c.pc = 0x0014C1D0u; return; } if (c.pc != 0x003AE50Cu) [[unlikely]] return; }
L_003AE50C:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 384u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[3].d[0] + c.r[2].d[0];  if (t) { goto L_003AE51C; } }
L_003AE518:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AE51C:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  goto L_003AE570; }
    c.r[3].d[0] = ld64((c.r[16].w[0] + 392u));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003AE6D0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = ld64((c.r[21].w[0]));  if (t) { goto L_003AE550; } }
    st64((c.r[16].w[0] + 384u), c.r[3].d[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[16].w[0] + 376u), c.r[2].d[0]);  if (t) { goto L_003AE55C; } }
    c.budget -= 1;
L_003AE550:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 296u));
    st64((c.r[16].w[0] + 376u), c.r[2].d[0]);
    st64((c.r[16].w[0] + 384u), c.r[3].d[0]);
    c.budget -= 3;
L_003AE55C:
    set32(c.r[2], ld32((c.r[16].w[0] + 400u)));
    c.r[17].d[0] = ld64((c.r[16].w[0] + 376u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 400u), c.r[2].w[0]);  if (t) { goto L_003AE6CC; } }
L_003AE570:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_003AE6D0; } }
    c.r[5].d[0] = ld64((c.r[16].w[0] + 328u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE588u); c.r[4].d[0] = ld64((c.r[19].w[0] + 8u));  if (depth < kMaxDepth) unit_000B(c, 7u, depth + 1u); else { c.pc = 0x0014C158u; return; } if (c.pc != 0x003AE588u) [[unlikely]] return; }
L_003AE588:
    c.r[5].d[0] = ld64((c.r[16].w[0] + 336u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE594u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 8u, depth + 1u); else { c.pc = 0x0014C1D0u; return; } if (c.pc != 0x003AE594u) [[unlikely]] return; }
L_003AE594:
    c.r[5].d[0] = ld64((c.r[19].w[0]));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] - c.r[20].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;  if (t) { goto L_003AE5B8; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld64((c.r[21].w[0]));  goto L_003AE5CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] - c.r[20].d[0];  if (t) { goto L_003AE5F8; } }
L_003AE5B8:
    c.r[2].d[0] = c.r[20].d[0] - c.r[5].d[0];
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] - c.r[20].d[0];  if (t) { goto L_003AE5F8; } }
    c.r[2].d[0] = ld64((c.r[21].w[0]));
    c.budget -= 1;
L_003AE5CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[16].w[0] + 376u), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[19].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE5E0u); st64((c.r[16].w[0] + 384u), c.r[3].d[0]);  if (depth < kMaxDepth) unit_00A3(c, 203u, depth + 1u); else { c.pc = 0x003AE260u; return; } if (c.pc != 0x003AE5E0u) [[unlikely]] return; }
L_003AE5E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 416u)));
    set32(c.r[18], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[17].d[0] = ld64((c.r[16].w[0] + 376u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 416u), c.r[2].w[0]);  if (t) { goto L_003AE6CC; } }
L_003AE5F8:
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE608u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 235u, depth + 1u); else { c.pc = 0x003AE7E8u; return; } if (c.pc != 0x003AE608u) [[unlikely]] return; }
L_003AE608:
    c.r[4].d[0] = ld64((c.r[19].w[0] + 8u));
    c.r[5].d[0] = ld64((c.r[16].w[0] + 312u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE618u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 7u, depth + 1u); else { c.pc = 0x0014C158u; return; } if (c.pc != 0x003AE618u) [[unlikely]] return; }
L_003AE618:
    c.r[5].d[0] = ld64((c.r[16].w[0] + 320u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE624u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 8u, depth + 1u); else { c.pc = 0x0014C1D0u; return; } if (c.pc != 0x003AE624u) [[unlikely]] return; }
L_003AE624:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003AE634; } }
    c.r[2].d[0] = 0ull - c.r[2].d[0];
    c.budget -= 1;
L_003AE634:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 8u)));  goto L_003AE6C8; }
    c.r[2].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] << 1;  if (t) { goto L_003AE670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE654u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 8u, depth + 1u); else { c.pc = 0x0014C1D0u; return; } if (c.pc != 0x003AE654u) [[unlikely]] return; }
L_003AE654:
    set32(c.r[3], ld32((c.r[16].w[0] + 404u)));
    c.r[4].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 404u), c.r[3].w[0]);  if (t) { goto L_003AE690; } }
L_003AE670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE678u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 8u, depth + 1u); else { c.pc = 0x0014C1D0u; return; } if (c.pc != 0x003AE678u) [[unlikely]] return; }
L_003AE678:
    set32(c.r[3], ld32((c.r[16].w[0] + 408u)));
    c.r[4].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[16].w[0] + 408u), c.r[3].w[0]);
    c.budget -= 6;
L_003AE690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE698u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 7u, depth + 1u); else { c.pc = 0x0014C158u; return; } if (c.pc != 0x003AE698u) [[unlikely]] return; }
L_003AE698:
    c.r[3].d[0] = ld64((c.r[21].w[0]));
    c.r[5].d[0] = c.r[2].d[0] >> 63;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] + c.r[2].d[0];
    st64((c.r[16].w[0] + 376u), c.r[3].d[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 1);
    c.r[2].d[0] = c.r[20].d[0] + c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE6C4u); st64((c.r[16].w[0] + 384u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00A3(c, 237u, depth + 1u); else { c.pc = 0x003AE848u; return; } if (c.pc != 0x003AE6C4u) [[unlikely]] return; }
L_003AE6C4:
    set32(c.r[18], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_003AE6C8:
    c.r[17].d[0] = ld64((c.r[16].w[0] + 376u));
    c.budget -= 1;
L_003AE6CC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003AE6D0:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_003AE6FC; }
    c.r[5].d[0] = ld64((c.r[21].w[0]));
    c.r[4].d[0] = ld64((c.r[19].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE6E8u); c.r[5].d[0] = c.r[5].d[0] - c.r[17].d[0];  if (depth < kMaxDepth) unit_000B(c, 7u, depth + 1u); else { c.pc = 0x0014C158u; return; } if (c.pc != 0x003AE6E8u) [[unlikely]] return; }
L_003AE6E8:
    c.r[5].d[0] = ld64((c.r[21].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE6F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 8u, depth + 1u); else { c.pc = 0x0014C1D0u; return; } if (c.pc != 0x003AE6F4u) [[unlikely]] return; }
L_003AE6F4:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 384u));
    c.r[3].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.budget -= 2;
L_003AE6FC:
    st64((c.r[22].w[0]), c.r[3].d[0]);
    c.r[2].d[0] = ld64((c.r[19].w[0] + 8u));
    st64((c.r[22].w[0] + 8u), c.r[2].d[0]);
    c.r[4].d[0] = ld64((c.r[16].w[0] + 296u));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld64((c.r[19].w[0]));  goto L_003AE728; }
    st64((c.r[22].w[0]), c.r[4].d[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 304u));
    st64((c.r[22].w[0] + 8u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[19].w[0]));
    c.budget -= 4;
L_003AE728:
    st64((c.r[16].w[0] + 264u), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[19].w[0] + 8u));
    st64((c.r[16].w[0] + 272u), c.r[3].d[0]);
    c.r[2].d[0] = ld64((c.r[21].w[0]));
    st64((c.r[16].w[0] + 280u), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[21].w[0] + 8u));
    st64((c.r[16].w[0] + 288u), c.r[3].d[0]);
    c.r[2].d[0] = ld64((c.r[22].w[0]));
    st64((c.r[16].w[0] + 296u), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[22].w[0] + 8u));
    st64((c.r[16].w[0] + 304u), c.r[3].d[0]);
    c.r[2].d[0] = ld64((c.r[19].w[0]));
    c.r[3].d[0] = ld64((c.r[22].w[0]));
    c.r[2].d[0] = c.r[2].d[0] - c.r[3].d[0];
    c.r[7].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.budget -= 18;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 436u)));  goto L_003AE798; }
    set32(c.r[2], ld32((c.r[16].w[0] + 428u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 432u)));
    c.r[4].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[7].d[0];
    if (c.r[5].d[0] == 0) c.r[3].d[0] = c.r[7].d[0];
    st32((c.r[16].w[0] + 428u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 432u), c.r[3].w[0]);  if (t) { goto L_003AE7B4; } }
    c.budget -= 1;
L_003AE798:
    set32(c.r[3], ld32((c.r[16].w[0] + 440u)));
    c.r[4].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[7].d[0];
    if (c.r[5].d[0] == 0) c.r[3].d[0] = c.r[7].d[0];
    st32((c.r[16].w[0] + 436u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 440u), c.r[3].w[0]);
    c.budget -= 7;
L_003AE7B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0] + 10472u), c.r[16].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 64u);  goto L_003AEA70; }
L_003AE7E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[7], c.r[16].w[0] + 20u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[7].w[0])));
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003AE808u);  goto L_003AE80C; }
L_003AE80C:
    mmi::div(c, 0, c.r[6].w[0], c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE82Cu); st32((c.r[7].w[0]), c.r[6].w[0]);  if (depth < kMaxDepth) unit_00A3(c, 240u, depth + 1u); else { c.pc = 0x003AE8A8u; return; } if (c.pc != 0x003AE82Cu) [[unlikely]] return; }
L_003AE82C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0] + 424u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 420u), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AE848:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003AE888; } }
    set32(c.r[3], c.r[16].w[0] + 24u);
    c.budget -= 1;
L_003AE868:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE868u | kUnwind; return; } goto L_003AE868; } }
L_003AE888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE890u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 240u, depth + 1u); else { c.pc = 0x003AE8A8u; return; } if (c.pc != 0x003AE890u) [[unlikely]] return; }
L_003AE890:
    st32((c.r[16].w[0] + 424u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AE8A8:
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003AE8DC; } }
    set32(c.r[4], c.r[4].w[0] + 24u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
L_003AE8C0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE8C0u | kUnwind; return; } goto L_003AE8C0; } }
L_003AE8DC:
    mmi::div(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x003AE8E4u);  goto L_003AE8E8; }
L_003AE8E8:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003AE910:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[29], c.r[29].w[0] - 320u);
    set32(c.r[3], c.r[3].w[0] + 17216u);
    st64((c.r[29].w[0] + 288u), c.r[16].d[0]);
    c.r[2].d[0] = c.r[3].d[0] & 7ull;
    st64((c.r[29].w[0] + 296u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 304u), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003AE998; } }
    set32(c.r[2], c.r[3].w[0] + 256u);
    c.budget -= 1;
L_003AE938:
    ldl(c.r[5], (c.r[3].w[0] + 7u));
    ldr(c.r[5], (c.r[3].w[0]));
    ldl(c.r[6], (c.r[3].w[0] + 15u));
    ldr(c.r[6], (c.r[3].w[0] + 8u));
    ldl(c.r[7], (c.r[3].w[0] + 23u));
    ldr(c.r[7], (c.r[3].w[0] + 16u));
    ldl(c.r[8], (c.r[3].w[0] + 31u));
    ldr(c.r[8], (c.r[3].w[0] + 24u));
    sdl(c.r[5], (c.r[4].w[0] + 7u));
    sdr(c.r[5], (c.r[4].w[0]));
    sdl(c.r[6], (c.r[4].w[0] + 15u));
    sdr(c.r[6], (c.r[4].w[0] + 8u));
    sdl(c.r[7], (c.r[4].w[0] + 23u));
    sdr(c.r[7], (c.r[4].w[0] + 16u));
    sdl(c.r[8], (c.r[4].w[0] + 31u));
    sdr(c.r[8], (c.r[4].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE938u | kUnwind; return; } goto L_003AE938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AE9D0; } }
    c.budget -= 1;
L_003AE998:
    set32(c.r[2], c.r[3].w[0] + 256u);
    c.budget -= 1;
L_003AE99C:
    c.r[5].d[0] = ld64((c.r[3].w[0]));
    c.r[6].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[7].d[0] = ld64((c.r[3].w[0] + 16u));
    c.r[8].d[0] = ld64((c.r[3].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[5].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[6].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[7].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE99Cu | kUnwind; return; } goto L_003AE99C; } }
L_003AE9D0:
    ldl(c.r[5], (c.r[3].w[0] + 7u));
    ldr(c.r[5], (c.r[3].w[0]));
    ldl(c.r[6], (c.r[3].w[0] + 15u));
    ldr(c.r[6], (c.r[3].w[0] + 8u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 16u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 17u)));
    sdl(c.r[5], (c.r[4].w[0] + 7u));
    sdr(c.r[5], (c.r[4].w[0]));
    sdl(c.r[6], (c.r[4].w[0] + 15u));
    sdr(c.r[6], (c.r[4].w[0] + 8u));
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[17], c.r[2].w[0] + 10468u);
    st8((c.r[4].w[0] + 17u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_003AEA58; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 10464u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEA28u); set32(c.r[16], c.r[16].w[0] + 10476u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003AEA28u) [[unlikely]] return; }
L_003AEA28:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEA3Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x001477A8u; return; } if (c.pc != 0x003AEA3Cu) [[unlikely]] return; }
L_003AEA3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEA44u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x003AEA44u) [[unlikely]] return; }
L_003AEA44:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 10480u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_003AEA58:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 288u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 296u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 304u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_003AEA70:
    set32(c.r[29], c.r[29].w[0] - 528u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 512u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 448u), c.r[16].d[0]);
    set32(c.r[3], c.r[3].w[0] + 10468u);
    st64((c.r[29].w[0] + 456u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 464u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 472u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 480u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 488u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 496u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 504u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 520u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1000u);  if (t) { goto L_003AEC18; } }
    set32(c.r[6], ld32((c.r[30].w[0] + 288u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], ld32((c.r[30].w[0] + 280u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEAC8u); set32(c.r[16], c.r[16].w[0] + 17496u);  if (depth < kMaxDepth) unit_009B(c, 173u, depth + 1u); else { c.pc = 0x0038E0D0u; return; } if (c.pc != 0x003AEAC8u) [[unlikely]] return; }
L_003AEAC8:
    c.r[17].d[0] = ld64((c.r[30].w[0] + 280u));
    c.r[5].d[0] = ld64((c.r[30].w[0] + 288u));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEADCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 8u, depth + 1u); else { c.pc = 0x0014C1D0u; return; } if (c.pc != 0x003AEADCu) [[unlikely]] return; }
L_003AEADC:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[11].d[0] = c.r[11].d[0] | 65535ull;
    c.r[4].d[0] = ld64((c.r[30].w[0] + 392u));
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = ld64((c.r[30].w[0] + 296u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 416u), c.r[4].d[0]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[30].w[0] + 264u));
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.r[11].d[0] = c.r[10].d[0] & c.r[11].d[0];
    st64((c.r[29].w[0] + 424u), c.r[18].d[0]);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 416u));
    set32(c.r[4], ld32((c.r[30].w[0] + 428u)));
    c.r[23].d[0] = c.r[18].d[0] - c.r[3].d[0];
    st64((c.r[29].w[0] + 432u), c.r[4].d[0]);
    c.r[4].d[0] = ld64((c.r[29].w[0] + 424u));
    set32(c.r[13], ld32((c.r[30].w[0] + 408u)));
    c.r[18].d[0] = c.r[4].d[0] - c.r[3].d[0];
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[14], ld32((c.r[30].w[0] + 420u)));
    set32(c.r[25], ld32((c.r[30].w[0] + 432u)));
    set32(c.r[24], ld32((c.r[30].w[0] + 436u)));
    set32(c.r[15], ld32((c.r[30].w[0] + 416u)));
    set32(c.r[12], ld32((c.r[30].w[0] + 404u)));
    set32(c.r[17], ld32((c.r[30].w[0] + 424u)));
    set32(c.r[16], ld32((c.r[30].w[0] + 412u)));
    set32(c.r[2], ld32((c.r[30].w[0] + 400u)));
    set32(c.r[21], ld32((c.r[30].w[0] + 440u)));
    c.r[20].d[0] = ld32((c.r[30].w[0] + 4u));
    c.r[19].d[0] = ld32((c.r[30].w[0] + 8u));
    st64((c.r[29].w[0] + 24u), c.r[18].d[0]);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 432u));
    st64((c.r[29].w[0] + 88u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[25].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[24].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[15].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[12].d[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 416u));
    st64((c.r[29].w[0] + 16u), c.r[3].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 424u));
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 9816u)));
    st64((c.r[29].w[0] + 8u), c.r[18].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 136u), c.r[17].d[0]);
    set32(c.r[18], c.r[18].w[0] + 10468u);
    st64((c.r[29].w[0] + 120u), c.r[13].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[14].d[0]);
    c.budget -= 60;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEBCCu); st64((c.r[29].w[0] + 144u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0009(c, 188u, depth + 1u); else { c.pc = 0x001471A8u; return; } if (c.pc != 0x003AEBCCu) [[unlikely]] return; }
L_003AEBCC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[17], c.r[2].w[0] + 10476u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEBE4u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x001477A8u; return; } if (c.pc != 0x003AEBE4u) [[unlikely]] return; }
L_003AEBE4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 10464u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1024u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_003AEC18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 10480u)));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003AEC18:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 448u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 456u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 464u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 472u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 480u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 488u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 496u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 504u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 512u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 520u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 528u);  c.pc = t; return; }
L_003AEC48:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEC88u); set32(c.r[16], c.r[17].w[0] + 8520u);  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AEC88u) [[unlikely]] return; }
L_003AEC88:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 402ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_003AECC8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AECC8:
    set32(c.r[18], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_003AED08; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[5].d[0] = c.r[5].d[0] | 1538ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AED08:
    set32(c.r[16], c.r[22].w[0] << 4);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AED2Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 284u, depth + 1u); else { c.pc = 0x003AF0C0u; return; } if (c.pc != 0x003AED2Cu) [[unlikely]] return; }
L_003AED2C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AED40u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 454u, depth + 1u); else { c.pc = 0x0039B688u; return; } if (c.pc != 0x003AED40u) [[unlikely]] return; }
L_003AED40:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003AED70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEDA8u); set32(c.r[16], c.r[17].w[0] + 8520u);  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003AEDA8u) [[unlikely]] return; }
L_003AEDA8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 401ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_003AEDE0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AEDE0:
    set32(c.r[18], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_003AEE20; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[5].d[0] = c.r[5].d[0] | 1538ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AEE20:
    set32(c.r[16], c.r[21].w[0] << 4);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEE44u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 284u, depth + 1u); else { c.pc = 0x003AF0C0u; return; } if (c.pc != 0x003AEE44u) [[unlikely]] return; }
L_003AEE44:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEE58u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 454u, depth + 1u); else { c.pc = 0x0039B688u; return; } if (c.pc != 0x003AEE58u) [[unlikely]] return; }
L_003AEE58:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003AEE80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003AEE88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003AEE90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEEA8u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 266u, depth + 1u); else { c.pc = 0x003AEED8u; return; } if (c.pc != 0x003AEEA8u) [[unlikely]] return; }
L_003AEEA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEEB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 276u, depth + 1u); else { c.pc = 0x003AEFE8u; return; } if (c.pc != 0x003AEEB0u) [[unlikely]] return; }
L_003AEEB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEEBCu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 271u, depth + 1u); else { c.pc = 0x003AEF60u; return; } if (c.pc != 0x003AEEBCu) [[unlikely]] return; }
L_003AEEBC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AEED8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 8u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEEF8u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_00A3(c, 198u, depth + 1u); else { c.pc = 0x003AE148u; return; } if (c.pc != 0x003AEEF8u) [[unlikely]] return; }
L_003AEEF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AEF40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEF08u); set32(c.r[5], ld32((c.r[16].w[0] + 8536u)));  if (depth < kMaxDepth) unit_009F(c, 7u, depth + 1u); else { c.pc = 0x0039C450u; return; } if (c.pc != 0x003AEF08u) [[unlikely]] return; }
L_003AEF08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AEF40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEF18u);  if (depth < kMaxDepth) unit_00A3(c, 270u, depth + 1u); else { c.pc = 0x003AEF58u; return; } if (c.pc != 0x003AEF18u) [[unlikely]] return; }
L_003AEF18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AEF40; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], 0u + 8u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE130u | kUnwind; return; } goto L_003AE130; }
L_003AEF40:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AEF58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003AEF60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 8u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEF80u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_00A3(c, 196u, depth + 1u); else { c.pc = 0x003AE118u; return; } if (c.pc != 0x003AEF80u) [[unlikely]] return; }
L_003AEF80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AEFC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEF90u); set32(c.r[5], ld32((c.r[16].w[0] + 8536u)));  if (depth < kMaxDepth) unit_009F(c, 5u, depth + 1u); else { c.pc = 0x0039C410u; return; } if (c.pc != 0x003AEF90u) [[unlikely]] return; }
L_003AEF90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AEFC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEFA0u);  if (depth < kMaxDepth) unit_00A3(c, 275u, depth + 1u); else { c.pc = 0x003AEFE0u; return; } if (c.pc != 0x003AEFA0u) [[unlikely]] return; }
L_003AEFA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AEFC8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], 0u + 8u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE100u | kUnwind; return; } goto L_003AE100; }
L_003AEFC8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AEFE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003AEFE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003AEFF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[2].w[0] + 13936u);
    set32(c.r[2], c.r[2].w[0] + 8520u);
    st32((c.r[2].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF010u); set32(c.r[6], ld32((c.r[2].w[0] + 16u)));  if (depth < kMaxDepth) unit_00A3(c, 279u, depth + 1u); else { c.pc = 0x003AF020u; return; } if (c.pc != 0x003AF010u) [[unlikely]] return; }
L_003AF010:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AF020:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[5].w[0] + 4u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[5].w[0]), 0u);
    c.budget -= 12;
L_003AF050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF058u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 283u, depth + 1u); else { c.pc = 0x003AF098u; return; } if (c.pc != 0x003AF058u) [[unlikely]] return; }
L_003AF058:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF074u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 454u, depth + 1u); else { c.pc = 0x0039B688u; return; } if (c.pc != 0x003AF074u) [[unlikely]] return; }
L_003AF074:
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF050u | kUnwind; return; } goto L_003AF050; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AF098:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003AF0C0; }
L_003AF0C0:
    st32((c.r[4].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[7].w[0]);  c.pc = t; return; }
L_003AF0D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003AF0E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003AF0E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003AF0F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003AF0F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003AF100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 1537ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AF120:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 1537ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AF140:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 1537ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AF160:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 1537ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AF180:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003AF188:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003AF190:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003AF198:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 5u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF1B4u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003AF1B4u) [[unlikely]] return; }
L_003AF1B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003AF1DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF1C4u);  if (depth < kMaxDepth) unit_00A3(c, 302u, depth + 1u); else { c.pc = 0x003AF1F0u; return; } if (c.pc != 0x003AF1C4u) [[unlikely]] return; }
L_003AF1C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF1CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 314u, depth + 1u); else { c.pc = 0x003AF340u; return; } if (c.pc != 0x003AF1CCu) [[unlikely]] return; }
L_003AF1CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF1D8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 309u, depth + 1u); else { c.pc = 0x003AF2B8u; return; } if (c.pc != 0x003AF1D8u) [[unlikely]] return; }
L_003AF1D8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003AF1DC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AF1F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF210u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_00A3(c, 198u, depth + 1u); else { c.pc = 0x003AE148u; return; } if (c.pc != 0x003AF210u) [[unlikely]] return; }
L_003AF210:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AF258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF220u); set32(c.r[5], ld32((c.r[16].w[0] + 8400u)));  if (depth < kMaxDepth) unit_009F(c, 7u, depth + 1u); else { c.pc = 0x0039C450u; return; } if (c.pc != 0x003AF220u) [[unlikely]] return; }
L_003AF220:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AF258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF230u);  if (depth < kMaxDepth) unit_00A3(c, 306u, depth + 1u); else { c.pc = 0x003AF270u; return; } if (c.pc != 0x003AF230u) [[unlikely]] return; }
L_003AF230:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AF258; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], 0u + 6u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE130u | kUnwind; return; } goto L_003AE130; }
L_003AF258:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AF270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 15u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF288u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003AF288u) [[unlikely]] return; }
L_003AF288:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AF298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AF2A4; } }
L_003AF298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF2A0u);  if (depth < kMaxDepth) unit_00A3(c, 134u, depth + 1u); else { c.pc = 0x003AD878u; return; } if (c.pc != 0x003AF2A0u) [[unlikely]] return; }
L_003AF2A0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003AF2A4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AF2B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF2D8u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_00A3(c, 196u, depth + 1u); else { c.pc = 0x003AE118u; return; } if (c.pc != 0x003AF2D8u) [[unlikely]] return; }
L_003AF2D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AF320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF2E8u); set32(c.r[5], ld32((c.r[16].w[0] + 8400u)));  if (depth < kMaxDepth) unit_009F(c, 5u, depth + 1u); else { c.pc = 0x0039C410u; return; } if (c.pc != 0x003AF2E8u) [[unlikely]] return; }
L_003AF2E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AF320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF2F8u);  if (depth < kMaxDepth) unit_00A3(c, 313u, depth + 1u); else { c.pc = 0x003AF338u; return; } if (c.pc != 0x003AF2F8u) [[unlikely]] return; }
L_003AF2F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AF320; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], 0u + 6u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE100u | kUnwind; return; } goto L_003AE100; }
L_003AF320:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AF338:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003AF340:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003AF348:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003AF350:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003AF358:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003AF360:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003AF368:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003AF370:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003AF378:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 1793ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AF398:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 1793ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003AF3B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] - 3u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003AF3E8; } }
    st32((c.r[5].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AF3F0; } }
L_003AF3E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF3F0u); set32(c.r[5], ld32((c.r[3].w[0] + 8400u)));  if (depth < kMaxDepth) unit_009F(c, 1u, depth + 1u); else { c.pc = 0x0039C320u; return; } if (c.pc != 0x003AF3F0u) [[unlikely]] return; }
L_003AF3F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AF400:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 8400u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C380u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 2u, depth); }
L_003AF428:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003AF430:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 17824u);  c.pc = t; return; }
L_003AF450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[4], c.r[2].w[0] - 17060u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[3], c.r[2].w[0] + 1u);  if (t) { goto L_003AF4C8; } }
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF490u); set32(c.r[16], c.r[16].w[0] - 17080u);  if (depth < kMaxDepth) unit_00A3(c, 327u, depth + 1u); else { c.pc = 0x003AF430u; return; } if (c.pc != 0x003AF490u) [[unlikely]] return; }
L_003AF490:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF4A0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 340u, depth + 1u); else { c.pc = 0x003AF670u; return; } if (c.pc != 0x003AF4A0u) [[unlikely]] return; }
L_003AF4A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 17072u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003AF630; }
L_003AF4C8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AF4E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 17060u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] > 0; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003AF518; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 17072u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003AF620; }
L_003AF518:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AF528:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[4], c.r[22].w[0] - 17072u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[19], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_003AF5C8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003AF580:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003AF5A8; }
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[18], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF59Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 343u, depth + 1u); else { c.pc = 0x003AF6C0u; return; } if (c.pc != 0x003AF59Cu) [[unlikely]] return; }
L_003AF59C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF580u | kUnwind; return; } goto L_003AF580; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003AF5A8:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF5B4u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 339u, depth + 1u); else { c.pc = 0x003AF658u; return; } if (c.pc != 0x003AF5B4u) [[unlikely]] return; }
L_003AF5B4:
    set32(c.r[4], c.r[22].w[0] - 17072u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_003AF5C8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003AF5F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF600u);  if (depth < kMaxDepth) unit_00A3(c, 338u, depth + 1u); else { c.pc = 0x003AF640u; return; } if (c.pc != 0x003AF600u) [[unlikely]] return; }
L_003AF600:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[3], c.r[3].w[0] - 17072u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AF620:
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_003AF630:
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_003AF640:
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_003AF658:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[5].w[0]);  c.pc = t; return; }
L_003AF670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003AF6AC; } }
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_003AF698:
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF6A4u); set32(c.r[16], c.r[16].w[0] - 1u);  if (depth < kMaxDepth) unit_00A3(c, 338u, depth + 1u); else { c.pc = 0x003AF640u; return; } if (c.pc != 0x003AF6A4u) [[unlikely]] return; }
L_003AF6A4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF698u | kUnwind; return; } goto L_003AF698; } }
L_003AF6AC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AF6C0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003AF6D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF6E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 346u, depth + 1u); else { c.pc = 0x003AF718u; return; } if (c.pc != 0x003AF6E4u) [[unlikely]] return; }
L_003AF6E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 107u);  if (t) { goto L_003AF704; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; c.r[3].d[0] = c.r[2].sd[0] < 110ll ? 1ull : 0ull;  if (t) { goto L_003AF700; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AF704; } }
L_003AF700:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003AF704:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AF718:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[2].sd[0] < -1ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AF738; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AF738; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003AF738:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003AF740:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    set32(c.r[19], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st32((c.r[18].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF774u); set32(c.r[17], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_00A3(c, 343u, depth + 1u); else { c.pc = 0x003AF6C0u; return; } if (c.pc != 0x003AF774u) [[unlikely]] return; }
L_003AF774:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[19].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_003AF788; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AF814; } }
    c.budget -= 1;
L_003AF788:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2048ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003AF7A8; } }
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003AF814; } }
    c.budget -= 1;
L_003AF7A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF7B8u); set32(c.r[5], c.r[5].w[0] + 17880u);  if (depth < kMaxDepth) unit_0009(c, 69u, depth + 1u); else { c.pc = 0x00145310u; return; } if (c.pc != 0x003AF7B8u) [[unlikely]] return; }
L_003AF7B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[29].w[0] + 4u);  if (t) { goto L_003AF7D8; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AF814; } }
L_003AF7D8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF7E4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A3(c, 371u, depth + 1u); else { c.pc = 0x003AFB30u; return; } if (c.pc != 0x003AF7E4u) [[unlikely]] return; }
L_003AF7E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0])));  if (t) { goto L_003AF814; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[18].w[0]), c.r[19].w[0]);
    c.budget -= 10;
L_003AF814:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003AF830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] & 255ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st32((c.r[18].w[0]), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF858u); set32(c.r[16], ld32((c.r[4].w[0] + 4u)));  if (depth < kMaxDepth) unit_00A3(c, 344u, depth + 1u); else { c.pc = 0x003AF6D0u; return; } if (c.pc != 0x003AF858u) [[unlikely]] return; }
L_003AF858:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AF884; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF86Cu);  if (depth < kMaxDepth) unit_00A3(c, 360u, depth + 1u); else { c.pc = 0x003AF970u; return; } if (c.pc != 0x003AF86Cu) [[unlikely]] return; }
L_003AF86C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AF880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_003AF884; } }
    c.budget -= 1;
L_003AF880:
    st32((c.r[18].w[0]), 0u);
    c.budget -= 1;
L_003AF884:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AF8A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] & 255ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].sd[0] < 110ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AF958; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF8DCu);  if (depth < kMaxDepth) unit_00A4(c, 82u, depth + 1u); else { c.pc = 0x003B0BF0u; return; } if (c.pc != 0x003AF8DCu) [[unlikely]] return; }
L_003AF8DC:
    set32(c.r[6], 0u + 224u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 192u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AF908; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AF930; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003AF95C; } }
    c.budget -= 1;
L_003AF908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF910u);  if (depth < kMaxDepth) unit_00A4(c, 18u, depth + 1u); else { c.pc = 0x003B02F8u; return; } if (c.pc != 0x003AF910u) [[unlikely]] return; }
L_003AF910:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003AF958; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF928u);  if (depth < kMaxDepth) unit_00A4(c, 78u, depth + 1u); else { c.pc = 0x003B0B70u; return; } if (c.pc != 0x003AF928u) [[unlikely]] return; }
L_003AF928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_003AF954; } }
L_003AF930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF938u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 18u, depth + 1u); else { c.pc = 0x003B02F8u; return; } if (c.pc != 0x003AF938u) [[unlikely]] return; }
L_003AF938:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003AF958; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF950u);  if (depth < kMaxDepth) unit_00A4(c, 80u, depth + 1u); else { c.pc = 0x003B0BB0u; return; } if (c.pc != 0x003AF950u) [[unlikely]] return; }
L_003AF950:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003AF954:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003AF958:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003AF95C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AF970:
    set32(c.r[3], c.r[4].w[0] + 384u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[3].w[0] + 24u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003AF9A0; } }
    c.budget -= 1;
L_003AF988:
    set32(c.r[2], c.r[6].w[0] << 6);
    c.r[3].d[0] = c.r[6].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_003AF9B0; } }
    set32(c.r[3], c.r[2].w[0] + 384u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 24u));
    c.budget -= 2;
L_003AF9A0:
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF988u | kUnwind; return; } goto L_003AF988; }
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_003AF9B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; return; }
L_003AF9B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF9D8u); set32(c.r[17], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_00A3(c, 344u, depth + 1u); else { c.pc = 0x003AF6D0u; return; } if (c.pc != 0x003AF9D8u) [[unlikely]] return; }
L_003AF9D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 13u);  if (t) { goto L_003AFA14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF9F0u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003AF9F0u) [[unlikely]] return; }
L_003AF9F0:
    set32(c.r[2], 0u + 1u);
    ldl(c.r[3], (c.r[17].w[0] + 7u));
    ldr(c.r[3], (c.r[17].w[0]));
    lwl(c.r[4], (c.r[17].w[0] + 11u));
    lwr(c.r[4], (c.r[17].w[0] + 8u));
    sdl(c.r[3], (c.r[16].w[0] + 7u));
    sdr(c.r[3], (c.r[16].w[0]));
    swl(c.r[4], (c.r[16].w[0] + 11u));
    swr(c.r[4], (c.r[16].w[0] + 8u));
    c.budget -= 9;
L_003AFA14:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AFA28:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFA48u); set32(c.r[17], ld32((c.r[4].w[0] + 4u)));  if (depth < kMaxDepth) unit_00A3(c, 344u, depth + 1u); else { c.pc = 0x003AF6D0u; return; } if (c.pc != 0x003AFA48u) [[unlikely]] return; }
L_003AFA48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 13u);  if (t) { goto L_003AFA84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFA60u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003AFA60u) [[unlikely]] return; }
L_003AFA60:
    set32(c.r[2], 0u + 1u);
    ldl(c.r[3], (c.r[17].w[0] + 83u));
    ldr(c.r[3], (c.r[17].w[0] + 76u));
    lwl(c.r[4], (c.r[17].w[0] + 87u));
    lwr(c.r[4], (c.r[17].w[0] + 84u));
    sdl(c.r[3], (c.r[16].w[0] + 7u));
    sdr(c.r[3], (c.r[16].w[0]));
    swl(c.r[4], (c.r[16].w[0] + 11u));
    swr(c.r[4], (c.r[16].w[0] + 8u));
    c.budget -= 9;
L_003AFA84:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AFA98:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFABCu); set32(c.r[17], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_00A3(c, 346u, depth + 1u); else { c.pc = 0x003AF718u; return; } if (c.pc != 0x003AFABCu) [[unlikely]] return; }
L_003AFABC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 33u);  if (t) { goto L_003AFB18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFAD4u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003AFAD4u) [[unlikely]] return; }
L_003AFAD4:
    set32(c.r[2], 0u + 1u);
    ldl(c.r[3], (c.r[17].w[0] + 7u));
    ldr(c.r[3], (c.r[17].w[0]));
    ldl(c.r[4], (c.r[17].w[0] + 15u));
    ldr(c.r[4], (c.r[17].w[0] + 8u));
    ldl(c.r[5], (c.r[17].w[0] + 23u));
    ldr(c.r[5], (c.r[17].w[0] + 16u));
    ldl(c.r[6], (c.r[17].w[0] + 31u));
    ldr(c.r[6], (c.r[17].w[0] + 24u));
    sdl(c.r[3], (c.r[16].w[0] + 7u));
    sdr(c.r[3], (c.r[16].w[0]));
    sdl(c.r[4], (c.r[16].w[0] + 15u));
    sdr(c.r[4], (c.r[16].w[0] + 8u));
    sdl(c.r[5], (c.r[16].w[0] + 23u));
    sdr(c.r[5], (c.r[16].w[0] + 16u));
    sdl(c.r[6], (c.r[16].w[0] + 31u));
    sdr(c.r[6], (c.r[16].w[0] + 24u));
    c.budget -= 17;
L_003AFB18:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AFB30:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[19].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[18].w[0]), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFB68u); set32(c.r[16], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_00A3(c, 368u, depth + 1u); else { c.pc = 0x003AFA98u; return; } if (c.pc != 0x003AFB68u) [[unlikely]] return; }
L_003AFB68:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[29].w[0] + 52u);  if (t) { goto L_003AFBE0; } }
    c.r[19].d[0] = ld8((c.r[16].w[0] + 25u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFB84u); c.r[16].d[0] = ld8((c.r[16].w[0] + 24u));  if (depth < kMaxDepth) unit_00A3(c, 385u, depth + 1u); else { c.pc = 0x003AFE18u; return; } if (c.pc != 0x003AFB84u) [[unlikely]] return; }
L_003AFB84:
    set32(c.r[3], c.r[16].w[0] << 1);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);  if (t) { goto L_003AFBE0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[5], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    if (c.r[3].d[0] != 0ull) { st32((c.r[17].w[0]), c.r[4].w[0]);  goto L_003AFBD8; }
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[19].w[0]);  if (t) { goto L_003AFBDC; } }
L_003AFBD8:
    st32((c.r[18].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_003AFBDC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003AFBE0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003AFC00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFC24u); set32(c.r[17], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_00A3(c, 344u, depth + 1u); else { c.pc = 0x003AF6D0u; return; } if (c.pc != 0x003AFC24u) [[unlikely]] return; }
L_003AFC24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 65u);  if (t) { goto L_003AFCC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFC3Cu);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003AFC3Cu) [[unlikely]] return; }
L_003AFC3C:
    set32(c.r[2], 0u + 1u);
    ldl(c.r[3], (c.r[17].w[0] + 7u));
    ldr(c.r[3], (c.r[17].w[0]));
    ldl(c.r[4], (c.r[17].w[0] + 15u));
    ldr(c.r[4], (c.r[17].w[0] + 8u));
    ldl(c.r[5], (c.r[17].w[0] + 23u));
    ldr(c.r[5], (c.r[17].w[0] + 16u));
    ldl(c.r[6], (c.r[17].w[0] + 31u));
    ldr(c.r[6], (c.r[17].w[0] + 24u));
    sdl(c.r[3], (c.r[16].w[0] + 7u));
    sdr(c.r[3], (c.r[16].w[0]));
    sdl(c.r[4], (c.r[16].w[0] + 15u));
    sdr(c.r[4], (c.r[16].w[0] + 8u));
    sdl(c.r[5], (c.r[16].w[0] + 23u));
    sdr(c.r[5], (c.r[16].w[0] + 16u));
    sdl(c.r[6], (c.r[16].w[0] + 31u));
    sdr(c.r[6], (c.r[16].w[0] + 24u));
    ldl(c.r[3], (c.r[17].w[0] + 39u));
    ldr(c.r[3], (c.r[17].w[0] + 32u));
    ldl(c.r[4], (c.r[17].w[0] + 47u));
    ldr(c.r[4], (c.r[17].w[0] + 40u));
    ldl(c.r[5], (c.r[17].w[0] + 55u));
    ldr(c.r[5], (c.r[17].w[0] + 48u));
    ldl(c.r[6], (c.r[17].w[0] + 63u));
    ldr(c.r[6], (c.r[17].w[0] + 56u));
    sdl(c.r[3], (c.r[16].w[0] + 39u));
    sdr(c.r[3], (c.r[16].w[0] + 32u));
    sdl(c.r[4], (c.r[16].w[0] + 47u));
    sdr(c.r[4], (c.r[16].w[0] + 40u));
    sdl(c.r[5], (c.r[16].w[0] + 55u));
    sdr(c.r[5], (c.r[16].w[0] + 48u));
    sdl(c.r[6], (c.r[16].w[0] + 63u));
    sdr(c.r[6], (c.r[16].w[0] + 56u));
    c.budget -= 33;
L_003AFCC0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AFCD8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFCFCu); set32(c.r[16], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_00A3(c, 344u, depth + 1u); else { c.pc = 0x003AF6D0u; return; } if (c.pc != 0x003AFCFCu) [[unlikely]] return; }
L_003AFCFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003AFD14; }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
L_003AFD14:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AFD28:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFD50u); set32(c.r[16], c.r[3].w[0] + 128u);  if (depth < kMaxDepth) unit_00A3(c, 344u, depth + 1u); else { c.pc = 0x003AF6D0u; return; } if (c.pc != 0x003AFD50u) [[unlikely]] return; }
L_003AFD50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003AFD68; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
L_003AFD68:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AFD78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFD9Cu); set32(c.r[16], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_00A3(c, 344u, depth + 1u); else { c.pc = 0x003AF6D0u; return; } if (c.pc != 0x003AFD9Cu) [[unlikely]] return; }
L_003AFD9C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003AFDB4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
L_003AFDB4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AFDC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFDECu); set32(c.r[16], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_00A3(c, 344u, depth + 1u); else { c.pc = 0x003AF6D0u; return; } if (c.pc != 0x003AFDECu) [[unlikely]] return; }
L_003AFDEC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003AFE04; }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
L_003AFE04:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AFE18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 17912u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFE3Cu); c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 236u, depth + 1u); else { c.pc = 0x00147F20u; return; } if (c.pc != 0x003AFE3Cu) [[unlikely]] return; }
L_003AFE3C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 4u);  if (t) { goto L_003AFE64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFE54u);  if (depth < kMaxDepth) unit_00A3(c, 389u, depth + 1u); else { c.pc = 0x003AFE78u; return; } if (c.pc != 0x003AFE54u) [[unlikely]] return; }
L_003AFE54:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFE60u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A3(c, 389u, depth + 1u); else { c.pc = 0x003AFE78u; return; } if (c.pc != 0x003AFE60u) [[unlikely]] return; }
L_003AFE60:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003AFE64:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AFE78:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003AFEF4; } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st32((c.r[5].w[0]), c.r[6].w[0]);  goto L_003AFEF8; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[5].w[0]), c.r[6].w[0]);  goto L_003AFEF8; }
    set32(c.r[2], c.r[3].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[5].w[0]), c.r[6].w[0]);  goto L_003AFEF8; }
    set32(c.r[8], 0u + 46u);
    set32(c.r[7], 0u + 32u);
    set32(c.r[2], c.r[6].w[0] << 2);
    c.budget -= 3;
L_003AFEB8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[6], c.r[2].w[0] - 48u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[8].d[0]; set32(c.r[2], c.r[3].w[0] - 48u);  if (t) { goto L_003AFEF4; } }
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[7].d[0]) { st32((c.r[5].w[0]), c.r[6].w[0]);  goto L_003AFEF8; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[5].w[0]), c.r[6].w[0]);  goto L_003AFEF8; }
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[6].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFEB8u | kUnwind; return; } goto L_003AFEB8; }
L_003AFEF4:
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.budget -= 1;
L_003AFEF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003AFF00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFF24u); set32(c.r[16], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_00A3(c, 344u, depth + 1u); else { c.pc = 0x003AF6D0u; return; } if (c.pc != 0x003AFF24u) [[unlikely]] return; }
L_003AFF24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003AFF3C; }
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
L_003AFF3C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AFF50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFF74u); set32(c.r[16], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_00A3(c, 344u, depth + 1u); else { c.pc = 0x003AF6D0u; return; } if (c.pc != 0x003AFF74u) [[unlikely]] return; }
L_003AFF74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003AFF8C; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
L_003AFF8C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AFFA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFFC4u); set32(c.r[16], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_00A3(c, 344u, depth + 1u); else { c.pc = 0x003AF6D0u; return; } if (c.pc != 0x003AFFC4u) [[unlikely]] return; }
L_003AFFC4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003AFFDC; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
L_003AFFDC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AFFF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    [[clang::musttail]] return unit_00A4(c, 1u, depth);
}

}
