#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0052[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0,
    0, 12, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0,
    0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0,
    0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0,
    115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0,
    142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147,
    0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 156, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0,
    0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0,
    0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0,
    0, 187, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0,
    0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201,
    0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0,
    0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0,
    0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0,
    0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 241,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0,
    0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271,
    0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0,
    0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0,
    296, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0,
    0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307,
    0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0,
    0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0,
    0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0,
    0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0052(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00268000;
    case 2u: goto L_00268038;
    case 3u: goto L_00268080;
    case 4u: goto L_002680C8;
    case 5u: goto L_00268104;
    case 6u: goto L_00268198;
    case 7u: goto L_002681B0;
    case 8u: goto L_002681E0;
    case 9u: goto L_002681F8;
    case 10u: goto L_00268258;
    case 11u: goto L_0026826C;
    case 12u: goto L_00268284;
    case 13u: goto L_0026828C;
    case 14u: goto L_002682A0;
    case 15u: goto L_002682E0;
    case 16u: goto L_002682EC;
    case 17u: goto L_002682F8;
    case 18u: goto L_00268314;
    case 19u: goto L_00268320;
    case 20u: goto L_00268330;
    case 21u: goto L_00268338;
    case 22u: goto L_00268398;
    case 23u: goto L_002683B4;
    case 24u: goto L_002683BC;
    case 25u: goto L_002683C4;
    case 26u: goto L_002683D4;
    case 27u: goto L_002683EC;
    case 28u: goto L_002683F8;
    case 29u: goto L_00268414;
    case 30u: goto L_00268480;
    case 31u: goto L_00268498;
    case 32u: goto L_002684B0;
    case 33u: goto L_002684CC;
    case 34u: goto L_002684D4;
    case 35u: goto L_002684DC;
    case 36u: goto L_002684F8;
    case 37u: goto L_00268528;
    case 38u: goto L_0026853C;
    case 39u: goto L_00268550;
    case 40u: goto L_002685A0;
    case 41u: goto L_002685BC;
    case 42u: goto L_002685C4;
    case 43u: goto L_002685CC;
    case 44u: goto L_002685EC;
    case 45u: goto L_0026861C;
    case 46u: goto L_00268644;
    case 47u: goto L_002686D8;
    case 48u: goto L_002686F4;
    case 49u: goto L_00268724;
    case 50u: goto L_00268734;
    case 51u: goto L_0026873C;
    case 52u: goto L_00268764;
    case 53u: goto L_00268798;
    case 54u: goto L_002687A0;
    case 55u: goto L_002687D0;
    case 56u: goto L_00268808;
    case 57u: goto L_00268830;
    case 58u: goto L_00268848;
    case 59u: goto L_00268854;
    case 60u: goto L_00268868;
    case 61u: goto L_00268870;
    case 62u: goto L_00268890;
    case 63u: goto L_002688AC;
    case 64u: goto L_002688C0;
    case 65u: goto L_002688D8;
    case 66u: goto L_00268900;
    case 67u: goto L_00268930;
    case 68u: goto L_0026894C;
    case 69u: goto L_00268968;
    case 70u: goto L_0026899C;
    case 71u: goto L_002689B8;
    case 72u: goto L_002689DC;
    case 73u: goto L_00268A10;
    case 74u: goto L_00268A2C;
    case 75u: goto L_00268A44;
    case 76u: goto L_00268A70;
    case 77u: goto L_00268AA4;
    case 78u: goto L_00268ABC;
    case 79u: goto L_00268AD8;
    case 80u: goto L_00268AFC;
    case 81u: goto L_00268B30;
    case 82u: goto L_00268B50;
    case 83u: goto L_00268B80;
    case 84u: goto L_00268C04;
    case 85u: goto L_00268C10;
    case 86u: goto L_00268C70;
    case 87u: goto L_00268C94;
    case 88u: goto L_00268CD8;
    case 89u: goto L_00268D10;
    case 90u: goto L_00268D34;
    case 91u: goto L_00268D74;
    case 92u: goto L_00268DA0;
    case 93u: goto L_00268DEC;
    case 94u: goto L_00268E00;
    case 95u: goto L_00268E80;
    case 96u: goto L_00268F00;
    case 97u: goto L_00268F80;
    case 98u: goto L_00268F90;
    case 99u: goto L_00268FF0;
    case 100u: goto L_00269000;
    case 101u: goto L_00269010;
    case 102u: goto L_0026903C;
    case 103u: goto L_00269048;
    case 104u: goto L_002690BC;
    case 105u: goto L_002690C4;
    case 106u: goto L_002690E4;
    case 107u: goto L_00269234;
    case 108u: goto L_00269244;
    case 109u: goto L_00269270;
    case 110u: goto L_002692A4;
    case 111u: goto L_002692BC;
    case 112u: goto L_002692E0;
    case 113u: goto L_00269368;
    case 114u: goto L_00269378;
    case 115u: goto L_00269380;
    case 116u: goto L_00269390;
    case 117u: goto L_002693B0;
    case 118u: goto L_00269530;
    case 119u: goto L_00269570;
    case 120u: goto L_00269618;
    case 121u: goto L_00269638;
    case 122u: goto L_00269648;
    case 123u: goto L_002696CC;
    case 124u: goto L_002696E0;
    case 125u: goto L_00269734;
    case 126u: goto L_00269798;
    case 127u: goto L_002697A8;
    case 128u: goto L_00269840;
    case 129u: goto L_00269848;
    case 130u: goto L_00269890;
    case 131u: goto L_0026989C;
    case 132u: goto L_002698AC;
    case 133u: goto L_00269908;
    case 134u: goto L_002699B4;
    case 135u: goto L_002699C4;
    case 136u: goto L_00269A4C;
    case 137u: goto L_00269A5C;
    case 138u: goto L_00269AC0;
    case 139u: goto L_00269B20;
    case 140u: goto L_00269B30;
    case 141u: goto L_00269B70;
    case 142u: goto L_00269B80;
    case 143u: goto L_00269BA0;
    case 144u: goto L_00269C10;
    case 145u: goto L_00269C30;
    case 146u: goto L_00269C70;
    case 147u: goto L_00269C7C;
    case 148u: goto L_00269C94;
    case 149u: goto L_00269CB0;
    case 150u: goto L_00269CC0;
    case 151u: goto L_00269CD0;
    case 152u: goto L_00269CF0;
    case 153u: goto L_00269D50;
    case 154u: goto L_00269D60;
    case 155u: goto L_00269D70;
    case 156u: goto L_00269D78;
    case 157u: goto L_00269DA4;
    case 158u: goto L_00269DC0;
    case 159u: goto L_00269E50;
    case 160u: goto L_00269EAC;
    case 161u: goto L_00269EF8;
    case 162u: goto L_00269F18;
    case 163u: goto L_00269F3C;
    case 164u: goto L_00269F90;
    case 165u: goto L_00269F9C;
    case 166u: goto L_00269FB0;
    case 167u: goto L_00269FCC;
    case 168u: goto L_0026A060;
    case 169u: goto L_0026A070;
    case 170u: goto L_0026A09C;
    case 171u: goto L_0026A0BC;
    case 172u: goto L_0026A0C4;
    case 173u: goto L_0026A0F0;
    case 174u: goto L_0026A110;
    case 175u: goto L_0026A150;
    case 176u: goto L_0026A15C;
    case 177u: goto L_0026A174;
    case 178u: goto L_0026A190;
    case 179u: goto L_0026A1A4;
    case 180u: goto L_0026A1AC;
    case 181u: goto L_0026A1C8;
    case 182u: goto L_0026A1E0;
    case 183u: goto L_0026A214;
    case 184u: goto L_0026A230;
    case 185u: goto L_0026A24C;
    case 186u: goto L_0026A268;
    case 187u: goto L_0026A284;
    case 188u: goto L_0026A29C;
    case 189u: goto L_0026A2A4;
    case 190u: goto L_0026A2BC;
    case 191u: goto L_0026A2E4;
    case 192u: goto L_0026A2F8;
    case 193u: goto L_0026A30C;
    case 194u: goto L_0026A340;
    case 195u: goto L_0026A354;
    case 196u: goto L_0026A368;
    case 197u: goto L_0026A380;
    case 198u: goto L_0026A3A4;
    case 199u: goto L_0026A3D0;
    case 200u: goto L_0026A3D8;
    case 201u: goto L_0026A3FC;
    case 202u: goto L_0026A408;
    case 203u: goto L_0026A42C;
    case 204u: goto L_0026A454;
    case 205u: goto L_0026A46C;
    case 206u: goto L_0026A48C;
    case 207u: goto L_0026A4C0;
    case 208u: goto L_0026A4F0;
    case 209u: goto L_0026A518;
    case 210u: goto L_0026A524;
    case 211u: goto L_0026A530;
    case 212u: goto L_0026A53C;
    case 213u: goto L_0026A548;
    case 214u: goto L_0026A560;
    case 215u: goto L_0026A56C;
    case 216u: goto L_0026A584;
    case 217u: goto L_0026A590;
    case 218u: goto L_0026A5B0;
    case 219u: goto L_0026A5D8;
    case 220u: goto L_0026A5FC;
    case 221u: goto L_0026A640;
    case 222u: goto L_0026A664;
    case 223u: goto L_0026A68C;
    case 224u: goto L_0026A694;
    case 225u: goto L_0026A6C4;
    case 226u: goto L_0026A6E4;
    case 227u: goto L_0026A730;
    case 228u: goto L_0026A744;
    case 229u: goto L_0026A750;
    case 230u: goto L_0026A75C;
    case 231u: goto L_0026A770;
    case 232u: goto L_0026A794;
    case 233u: goto L_0026A7A8;
    case 234u: goto L_0026A7D0;
    case 235u: goto L_0026A864;
    case 236u: goto L_0026A86C;
    case 237u: goto L_0026A890;
    case 238u: goto L_0026A8CC;
    case 239u: goto L_0026A8E0;
    case 240u: goto L_0026A8F0;
    case 241u: goto L_0026A8FC;
    case 242u: goto L_0026A910;
    case 243u: goto L_0026A934;
    case 244u: goto L_0026A948;
    case 245u: goto L_0026A970;
    case 246u: goto L_0026AA08;
    case 247u: goto L_0026AA10;
    case 248u: goto L_0026AA34;
    case 249u: goto L_0026AA70;
    case 250u: goto L_0026AA88;
    case 251u: goto L_0026AA94;
    case 252u: goto L_0026AAA8;
    case 253u: goto L_0026AACC;
    case 254u: goto L_0026AAE0;
    case 255u: goto L_0026AB34;
    case 256u: goto L_0026AB94;
    case 257u: goto L_0026ABBC;
    case 258u: goto L_0026AC7C;
    case 259u: goto L_0026ACD0;
    case 260u: goto L_0026AD1C;
    case 261u: goto L_0026AD3C;
    case 262u: goto L_0026AD60;
    case 263u: goto L_0026ADC4;
    case 264u: goto L_0026AE18;
    case 265u: goto L_0026AE64;
    case 266u: goto L_0026AE84;
    case 267u: goto L_0026AEA8;
    case 268u: goto L_0026AF08;
    case 269u: goto L_0026AF30;
    case 270u: goto L_0026AF68;
    case 271u: goto L_0026AF7C;
    case 272u: goto L_0026AFA0;
    case 273u: goto L_0026AFDC;
    case 274u: goto L_0026AFE4;
    case 275u: goto L_0026B038;
    case 276u: goto L_0026B098;
    case 277u: goto L_0026B0C4;
    case 278u: goto L_0026B118;
    case 279u: goto L_0026B13C;
    case 280u: goto L_0026B190;
    case 281u: goto L_0026B1F0;
    case 282u: goto L_0026B21C;
    case 283u: goto L_0026B270;
    case 284u: goto L_0026B28C;
    case 285u: goto L_0026B320;
    case 286u: goto L_0026B380;
    case 287u: goto L_0026B3AC;
    case 288u: goto L_0026B420;
    case 289u: goto L_0026B434;
    case 290u: goto L_0026B43C;
    case 291u: goto L_0026B464;
    case 292u: goto L_0026B478;
    case 293u: goto L_0026B4D4;
    case 294u: goto L_0026B4DC;
    case 295u: goto L_0026B4E8;
    case 296u: goto L_0026B500;
    case 297u: goto L_0026B508;
    case 298u: goto L_0026B524;
    case 299u: goto L_0026B53C;
    case 300u: goto L_0026B558;
    case 301u: goto L_0026B574;
    case 302u: goto L_0026B598;
    case 303u: goto L_0026B5A4;
    case 304u: goto L_0026B5BC;
    case 305u: goto L_0026B5CC;
    case 306u: goto L_0026B608;
    case 307u: goto L_0026B67C;
    case 308u: goto L_0026B688;
    case 309u: goto L_0026B694;
    case 310u: goto L_0026B6AC;
    case 311u: goto L_0026B6F0;
    case 312u: goto L_0026B768;
    case 313u: goto L_0026B78C;
    case 314u: goto L_0026B79C;
    case 315u: goto L_0026B7A8;
    case 316u: goto L_0026B7EC;
    case 317u: goto L_0026B7F8;
    case 318u: goto L_0026B850;
    case 319u: goto L_0026B880;
    case 320u: goto L_0026B8C0;
    case 321u: goto L_0026B8E0;
    case 322u: goto L_0026B940;
    case 323u: goto L_0026B984;
    case 324u: goto L_0026B994;
    case 325u: goto L_0026B9BC;
    case 326u: goto L_0026B9CC;
    case 327u: goto L_0026B9D8;
    case 328u: goto L_0026BA1C;
    case 329u: goto L_0026BA28;
    case 330u: goto L_0026BA50;
    case 331u: goto L_0026BA6C;
    case 332u: goto L_0026BA8C;
    case 333u: goto L_0026BAA8;
    case 334u: goto L_0026BAC0;
    case 335u: goto L_0026BAD0;
    case 336u: goto L_0026BAD8;
    case 337u: goto L_0026BAF0;
    case 338u: goto L_0026BB18;
    case 339u: goto L_0026BB34;
    case 340u: goto L_0026BB44;
    case 341u: goto L_0026BB50;
    case 342u: goto L_0026BB94;
    case 343u: goto L_0026BBA4;
    case 344u: goto L_0026BBB0;
    case 345u: goto L_0026BC3C;
    case 346u: goto L_0026BCA0;
    case 347u: goto L_0026BD04;
    case 348u: goto L_0026BD1C;
    case 349u: goto L_0026BD64;
    case 350u: goto L_0026BD74;
    case 351u: goto L_0026BD90;
    case 352u: goto L_0026BDA4;
    case 353u: goto L_0026BDC0;
    case 354u: goto L_0026BDE8;
    case 355u: goto L_0026BDF0;
    case 356u: goto L_0026BE20;
    case 357u: goto L_0026BE34;
    case 358u: goto L_0026BE50;
    case 359u: goto L_0026BE74;
    case 360u: goto L_0026BEA4;
    case 361u: goto L_0026BEBC;
    case 362u: goto L_0026BF04;
    case 363u: goto L_0026BF60;
    case 364u: goto L_0026BF78;
    case 365u: goto L_0026BFE0;
    default: bad_entry(c, 0x00268000u); return;
    }
L_00268000:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.f[2] = ld32((c.r[4].w[0] + 80u));  goto L_00268024; }
    c.f[2] = 0u;
    c.budget -= 1;
L_00268024:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[28].w[0] - 32688u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268038u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x00268038u) [[unlikely]] return; }
L_00268038:
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { c.f[2] = ld32((c.r[4].w[0] + 80u));  goto L_0026806C; }
    c.f[2] = 0u;
    c.budget -= 1;
L_0026806C:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[28].w[0] - 32688u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268080u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x00268080u) [[unlikely]] return; }
L_00268080:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { c.f[2] = ld32((c.r[4].w[0] + 80u));  goto L_002680B4; }
    c.f[2] = 0u;
    c.budget -= 1;
L_002680B4:
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[28].w[0] - 32688u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002680C8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002680C8u) [[unlikely]] return; }
L_002680C8:
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 152u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 144u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002680EC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002680EC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { st32((c.r[17].w[0] + 136u), c.r[3].w[0]);  goto L_00268100; }
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st32((c.r[17].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 3;
L_00268100:
    c.f[4] = ld32((c.r[17].w[0] + 116u));
    c.budget -= 1;
L_00268104:
    c.f[3] = 0u;
    fpu_compare(c, fp::key(c.f[3]) == fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00268194; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[3] = ld32((c.r[5].w[0] + 80u));  goto L_0026813C; }
L_0026813C:
    c.f[2] = ld32((c.r[17].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = 0u;
    c.f[0] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 112u), c.f[2]);  if (t) { goto L_0026816C; } }
    st32((c.r[17].w[0] + 112u), c.f[0]);
    st32((c.r[17].w[0] + 116u), c.f[1]);
    c.budget -= 2;
L_0026816C:
    c.f[3] = ld32((c.r[17].w[0] + 120u));
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.f[1] = ld32((c.r[17].w[0] + 124u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[3]);
    c.f[2] = ld32((c.r[17].w[0] + 112u));
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 10;
L_00268194:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00268198:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002681B0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], 0u + 124u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002681E0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002681E0u) [[unlikely]] return; }
L_002681E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 72u)));  goto L_002681FC; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002681F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 56u, depth + 1u); else { c.pc = 0x00208610u; return; } if (c.pc != 0x002681F8u) [[unlikely]] return; }
L_002681F8:
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 1;
L_002681FC:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0026878C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0026822C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[3].w[0])));  goto L_0026822C; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026822C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 92u)));  goto L_002682B0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], 0u - 16u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[18].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268258u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x00268258u) [[unlikely]] return; }
L_00268258:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_00268274; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026826Cu); set32(c.r[4], c.r[4].w[0] - 6576u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0026826Cu) [[unlikely]] return; }
L_0026826C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026878C; } }
L_00268274:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268284u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00268284u) [[unlikely]] return; }
L_00268284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026828Cu); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x0026828Cu) [[unlikely]] return; }
L_0026828C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 96u), c.r[2].w[0]);  goto L_002682A4; }
    set32(c.r[5], ld32((c.r[20].w[0] + 108u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002682A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 44u, depth + 1u); else { c.pc = 0x003C4650u; return; } if (c.pc != 0x002682A0u) [[unlikely]] return; }
L_002682A0:
    st32((c.r[20].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 1;
L_002682A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026878C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 1;
L_002682B0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002682CC; }
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_002682CC; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002682CC:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 96u)));  goto L_002682E4; }
    set32(c.r[4], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002682E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 108u, depth + 1u); else { c.pc = 0x003C5140u; return; } if (c.pc != 0x002682E0u) [[unlikely]] return; }
L_002682E0:
    set32(c.r[4], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 1;
L_002682E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002682ECu);  if (depth < kMaxDepth) unit_00A9(c, 98u, depth + 1u); else { c.pc = 0x003C4F10u; return; } if (c.pc != 0x002682ECu) [[unlikely]] return; }
L_002682EC:
    st32((c.r[20].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002682F8u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002682F8u) [[unlikely]] return; }
L_002682F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_0026878C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 92u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268314u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00268314u) [[unlikely]] return; }
L_00268314:
    set32(c.r[2], ld32((c.r[20].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268320u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00268320u) [[unlikely]] return; }
L_00268320:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_0026878C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0026834C; } }
L_00268330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268338u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 131u, depth + 1u); else { c.pc = 0x003C5540u; return; } if (c.pc != 0x00268338u) [[unlikely]] return; }
L_00268338:
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_0026834C:
    set32(c.r[2], ld32((c.r[20].w[0] + 92u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00268330u | kUnwind; return; } goto L_00268330; }
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_0026837C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[19], ld32((c.r[3].w[0] + 8u)));  goto L_0026837C; }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026837C:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 92u)));  goto L_00268438; }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 212u), c.r[2].w[0]);  if (t) { goto L_00268434; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268398u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00268398u) [[unlikely]] return; }
L_00268398:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 216u), c.r[2].w[0]);  if (t) { goto L_0026878C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 212u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002683B4u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002683B4u) [[unlikely]] return; }
L_002683B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00268424; } }
L_002683BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002683C4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x002683C4u) [[unlikely]] return; }
L_002683C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00268424; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002683D4u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002683D4u) [[unlikely]] return; }
L_002683D4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 216u)));  goto L_00268400; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002683ECu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x002683ECu) [[unlikely]] return; }
L_002683EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002683F8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 248u, depth + 1u); else { c.pc = 0x00166140u; return; } if (c.pc != 0x002683F8u) [[unlikely]] return; }
L_002683F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 216u)));
    c.budget -= 2;
L_00268400:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 216u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_00268414:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026878C; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00268424:
    set32(c.r[2], ld32((c.r[20].w[0] + 212u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002683BCu | kUnwind; return; } goto L_002683BC; }
L_00268434:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 1;
L_00268438:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00268454; }
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[3].w[0] + 12u)));  goto L_00268454; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00268454:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 92u)));  goto L_00268568; }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], 0u - 16u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[18].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268480u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x00268480u) [[unlikely]] return; }
L_00268480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 232u), c.r[2].w[0]);  if (t) { goto L_0026878C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268498u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00268498u) [[unlikely]] return; }
L_00268498:
    set32(c.r[2], ld32((c.r[20].w[0] + 232u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 224u), c.r[2].w[0]);  if (t) { goto L_00268564; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002684B0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002684B0u) [[unlikely]] return; }
L_002684B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 228u), c.r[2].w[0]);  if (t) { goto L_0026878C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002684CCu); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002684CCu) [[unlikely]] return; }
L_002684CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00268554; } }
L_002684D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002684DCu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002684DCu) [[unlikely]] return; }
L_002684DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 228u)));  goto L_002684FC; }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002684F0; } }
    set32(c.r[5], c.r[20].w[0] + 52u);
    c.budget -= 1;
L_002684F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002684F8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 251u, depth + 1u); else { c.pc = 0x002EEC10u; return; } if (c.pc != 0x002684F8u) [[unlikely]] return; }
L_002684F8:
    set32(c.r[3], ld32((c.r[20].w[0] + 228u)));
    c.budget -= 1;
L_002684FC:
    set32(c.r[16], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 228u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026878C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 232u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268528u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x00268528u) [[unlikely]] return; }
L_00268528:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00268554; }
    set32(c.r[4], ld32((c.r[20].w[0] + 232u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026853Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0026853Cu) [[unlikely]] return; }
L_0026853C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 228u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268550u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0073(c, 259u, depth + 1u); else { c.pc = 0x002EECE0u; return; } if (c.pc != 0x00268550u) [[unlikely]] return; }
L_00268550:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00268554:
    set32(c.r[2], ld32((c.r[20].w[0] + 224u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002684D4u | kUnwind; return; } goto L_002684D4; } }
L_00268564:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 1;
L_00268568:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_00268584; }
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[19], ld32((c.r[3].w[0] + 16u)));  goto L_00268584; }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00268584:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0026870C; }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 240u), c.r[2].w[0]);  if (t) { goto L_00268708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002685A0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002685A0u) [[unlikely]] return; }
L_002685A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 244u), c.r[2].w[0]);  if (t) { goto L_0026878C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 240u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002685BCu); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002685BCu) [[unlikely]] return; }
L_002685BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002686F8; } }
L_002685C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002685CCu); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002685CCu) [[unlikely]] return; }
L_002685CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 244u)));  goto L_002685F0; }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002685E0; } }
    set32(c.r[6], c.r[20].w[0] + 52u);
    c.budget -= 1;
L_002685E0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002685ECu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 291u, depth + 1u); else { c.pc = 0x002EF1E0u; return; } if (c.pc != 0x002685ECu) [[unlikely]] return; }
L_002685EC:
    set32(c.r[3], ld32((c.r[20].w[0] + 244u)));
    c.budget -= 1;
L_002685F0:
    set32(c.r[16], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 244u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026878C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026861Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0026861Cu) [[unlikely]] return; }
L_0026861C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002686F8; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[17], 0u - 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002686B8; } }
L_00268644:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00268668; }
    set32(c.r[7], c.r[6].w[0] << 3);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[7], c.r[7].w[0] - c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.budget -= 7;
L_00268668:
    set32(c.r[7], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[8], c.r[6].w[0] + 176u);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] + 176u);
    set32(c.r[8], ld32((c.r[8].w[0])));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    c.r[8].d[0] = c.r[8].d[0] & 15ull;
    c.r[7].d[0] = c.r[7].d[0] & 15ull;
    c.budget -= 13;
    if (c.r[7].d[0] != c.r[8].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_002686B8; }
    set32(c.r[7], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[18].d[0];  if (t) { goto L_002686B4; } }
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002686C4; } }
L_002686B4:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_002686B8:
    c.r[2].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 80u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00268644u | kUnwind; return; } goto L_00268644; }
L_002686C4:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_002686F4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002686D8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x002686D8u) [[unlikely]] return; }
L_002686D8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[21].w[0] + 424u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 244u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002686F4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 308u, depth + 1u); else { c.pc = 0x002EF440u; return; } if (c.pc != 0x002686F4u) [[unlikely]] return; }
L_002686F4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002686F8:
    set32(c.r[2], ld32((c.r[20].w[0] + 240u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002685C4u | kUnwind; return; } goto L_002685C4; } }
L_00268708:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_0026870C:
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 128u), c.r[2].w[0]);  if (t) { goto L_00268778; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268724u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00268724u) [[unlikely]] return; }
L_00268724:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 132u), c.r[2].w[0]);  if (t) { goto L_0026878C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00268768; } }
L_00268734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026873Cu); set32(c.r[17], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0026873Cu) [[unlikely]] return; }
L_0026873C:
    set32(c.r[3], ld32((c.r[20].w[0] + 132u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 132u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026878C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268764u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00268764u) [[unlikely]] return; }
L_00268764:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00268768:
    set32(c.r[2], ld32((c.r[20].w[0] + 128u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00268734u | kUnwind; return; } goto L_00268734; }
L_00268778:
    st32((c.r[20].w[0] + 152u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[20].w[0] + 148u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 144u), 0u);  if (t) { goto L_002687A4; } }
L_0026878C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268798u); set32(c.r[4], c.r[4].w[0] - 6528u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00268798u) [[unlikely]] return; }
L_00268798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002687A0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 62u, depth + 1u); else { c.pc = 0x00268890u; return; } if (c.pc != 0x002687A0u) [[unlikely]] return; }
L_002687A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002687A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002687D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026885C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026885C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268808u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 61u, depth + 1u); else { c.pc = 0x00208770u; return; } if (c.pc != 0x00268808u) [[unlikely]] return; }
L_00268808:
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00268824; }
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0])));  goto L_00268824; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00268824:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268830u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 108u, depth + 1u); else { c.pc = 0x003C5140u; return; } if (c.pc != 0x00268830u) [[unlikely]] return; }
L_00268830:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268848u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0070(c, 245u, depth + 1u); else { c.pc = 0x002E25B0u; return; } if (c.pc != 0x00268848u) [[unlikely]] return; }
L_00268848:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268854u); set32(c.r[4], c.r[4].w[0] - 6464u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00268854u) [[unlikely]] return; }
L_00268854:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00268874; } }
L_0026885C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268868u); set32(c.r[4], c.r[4].w[0] - 6416u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00268868u) [[unlikely]] return; }
L_00268868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268870u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 62u, depth + 1u); else { c.pc = 0x00268890u; return; } if (c.pc != 0x00268870u) [[unlikely]] return; }
L_00268870:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00268874:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00268890:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002688ACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0070(c, 241u, depth + 1u); else { c.pc = 0x002E2500u; return; } if (c.pc != 0x002688ACu) [[unlikely]] return; }
L_002688AC:
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  goto L_002688C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002688C0u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x002688C0u) [[unlikely]] return; }
L_002688C0:
    st32((c.r[17].w[0] + 84u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 2;
L_002688C8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 96u)));  goto L_002688E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002688D8u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x002688D8u) [[unlikely]] return; }
L_002688D8:
    st32((c.r[17].w[0] + 88u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 2;
L_002688E0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 92u), 0u);  goto L_00268908; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 96u), 0u);  goto L_00268904; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00268900u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00268900u) [[unlikely]] return; }
L_00268900:
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 1;
L_00268904:
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 1;
L_00268908:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 132u)));  goto L_0026893C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 72u)));  goto L_00268934; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00268930u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00268930u) [[unlikely]] return; }
L_00268930:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 1;
L_00268934:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 2;
L_0026893C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[17].w[0] + 128u), 0u);  goto L_002689A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00268978; } }
L_0026894C:
    set32(c.r[18], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00268978; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268968u);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00268968u) [[unlikely]] return; }
L_00268968:
    set32(c.r[3], ld32((c.r[17].w[0] + 132u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 4;
L_00268978:
    set32(c.r[3], ld32((c.r[17].w[0] + 128u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 132u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026894Cu | kUnwind; return; } goto L_0026894C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002689A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026899Cu);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0026899Cu) [[unlikely]] return; }
L_0026899C:
    st32((c.r[17].w[0] + 132u), 0u);
    c.budget -= 1;
L_002689A0:
    st32((c.r[17].w[0] + 128u), 0u);
    c.budget -= 1;
L_002689A4:
    set32(c.r[3], ld32((c.r[17].w[0] + 216u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[17].w[0] + 212u), 0u);  goto L_00268A18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002689EC; } }
L_002689B8:
    set32(c.r[18], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002689EC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002689DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002689DCu) [[unlikely]] return; }
L_002689DC:
    set32(c.r[3], ld32((c.r[17].w[0] + 216u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 4;
L_002689EC:
    set32(c.r[3], ld32((c.r[17].w[0] + 212u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 216u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002689B8u | kUnwind; return; } goto L_002689B8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00268A14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268A10u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00268A10u) [[unlikely]] return; }
L_00268A10:
    st32((c.r[17].w[0] + 216u), 0u);
    c.budget -= 1;
L_00268A14:
    st32((c.r[17].w[0] + 212u), 0u);
    c.budget -= 1;
L_00268A18:
    set32(c.r[4], ld32((c.r[17].w[0] + 220u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 228u)));  goto L_00268A34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268A2Cu);  if (depth < kMaxDepth) unit_0073(c, 280u, depth + 1u); else { c.pc = 0x002EF010u; return; } if (c.pc != 0x00268A2Cu) [[unlikely]] return; }
L_00268A2C:
    st32((c.r[17].w[0] + 220u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 228u)));
    c.budget -= 2;
L_00268A34:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 232u)));  goto L_00268AAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00268A80; } }
L_00268A44:
    set32(c.r[18], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00268A80; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 228u)));  goto L_00268A74; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00268A70u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00268A70u) [[unlikely]] return; }
L_00268A70:
    set32(c.r[3], ld32((c.r[17].w[0] + 228u)));
    c.budget -= 1;
L_00268A74:
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_00268A80:
    set32(c.r[3], ld32((c.r[17].w[0] + 224u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 228u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00268A44u | kUnwind; return; } goto L_00268A44; }
    set32(c.r[4], ld32((c.r[17].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00268AA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268AA4u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00268AA4u) [[unlikely]] return; }
L_00268AA4:
    st32((c.r[17].w[0] + 228u), 0u);
    c.budget -= 1;
L_00268AA8:
    set32(c.r[4], ld32((c.r[17].w[0] + 232u)));
    c.budget -= 1;
L_00268AAC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 224u), 0u);  goto L_00268AC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268ABCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00268ABCu) [[unlikely]] return; }
L_00268ABC:
    st32((c.r[17].w[0] + 232u), 0u);
    st32((c.r[17].w[0] + 224u), 0u);
    c.budget -= 2;
L_00268AC4:
    set32(c.r[3], ld32((c.r[17].w[0] + 244u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[17].w[0] + 236u), 0u);  goto L_00268B38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00268B0C; } }
L_00268AD8:
    set32(c.r[18], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00268B0C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00268AFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00268AFCu) [[unlikely]] return; }
L_00268AFC:
    set32(c.r[3], ld32((c.r[17].w[0] + 244u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 4;
L_00268B0C:
    set32(c.r[3], ld32((c.r[17].w[0] + 240u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 244u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00268AD8u | kUnwind; return; } goto L_00268AD8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 244u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00268B34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268B30u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00268B30u) [[unlikely]] return; }
L_00268B30:
    st32((c.r[17].w[0] + 244u), 0u);
    c.budget -= 1;
L_00268B34:
    st32((c.r[17].w[0] + 236u), 0u);
    c.budget -= 1;
L_00268B38:
    st32((c.r[17].w[0] + 240u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_00268B58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268B50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00268B50u) [[unlikely]] return; }
L_00268B50:
    st32((c.r[17].w[0] + 108u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 2;
L_00268B58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00268B80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[8], ld32((c.r[28].w[0] - 30280u)));  goto L_00268BA0; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[3].w[0] + 516u), c.r[5].w[0]);
    set32(c.r[8], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
L_00268BA0:
    c.budget -= 2;
    if (c.r[8].d[0] != 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  goto L_00268BEC; }
    set32(c.r[7], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[3], ld32((c.r[7].w[0] + 8u)));  if (t) { goto L_00268BE8; } }
    set32(c.r[6], c.r[3].w[0] + 176u);
    c.r[3].d[0] = c.r[5].d[0] & 15ull;
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0])));
    set32(c.r[5], 0u - 241u);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.budget -= 10;
    { const bool t = c.r[8].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];  if (t) { goto L_00268BE8; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_00268BE8; } }
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_00268BE8:
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_00268BEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00268C08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268C04u);  if (depth < kMaxDepth) unit_0070(c, 245u, depth + 1u); else { c.pc = 0x002E25B0u; return; } if (c.pc != 0x00268C04u) [[unlikely]] return; }
L_00268C04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00268C08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00268C10:
    c.f[0] = ld32((c.r[28].w[0] - 32692u));
    fpu_compare(c, fp::key(c.f[13]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_00268C40; }
    st32((c.r[4].w[0] + 120u), c.f[12]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 124u), c.f[12]);
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 116u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[12]);  if (t) { goto L_00268C64; } }
L_00268C40:
    set32(c.r[5], ld32((c.r[4].w[0] + 72u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[13]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 120u), c.f[1]);
    st32((c.r[4].w[0] + 124u), c.f[12]);
    st32((c.r[4].w[0] + 112u), 0u);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.budget -= 9;
L_00268C64:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00268C70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00268CDC; } }
L_00268C94:
    set32(c.r[6], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00268CDC; }
    set32(c.r[5], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[3].w[0] + 516u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00268CD8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00268CD8u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00268CD8u) [[unlikely]] return; }
L_00268CD8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00268CDC:
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00268C94u | kUnwind; return; } goto L_00268C94; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00268D10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00268D78; } }
L_00268D34:
    set32(c.r[6], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00268D78; }
    set32(c.r[5], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[3].w[0] + 516u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00268D74; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D74u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00268D74u) [[unlikely]] return; }
L_00268D74:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00268D78:
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00268D34u | kUnwind; return; } goto L_00268D34; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00268DA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00268DF0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0] + 4u)));  goto L_00268DDC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00268DF0; } }
L_00268DDC:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00268DECu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00268DECu) [[unlikely]] return; }
L_00268DEC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00268DF0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00268E00:
    set32(c.r[6], ld32((c.r[4].w[0] + 216u)));
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00268E14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00268E78; } }
L_00268E14:
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00268E3C; }
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_00268E3C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 412u)));  goto L_00268E4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00268E78; } }
L_00268E4C:
    c.budget -= 2;
    if (c.r[3].sd[0] < 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_00268E78; }
    set32(c.r[2], ld32((c.r[4].w[0] + 212u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] << 2);  goto L_00268E70; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00268E78; } }
L_00268E70:
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_00268E78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00268E80:
    set32(c.r[6], ld32((c.r[4].w[0] + 228u)));
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00268E94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00268EF8; } }
L_00268E94:
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00268EBC; }
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_00268EBC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 416u)));  goto L_00268ECC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00268EF8; } }
L_00268ECC:
    c.budget -= 2;
    if (c.r[3].sd[0] < 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_00268EF8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 224u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] << 2);  goto L_00268EF0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00268EF8; } }
L_00268EF0:
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_00268EF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00268F00:
    set32(c.r[6], ld32((c.r[4].w[0] + 244u)));
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00268F14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00268F78; } }
L_00268F14:
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00268F3C; }
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_00268F3C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 420u)));  goto L_00268F4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00268F78; } }
L_00268F4C:
    c.budget -= 2;
    if (c.r[3].sd[0] < 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_00268F78; }
    set32(c.r[2], ld32((c.r[4].w[0] + 240u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] << 2);  goto L_00268F70; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00268F78; } }
L_00268F70:
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_00268F78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00268F80:
    set32(c.r[9], ld32((c.r[4].w[0] + 92u)));
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 9u);  if (t) { goto L_00268FD8; } }
L_00268F90:
    set32(c.r[8], c.r[10].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 6;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[10], c.r[10].w[0] + 1u);  goto L_00268FD8; }
    set32(c.r[2], c.r[7].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00268FD4; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 84u)));  goto L_00268FC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - 1u);  if (t) { goto L_00268FD4; } }
L_00268FC8:
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_00268FE8; } }
L_00268FD4:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 1;
L_00268FD8:
    c.r[2].d[0] = c.r[10].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 88u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00268F90u | kUnwind; return; } goto L_00268F90; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00268FE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00268FF0:
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00269000:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 104u), c.r[3].w[0]);  c.pc = t; return; }
L_00269010:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026903Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0026903Cu) [[unlikely]] return; }
L_0026903C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269048u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x00269048u) [[unlikely]] return; }
L_00269048:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 21360u);
    set32(c.r[3], c.r[3].w[0] + 21416u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 20563ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[28].w[0] - 30400u), c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 13696u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    st64((c.r[16].w[0] + 144u), 0ull);
    st64((c.r[16].w[0] + 152u), 0ull);
    st64((c.r[16].w[0] + 160u), 0ull);
    st64((c.r[16].w[0] + 168u), 0ull);
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002690BCu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002690BCu) [[unlikely]] return; }
L_002690BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002690C4u); set32(c.r[4], 0u + 872u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002690C4u) [[unlikely]] return; }
L_002690C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 76u), c.r[2].w[0]);  goto L_002690E8; }
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002690E4u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 424u, depth + 1u); else { c.pc = 0x001B6BF0u; return; } if (c.pc != 0x002690E4u) [[unlikely]] return; }
L_002690E4:
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 1;
L_002690E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);  goto L_0026923C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] - 6352u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] - 6350u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] - 6346u)));
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st16((c.r[2].w[0] + 152u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] - 6348u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st16((c.r[2].w[0] + 154u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[9].d[0] = ld64((c.r[4].w[0] - 6344u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st16((c.r[2].w[0] + 156u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[8].d[0] = ld64((c.r[3].w[0] - 6336u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st16((c.r[2].w[0] + 158u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[2].w[0] + 160u), c.r[9].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[2].w[0] + 168u), c.r[8].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[25].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] - 6328u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[21], ld32((c.r[16].w[0] + 76u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[24].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] - 6326u)));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] - 6322u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[15].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] - 6324u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st16((c.r[21].w[0] + 112u), static_cast<std::uint16_t>(c.r[25].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[13].d[0] = ld64((c.r[5].w[0] - 6320u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st16((c.r[21].w[0] + 114u), static_cast<std::uint16_t>(c.r[24].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[12].d[0] = ld64((c.r[3].w[0] - 6312u));
    st16((c.r[21].w[0] + 116u), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st16((c.r[21].w[0] + 118u), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] - 6304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[21].w[0] + 120u), c.r[13].d[0]);
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] - 6302u)));
    st64((c.r[21].w[0] + 128u), c.r[12].d[0]);
    set32(c.r[12], ld32((c.r[16].w[0] + 76u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] - 6300u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] - 6298u)));
    st16((c.r[12].w[0] + 232u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[7].d[0] = ld64((c.r[2].w[0] - 6296u));
    st16((c.r[12].w[0] + 234u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[6].d[0] = ld64((c.r[4].w[0] - 6288u));
    st16((c.r[12].w[0] + 236u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st16((c.r[12].w[0] + 238u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st64((c.r[12].w[0] + 240u), c.r[7].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[12].w[0] + 248u), c.r[6].d[0]);
    set32(c.r[4], c.r[4].w[0] - 6256u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] - 6280u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] - 6278u)));
    c.r[20].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] - 6276u)));
    st16((c.r[6].w[0] + 192u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[6].w[0] + 194u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] - 6274u)));
    st16((c.r[6].w[0] + 196u), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.r[18].d[0] = ld64((c.r[18].w[0] - 6272u));
    st16((c.r[6].w[0] + 198u), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[17].d[0] = ld64((c.r[17].w[0] - 6264u));
    st64((c.r[6].w[0] + 200u), c.r[18].d[0]);
    st64((c.r[6].w[0] + 208u), c.r[17].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 81;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269234u); st32((c.r[3].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00269234u) [[unlikely]] return; }
L_00269234:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00269248; } }
L_0026923C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269244u); set32(c.r[4], c.r[4].w[0] - 6224u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00269244u) [[unlikely]] return; }
L_00269244:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00269248:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00269270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002692A8; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 76u), 0u);  goto L_002692A8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002692A4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002692A4u) [[unlikely]] return; }
L_002692A4:
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 1;
L_002692A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 72u), 0u);
    set32(c.r[4], c.r[4].w[0] - 6176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002692BCu); st32((c.r[28].w[0] - 30400u), 0u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002692BCu) [[unlikely]] return; }
L_002692BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002692E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 72u));
    st64((c.r[4].w[0] + 144u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 80u));
    st64((c.r[4].w[0] + 152u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 88u));
    st64((c.r[4].w[0] + 160u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 96u));
    st64((c.r[4].w[0] + 168u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00269360; } }
    c.r[4].d[0] = ld64((c.r[16].w[0] + 144u));
    set32(c.r[2], 0u - 177u);
    mmi::pcpyld(c.r[3], c.r[0], c.r[2]);
    c.r[2].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st64((c.r[16].w[0] + 144u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 152u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st64((c.r[16].w[0] + 152u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 160u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st64((c.r[16].w[0] + 160u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 168u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st64((c.r[16].w[0] + 168u), c.r[2].d[0]);
    c.budget -= 14;
L_00269360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269368u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x00269368u) [[unlikely]] return; }
L_00269368:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00269384; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269378u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 124u, depth + 1u); else { c.pc = 0x002696E0u; return; } if (c.pc != 0x00269378u) [[unlikely]] return; }
L_00269378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269380u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 119u, depth + 1u); else { c.pc = 0x00269570u; return; } if (c.pc != 0x00269380u) [[unlikely]] return; }
L_00269380:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00269384:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00269390:
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002693A4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 2;
L_002693A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002693B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 25u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00269554; } }
    set32(c.r[3], 0u + 22u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_0026954C; }
    set32(c.r[3], 0u + 50u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_0026951C; }
    set32(c.r[3], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00269518; } }
    set32(c.r[3], 0u + 116u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_00269508; }
    set32(c.r[3], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00269504; } }
    set32(c.r[3], 0u + 97u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00269504; } }
    set32(c.r[3], 0u + 91u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00269504; } }
    set32(c.r[3], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00269504; } }
    set32(c.r[3], 0u + 74u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00269504; } }
    set32(c.r[3], 0u + 73u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00269504; } }
    set32(c.r[3], 0u + 58u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00269504; } }
    set32(c.r[3], 0u + 57u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00269504; } }
    set32(c.r[3], 0u + 51u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00269504; } }
    set32(c.r[3], 0u + 70u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00269504; } }
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00269504; } }
    set32(c.r[3], 0u + 63u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00269504; } }
    set32(c.r[3], 0u + 62u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00269504; } }
    set32(c.r[3], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00269504; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00269504; } }
    set32(c.r[3], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00269504; } }
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00269504; } }
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00269504; } }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00269504; } }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00269504; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00269504; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00269504; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00269564; } }
L_00269504:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_00269508:
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 3184u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_00269560; } }
L_00269518:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_0026951C:
    set32(c.r[4], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00269560; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269530u);  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x00269530u) [[unlikely]] return; }
L_00269530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00269560; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 3184u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_00269560; } }
L_0026954C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 64u), 0u);  if (t) { goto L_00269560; } }
L_00269554:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 64u), c.r[4].w[0]);
    c.budget -= 3;
L_00269560:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00269564:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00269570:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002696D0; }
    set32(c.r[6], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[6].w[0] + 48u);  if (t) { goto L_002695C0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_002695C4; } }
L_002695C0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002695C4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002695D0; }
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_002695D0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[6].w[0]));  goto L_0026965C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00269658; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.f[1] = ld32((c.r[6].w[0] + 4u));  goto L_002695F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002696CC; } }
L_002695F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[4], c.r[29].w[0] + 32u);
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269618u); st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00269618u) [[unlikely]] return; }
L_00269618:
    set32(c.r[2], ld32((c.r[28].w[0] - 30404u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00269628; }
    set32(c.r[2], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 1;
L_00269628:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[6], 0u - c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269638u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x00269638u) [[unlikely]] return; }
L_00269638:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269648u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x00269648u) [[unlikely]] return; }
L_00269648:
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { goto L_002696CC; } }
L_00269658:
    c.f[0] = ld32((c.r[6].w[0]));
    c.budget -= 1;
L_0026965C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[1]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.f[1] = ld32((c.r[3].w[0] + 448u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[3].w[0] + 112u);
    set32(c.r[3], ld32((c.r[3].w[0] + 156u)));
    c.budget -= 18;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_002696B4; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30248u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002696B4; }
    set32(c.r[3], ld32((c.r[3].w[0] + 368u)));
    c.budget -= 1;
L_002696B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002696CC; } }
    set32(c.r[5], c.r[3].w[0] + 1200u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002696CCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x002696CCu) [[unlikely]] return; }
L_002696CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002696D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002696E0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 72u)));
    c.f[1] = ld32((c.r[3].w[0] + 144u));
    set32(c.r[5], ld32((c.r[5].w[0] + 80u)));
    c.f[0] = ld32((c.r[3].w[0] + 184u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0]), c.f[0]);
    set32(c.r[16], c.r[5].w[0] + 3176u);
    st32((c.r[18].w[0] + 4u), c.f[1]);
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269734u); st32((c.r[18].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x00269734u) [[unlikely]] return; }
L_00269734:
    set32(c.r[2], ld32((c.r[19].w[0] + 72u)));
    st32((c.r[2].w[0] + 32u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 72u)));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[2].w[0] + 32u);  if (t) { goto L_00269770; } }
    st32((c.r[3].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 8u), 0u);
    st32((c.r[18].w[0] + 4u), 0u);
    st32((c.r[18].w[0]), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_002697D4; } }
L_00269770:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002697A0; }
    st32((c.r[3].w[0]), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269798u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x00269798u) [[unlikely]] return; }
L_00269798:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[19].w[0] + 112u));  if (t) { goto L_002697D8; } }
L_002697A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002697A8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002697A8u) [[unlikely]] return; }
L_002697A8:
    set32(c.r[2], ld32((c.r[19].w[0] + 72u)));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.budget -= 11;
L_002697D4:
    c.f[2] = ld32((c.r[19].w[0] + 112u));
    c.budget -= 1;
L_002697D8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00269800; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 72u)));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[17], 0u + 1u);  goto L_00269870; }
L_00269800:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[19].w[0] + 96u);  goto L_00269838; }
    set32(c.r[2], ld32((c.r[19].w[0] + 72u)));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00269834; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269870; } }
L_00269834:
    set32(c.r[4], c.r[19].w[0] + 96u);
    c.budget -= 1;
L_00269838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269840u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x00269840u) [[unlikely]] return; }
L_00269840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269848u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0005(c, 134u, depth + 1u); else { c.pc = 0x00137278u; return; } if (c.pc != 0x00269848u) [[unlikely]] return; }
L_00269848:
    c.f[1] = ld32((c.r[28].w[0] - 32192u));
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00269870; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_00269870:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 76u)));  goto L_002698DC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.f[0] = ld32((c.r[18].w[0]));  goto L_002698B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269890u);  if (depth < kMaxDepth) unit_000D(c, 364u, depth + 1u); else { c.pc = 0x001575E0u; return; } if (c.pc != 0x00269890u) [[unlikely]] return; }
L_00269890:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026989Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 224u, depth + 1u); else { c.pc = 0x0018FA10u; return; } if (c.pc != 0x0026989Cu) [[unlikely]] return; }
L_0026989C:
    set32(c.r[4], c.r[19].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002698ACu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x002698ACu) [[unlikely]] return; }
L_002698AC:
    c.f[0] = ld32((c.r[18].w[0]));
    c.budget -= 1;
L_002698B0:
    st32((c.r[19].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[19].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[19].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[19].w[0] + 108u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 72u)));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[19].w[0] + 112u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 76u)));
    c.budget -= 11;
L_002698DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 72u)));
    c.f[1] = ld32((c.r[3].w[0] + 224u));
    c.f[0] = ld32((c.r[3].w[0] + 264u));
    set32(c.r[17], c.r[5].w[0] + 16u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[5].w[0] + 16u), c.f[0]);
    st32((c.r[5].w[0] + 20u), c.f[1]);
    st32((c.r[5].w[0] + 24u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269908u); st32((c.r[5].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x00269908u) [[unlikely]] return; }
L_00269908:
    set32(c.r[3], ld32((c.r[19].w[0] + 72u)));
    st32((c.r[3].w[0] + 36u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00269944; }
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
L_00269944:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00269950; }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_00269950:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 72u)));  goto L_002699F4; }
    set32(c.r[4], ld32((c.r[19].w[0] + 72u)));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[4].w[0] + 36u);  if (t) { goto L_0026998C; } }
    st32((c.r[3].w[0]), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0]), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00269AA0; } }
L_0026998C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002699BC; }
    st32((c.r[3].w[0]), c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002699B4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002699B4u) [[unlikely]] return; }
L_002699B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00269AA4; } }
L_002699BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002699C4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002699C4u) [[unlikely]] return; }
L_002699C4:
    set32(c.r[3], ld32((c.r[19].w[0] + 72u)));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 36u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.f[0]);  if (t) { goto L_00269AA0; } }
L_002699F4:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[4].w[0] + 36u);  if (t) { goto L_00269A24; } }
    st32((c.r[3].w[0]), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0]), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00269AA0; } }
L_00269A24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00269A54; }
    st32((c.r[3].w[0]), c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269A4Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x00269A4Cu) [[unlikely]] return; }
L_00269A4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269AA0; } }
L_00269A54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269A5Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x00269A5Cu) [[unlikely]] return; }
L_00269A5C:
    set32(c.r[4], ld32((c.r[19].w[0] + 72u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.budget -= 17;
L_00269AA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00269AA4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00269AC0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00269AF8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00269AEC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00269AEC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00269AF8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00269AF8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00269B14; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00269B14; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00269B14:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00269B20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269B30u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x00269B30u) [[unlikely]] return; }
L_00269B30:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_00269B40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00269B58; } }
L_00269B40:
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 13728u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00269B58; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00269B58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00269B70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269B80u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x00269B80u) [[unlikely]] return; }
L_00269B80:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));  goto L_00269B90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00269BF8; } }
L_00269B90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00269BD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269BA0u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x00269BA0u) [[unlikely]] return; }
L_00269BA0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 768u);  goto L_00269BB4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269BD0; } }
L_00269BB4:
    set32(c.r[4], ld32((c.r[28].w[0] - 30400u)));
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], 0u + 15807u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[3].d[0] = ld64((c.r[4].w[0] + 144u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
L_00269BD0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00269BF8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 13728u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00269BF8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00269BF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00269C10:
    set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 152u));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_00269C30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00269C94; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21360u);
    set32(c.r[2], c.r[2].w[0] + 21416u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269C70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00269C70u) [[unlikely]] return; }
L_00269C70:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269C7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00269C7Cu) [[unlikely]] return; }
L_00269C7C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00269C98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269C94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00269C94u) [[unlikely]] return; }
L_00269C94:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00269C98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00269CB0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00269C30u | kUnwind; return; } goto L_00269C30; }
L_00269CC0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002693B0u | kUnwind; return; } goto L_002693B0; }
L_00269CD0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269CF0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00289920u; return; } if (c.pc != 0x00269CF0u) [[unlikely]] return; }
L_00269CF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 21440u);
    set32(c.r[3], c.r[3].w[0] + 21496u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 124u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434B0000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21569ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[6], 0u + 12u);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 188u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 13472u)));
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 116u), 0u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269D50u); st32((c.r[16].w[0] + 120u), 0u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00269D50u) [[unlikely]] return; }
L_00269D50:
    set32(c.r[4], c.r[16].w[0] + 136u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269D60u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00269D60u) [[unlikely]] return; }
L_00269D60:
    set32(c.r[4], c.r[16].w[0] + 148u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269D70u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00269D70u) [[unlikely]] return; }
L_00269D70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269D78u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x00269D78u) [[unlikely]] return; }
L_00269D78:
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269DA4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 369u, depth + 1u); else { c.pc = 0x002A3830u; return; } if (c.pc != 0x00269DA4u) [[unlikely]] return; }
L_00269DA4:
    st32((c.r[16].w[0] + 140u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 144u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269DC0u); set32(c.r[5], 0u + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269DC0u) [[unlikely]] return; }
L_00269DC0:
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 148u)));  if (t) { goto L_00269DD8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 652u), c.r[3].w[0]);
    c.budget -= 2;
L_00269DD8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 136u)));  goto L_00269DF0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 656u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
L_00269DF0:
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00269E10; } }
    c.r[1].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00269E10; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00269E10:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_00269F78; }
    set32(c.r[5], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 148u)));
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00269E3C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00269E3C; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_00269E3C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00269F74; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269E50u); set32(c.r[4], ld32((c.r[4].w[0] + 148u)));  if (depth < kMaxDepth) unit_0067(c, 266u, depth + 1u); else { c.pc = 0x002BE830u; return; } if (c.pc != 0x00269E50u) [[unlikely]] return; }
L_00269E50:
    set32(c.r[7], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[6], c.r[3].w[0] + 380u);  if (t) { goto L_00269F74; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 148u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00269F74; } }
    set32(c.r[5], 0u + 1u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[7].w[0] + 13476u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[17], ld32((c.r[6].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269EACu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00269EACu) [[unlikely]] return; }
L_00269EAC:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00269EC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_00269ED4; } }
L_00269EC0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[19].d[0] = 0ull + 0ull;  goto L_00269ED4; }
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[19], c.f[0]);
    c.budget -= 3;
L_00269ED4:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + c.r[19].w[0]);  goto L_00269EFC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00269EF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269EF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00269EF8u) [[unlikely]] return; }
L_00269EF8:
    set32(c.r[2], c.r[17].w[0] + c.r[19].w[0]);
    c.budget -= 1;
L_00269EFC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 116u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269F18u); st32((c.r[29].w[0] + 128u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00269F18u) [[unlikely]] return; }
L_00269F18:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_00269F40; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00269F3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269F3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00269F3Cu) [[unlikely]] return; }
L_00269F3C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00269F40:
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 148u)));  if (t) { goto L_00269F74; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00269F74; } }
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 8;
L_00269F74:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_00269F78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00269F84; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_00269F84:
    set32(c.r[5], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269F90u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_005B(c, 315u, depth + 1u); else { c.pc = 0x0028F290u; return; } if (c.pc != 0x00269F90u) [[unlikely]] return; }
L_00269F90:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00269FE8; } }
L_00269F9C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269FB0u); set32(c.r[4], c.r[3].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x00269FB0u) [[unlikely]] return; }
L_00269FB0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00269FE8; }
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269FCCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269FCCu) [[unlikely]] return; }
L_00269FCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00269FE4; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 144u), c.r[19].w[0]);  if (t) { goto L_00269FF4; } }
L_00269FE4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00269FE8:
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00269F9Cu | kUnwind; return; } goto L_00269F9C; }
L_00269FF4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    st32((c.r[2].w[0] + 13376u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 10;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 496u)));  goto L_0026A020; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026A020:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.f[0] = ld32((c.r[2].w[0] + 1152u));
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 1152u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A060u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005A(c, 365u, depth + 1u); else { c.pc = 0x0028BB30u; return; } if (c.pc != 0x0026A060u) [[unlikely]] return; }
L_0026A060:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A070u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 369u, depth + 1u); else { c.pc = 0x002A3830u; return; } if (c.pc != 0x0026A070u) [[unlikely]] return; }
L_0026A070:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    c.f[0] = ld32((c.r[2].w[0] + 1152u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A09Cu); st32((c.r[2].w[0] + 1152u), c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 365u, depth + 1u); else { c.pc = 0x0028BB30u; return; } if (c.pc != 0x0026A09Cu) [[unlikely]] return; }
L_0026A09C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 126u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 26u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A0BCu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_005A(c, 312u, depth + 1u); else { c.pc = 0x0028B280u; return; } if (c.pc != 0x0026A0BCu) [[unlikely]] return; }
L_0026A0BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A0C4u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x0026A0C4u) [[unlikely]] return; }
L_0026A0C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 1104u)));  if (t) { goto L_0026A0DC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 2;
L_0026A0DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A0F0u); set32(c.r[5], 0u + 57u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A0F0u) [[unlikely]] return; }
L_0026A0F0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0026A110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026A174; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A150u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0026A150u) [[unlikely]] return; }
L_0026A150:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A15Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0026A15Cu) [[unlikely]] return; }
L_0026A15C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0026A178; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A174u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0026A174u) [[unlikely]] return; }
L_0026A174:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0026A178:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026A190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A1A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 197u, depth + 1u); else { c.pc = 0x0026A380u; return; } if (c.pc != 0x0026A1A4u) [[unlikely]] return; }
L_0026A1A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A1ACu);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x0026A1ACu) [[unlikely]] return; }
L_0026A1AC:
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A1C8u); st32((c.r[2].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00289A00u; return; } if (c.pc != 0x0026A1C8u) [[unlikely]] return; }
L_0026A1C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026A1E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026A204; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 152u)));  if (t) { goto L_0026A208; } }
L_0026A204:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026A208:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A214u); set32(c.r[5], 0u + 37u);  if (depth < kMaxDepth) unit_0068(c, 253u, depth + 1u); else { c.pc = 0x002C2E20u; return; } if (c.pc != 0x0026A214u) [[unlikely]] return; }
L_0026A214:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026A224; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0026A224:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A230u); set32(c.r[5], 0u + 38u);  if (depth < kMaxDepth) unit_0068(c, 253u, depth + 1u); else { c.pc = 0x002C2E20u; return; } if (c.pc != 0x0026A230u) [[unlikely]] return; }
L_0026A230:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026A240; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0026A240:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A24Cu); set32(c.r[5], 0u + 47u);  if (depth < kMaxDepth) unit_0068(c, 253u, depth + 1u); else { c.pc = 0x002C2E20u; return; } if (c.pc != 0x0026A24Cu) [[unlikely]] return; }
L_0026A24C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026A25C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0026A25C:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A268u); set32(c.r[5], 0u + 44u);  if (depth < kMaxDepth) unit_0068(c, 253u, depth + 1u); else { c.pc = 0x002C2E20u; return; } if (c.pc != 0x0026A268u) [[unlikely]] return; }
L_0026A268:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026A278; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0026A278:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A284u); set32(c.r[5], 0u + 39u);  if (depth < kMaxDepth) unit_0068(c, 253u, depth + 1u); else { c.pc = 0x002C2E20u; return; } if (c.pc != 0x0026A284u) [[unlikely]] return; }
L_0026A284:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026A294; }
    set32(c.r[4], ld32((c.r[2].w[0] + 164u)));
    c.budget -= 1;
L_0026A294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A29Cu);  if (depth < kMaxDepth) unit_0069(c, 25u, depth + 1u); else { c.pc = 0x002C42F0u; return; } if (c.pc != 0x0026A29Cu) [[unlikely]] return; }
L_0026A29C:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 2;
L_0026A2A4:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0026A2C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A2BCu); set32(c.r[5], 0u + 10300u);  if (depth < kMaxDepth) unit_0062(c, 66u, depth + 1u); else { c.pc = 0x002A8800u; return; } if (c.pc != 0x0026A2BCu) [[unlikely]] return; }
L_0026A2BC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0026A2C0:
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A2A4u | kUnwind; return; } goto L_0026A2A4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026A2DC; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0026A2DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A2E4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 262u, depth + 1u); else { c.pc = 0x00282740u; return; } if (c.pc != 0x0026A2E4u) [[unlikely]] return; }
L_0026A2E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A2F8u); set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));  if (depth < kMaxDepth) unit_0056(c, 389u, depth + 1u); else { c.pc = 0x0027B3D0u; return; } if (c.pc != 0x0026A2F8u) [[unlikely]] return; }
L_0026A2F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A30Cu); set32(c.r[5], 0u + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A30Cu) [[unlikely]] return; }
L_0026A30C:
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_0026A344; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A340; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A340u); set32(c.r[5], 0u + 17u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A340u) [[unlikely]] return; }
L_0026A340:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_0026A344:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A354u); set32(c.r[5], 0u + 13u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A354u) [[unlikely]] return; }
L_0026A354:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A368u); set32(c.r[5], 0u + 14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A368u) [[unlikely]] return; }
L_0026A368:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026A380:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A3A4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0052(c, 208u, depth + 1u); else { c.pc = 0x0026A4F0u; return; } if (c.pc != 0x0026A3A4u) [[unlikely]] return; }
L_0026A3A4:
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0026A3B4; }
    set32(c.r[3], ld32((c.r[3].w[0] + 176u)));
    c.budget -= 1;
L_0026A3B4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0026A3D4; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30252u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026A3D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A3D0u);  if (depth < kMaxDepth) unit_0071(c, 293u, depth + 1u); else { c.pc = 0x002E6740u; return; } if (c.pc != 0x0026A3D0u) [[unlikely]] return; }
L_0026A3D0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026A3D4:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 1;
L_0026A3D8:
    set32(c.r[20], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[20].w[0] + 136u)));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[19], c.r[20].w[0] + 136u);  if (t) { goto L_0026A494; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 592u)));  goto L_0026A40C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A3FCu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_003A(c, 320u, depth + 1u); else { c.pc = 0x0020B250u; return; } if (c.pc != 0x0026A3FCu) [[unlikely]] return; }
L_0026A3FC:
    set32(c.r[4], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A408u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_003A(c, 326u, depth + 1u); else { c.pc = 0x0020B3B0u; return; } if (c.pc != 0x0026A408u) [[unlikely]] return; }
L_0026A408:
    set32(c.r[4], ld32((c.r[18].w[0] + 592u)));
    c.budget -= 1;
L_0026A40C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 604u)));  goto L_0026A434; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 592u), 0u);  goto L_0026A430; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A42Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A42Cu) [[unlikely]] return; }
L_0026A42C:
    st32((c.r[18].w[0] + 592u), 0u);
    c.budget -= 1;
L_0026A430:
    set32(c.r[4], ld32((c.r[18].w[0] + 604u)));
    c.budget -= 1;
L_0026A434:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 124u)));  goto L_0026A45C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 604u), 0u);  goto L_0026A458; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A454u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A454u) [[unlikely]] return; }
L_0026A454:
    st32((c.r[18].w[0] + 604u), 0u);
    c.budget -= 1;
L_0026A458:
    set32(c.r[4], ld32((c.r[20].w[0] + 124u)));
    c.budget -= 1;
L_0026A45C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 148u)));  goto L_0026A474; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A46Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0026A46Cu) [[unlikely]] return; }
L_0026A46C:
    st32((c.r[20].w[0] + 124u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 148u)));
    c.budget -= 2;
L_0026A474:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0]), 0u);  goto L_0026A494; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A48Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A48Cu) [[unlikely]] return; }
L_0026A48C:
    st32((c.r[20].w[0] + 148u), 0u);
    st32((c.r[19].w[0]), 0u);
    c.budget -= 2;
L_0026A494:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A3D8u | kUnwind; return; } goto L_0026A3D8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0026A4C8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A4C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A4C0u) [[unlikely]] return; }
L_0026A4C0:
    st32((c.r[17].w[0] + 100u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 2;
L_0026A4C8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0026A4F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 136u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026A548; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A518u); set32(c.r[5], 0u + 10400u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0026A518u) [[unlikely]] return; }
L_0026A518:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A524u); set32(c.r[5], 0u + 10401u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0026A524u) [[unlikely]] return; }
L_0026A524:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A530u); set32(c.r[5], 0u + 10402u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0026A530u) [[unlikely]] return; }
L_0026A530:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A53Cu); set32(c.r[5], 0u + 10403u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0026A53Cu) [[unlikely]] return; }
L_0026A53C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A548u); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0026A548u) [[unlikely]] return; }
L_0026A548:
    set32(c.r[16], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 144u)));  goto L_0026A570; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A560u); set32(c.r[5], 0u + 10402u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0026A560u) [[unlikely]] return; }
L_0026A560:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A56Cu); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0026A56Cu) [[unlikely]] return; }
L_0026A56C:
    set32(c.r[16], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 1;
L_0026A570:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0026A594; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A584u); set32(c.r[5], 0u + 10402u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0026A584u) [[unlikely]] return; }
L_0026A584:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A590u); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0026A590u) [[unlikely]] return; }
L_0026A590:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0026A594:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026A5B0:
    set32(c.r[29], c.r[29].w[0] - 640u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A5D8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0021(c, 175u, depth + 1u); else { c.pc = 0x001A6260u; return; } if (c.pc != 0x0026A5D8u) [[unlikely]] return; }
L_0026A5D8:
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_0026BDF4; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0026A61C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A5FCu);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0026A5FCu) [[unlikely]] return; }
L_0026A5FC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0026A610; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026A61C; } }
L_0026A610:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0026A61C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 96u)));  goto L_0026A69C; }
    set32(c.r[4], ld32((c.r[20].w[0] + 140u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A640u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0026A640u) [[unlikely]] return; }
L_0026A640:
    set32(c.r[4], ld32((c.r[20].w[0] + 144u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 76u)));  goto L_0026A668; }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A664u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0026A664u) [[unlikely]] return; }
L_0026A664:
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_0026A668:
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 1104u)));  if (t) { goto L_0026A67C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 2;
L_0026A67C:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A68Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 344u, depth + 1u); else { c.pc = 0x0028B8A0u; return; } if (c.pc != 0x0026A68Cu) [[unlikely]] return; }
L_0026A68C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A694u); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_005A(c, 290u, depth + 1u); else { c.pc = 0x0028AF40u; return; } if (c.pc != 0x0026A694u) [[unlikely]] return; }
L_0026A694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026BDF0; } }
L_0026A69C:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026BDF0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 6144u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00268000u < 16384u) { entry = entries_0052[(t - 0x00268000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0026A6C4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[6], 0u + 14u);
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[7], 0u + 10400u);
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A6E4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 361u, depth + 1u); else { c.pc = 0x002A7D10u; return; } if (c.pc != 0x0026A6E4u) [[unlikely]] return; }
L_0026A6E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 72u)));  goto L_0026A6F8; }
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 344u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 3;
L_0026A6F8:
    c.r[2].d[0] = c.r[2].d[0] & 17ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[20].w[0] + 104u), 0u);  goto L_0026A734; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026A714; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0026A714:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 37u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A730u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x0026A730u) [[unlikely]] return; }
L_0026A730:
    st32((c.r[20].w[0] + 104u), 0u);
    c.budget -= 1;
L_0026A734:
    set32(c.r[25], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A744u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A744u) [[unlikely]] return; }
L_0026A744:
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
L_0026A750:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A75Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 6u, depth + 1u); else { c.pc = 0x0026C110u; return; } if (c.pc != 0x0026A75Cu) [[unlikely]] return; }
L_0026A75C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026BDF0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 3;
L_0026A770:
    set32(c.r[4], ld32((c.r[20].w[0] + 100u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026BDF0; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A794u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 12u, depth + 1u); else { c.pc = 0x0026C1B0u; return; } if (c.pc != 0x0026A794u) [[unlikely]] return; }
L_0026A794:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026BDF0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 3;
L_0026A7A8:
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026BDF0; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A7D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 29u, depth + 1u); else { c.pc = 0x0026C370u; return; } if (c.pc != 0x0026A7D0u) [[unlikely]] return; }
L_0026A7D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026BDF0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 112u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 140u)));  goto L_0026A808; }
    set32(c.r[2], ld32((c.r[20].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 608u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[6], c.r[3].w[0] + 1548u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + 288u);  if (t) { goto L_0026A844; } }
L_0026A808:
    set32(c.r[2], ld32((c.r[20].w[0] + 136u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 608u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[2], c.r[5].w[0] - 1u);
    set32(c.r[5], c.r[2].w[0] << 3);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[6], c.r[5].w[0] + 1828u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 300u);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 15;
L_0026A844:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026A854; }
    set32(c.r[4], ld32((c.r[2].w[0] + 164u)));
    c.budget -= 1;
L_0026A854:
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.f[12] = ld32((c.r[6].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A864u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 367u, depth + 1u); else { c.pc = 0x002C3F00u; return; } if (c.pc != 0x0026A864u) [[unlikely]] return; }
L_0026A864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A86Cu); set32(c.r[4], 0u + 244u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0026A86Cu) [[unlikely]] return; }
L_0026A86C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 72u)));  goto L_0026A894; }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0026A880; } }
    set32(c.r[6], c.r[20].w[0] + 52u);
    c.budget -= 1;
L_0026A880:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A890u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 153u, depth + 1u); else { c.pc = 0x002C2090u; return; } if (c.pc != 0x0026A890u) [[unlikely]] return; }
L_0026A890:
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 1;
L_0026A894:
    c.r[2].d[0] = c.r[2].d[0] & 17ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 108u)));  goto L_0026A8D0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026A8B0; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0026A8B0:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 38u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A8CCu); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x0026A8CCu) [[unlikely]] return; }
L_0026A8CC:
    set32(c.r[2], ld32((c.r[20].w[0] + 108u)));
    c.budget -= 1;
L_0026A8D0:
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.f[13] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A8E0u); set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));  if (depth < kMaxDepth) unit_0056(c, 389u, depth + 1u); else { c.pc = 0x0027B3D0u; return; } if (c.pc != 0x0026A8E0u) [[unlikely]] return; }
L_0026A8E0:
    st32((c.r[20].w[0] + 104u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 4;
L_0026A8F0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A8FCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0053(c, 6u, depth + 1u); else { c.pc = 0x0026C110u; return; } if (c.pc != 0x0026A8FCu) [[unlikely]] return; }
L_0026A8FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026BDF0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 3;
L_0026A910:
    set32(c.r[4], ld32((c.r[20].w[0] + 100u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026BDF0; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A934u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0053(c, 12u, depth + 1u); else { c.pc = 0x0026C1B0u; return; } if (c.pc != 0x0026A934u) [[unlikely]] return; }
L_0026A934:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026BDF0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 3;
L_0026A948:
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026BDF0; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A970u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0053(c, 29u, depth + 1u); else { c.pc = 0x0026C370u; return; } if (c.pc != 0x0026A970u) [[unlikely]] return; }
L_0026A970:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026BDF0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 112u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 140u)));  goto L_0026A9A8; }
    set32(c.r[2], ld32((c.r[20].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 608u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[6], c.r[3].w[0] + 1556u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + 289u);  if (t) { goto L_0026A9E8; } }
L_0026A9A8:
    set32(c.r[3], ld32((c.r[20].w[0] + 136u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 608u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 148u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[6], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 300u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], c.r[4].w[0] + 1876u);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 16;
L_0026A9E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026A9F8; }
    set32(c.r[4], ld32((c.r[2].w[0] + 164u)));
    c.budget -= 1;
L_0026A9F8:
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.f[12] = ld32((c.r[6].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AA08u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 367u, depth + 1u); else { c.pc = 0x002C3F00u; return; } if (c.pc != 0x0026AA08u) [[unlikely]] return; }
L_0026AA08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AA10u); set32(c.r[4], 0u + 244u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0026AA10u) [[unlikely]] return; }
L_0026AA10:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 72u)));  goto L_0026AA38; }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0026AA28; } }
    set32(c.r[6], c.r[20].w[0] + 52u);
    c.budget -= 1;
L_0026AA28:
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AA34u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 153u, depth + 1u); else { c.pc = 0x002C2090u; return; } if (c.pc != 0x0026AA34u) [[unlikely]] return; }
L_0026AA34:
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 1;
L_0026AA38:
    c.r[3].d[0] = c.r[3].d[0] & 17ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 116u)));  goto L_0026AA74; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026AA54; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0026AA54:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 38u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AA70u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x0026AA70u) [[unlikely]] return; }
L_0026AA70:
    set32(c.r[3], ld32((c.r[20].w[0] + 116u)));
    c.budget -= 1;
L_0026AA74:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 10u);  goto L_0026AFE8; }
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
L_0026AA88:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AA94u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0053(c, 6u, depth + 1u); else { c.pc = 0x0026C110u; return; } if (c.pc != 0x0026AA94u) [[unlikely]] return; }
L_0026AA94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026BDF0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 3;
L_0026AAA8:
    set32(c.r[4], ld32((c.r[20].w[0] + 100u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026BDF0; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AACCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0053(c, 12u, depth + 1u); else { c.pc = 0x0026C1B0u; return; } if (c.pc != 0x0026AACCu) [[unlikely]] return; }
L_0026AACC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026BDF0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 3;
L_0026AAE0:
    set32(c.r[3], 0u + 9u);
    st32((c.r[20].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.f[1] = ld32((c.r[20].w[0] + 104u));  goto L_0026AF0C; }
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026AF08; } }
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0026AB2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0026AB84; } }
L_0026AB2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AB34u); set32(c.r[5], 0u + 35u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0026AB34u) [[unlikely]] return; }
L_0026AB34:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0026AB54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0026AB64; } }
L_0026AB54:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0026AB64:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0026AB84; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_0026AB7C; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026AB7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026AB84; } }
L_0026AB84:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[6], 0u + 10401u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AB94u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0026AB94u) [[unlikely]] return; }
L_0026AB94:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0026ABD8; }
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 344u), c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ABBCu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026ABBCu) [[unlikely]] return; }
L_0026ABBC:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 7;
L_0026ABD8:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 13376u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 144u)));
    st32((c.r[2].w[0] + 13388u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 148u)));  if (t) { goto L_0026AC08; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 656u), c.r[3].w[0]);
    c.budget -= 2;
L_0026AC08:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[16], c.r[2].w[0] + 380u);
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0026AC3C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026AC3C; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0026AC3C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 136u)));  goto L_0026AD64; }
    set32(c.r[5], ld32((c.r[20].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 148u)));
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0026AC68; } }
    c.r[1].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026AC68; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_0026AC68:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0026AD60; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AC7Cu); set32(c.r[4], ld32((c.r[4].w[0] + 148u)));  if (depth < kMaxDepth) unit_0067(c, 266u, depth + 1u); else { c.pc = 0x002BE830u; return; } if (c.pc != 0x0026AC7Cu) [[unlikely]] return; }
L_0026AC7C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0026AD60; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 148u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + 5u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026AD60; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[19], 0u + 1u);
    set32(c.r[21], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ACD0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0026ACD0u) [[unlikely]] return; }
L_0026ACD0:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_0026ACE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 144u)));  if (t) { goto L_0026ACF8; } }
L_0026ACE4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[18].d[0] = 0ull + 0ull;  goto L_0026ACF8; }
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[0]);
    c.budget -= 3;
L_0026ACF8:
    set32(c.r[4], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[21].w[0] + c.r[18].w[0]);  goto L_0026AD20; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0026AD1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AD1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0026AD1Cu) [[unlikely]] return; }
L_0026AD1C:
    set32(c.r[2], c.r[21].w[0] + c.r[18].w[0]);
    c.budget -= 1;
L_0026AD20:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    st32((c.r[29].w[0] + 212u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AD3Cu); st32((c.r[29].w[0] + 224u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x0026AD3Cu) [[unlikely]] return; }
L_0026AD3C:
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026AD60; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0026AD60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AD60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0026AD60u) [[unlikely]] return; }
L_0026AD60:
    set32(c.r[5], ld32((c.r[20].w[0] + 136u)));
    c.budget -= 1;
L_0026AD64:
    set32(c.r[3], ld32((c.r[5].w[0] + 148u)));
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0026AD84; } }
    c.r[1].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026AD84; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0026AD84:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026AEA8; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0026ADB0; } }
    c.r[1].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026ADB0; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_0026ADB0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0026AEA8; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ADC4u); set32(c.r[4], ld32((c.r[4].w[0] + 148u)));  if (depth < kMaxDepth) unit_0067(c, 266u, depth + 1u); else { c.pc = 0x002BE830u; return; } if (c.pc != 0x0026ADC4u) [[unlikely]] return; }
L_0026ADC4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0026AEA8; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 148u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + 5u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026AEA8; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[19], 0u + 1u);
    set32(c.r[16], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AE18u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0026AE18u) [[unlikely]] return; }
L_0026AE18:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_0026AE2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 112u)));  if (t) { goto L_0026AE40; } }
L_0026AE2C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[18].d[0] = 0ull + 0ull;  goto L_0026AE40; }
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[0]);
    c.budget -= 3;
L_0026AE40:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);  goto L_0026AE68; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0026AE64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AE64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0026AE64u) [[unlikely]] return; }
L_0026AE64:
    set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);
    c.budget -= 1;
L_0026AE68:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 180u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AE84u); st32((c.r[29].w[0] + 192u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x0026AE84u) [[unlikely]] return; }
L_0026AE84:
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026AEA8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0026AEA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AEA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0026AEA8u) [[unlikely]] return; }
L_0026AEA8:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[25], ld32((c.r[20].w[0] + 52u)));  goto L_0026AEF8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 13476u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 148u)));  if (t) { goto L_0026AEF4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026AEF4; } }
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], c.r[3].w[0] + 5u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 8;
L_0026AEF4:
    set32(c.r[25], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 1;
L_0026AEF8:
    set32(c.r[4], c.r[20].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AF08u); set32(c.r[5], 0u + 58u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026AF08u) [[unlikely]] return; }
L_0026AF08:
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    c.budget -= 1;
L_0026AF0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026BDF0; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AF30u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0053(c, 29u, depth + 1u); else { c.pc = 0x0026C370u; return; } if (c.pc != 0x0026AF30u) [[unlikely]] return; }
L_0026AF30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026BDF0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 608u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 1564u);  if (t) { goto L_0026AF54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 164u)));  if (t) { goto L_0026AF58; } }
L_0026AF54:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026AF58:
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.f[12] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AF68u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 367u, depth + 1u); else { c.pc = 0x002C3F00u; return; } if (c.pc != 0x0026AF68u) [[unlikely]] return; }
L_0026AF68:
    set32(c.r[2], ld32((c.r[20].w[0] + 144u)));
    set32(c.r[4], 0u + 244u);
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AF7Cu); set32(c.r[16], c.r[2].w[0] + 371u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0026AF7Cu) [[unlikely]] return; }
L_0026AF7C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 72u)));  goto L_0026AFA4; }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0026AF94; } }
    set32(c.r[6], c.r[20].w[0] + 52u);
    c.budget -= 1;
L_0026AF94:
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AFA0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 153u, depth + 1u); else { c.pc = 0x002C2090u; return; } if (c.pc != 0x0026AFA0u) [[unlikely]] return; }
L_0026AFA0:
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 1;
L_0026AFA4:
    c.r[3].d[0] = c.r[3].d[0] & 17ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 11u);  goto L_0026B140; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026AFC0; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0026AFC0:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 37u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AFDCu); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x0026AFDCu) [[unlikely]] return; }
L_0026AFDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B13C; } }
L_0026AFE4:
    set32(c.r[3], 0u + 10u);
    c.budget -= 1;
L_0026AFE8:
    st32((c.r[20].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.f[1] = ld32((c.r[20].w[0] + 104u));  goto L_0026B11C; }
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026B118; } }
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0026B030; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0026B088; } }
L_0026B030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B038u); set32(c.r[5], 0u + 35u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0026B038u) [[unlikely]] return; }
L_0026B038:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0026B058; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0026B068; } }
L_0026B058:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0026B068:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0026B088; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_0026B080; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026B080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B088; } }
L_0026B088:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[6], 0u + 10401u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B098u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0026B098u) [[unlikely]] return; }
L_0026B098:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 72u)));  goto L_0026B0E0; }
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 344u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B0C4u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B0C4u) [[unlikely]] return; }
L_0026B0C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[16].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 7;
L_0026B0E0:
    c.r[3].d[0] = c.r[3].d[0] & 17ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026B118; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026B0FC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0026B0FC:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 47u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B118u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x0026B118u) [[unlikely]] return; }
L_0026B118:
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    c.budget -= 1;
L_0026B11C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42DC0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026BDF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 12u);  if (t) { goto L_0026B290; } }
L_0026B13C:
    set32(c.r[3], 0u + 11u);
    c.budget -= 1;
L_0026B140:
    st32((c.r[20].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.f[1] = ld32((c.r[20].w[0] + 104u));  goto L_0026B274; }
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x430C0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026B270; } }
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0026B188; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0026B1E0; } }
L_0026B188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B190u); set32(c.r[5], 0u + 35u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0026B190u) [[unlikely]] return; }
L_0026B190:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0026B1B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0026B1C0; } }
L_0026B1B0:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0026B1C0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0026B1E0; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_0026B1D8; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026B1D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B1E0; } }
L_0026B1E0:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[6], 0u + 10401u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B1F0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0026B1F0u) [[unlikely]] return; }
L_0026B1F0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 72u)));  goto L_0026B238; }
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 344u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B21Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B21Cu) [[unlikely]] return; }
L_0026B21C:
    set32(c.r[3], ld32((c.r[16].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[16].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 7;
L_0026B238:
    c.r[3].d[0] = c.r[3].d[0] & 17ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026B270; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026B254; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0026B254:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 47u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B270u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x0026B270u) [[unlikely]] return; }
L_0026B270:
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    c.budget -= 1;
L_0026B274:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x430C0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026BDF0; } }
L_0026B28C:
    set32(c.r[3], 0u + 12u);
    c.budget -= 1;
L_0026B290:
    st32((c.r[20].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 116u)));  goto L_0026B3C8; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 13376u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0026B2D8; } }
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026B2F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0026B2F8; } }
L_0026B2D8:
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026B2F8; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0026B2F8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026B3C4; } }
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0026B318; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0026B370; } }
L_0026B318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B320u); set32(c.r[5], 0u + 35u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0026B320u) [[unlikely]] return; }
L_0026B320:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0026B340; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0026B350; } }
L_0026B340:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0026B350:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0026B370; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_0026B368; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026B368:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B370; } }
L_0026B370:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[6], 0u + 10401u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B380u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0026B380u) [[unlikely]] return; }
L_0026B380:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0026B3C4; } }
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 344u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[25], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B3ACu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B3ACu) [[unlikely]] return; }
L_0026B3AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[16].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
L_0026B3C4:
    set32(c.r[3], ld32((c.r[20].w[0] + 116u)));
    c.budget -= 1;
L_0026B3C8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.f[1] = ld32((c.r[20].w[0] + 104u));  goto L_0026B3F4; }
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42E60000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_0026B410; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026BDF0; } }
L_0026B3F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43250000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026BDF0; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_0026B410:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B420u); set32(c.r[5], 0u + 59u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B420u) [[unlikely]] return; }
L_0026B420:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B434u); set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));  if (depth < kMaxDepth) unit_0056(c, 389u, depth + 1u); else { c.pc = 0x0027B3D0u; return; } if (c.pc != 0x0026B434u) [[unlikely]] return; }
L_0026B434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B43Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 208u, depth + 1u); else { c.pc = 0x0026A4F0u; return; } if (c.pc != 0x0026B43Cu) [[unlikely]] return; }
L_0026B43C:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_0026B470; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B464u); set32(c.r[5], 0u + 16u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B464u) [[unlikely]] return; }
L_0026B464:
    set32(c.r[2], 0u + 1u);
    st32((c.r[20].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
L_0026B470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B478u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0026B478u) [[unlikely]] return; }
L_0026B478:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0026B538; }
    set32(c.r[6], ld32((c.r[28].w[0] - 30316u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 608u);
    set32(c.r[5], c.r[29].w[0] + 624u);
    set32(c.r[16], ld32((c.r[6].w[0] + 3028u)));
    c.f[0] = ld32((c.r[3].w[0] + 1264u));
    st32((c.r[29].w[0] + 624u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 1268u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 628u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 1272u));
    st32((c.r[29].w[0] + 624u), c.f[0]);
    st32((c.r[29].w[0] + 636u), c.r[2].w[0]);
    c.f[0] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 628u), 0u);
    st32((c.r[29].w[0] + 632u), c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B4D4u); st32((c.r[29].w[0] + 632u), c.f[0]);  if (depth < kMaxDepth) unit_000D(c, 285u, depth + 1u); else { c.pc = 0x00156C80u; return; } if (c.pc != 0x0026B4D4u) [[unlikely]] return; }
L_0026B4D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B4DCu); set32(c.r[4], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0026B4DCu) [[unlikely]] return; }
L_0026B4DC:
    set32(c.r[5], c.r[16].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B4E8u); set32(c.r[4], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x0026B4E8u) [[unlikely]] return; }
L_0026B4E8:
    set32(c.r[6], ld32((c.r[29].w[0] + 608u)));
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[7], ld32((c.r[29].w[0] + 612u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 616u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B500u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x0026B500u) [[unlikely]] return; }
L_0026B500:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 2;
L_0026B508:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0026B528; }
    set32(c.r[4], c.r[2].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B524u); set32(c.r[5], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0026B524u) [[unlikely]] return; }
L_0026B524:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0026B528:
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B508u | kUnwind; return; } goto L_0026B508; }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026B538:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 1;
L_0026B53C:
    set32(c.r[18], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[18].w[0] + 136u)));
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0026B698; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B558u); set32(c.r[5], 0u + 10300u);  if (depth < kMaxDepth) unit_0062(c, 64u, depth + 1u); else { c.pc = 0x002A87C0u; return; } if (c.pc != 0x0026B558u) [[unlikely]] return; }
L_0026B558:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0026B57C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 36u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B574u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x0026B574u) [[unlikely]] return; }
L_0026B574:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (t) { goto L_0026B59C; } }
L_0026B57C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 18u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B598u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0026B598u) [[unlikely]] return; }
L_0026B598:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_0026B59C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B5A4u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0026B5A4u) [[unlikely]] return; }
L_0026B5A4:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026B694; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B5BCu); set32(c.r[4], 0u + 352u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0026B5BCu) [[unlikely]] return; }
L_0026B5BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 148u), c.r[2].w[0]);  goto L_0026B5D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B5CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 95u, depth + 1u); else { c.pc = 0x00158830u; return; } if (c.pc != 0x0026B5CCu) [[unlikely]] return; }
L_0026B5CC:
    st32((c.r[18].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 1;
L_0026B5D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 148u);  if (t) { goto L_0026B694; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026B5E8; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0026B5E8:
    set32(c.r[19], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0026B600; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0026B670; } }
L_0026B600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B608u); set32(c.r[5], 0u + 37u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0026B608u) [[unlikely]] return; }
L_0026B608:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0026B628; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0026B638; } }
L_0026B628:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0026B638:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));  goto L_0026B648; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0026B670; } }
L_0026B648:
    c.r[4].d[0] = c.r[19].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_0026B660; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0026B670; } }
L_0026B660:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0026B670:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B67Cu); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_000E(c, 140u, depth + 1u); else { c.pc = 0x00158D80u; return; } if (c.pc != 0x0026B67Cu) [[unlikely]] return; }
L_0026B67C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B688u); set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_000E(c, 147u, depth + 1u); else { c.pc = 0x00158E60u; return; } if (c.pc != 0x0026B688u) [[unlikely]] return; }
L_0026B688:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B694u); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x00158EB0u; return; } if (c.pc != 0x0026B694u) [[unlikely]] return; }
L_0026B694:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0026B698:
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B53Cu | kUnwind; return; } goto L_0026B53C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B6ACu); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0026B6ACu) [[unlikely]] return; }
L_0026B6AC:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 72u)));  goto L_0026B888; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 13376u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], 0u + 2u);  goto L_0026B6D0; }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_0026B6D0:
    set32(c.r[17], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0026B6E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0026B758; } }
L_0026B6E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B6F0u); set32(c.r[5], 0u + 37u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0026B6F0u) [[unlikely]] return; }
L_0026B6F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0026B710; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0026B720; } }
L_0026B710:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0026B720:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));  goto L_0026B730; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0026B758; } }
L_0026B730:
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_0026B748; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0026B758; } }
L_0026B748:
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0026B758:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[6], 0u + 10403u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B768u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0026B768u) [[unlikely]] return; }
L_0026B768:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 72u)));  goto L_0026B808; }
    set32(c.r[18], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[17], ld32((c.r[18].w[0] + 1320u)));
    c.budget -= 4;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0026B794; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B78Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0026B78Cu) [[unlikely]] return; }
L_0026B78C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 352u);  if (t) { goto L_0026B7A0; } }
L_0026B794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B79Cu);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0026B79Cu) [[unlikely]] return; }
L_0026B79C:
    set32(c.r[17], c.r[18].w[0] + 352u);
    c.budget -= 1;
L_0026B7A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B7A8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 34u, depth + 1u); else { c.pc = 0x0026C4B0u; return; } if (c.pc != 0x0026B7A8u) [[unlikely]] return; }
L_0026B7A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[2].w[0] + 16144u));
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[6], c.r[29].w[0] + 272u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[3] = ld32((c.r[2].w[0] + 16148u));
    st32((c.r[29].w[0] + 272u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 16152u));
    st32((c.r[29].w[0] + 276u), c.f[3]);
    st32((c.r[29].w[0] + 276u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] + 16156u));
    st32((c.r[29].w[0] + 280u), c.f[2]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B7ECu); st32((c.r[29].w[0] + 284u), c.f[1]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0026B7ECu) [[unlikely]] return; }
L_0026B7EC:
    set32(c.r[4], c.r[16].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B7F8u); set32(c.r[5], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0026B7F8u) [[unlikely]] return; }
L_0026B7F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 4;
L_0026B808:
    c.r[2].d[0] = c.r[2].d[0] & 17ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[20].w[0] + 76u)));  goto L_0026B8C4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 13376u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_0026B858; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026B834; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0026B834:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 44u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B850u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x0026B850u) [[unlikely]] return; }
L_0026B850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B8C0; } }
L_0026B858:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026B864; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0026B864:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 48u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B880u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x0026B880u) [[unlikely]] return; }
L_0026B880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B8C0; } }
L_0026B888:
    c.r[2].d[0] = c.r[2].d[0] & 17ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026B8C0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026B8A4; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0026B8A4:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 39u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B8C0u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x0026B8C0u) [[unlikely]] return; }
L_0026B8C0:
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_0026B8C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0026B8D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0026B930; } }
L_0026B8D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B8E0u); set32(c.r[5], 0u + 37u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0026B8E0u) [[unlikely]] return; }
L_0026B8E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0026B900; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0026B910; } }
L_0026B900:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0026B910:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0026B930; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_0026B928; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026B928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B930; } }
L_0026B930:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[6], 0u + 10403u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B940u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0026B940u) [[unlikely]] return; }
L_0026B940:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0026B954; }
    set32(c.r[3], ld32((c.r[2].w[0] + 176u)));
    c.budget -= 1;
L_0026B954:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 13376u)));
    c.r[16].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0026B984; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30252u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026B984; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B984u); set32(c.r[5], 0u + 94u);  if (depth < kMaxDepth) unit_0071(c, 292u, depth + 1u); else { c.pc = 0x002E6720u; return; } if (c.pc != 0x0026B984u) [[unlikely]] return; }
L_0026B984:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_0026BAAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B994u); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0026B994u) [[unlikely]] return; }
L_0026B994:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026BAA8; } }
    set32(c.r[19], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[18], ld32((c.r[19].w[0] + 1320u)));
    c.budget -= 4;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0026B9C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B9BCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0026B9BCu) [[unlikely]] return; }
L_0026B9BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 352u);  if (t) { goto L_0026B9D0; } }
L_0026B9C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B9CCu);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0026B9CCu) [[unlikely]] return; }
L_0026B9CC:
    set32(c.r[18], c.r[19].w[0] + 352u);
    c.budget -= 1;
L_0026B9D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B9D8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 34u, depth + 1u); else { c.pc = 0x0026C4B0u; return; } if (c.pc != 0x0026B9D8u) [[unlikely]] return; }
L_0026B9D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[2].w[0] + 16144u));
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[6], c.r[29].w[0] + 256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[3] = ld32((c.r[2].w[0] + 16148u));
    st32((c.r[29].w[0] + 256u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 16152u));
    st32((c.r[29].w[0] + 260u), c.f[3]);
    st32((c.r[29].w[0] + 260u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] + 16156u));
    st32((c.r[29].w[0] + 264u), c.f[2]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BA1Cu); st32((c.r[29].w[0] + 268u), c.f[1]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0026BA1Cu) [[unlikely]] return; }
L_0026BA1C:
    set32(c.r[4], c.r[17].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BA28u); set32(c.r[5], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0026BA28u) [[unlikely]] return; }
L_0026BA28:
    set32(c.r[2], ld32((c.r[17].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 308u), c.r[2].w[0]);  if (t) { goto L_0026BA74; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], 0u + 88u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BA50u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026BA50u) [[unlikely]] return; }
L_0026BA50:
    set32(c.r[4], ld32((c.r[28].w[0] - 30252u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026BAA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x428C0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BA6Cu); set32(c.r[5], 0u + 94u);  if (depth < kMaxDepth) unit_0071(c, 292u, depth + 1u); else { c.pc = 0x002E6720u; return; } if (c.pc != 0x0026BA6Cu) [[unlikely]] return; }
L_0026BA6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026BAA8; } }
L_0026BA74:
    set32(c.r[25], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], 0u + 99u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BA8Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026BA8Cu) [[unlikely]] return; }
L_0026BA8C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30252u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026BAA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B80000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BAA8u); set32(c.r[5], 0u + 94u);  if (depth < kMaxDepth) unit_0071(c, 292u, depth + 1u); else { c.pc = 0x002E6720u; return; } if (c.pc != 0x0026BAA8u) [[unlikely]] return; }
L_0026BAA8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_0026BAAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026BAB8; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0026BAB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BAC0u);  if (depth < kMaxDepth) unit_0058(c, 279u, depth + 1u); else { c.pc = 0x00282AD0u; return; } if (c.pc != 0x0026BAC0u) [[unlikely]] return; }
L_0026BAC0:
    st32((c.r[20].w[0] + 104u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 4;
L_0026BAD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BAD8u); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0026BAD8u) [[unlikely]] return; }
L_0026BAD8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_0026BD14; }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 2;
L_0026BAF0:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0026BBB4; }
    set32(c.r[4], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026BBB0; } }
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BB18u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x00158FC0u; return; } if (c.pc != 0x0026BB18u) [[unlikely]] return; }
L_0026BB18:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 3028u)));
    set32(c.r[18], ld32((c.r[19].w[0] + 1320u)));
    c.budget -= 5;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0026BB3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BB34u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0026BB34u) [[unlikely]] return; }
L_0026BB34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 352u);  if (t) { goto L_0026BB48; } }
L_0026BB3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BB44u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0026BB44u) [[unlikely]] return; }
L_0026BB44:
    set32(c.r[18], c.r[19].w[0] + 352u);
    c.budget -= 1;
L_0026BB48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BB50u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 34u, depth + 1u); else { c.pc = 0x0026C4B0u; return; } if (c.pc != 0x0026BB50u) [[unlikely]] return; }
L_0026BB50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[2].w[0] + 16144u));
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[3] = ld32((c.r[2].w[0] + 16148u));
    st32((c.r[29].w[0] + 240u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 16152u));
    st32((c.r[29].w[0] + 244u), c.f[3]);
    st32((c.r[29].w[0] + 244u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] + 16156u));
    st32((c.r[29].w[0] + 248u), c.f[2]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BB94u); st32((c.r[29].w[0] + 252u), c.f[1]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0026BB94u) [[unlikely]] return; }
L_0026BB94:
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BBA4u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x0026BBA4u) [[unlikely]] return; }
L_0026BBA4:
    set32(c.r[4], c.r[16].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BBB0u); set32(c.r[5], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0026BBB0u) [[unlikely]] return; }
L_0026BBB0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0026BBB4:
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BAF0u | kUnwind; return; } goto L_0026BAF0; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 13376u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026BD10; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] & 17ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026BD10; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[3].d[0] & 16ull;  goto L_0026BC50; }
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026BC4C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026BC20; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0026BC20:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 49u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BC3Cu); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x0026BC3Cu) [[unlikely]] return; }
L_0026BC3C:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0026BD10; } }
L_0026BC4C:
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 1;
L_0026BC50:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[3].d[0] & 32ull;  goto L_0026BCB4; }
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026BCB0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026BC84; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0026BC84:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 50u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BCA0u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x0026BCA0u) [[unlikely]] return; }
L_0026BCA0:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0026BD10; } }
L_0026BCB0:
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 1;
L_0026BCB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026BD10; } }
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B60000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026BD10; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026BCE8; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0026BCE8:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 51u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BD04u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x0026BD04u) [[unlikely]] return; }
L_0026BD04:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_0026BD10:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_0026BD14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BD1Cu);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0026BD1Cu) [[unlikely]] return; }
L_0026BD1C:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_0026BD5C; }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 176u)));  goto L_0026BD48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0026BD50; } }
L_0026BD48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 2;
L_0026BD50:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026BDF0; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_0026BD5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BD64u); set32(c.r[5], 0u + 10403u);  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x0026BD64u) [[unlikely]] return; }
L_0026BD64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026BDF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BD74u); set32(c.r[4], ld32((c.r[20].w[0] + 140u)));  if (depth < kMaxDepth) unit_005B(c, 12u, depth + 1u); else { c.pc = 0x0028C120u; return; } if (c.pc != 0x0026BD74u) [[unlikely]] return; }
L_0026BD74:
    set32(c.r[4], ld32((c.r[20].w[0] + 140u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BD90u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0026BD90u) [[unlikely]] return; }
L_0026BD90:
    set32(c.r[4], ld32((c.r[20].w[0] + 144u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 76u)));  goto L_0026BDC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BDA4u);  if (depth < kMaxDepth) unit_005B(c, 12u, depth + 1u); else { c.pc = 0x0028C120u; return; } if (c.pc != 0x0026BDA4u) [[unlikely]] return; }
L_0026BDA4:
    set32(c.r[4], ld32((c.r[20].w[0] + 144u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BDC0u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0026BDC0u) [[unlikely]] return; }
L_0026BDC0:
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_0026BDC4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 1104u)));  if (t) { goto L_0026BDD8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 2;
L_0026BDD8:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BDE8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 344u, depth + 1u); else { c.pc = 0x0028B8A0u; return; } if (c.pc != 0x0026BDE8u) [[unlikely]] return; }
L_0026BDE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BDF0u); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_005A(c, 290u, depth + 1u); else { c.pc = 0x0028AF40u; return; } if (c.pc != 0x0026BDF0u) [[unlikely]] return; }
L_0026BDF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0026BDF4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 640u);  c.pc = t; return; }
L_0026BE20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BE34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 193u, depth + 1u); else { c.pc = 0x00289A70u; return; } if (c.pc != 0x0026BE34u) [[unlikely]] return; }
L_0026BE34:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 5ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026BE50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BE74u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_005A(c, 194u, depth + 1u); else { c.pc = 0x00289A80u; return; } if (c.pc != 0x0026BE74u) [[unlikely]] return; }
L_0026BE74:
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0026BFC0; }
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[3], 0u + 13u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_0026BE9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));  if (t) { goto L_0026BF8C; } }
L_0026BE9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BEA4u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0026BEA4u) [[unlikely]] return; }
L_0026BEA4:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026BF88; } }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 2;
L_0026BEBC:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[3].w[0] + 148u);
    set32(c.r[3], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0026BF7C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[20] = ld32((c.r[4].w[0] + 80u));  goto L_0026BEF8; }
    c.f[20] = 0u;
    c.budget -= 1;
L_0026BEF8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BF04u); c.f[21] = ld32((c.r[4].w[0] + 80u));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x00158EF0u; return; } if (c.pc != 0x0026BF04u) [[unlikely]] return; }
L_0026BF04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[21], c.f[20]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_0026BF58; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[4].w[0] + 80u));  goto L_0026BF48; }
    c.f[1] = 0u;
    c.budget -= 1;
L_0026BF48:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[2].w[0] + 80u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[12] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_0026BF70; } }
L_0026BF58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BF60u);  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x00158EF0u; return; } if (c.pc != 0x0026BF60u) [[unlikely]] return; }
L_0026BF60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[12] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
L_0026BF70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BF78u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x00158EB0u; return; } if (c.pc != 0x0026BF78u) [[unlikely]] return; }
L_0026BF78:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0026BF7C:
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BEBCu | kUnwind; return; } goto L_0026BEBC; }
L_0026BF88:
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
L_0026BF8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_0026BFB0; }
    c.f[1] = 0u;
    c.budget -= 1;
L_0026BFB0:
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 104u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 4;
L_0026BFC0:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026BFE0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    [[clang::musttail]] return unit_0053(c, 1u, depth);
}

}
