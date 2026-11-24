#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0022[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0,
    0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0,
    0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0,
    0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109,
    0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0,
    142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0,
    0, 146, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0,
    0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0,
    0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0,
    0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204,
    0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0,
    0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    240, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0,
    0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0,
    0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290,
    0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    317, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321,
    0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0,
    326, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0,
    0, 0, 0, 0, 0, 333, 0, 334, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0,
    0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0,
    0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0,
    0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0,
    0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0,
    0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 376, 0, 377, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0,
    0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 389, 0, 390, 0, 391, 0, 0,
    0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 396,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0022(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001A8000;
    case 2u: goto L_001A8010;
    case 3u: goto L_001A8058;
    case 4u: goto L_001A808C;
    case 5u: goto L_001A80A4;
    case 6u: goto L_001A80F0;
    case 7u: goto L_001A8110;
    case 8u: goto L_001A8164;
    case 9u: goto L_001A8170;
    case 10u: goto L_001A81B0;
    case 11u: goto L_001A81E0;
    case 12u: goto L_001A820C;
    case 13u: goto L_001A821C;
    case 14u: goto L_001A8228;
    case 15u: goto L_001A823C;
    case 16u: goto L_001A8260;
    case 17u: goto L_001A8280;
    case 18u: goto L_001A82B0;
    case 19u: goto L_001A82DC;
    case 20u: goto L_001A82EC;
    case 21u: goto L_001A82FC;
    case 22u: goto L_001A8330;
    case 23u: goto L_001A8350;
    case 24u: goto L_001A83A4;
    case 25u: goto L_001A83B0;
    case 26u: goto L_001A83F4;
    case 27u: goto L_001A8438;
    case 28u: goto L_001A844C;
    case 29u: goto L_001A8460;
    case 30u: goto L_001A846C;
    case 31u: goto L_001A8480;
    case 32u: goto L_001A84A4;
    case 33u: goto L_001A84E0;
    case 34u: goto L_001A84F8;
    case 35u: goto L_001A850C;
    case 36u: goto L_001A8520;
    case 37u: goto L_001A8550;
    case 38u: goto L_001A8580;
    case 39u: goto L_001A8594;
    case 40u: goto L_001A85A4;
    case 41u: goto L_001A85BC;
    case 42u: goto L_001A85C4;
    case 43u: goto L_001A85CC;
    case 44u: goto L_001A869C;
    case 45u: goto L_001A86CC;
    case 46u: goto L_001A86F8;
    case 47u: goto L_001A8708;
    case 48u: goto L_001A8720;
    case 49u: goto L_001A8740;
    case 50u: goto L_001A875C;
    case 51u: goto L_001A876C;
    case 52u: goto L_001A8784;
    case 53u: goto L_001A878C;
    case 54u: goto L_001A87E8;
    case 55u: goto L_001A8810;
    case 56u: goto L_001A8820;
    case 57u: goto L_001A8834;
    case 58u: goto L_001A885C;
    case 59u: goto L_001A886C;
    case 60u: goto L_001A88A0;
    case 61u: goto L_001A88D4;
    case 62u: goto L_001A88FC;
    case 63u: goto L_001A8910;
    case 64u: goto L_001A8934;
    case 65u: goto L_001A8960;
    case 66u: goto L_001A8994;
    case 67u: goto L_001A89BC;
    case 68u: goto L_001A89F0;
    case 69u: goto L_001A8A1C;
    case 70u: goto L_001A8A44;
    case 71u: goto L_001A8A54;
    case 72u: goto L_001A8AB0;
    case 73u: goto L_001A8AD8;
    case 74u: goto L_001A8B00;
    case 75u: goto L_001A8B10;
    case 76u: goto L_001A8B80;
    case 77u: goto L_001A8BA8;
    case 78u: goto L_001A8BD0;
    case 79u: goto L_001A8BF0;
    case 80u: goto L_001A8C28;
    case 81u: goto L_001A8C40;
    case 82u: goto L_001A8C50;
    case 83u: goto L_001A8C88;
    case 84u: goto L_001A8CB0;
    case 85u: goto L_001A8CF4;
    case 86u: goto L_001A8D00;
    case 87u: goto L_001A8D1C;
    case 88u: goto L_001A8D8C;
    case 89u: goto L_001A8DA0;
    case 90u: goto L_001A8DE0;
    case 91u: goto L_001A8E70;
    case 92u: goto L_001A8E80;
    case 93u: goto L_001A8EF0;
    case 94u: goto L_001A8F14;
    case 95u: goto L_001A8F20;
    case 96u: goto L_001A8F30;
    case 97u: goto L_001A8F78;
    case 98u: goto L_001A8FB0;
    case 99u: goto L_001A8FC4;
    case 100u: goto L_001A8FF0;
    case 101u: goto L_001A900C;
    case 102u: goto L_001A9020;
    case 103u: goto L_001A9030;
    case 104u: goto L_001A9050;
    case 105u: goto L_001A9064;
    case 106u: goto L_001A9070;
    case 107u: goto L_001A90C0;
    case 108u: goto L_001A90E8;
    case 109u: goto L_001A90FC;
    case 110u: goto L_001A9108;
    case 111u: goto L_001A913C;
    case 112u: goto L_001A9148;
    case 113u: goto L_001A9190;
    case 114u: goto L_001A91D8;
    case 115u: goto L_001A91F0;
    case 116u: goto L_001A9200;
    case 117u: goto L_001A9270;
    case 118u: goto L_001A92C0;
    case 119u: goto L_001A92D8;
    case 120u: goto L_001A92E8;
    case 121u: goto L_001A931C;
    case 122u: goto L_001A9328;
    case 123u: goto L_001A9390;
    case 124u: goto L_001A93B8;
    case 125u: goto L_001A9410;
    case 126u: goto L_001A9444;
    case 127u: goto L_001A9470;
    case 128u: goto L_001A9480;
    case 129u: goto L_001A94C0;
    case 130u: goto L_001A94CC;
    case 131u: goto L_001A9520;
    case 132u: goto L_001A953C;
    case 133u: goto L_001A9548;
    case 134u: goto L_001A9590;
    case 135u: goto L_001A95B0;
    case 136u: goto L_001A95C4;
    case 137u: goto L_001A95D0;
    case 138u: goto L_001A9600;
    case 139u: goto L_001A963C;
    case 140u: goto L_001A9658;
    case 141u: goto L_001A9664;
    case 142u: goto L_001A9680;
    case 143u: goto L_001A968C;
    case 144u: goto L_001A96B0;
    case 145u: goto L_001A96E0;
    case 146u: goto L_001A9704;
    case 147u: goto L_001A9714;
    case 148u: goto L_001A9720;
    case 149u: goto L_001A9738;
    case 150u: goto L_001A9744;
    case 151u: goto L_001A9770;
    case 152u: goto L_001A97BC;
    case 153u: goto L_001A97D0;
    case 154u: goto L_001A982C;
    case 155u: goto L_001A9850;
    case 156u: goto L_001A9874;
    case 157u: goto L_001A98B0;
    case 158u: goto L_001A9908;
    case 159u: goto L_001A992C;
    case 160u: goto L_001A9970;
    case 161u: goto L_001A99EC;
    case 162u: goto L_001A9A1C;
    case 163u: goto L_001A9A64;
    case 164u: goto L_001A9A84;
    case 165u: goto L_001A9AB0;
    case 166u: goto L_001A9AF0;
    case 167u: goto L_001A9BD0;
    case 168u: goto L_001A9C10;
    case 169u: goto L_001A9C3C;
    case 170u: goto L_001A9C74;
    case 171u: goto L_001A9C9C;
    case 172u: goto L_001A9CC8;
    case 173u: goto L_001A9CD4;
    case 174u: goto L_001A9CE4;
    case 175u: goto L_001A9D18;
    case 176u: goto L_001A9D24;
    case 177u: goto L_001A9D64;
    case 178u: goto L_001A9D78;
    case 179u: goto L_001A9D88;
    case 180u: goto L_001A9D98;
    case 181u: goto L_001A9DD0;
    case 182u: goto L_001A9E0C;
    case 183u: goto L_001A9E1C;
    case 184u: goto L_001A9E30;
    case 185u: goto L_001A9E78;
    case 186u: goto L_001A9E84;
    case 187u: goto L_001A9E90;
    case 188u: goto L_001A9EC4;
    case 189u: goto L_001A9F04;
    case 190u: goto L_001A9F28;
    case 191u: goto L_001A9F60;
    case 192u: goto L_001A9FBC;
    case 193u: goto L_001A9FE8;
    case 194u: goto L_001AA018;
    case 195u: goto L_001AA04C;
    case 196u: goto L_001AA05C;
    case 197u: goto L_001AA088;
    case 198u: goto L_001AA0B8;
    case 199u: goto L_001AA10C;
    case 200u: goto L_001AA140;
    case 201u: goto L_001AA1A0;
    case 202u: goto L_001AA1B0;
    case 203u: goto L_001AA1E4;
    case 204u: goto L_001AA1FC;
    case 205u: goto L_001AA20C;
    case 206u: goto L_001AA240;
    case 207u: goto L_001AA270;
    case 208u: goto L_001AA2CC;
    case 209u: goto L_001AA2E4;
    case 210u: goto L_001AA2F4;
    case 211u: goto L_001AA324;
    case 212u: goto L_001AA340;
    case 213u: goto L_001AA35C;
    case 214u: goto L_001AA370;
    case 215u: goto L_001AA38C;
    case 216u: goto L_001AA3AC;
    case 217u: goto L_001AA3D0;
    case 218u: goto L_001AA3EC;
    case 219u: goto L_001AA3F4;
    case 220u: goto L_001AA428;
    case 221u: goto L_001AA440;
    case 222u: goto L_001AA44C;
    case 223u: goto L_001AA46C;
    case 224u: goto L_001AA4A8;
    case 225u: goto L_001AA4D0;
    case 226u: goto L_001AA508;
    case 227u: goto L_001AA53C;
    case 228u: goto L_001AA550;
    case 229u: goto L_001AA590;
    case 230u: goto L_001AA5C8;
    case 231u: goto L_001AA5D8;
    case 232u: goto L_001AA618;
    case 233u: goto L_001AA628;
    case 234u: goto L_001AA658;
    case 235u: goto L_001AA670;
    case 236u: goto L_001AA680;
    case 237u: goto L_001AA6C0;
    case 238u: goto L_001AA6D8;
    case 239u: goto L_001AA710;
    case 240u: goto L_001AA780;
    case 241u: goto L_001AA788;
    case 242u: goto L_001AA7B0;
    case 243u: goto L_001AA7E0;
    case 244u: goto L_001AA7F8;
    case 245u: goto L_001AA810;
    case 246u: goto L_001AA858;
    case 247u: goto L_001AA870;
    case 248u: goto L_001AA890;
    case 249u: goto L_001AA8B8;
    case 250u: goto L_001AA908;
    case 251u: goto L_001AA920;
    case 252u: goto L_001AA948;
    case 253u: goto L_001AA990;
    case 254u: goto L_001AA998;
    case 255u: goto L_001AA9C0;
    case 256u: goto L_001AA9E8;
    case 257u: goto L_001AAA04;
    case 258u: goto L_001AAA18;
    case 259u: goto L_001AAA30;
    case 260u: goto L_001AAA6C;
    case 261u: goto L_001AAA98;
    case 262u: goto L_001AAAA0;
    case 263u: goto L_001AAAC0;
    case 264u: goto L_001AAB38;
    case 265u: goto L_001AAB54;
    case 266u: goto L_001AAB84;
    case 267u: goto L_001AABB0;
    case 268u: goto L_001AABE8;
    case 269u: goto L_001AAC00;
    case 270u: goto L_001AAC74;
    case 271u: goto L_001AACAC;
    case 272u: goto L_001AACE4;
    case 273u: goto L_001AAD10;
    case 274u: goto L_001AAD1C;
    case 275u: goto L_001AAD54;
    case 276u: goto L_001AAD8C;
    case 277u: goto L_001AADA4;
    case 278u: goto L_001AADD0;
    case 279u: goto L_001AAE00;
    case 280u: goto L_001AAE34;
    case 281u: goto L_001AAE4C;
    case 282u: goto L_001AAE60;
    case 283u: goto L_001AAE78;
    case 284u: goto L_001AAEB0;
    case 285u: goto L_001AAEC0;
    case 286u: goto L_001AAEF0;
    case 287u: goto L_001AAF1C;
    case 288u: goto L_001AAF50;
    case 289u: goto L_001AAF68;
    case 290u: goto L_001AAF7C;
    case 291u: goto L_001AAF94;
    case 292u: goto L_001AAFD0;
    case 293u: goto L_001AAFE0;
    case 294u: goto L_001AAFFC;
    case 295u: goto L_001AB030;
    case 296u: goto L_001AB048;
    case 297u: goto L_001AB05C;
    case 298u: goto L_001AB074;
    case 299u: goto L_001AB0A0;
    case 300u: goto L_001AB0B8;
    case 301u: goto L_001AB140;
    case 302u: goto L_001AB15C;
    case 303u: goto L_001AB170;
    case 304u: goto L_001AB1B0;
    case 305u: goto L_001AB1E4;
    case 306u: goto L_001AB1F8;
    case 307u: goto L_001AB228;
    case 308u: goto L_001AB25C;
    case 309u: goto L_001AB2A8;
    case 310u: goto L_001AB2C4;
    case 311u: goto L_001AB2E8;
    case 312u: goto L_001AB32C;
    case 313u: goto L_001AB370;
    case 314u: goto L_001AB3C0;
    case 315u: goto L_001AB40C;
    case 316u: goto L_001AB440;
    case 317u: goto L_001AB480;
    case 318u: goto L_001AB48C;
    case 319u: goto L_001AB4C4;
    case 320u: goto L_001AB4E0;
    case 321u: goto L_001AB4FC;
    case 322u: goto L_001AB50C;
    case 323u: goto L_001AB530;
    case 324u: goto L_001AB540;
    case 325u: goto L_001AB570;
    case 326u: goto L_001AB580;
    case 327u: goto L_001AB5A4;
    case 328u: goto L_001AB5AC;
    case 329u: goto L_001AB5B4;
    case 330u: goto L_001AB5C8;
    case 331u: goto L_001AB5E0;
    case 332u: goto L_001AB5F0;
    case 333u: goto L_001AB614;
    case 334u: goto L_001AB61C;
    case 335u: goto L_001AB624;
    case 336u: goto L_001AB638;
    case 337u: goto L_001AB650;
    case 338u: goto L_001AB660;
    case 339u: goto L_001AB674;
    case 340u: goto L_001AB68C;
    case 341u: goto L_001AB6E8;
    case 342u: goto L_001AB6F8;
    case 343u: goto L_001AB710;
    case 344u: goto L_001AB730;
    case 345u: goto L_001AB784;
    case 346u: goto L_001AB794;
    case 347u: goto L_001AB7A8;
    case 348u: goto L_001AB7BC;
    case 349u: goto L_001AB7D0;
    case 350u: goto L_001AB7E4;
    case 351u: goto L_001AB7F0;
    case 352u: goto L_001AB804;
    case 353u: goto L_001AB81C;
    case 354u: goto L_001AB840;
    case 355u: goto L_001AB8B0;
    case 356u: goto L_001AB8D4;
    case 357u: goto L_001AB8E4;
    case 358u: goto L_001AB8F0;
    case 359u: goto L_001AB904;
    case 360u: goto L_001AB918;
    case 361u: goto L_001AB930;
    case 362u: goto L_001AB93C;
    case 363u: goto L_001AB950;
    case 364u: goto L_001AB960;
    case 365u: goto L_001AB98C;
    case 366u: goto L_001AB9D0;
    case 367u: goto L_001AB9E4;
    case 368u: goto L_001AB9F8;
    case 369u: goto L_001ABA04;
    case 370u: goto L_001ABA40;
    case 371u: goto L_001ABA54;
    case 372u: goto L_001ABA80;
    case 373u: goto L_001ABA94;
    case 374u: goto L_001ABAD8;
    case 375u: goto L_001ABAF0;
    case 376u: goto L_001ABB84;
    case 377u: goto L_001ABB8C;
    case 378u: goto L_001ABB9C;
    case 379u: goto L_001ABBA4;
    case 380u: goto L_001ABBE4;
    case 381u: goto L_001ABC04;
    case 382u: goto L_001ABC24;
    case 383u: goto L_001ABC40;
    case 384u: goto L_001ABC5C;
    case 385u: goto L_001ABC7C;
    case 386u: goto L_001ABCB4;
    case 387u: goto L_001ABCC8;
    case 388u: goto L_001ABCDC;
    case 389u: goto L_001ABCE4;
    case 390u: goto L_001ABCEC;
    case 391u: goto L_001ABCF4;
    case 392u: goto L_001ABD08;
    case 393u: goto L_001ABD1C;
    case 394u: goto L_001ABD34;
    case 395u: goto L_001ABD60;
    case 396u: goto L_001ABD7C;
    case 397u: goto L_001ABDD0;
    case 398u: goto L_001ABDFC;
    case 399u: goto L_001ABE50;
    case 400u: goto L_001ABE5C;
    case 401u: goto L_001ABEB0;
    case 402u: goto L_001ABED4;
    case 403u: goto L_001ABEE0;
    case 404u: goto L_001ABF20;
    case 405u: goto L_001ABF30;
    case 406u: goto L_001ABF68;
    case 407u: goto L_001ABFD0;
    default: bad_entry(c, 0x001A8000u); return;
    }
L_001A8000:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A8010:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A803C; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_001A803C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 60u), c.r[5].w[0]);  if (t) { goto L_001A80AC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = c.r[5].d[0] << 32;  goto L_001A80B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8058u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001A8058u) [[unlikely]] return; }
L_001A8058:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 60u)));  if (t) { goto L_001A80A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001A8070; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 60u), c.r[5].w[0]);  if (t) { goto L_001A80AC; } }
L_001A8070:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[6].d[0] = c.r[17].d[0] + 0ull;  goto L_001A8098; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A808Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001A808Cu) [[unlikely]] return; }
L_001A808C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001A80A8; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001A8098:
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A80A4u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001A80A4u) [[unlikely]] return; }
L_001A80A4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001A80A8:
    st32((c.r[29].w[0] + 60u), c.r[5].w[0]);
    c.budget -= 1;
L_001A80AC:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.budget -= 1;
L_001A80B0:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[3].w[0]);  goto L_001A80CC; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_001A80CC:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001A80F4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001A80F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A80F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001A80F0u) [[unlikely]] return; }
L_001A80F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001A80F4:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A8110:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 48u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[10].d[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 88u), c.r[11].d[0]);  if (t) { goto L_001A8144; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001A8150; } }
L_001A8144:
    set32(c.r[2], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 3;
L_001A8150:
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8164u); set32(c.r[6], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0022(c, 9u, depth + 1u); else { c.pc = 0x001A8170u; return; } if (c.pc != 0x001A8164u) [[unlikely]] return; }
L_001A8164:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001A8170:
    set32(c.r[29], c.r[29].w[0] - 624u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], 0u + 512u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A81B0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0022(c, 22u, depth + 1u); else { c.pc = 0x001A8330u; return; } if (c.pc != 0x001A81B0u) [[unlikely]] return; }
L_001A81B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].sd[0] < 0) { set32(c.r[18], 0u + 1024u);  goto L_001A821C; }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 112u);  goto L_001A81E4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001A81E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A81E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001A81E0u) [[unlikely]] return; }
L_001A81E0:
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_001A81E4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001A8210; }
    c.budget -= 2;
    if (c.r[16].sd[0] > 0) { c.r[6].d[0] = c.r[16].d[0] + 0ull;  goto L_001A8200; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8210; } }
L_001A8200:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A820Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001A820Cu) [[unlikely]] return; }
L_001A820C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001A8210:
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_001A8308; } }
L_001A821C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8228u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x001A8228u) [[unlikely]] return; }
L_001A8228:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001A826C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A823Cu); set32(c.r[4], ld32((c.r[28].w[0] - 31908u)));  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x001A823Cu) [[unlikely]] return; }
L_001A823C:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0]), 0u);  goto L_001A8304; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001A8260; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8260u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001A8260u) [[unlikely]] return; }
L_001A8260:
    st32((c.r[20].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8304; } }
L_001A826C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8280u); c.r[8].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 22u, depth + 1u); else { c.pc = 0x001A8330u; return; } if (c.pc != 0x001A8280u) [[unlikely]] return; }
L_001A8280:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].sd[0] < 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001A82F4; }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A82B0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001A82B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A82B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001A82B0u) [[unlikely]] return; }
L_001A82B0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001A82DC; }
    c.budget -= 2;
    if (c.r[16].sd[0] > 0) { c.r[6].d[0] = c.r[16].d[0] + 0ull;  goto L_001A82CC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A82DC; } }
L_001A82CC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A82DCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001A82DCu) [[unlikely]] return; }
L_001A82DC:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A82ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001A82ECu) [[unlikely]] return; }
L_001A82EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8304; } }
L_001A82F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A82FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001A82FCu) [[unlikely]] return; }
L_001A82FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A821Cu | kUnwind; return; } goto L_001A821C; } }
L_001A8304:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_001A8308:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 624u);  c.pc = t; return; }
L_001A8330:
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[6].w[0] - 1u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 8;
    { c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014BE60u | kUnwind; return; } [[clang::musttail]] return unit_000A(c, 326u, depth); }
L_001A8350:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 48u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[10].d[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 88u), c.r[11].d[0]);  if (t) { goto L_001A8384; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001A8390; } }
L_001A8384:
    set32(c.r[2], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 3;
L_001A8390:
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A83A4u); set32(c.r[6], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0022(c, 25u, depth + 1u); else { c.pc = 0x001A83B0u; return; } if (c.pc != 0x001A83A4u) [[unlikely]] return; }
L_001A83A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001A83B0:
    set32(c.r[29], c.r[29].w[0] - 608u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 511u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[29].w[0] + 607u), static_cast<std::uint8_t>(0u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A83F4u); set32(c.r[16], 0u + 512u);  if (depth < kMaxDepth) unit_000A(c, 326u, depth + 1u); else { c.pc = 0x0014BE60u; return; } if (c.pc != 0x001A83F4u) [[unlikely]] return; }
L_001A83F4:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[7].sd[0] < 0) { set32(c.r[17], c.r[16].w[0] << 1);  goto L_001A8460; }
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], ld32((c.r[20].w[0])));  if (t) { goto L_001A8450; } }
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] > 0;  if (t) { goto L_001A841C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[5].w[0]);  if (t) { goto L_001A8454; } }
L_001A841C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001A8444; }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8438u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001A8438u) [[unlikely]] return; }
L_001A8438:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001A8450; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001A8444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A844Cu);  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001A844Cu) [[unlikely]] return; }
L_001A844C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001A8450:
    st32((c.r[20].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_001A8454:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001A852C; } }
    set32(c.r[17], c.r[16].w[0] << 1);
    c.budget -= 1;
L_001A8460:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A846Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x001A846Cu) [[unlikely]] return; }
L_001A846C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);  goto L_001A848C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8480u); set32(c.r[4], ld32((c.r[28].w[0] - 31908u)));  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x001A8480u) [[unlikely]] return; }
L_001A8480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8528; } }
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_001A848C:
    set32(c.r[5], c.r[17].w[0] - 1u);
    st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A84A4u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 326u, depth + 1u); else { c.pc = 0x0014BE60u; return; } if (c.pc != 0x001A84A4u) [[unlikely]] return; }
L_001A84A4:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001A8518; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[5], ld32((c.r[20].w[0])));  if (t) { goto L_001A84FC; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001A84C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[5].w[0]);  if (t) { goto L_001A8500; } }
L_001A84C4:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001A84EC; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A84E0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001A84E0u) [[unlikely]] return; }
L_001A84E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001A84FC; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001A84EC:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A84F8u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001A84F8u) [[unlikely]] return; }
L_001A84F8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001A84FC:
    st32((c.r[20].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_001A8500:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A850Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001A850Cu) [[unlikely]] return; }
L_001A850C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8528; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001A8518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8520u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001A8520u) [[unlikely]] return; }
L_001A8520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A8460u | kUnwind; return; } goto L_001A8460; } }
L_001A8528:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001A852C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 608u);  c.pc = t; return; }
L_001A8550:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8580u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x001A8580u) [[unlikely]] return; }
L_001A8580:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A859C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8594u); set32(c.r[4], ld32((c.r[28].w[0] - 31908u)));  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x001A8594u) [[unlikely]] return; }
L_001A8594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001A8724; } }
L_001A859C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A85A4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0022(c, 78u, depth + 1u); else { c.pc = 0x001A8BD0u; return; } if (c.pc != 0x001A85A4u) [[unlikely]] return; }
L_001A85A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A85BCu); st32((c.r[29].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 81u, depth + 1u); else { c.pc = 0x001A8C40u; return; } if (c.pc != 0x001A85BCu) [[unlikely]] return; }
L_001A85BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A85C4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0022(c, 84u, depth + 1u); else { c.pc = 0x001A8CB0u; return; } if (c.pc != 0x001A85C4u) [[unlikely]] return; }
L_001A85C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A869C; } }
L_001A85CC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_001A8694; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 76u)));  goto L_001A8680; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[29].w[0] + 76u));  goto L_001A85F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8690; } }
L_001A85F4:
    c.r[2].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[3].sd[0] < 160ll ? 1ull : 0ull;  goto L_001A8638; }
    c.r[1].d[0] = c.r[3].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A8634; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 3904u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 64u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 63u)));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { goto L_001A8690; } }
L_001A8634:
    c.r[2].d[0] = c.r[3].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 1;
L_001A8638:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  goto L_001A8678; }
    c.r[1].d[0] = c.r[3].sd[0] < 224ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A8674; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 4112u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 320u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 319u)));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { goto L_001A8690; } }
L_001A8674:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001A8678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_001A8690; } }
L_001A8680:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 77u)));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.budget -= 4;
L_001A8690:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_001A8694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A869Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001A869Cu) [[unlikely]] return; }
L_001A869C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 80u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A85CCu | kUnwind; return; } goto L_001A85CC; }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A86CC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001A86CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A86CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001A86CCu) [[unlikely]] return; }
L_001A86CC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001A86F8; }
    set32(c.r[6], c.r[16].w[0] - c.r[17].w[0]);
    c.budget -= 3;
    if (c.r[6].sd[0] > 0) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001A86EC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A86F8; } }
L_001A86EC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A86F8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001A86F8u) [[unlikely]] return; }
L_001A86F8:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8708u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001A8708u) [[unlikely]] return; }
L_001A8708:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8720u); st32((c.r[29].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001A8720u) [[unlikely]] return; }
L_001A8720:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001A8724:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001A8740:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A875Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 68u, depth + 1u); else { c.pc = 0x001A89F0u; return; } if (c.pc != 0x001A875Cu) [[unlikely]] return; }
L_001A875C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_001A8810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A876Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0022(c, 78u, depth + 1u); else { c.pc = 0x001A8BD0u; return; } if (c.pc != 0x001A876Cu) [[unlikely]] return; }
L_001A876C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10264u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8784u); st32((c.r[29].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 81u, depth + 1u); else { c.pc = 0x001A8C40u; return; } if (c.pc != 0x001A8784u) [[unlikely]] return; }
L_001A8784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_001A87EC; } }
L_001A878C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 32u);  goto L_001A87E0; }
    c.r[3].d[0] = ld8((c.r[29].w[0] + 44u));
    c.r[2].d[0] = c.r[3].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A87DC; } }
    c.r[1].d[0] = c.r[3].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A87DC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001A87CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + 12u);  if (t) { goto L_001A87D0; } }
L_001A87CC:
    set32(c.r[3], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001A87D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_001A87DC:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_001A87E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A87E8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001A87E8u) [[unlikely]] return; }
L_001A87E8:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_001A87EC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A878Cu | kUnwind; return; } goto L_001A878C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8810u); st32((c.r[29].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001A8810u) [[unlikely]] return; }
L_001A8810:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A8820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 16u);  if (t) { goto L_001A8838; } }
L_001A8834:
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_001A8838:
    c.r[1].d[0] = c.r[5].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A8834u | kUnwind; return; } goto L_001A8834; } }
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A885Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x001A885Cu) [[unlikely]] return; }
L_001A885C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0]), c.r[16].w[0]);  goto L_001A8874; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A886Cu); set32(c.r[4], ld32((c.r[28].w[0] - 31908u)));  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x001A886Cu) [[unlikely]] return; }
L_001A886C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A8884; } }
L_001A8874:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001A8884:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A88A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].d[0] = c.r[7].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001A88CC; } }
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001A88CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 16u);  if (t) { goto L_001A88D8; } }
L_001A88D4:
    set32(c.r[17], c.r[17].w[0] << 1);
    c.budget -= 1;
L_001A88D8:
    c.r[1].d[0] = c.r[7].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A88D4u | kUnwind; return; } goto L_001A88D4; } }
    set32(c.r[4], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A88FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x001A88FCu) [[unlikely]] return; }
L_001A88FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { st32((c.r[16].w[0]), c.r[17].w[0]);  goto L_001A8918; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8910u); set32(c.r[4], ld32((c.r[28].w[0] - 31908u)));  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x001A8910u) [[unlikely]] return; }
L_001A8910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A8940; } }
L_001A8918:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8934u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 76u, depth + 1u); else { c.pc = 0x00145458u; return; } if (c.pc != 0x001A8934u) [[unlikely]] return; }
L_001A8934:
    set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[3].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_001A8940:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001A8960:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[17], c.r[16].w[0] + c.r[19].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8994u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 68u, depth + 1u); else { c.pc = 0x001A89F0u; return; } if (c.pc != 0x001A8994u) [[unlikely]] return; }
L_001A8994:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);  goto L_001A89A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A89CC; } }
L_001A89A8:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] + 12u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A89BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 76u, depth + 1u); else { c.pc = 0x00145458u; return; } if (c.pc != 0x001A89BCu) [[unlikely]] return; }
L_001A89BC:
    set32(c.r[3], c.r[16].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 4;
L_001A89CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001A89F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001A8A74; } }
    c.budget -= 2;
    if (c.r[7].sd[0] > 0) { set32(c.r[16], 0u + 16u);  goto L_001A8A20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A8BB0; } }
L_001A8A1C:
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_001A8A20:
    c.r[1].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A8A1Cu | kUnwind; return; } goto L_001A8A1C; } }
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8A44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x001A8A44u) [[unlikely]] return; }
L_001A8A44:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0]), c.r[16].w[0]);  goto L_001A8A5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8A54u); set32(c.r[4], ld32((c.r[28].w[0] - 31908u)));  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x001A8A54u) [[unlikely]] return; }
L_001A8A54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A8A6C; } }
L_001A8A5C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001A8A6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001A8BB4; } }
L_001A8A74:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A8AB8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[5], c.r[16].w[0] + 12u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_001A8AA0; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] > 0;  if (t) { goto L_001A8AA8; } }
L_001A8AA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A8AB0; } }
L_001A8AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8AB0u);  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001A8AB0u) [[unlikely]] return; }
L_001A8AB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8BB0; } }
L_001A8AB8:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] > 0;  if (t) { goto L_001A8AC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A8BB0; } }
L_001A8AC8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001A8B30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 16u);  if (t) { goto L_001A8ADC; } }
L_001A8AD8:
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_001A8ADC:
    c.r[1].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A8AD8u | kUnwind; return; } goto L_001A8AD8; } }
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8B00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x001A8B00u) [[unlikely]] return; }
L_001A8B00:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0]), c.r[16].w[0]);  goto L_001A8B18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8B10u); set32(c.r[4], ld32((c.r[28].w[0] - 31908u)));  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x001A8B10u) [[unlikely]] return; }
L_001A8B10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A8B28; } }
L_001A8B18:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001A8B28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001A8BAC; } }
L_001A8B30:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 4u)));  goto L_001A8B58; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A8B54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8BAC; } }
L_001A8B54:
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_001A8B58:
    set32(c.r[5], c.r[16].w[0] + 12u);
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_001A8B84; }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] > 0;  if (t) { goto L_001A8B78; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8B84; } }
L_001A8B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8B80u);  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001A8B80u) [[unlikely]] return; }
L_001A8B80:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001A8B84:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = c.r[17].d[0] + 0ull;  goto L_001A8BAC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001A8BA8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8BA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001A8BA8u) [[unlikely]] return; }
L_001A8BA8:
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001A8BAC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001A8BB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001A8BB4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A8BD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 10280u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_001A8BF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001A8C2C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 10280u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_001A8C28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8C28u);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001A8C28u) [[unlikely]] return; }
L_001A8C28:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001A8C2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A8C40:
    c.budget -= 2;
    { st32((c.r[4].w[0] + 4u), c.r[5].w[0]);  goto L_001A8CB0; }
L_001A8C50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 12u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8C88u); set32(c.r[4], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001A8C88u) [[unlikely]] return; }
L_001A8C88:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A8CB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { st32((c.r[4].w[0] + 8u), 0u);  goto L_001A8CCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A8CF4; } }
L_001A8CCC:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 31912u)));  goto L_001A8CE0; }
    set32(c.r[3], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001A8CE0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8CF4u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A8CF4u) [[unlikely]] return; }
L_001A8CF4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A8D00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A8D5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A8D8C; } }
L_001A8D1C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  goto L_001A8D44; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  goto L_001A8D38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A8D50; } }
L_001A8D38:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001A8D58; } }
L_001A8D44:
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001A8D58; } }
L_001A8D50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001A8D90; } }
L_001A8D58:
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 1;
L_001A8D5C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A8D1Cu | kUnwind; return; } goto L_001A8D1C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 31912u)));  goto L_001A8D78; }
    set32(c.r[3], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001A8D78:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8D8Cu); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A8D8Cu) [[unlikely]] return; }
L_001A8D8C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001A8D90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A8DA0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[4].w[0] + 16u), 0u);  goto L_001A8DC0; }
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A8DD0; } }
L_001A8DC0:
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 13u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001A8DD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A8DE0:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[3].sd[0] < 129ll ? 1ull : 0ull;  goto L_001A8E00; }
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A8E60; } }
L_001A8E00:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[3].sd[0] < 224ll ? 1ull : 0ull;  goto L_001A8E18; }
    c.r[1].d[0] = c.r[3].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001A8E30; }
    c.r[2].d[0] = c.r[3].sd[0] < 224ll ? 1ull : 0ull;
    c.budget -= 1;
L_001A8E18:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[4].w[0] + 16u), 0u);  goto L_001A8E50; }
    c.r[1].d[0] = c.r[3].sd[0] < 253ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A8E4C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001A8E30:
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    st8((c.r[4].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 14u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A8E60; } }
L_001A8E4C:
    st32((c.r[4].w[0] + 16u), 0u);
    c.budget -= 1;
L_001A8E50:
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 13u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001A8E60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A8E70:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_001A8E80:
    set32(c.r[8], ld32((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 21324ull;
    set32(c.r[6], c.r[8].w[0] << 8);
    set32(c.r[7], c.r[8].w[0] << 24);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[8].w[0] >> 8);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[6].d[0] = c.r[3].d[0] | c.r[6].d[0];
    set32(c.r[3], c.r[8].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 15;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[5].w[0] + 8u)));  goto L_001A8EC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A8EE0; } }
L_001A8EC4:
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[6].w[0] + 4u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 7;
L_001A8EE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A8EF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = ld8((c.r[2].w[0]));  goto L_001A8F0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 192u);  if (t) { goto L_001A8F14; } }
L_001A8F0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8F14u);  if (depth < kMaxDepth) unit_0022(c, 95u, depth + 1u); else { c.pc = 0x001A8F20u; return; } if (c.pc != 0x001A8F14u) [[unlikely]] return; }
L_001A8F14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A8F20:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 192ull;  c.pc = t; return; }
L_001A8F30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], 0u + 128u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 76u), 0u);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[16].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[16].d[0] & 192ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001A8F94; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8F78u); set32(c.r[4], c.r[4].w[0] + 4296u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x001A8F78u) [[unlikely]] return; }
L_001A8F78:
    set32(c.r[3], 0u + 3u);
    st32((c.r[29].w[0] + 76u), 0u);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001A8FD4; } }
L_001A8F94:
    c.r[2].d[0] = c.r[16].d[0] & 12ull;
    set32(c.r[5], c.r[4].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8FB0u); c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0022(c, 166u, depth + 1u); else { c.pc = 0x001A9AF0u; return; } if (c.pc != 0x001A8FB0u) [[unlikely]] return; }
L_001A8FB0:
    c.r[6].d[0] = c.r[16].d[0] & 3ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8FC4u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 151u, depth + 1u); else { c.pc = 0x001A9770u; return; } if (c.pc != 0x001A8FC4u) [[unlikely]] return; }
L_001A8FC4:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_001A8FD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001A8FF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A900Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 153u, depth + 1u); else { c.pc = 0x001A97D0u; return; } if (c.pc != 0x001A900Cu) [[unlikely]] return; }
L_001A900C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001A9020; }
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9020u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 165u, depth + 1u); else { c.pc = 0x001A9AB0u; return; } if (c.pc != 0x001A9020u) [[unlikely]] return; }
L_001A9020:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A9030:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9050u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 153u, depth + 1u); else { c.pc = 0x001A97D0u; return; } if (c.pc != 0x001A9050u) [[unlikely]] return; }
L_001A9050:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 88u)));  goto L_001A9060; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A90A0; } }
L_001A9060:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A9064:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9070u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0022(c, 160u, depth + 1u); else { c.pc = 0x001A9970u; return; } if (c.pc != 0x001A9070u) [[unlikely]] return; }
L_001A9070:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001A90A0; }
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], 0u + 192u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A909C; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A9064u | kUnwind; return; } goto L_001A9064; } }
L_001A909C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001A90A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001A90C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A90E8u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0022(c, 153u, depth + 1u); else { c.pc = 0x001A97D0u; return; } if (c.pc != 0x001A90E8u) [[unlikely]] return; }
L_001A90E8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 104u)));  goto L_001A90F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A916C; } }
L_001A90F8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A90FC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9108u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0022(c, 160u, depth + 1u); else { c.pc = 0x001A9970u; return; } if (c.pc != 0x001A9108u) [[unlikely]] return; }
L_001A9108:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001A916C; }
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], 0u + 192u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A9168; } }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A90FCu | kUnwind; return; } goto L_001A90FC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A913Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 165u, depth + 1u); else { c.pc = 0x001A9AB0u; return; } if (c.pc != 0x001A913Cu) [[unlikely]] return; }
L_001A913C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9148u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x001A9148u) [[unlikely]] return; }
L_001A9148:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A915C; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001A915C:
    set32(c.r[6], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A90FCu | kUnwind; return; } goto L_001A90FC; } }
L_001A9168:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001A916C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001A9190:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[18].sd[0] >= 0; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001A91C8; } }
    st32((c.r[20].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), 0u);  if (t) { goto L_001A9248; } }
L_001A91C8:
    set32(c.r[6], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A91D8u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0022(c, 153u, depth + 1u); else { c.pc = 0x001A97D0u; return; } if (c.pc != 0x001A91D8u) [[unlikely]] return; }
L_001A91D8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 136u)));  goto L_001A91EC; }
    st32((c.r[20].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), 0u);  if (t) { goto L_001A9248; } }
L_001A91EC:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A91F0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9200u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 160u, depth + 1u); else { c.pc = 0x001A9970u; return; } if (c.pc != 0x001A9200u) [[unlikely]] return; }
L_001A9200:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { st32((c.r[20].w[0]), 0u);  goto L_001A9244; }
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[3], 0u + 192u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A9240; } }
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[18].d[0]) { set32(c.r[16], ld32((c.r[29].w[0] + 116u)));  goto L_001A9238; }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[20].w[0]), c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001A9248; } }
L_001A9238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A91F0u | kUnwind; return; } goto L_001A91F0; } }
L_001A9240:
    st32((c.r[20].w[0]), 0u);
    c.budget -= 1;
L_001A9244:
    st32((c.r[20].w[0] + 4u), 0u);
    c.budget -= 1;
L_001A9248:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001A9270:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[18].sd[0] >= 0; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001A92B0; } }
    st32((c.r[21].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 4u), 0u);  if (t) { goto L_001A9364; } }
L_001A92B0:
    set32(c.r[6], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A92C0u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0022(c, 153u, depth + 1u); else { c.pc = 0x001A97D0u; return; } if (c.pc != 0x001A92C0u) [[unlikely]] return; }
L_001A92C0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 152u)));  goto L_001A92D4; }
    st32((c.r[21].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 4u), 0u);  if (t) { goto L_001A9364; } }
L_001A92D4:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A92D8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A92E8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 160u, depth + 1u); else { c.pc = 0x001A9970u; return; } if (c.pc != 0x001A92E8u) [[unlikely]] return; }
L_001A92E8:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { st32((c.r[21].w[0]), 0u);  goto L_001A9360; }
    set32(c.r[4], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[3], 0u + 192u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A935C; } }
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 132u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A92D8u | kUnwind; return; } goto L_001A92D8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A931Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 165u, depth + 1u); else { c.pc = 0x001A9AB0u; return; } if (c.pc != 0x001A931Cu) [[unlikely]] return; }
L_001A931C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9328u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x001A9328u) [[unlikely]] return; }
L_001A9328:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A9350; } }
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001A9350; }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[21].w[0]), c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001A9364; } }
L_001A9350:
    set32(c.r[16], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A92D8u | kUnwind; return; } goto L_001A92D8; } }
L_001A935C:
    st32((c.r[21].w[0]), 0u);
    c.budget -= 1;
L_001A9360:
    st32((c.r[21].w[0] + 4u), 0u);
    c.budget -= 1;
L_001A9364:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001A9390:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A93B8u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0022(c, 160u, depth + 1u); else { c.pc = 0x001A9970u; return; } if (c.pc != 0x001A93B8u) [[unlikely]] return; }
L_001A93B8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 48u)));  goto L_001A93CC; }
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_001A93F0; } }
L_001A93CC:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_001A93E4; }
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_001A93F0; } }
L_001A93E4:
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 3;
L_001A93F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001A9410:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9444u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0022(c, 160u, depth + 1u); else { c.pc = 0x001A9970u; return; } if (c.pc != 0x001A9444u) [[unlikely]] return; }
L_001A9444:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 80u)));  goto L_001A9458; }
    st32((c.r[19].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), 0u);  if (t) { goto L_001A94F8; } }
L_001A9458:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[16], ld32((c.r[29].w[0] + 100u)));  goto L_001A9470; }
    st32((c.r[19].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), 0u);  if (t) { goto L_001A94F8; } }
L_001A9470:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9480u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 160u, depth + 1u); else { c.pc = 0x001A9970u; return; } if (c.pc != 0x001A9480u) [[unlikely]] return; }
L_001A9480:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 80u)));  goto L_001A9494; }
    st32((c.r[19].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), 0u);  if (t) { goto L_001A94F8; } }
L_001A9494:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A94AC; } }
    st32((c.r[19].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), 0u);  if (t) { goto L_001A94F8; } }
L_001A94AC:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 100u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A9470u | kUnwind; return; } goto L_001A9470; }
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A94C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 165u, depth + 1u); else { c.pc = 0x001A9AB0u; return; } if (c.pc != 0x001A94C0u) [[unlikely]] return; }
L_001A94C0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A94CCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x001A94CCu) [[unlikely]] return; }
L_001A94CC:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A94EC; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[19].w[0]), c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001A94F8; } }
L_001A94EC:
    set32(c.r[16], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A9470u | kUnwind; return; } goto L_001A9470; } }
L_001A94F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001A9520:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
L_001A953C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9548u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0022(c, 160u, depth + 1u); else { c.pc = 0x001A9970u; return; } if (c.pc != 0x001A9548u) [[unlikely]] return; }
L_001A9548:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 48u)));  goto L_001A955C; }
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_001A9578; } }
L_001A955C:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[6], ld32((c.r[29].w[0] + 68u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A953Cu | kUnwind; return; } goto L_001A953C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 4;
L_001A9578:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001A9590:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A95B0u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 153u, depth + 1u); else { c.pc = 0x001A97D0u; return; } if (c.pc != 0x001A95B0u) [[unlikely]] return; }
L_001A95B0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 68u)));  goto L_001A95C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A95EC; } }
L_001A95C0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A95C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A95D0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0022(c, 157u, depth + 1u); else { c.pc = 0x001A98B0u; return; } if (c.pc != 0x001A95D0u) [[unlikely]] return; }
L_001A95D0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001A95EC; }
    set32(c.r[6], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A95C4u | kUnwind; return; } goto L_001A95C4; } }
L_001A95EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001A9600:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 108u), 0u);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A963Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0022(c, 153u, depth + 1u); else { c.pc = 0x001A97D0u; return; } if (c.pc != 0x001A963Cu) [[unlikely]] return; }
L_001A963C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 84u)));  goto L_001A9658; }
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001A96C0; } }
L_001A9658:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9664u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0022(c, 157u, depth + 1u); else { c.pc = 0x001A98B0u; return; } if (c.pc != 0x001A9664u) [[unlikely]] return; }
L_001A9664:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_001A96B4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9680u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 165u, depth + 1u); else { c.pc = 0x001A9AB0u; return; } if (c.pc != 0x001A9680u) [[unlikely]] return; }
L_001A9680:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A968Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x001A968Cu) [[unlikely]] return; }
L_001A968C:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 76u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A9658u | kUnwind; return; } goto L_001A9658; }
    set32(c.r[6], ld32((c.r[29].w[0] + 64u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A96B0u); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0022(c, 151u, depth + 1u); else { c.pc = 0x001A9770u; return; } if (c.pc != 0x001A96B0u) [[unlikely]] return; }
L_001A96B0:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_001A96B4:
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_001A96C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001A96E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9704u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0022(c, 153u, depth + 1u); else { c.pc = 0x001A97D0u; return; } if (c.pc != 0x001A9704u) [[unlikely]] return; }
L_001A9704:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 68u)));  goto L_001A9714; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A9758; } }
L_001A9714:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9720u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0022(c, 157u, depth + 1u); else { c.pc = 0x001A98B0u; return; } if (c.pc != 0x001A9720u) [[unlikely]] return; }
L_001A9720:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 52u)));  goto L_001A9730; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A9758; } }
L_001A9730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9738u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 165u, depth + 1u); else { c.pc = 0x001A9AB0u; return; } if (c.pc != 0x001A9738u) [[unlikely]] return; }
L_001A9738:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9744u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x001A9744u) [[unlikely]] return; }
L_001A9744:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A9714u | kUnwind; return; } goto L_001A9714; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001A9758:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001A9770:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), c.r[7].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; st32((c.r[5].w[0]), c.r[6].w[0]);  if (t) { goto L_001A97B4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[29].w[0] + 44u));  goto L_001A97AC; }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), c.r[7].w[0]);  goto L_001A97C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_001A97C0; } }
L_001A97AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.f[0]);  if (t) { goto L_001A97C0; } }
L_001A97B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A97BCu); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 165u, depth + 1u); else { c.pc = 0x001A9AB0u; return; } if (c.pc != 0x001A97BCu) [[unlikely]] return; }
L_001A97BC:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_001A97C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A97D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = ld8((c.r[6].w[0]));
    c.r[2].d[0] = c.r[16].d[0] & 192ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], c.r[17].w[0] + 1u);  if (t) { goto L_001A9814; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A9888; } }
L_001A9814:
    c.r[2].d[0] = c.r[16].d[0] & 48ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[21], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A982Cu); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 166u, depth + 1u); else { c.pc = 0x001A9AF0u; return; } if (c.pc != 0x001A982Cu) [[unlikely]] return; }
L_001A982C:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[20], c.r[20].w[0] + c.r[21].w[0]);
    c.r[2].d[0] = c.r[16].d[0] & 12ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[21], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9850u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 166u, depth + 1u); else { c.pc = 0x001A9AF0u; return; } if (c.pc != 0x001A9850u) [[unlikely]] return; }
L_001A9850:
    c.r[3].d[0] = c.r[16].d[0] & 3ull;
    set32(c.r[20], c.r[20].w[0] + c.r[21].w[0]);
    set32(c.r[16], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9874u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 166u, depth + 1u); else { c.pc = 0x001A9AF0u; return; } if (c.pc != 0x001A9874u) [[unlikely]] return; }
L_001A9874:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[20].w[0] + c.r[16].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_001A9888:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001A98B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 64u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = ld8((c.r[6].w[0]));
    c.r[3].d[0] = c.r[17].d[0] & 192ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[6].w[0] + 1u);  if (t) { goto L_001A98F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A9944; } }
L_001A98F0:
    c.r[2].d[0] = c.r[17].d[0] & 48ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[20], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9908u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 166u, depth + 1u); else { c.pc = 0x001A9AF0u; return; } if (c.pc != 0x001A9908u) [[unlikely]] return; }
L_001A9908:
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[20].w[0]);
    c.r[2].d[0] = c.r[17].d[0] & 12ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[19], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A992Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 166u, depth + 1u); else { c.pc = 0x001A9AF0u; return; } if (c.pc != 0x001A992Cu) [[unlikely]] return; }
L_001A992C:
    c.r[3].d[0] = c.r[17].d[0] & 3ull;
    set32(c.r[4], c.r[16].w[0] + c.r[19].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
L_001A9944:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001A9970:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[7], 0u + 192u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 192ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == c.r[7].d[0]; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_001A9A2C; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[18].w[0] + 4u);  goto L_001A9A14; }
    set32(c.r[3], 0u + 128u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[16].d[0] = ld8((c.r[17].w[0]));  goto L_001A99C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_001A9A7C; } }
L_001A99C0:
    c.r[2].d[0] = c.r[16].d[0] & 192ull;
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 12u)));  goto L_001A9A08; }
    c.r[2].d[0] = c.r[16].d[0] & 12ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A99ECu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 166u, depth + 1u); else { c.pc = 0x001A9AF0u; return; } if (c.pc != 0x001A99ECu) [[unlikely]] return; }
L_001A99EC:
    c.r[3].d[0] = c.r[16].d[0] & 3ull;
    c.r[4].d[0] = c.r[19].d[0] & 255ull;
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 7;
L_001A9A08:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_001A9A88; } }
L_001A9A14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9A1Cu);  if (depth < kMaxDepth) unit_0022(c, 153u, depth + 1u); else { c.pc = 0x001A97D0u; return; } if (c.pc != 0x001A9A1Cu) [[unlikely]] return; }
L_001A9A1C:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_001A9A88; } }
L_001A9A2C:
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = c.r[3].d[0] & 192ull;
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[7].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  goto L_001A9A70; }
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 12ull;  goto L_001A9A50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), 0u);  if (t) { goto L_001A9A6C; } }
L_001A9A50:
    set32(c.r[5], c.r[17].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9A64u); c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0022(c, 166u, depth + 1u); else { c.pc = 0x001A9AF0u; return; } if (c.pc != 0x001A9A64u) [[unlikely]] return; }
L_001A9A64:
    set32(c.r[2], c.r[17].w[0] - c.r[2].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_001A9A6C:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_001A9A70:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_001A9A88; } }
L_001A9A7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9A84u); set32(c.r[4], c.r[4].w[0] + 4320u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x001A9A84u) [[unlikely]] return; }
L_001A9A84:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A9A88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001A9AB0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001A9AE4; }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 2);  goto L_001A9AD8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9AE4; } }
L_001A9AD8:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_001A9AE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A9AF0:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[2].d[0]) { c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));  goto L_001A9B9C; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[2].d[0]) { c.r[2].d[0] = ld8((c.r[5].w[0] + 2u));  goto L_001A9B68; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[2].d[0]) { c.r[4].d[0] = ld8((c.r[5].w[0] + 1u));  goto L_001A9B40; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[2].d[0]) { c.r[2].d[0] = ld8((c.r[5].w[0]));  goto L_001A9B28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A9BC0; } }
L_001A9B28:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(128ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A9BC0; } }
    set32(c.r[3], 0u - 256u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_001A9BC0; } }
L_001A9B40:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A9BC0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_001A9BC0; } }
L_001A9B68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[6].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[5], c.r[6].w[0] << 8);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A9BC0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_001A9BC0; } }
L_001A9B9C:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[6], c.r[2].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
L_001A9BC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A9BD0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 16;
L_001A9C10:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A9C10u | kUnwind; return; } goto L_001A9C10; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; c.r[19].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001A9C40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9C3Cu); c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x001A9C3Cu) [[unlikely]] return; }
L_001A9C3C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001A9C40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C530000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] | 18503ull;
    set32(c.r[16], c.r[19].w[0] + 16u);
    set32(c.r[2], 0u + 16u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[17], c.r[16].w[0] + 4u);
    st16((c.r[19].w[0] + 14u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9C74u); st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0022(c, 181u, depth + 1u); else { c.pc = 0x001A9DD0u; return; } if (c.pc != 0x001A9C74u) [[unlikely]] return; }
L_001A9C74:
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], 0u + 193u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + 20u);
    set32(c.r[4], c.r[2].w[0] + 5u);
    set32(c.r[2], 0u - 16u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_001A9CA8; } }
L_001A9C9C:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_001A9CA8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A9C9Cu | kUnwind; return; } goto L_001A9C9C; } }
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9CC8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 184u, depth + 1u); else { c.pc = 0x001A9E30u; return; } if (c.pc != 0x001A9CC8u) [[unlikely]] return; }
L_001A9CC8:
    set32(c.r[22], c.r[16].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 3;
L_001A9CD4:
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), 0u);  if (t) { goto L_001A9D28; } }
L_001A9CE4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_001A9D24; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001A9D1C; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A9D18; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001A9D18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9D18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001A9D18u) [[unlikely]] return; }
L_001A9D18:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001A9D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9D24u);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001A9D24u) [[unlikely]] return; }
L_001A9D24:
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001A9D28:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A9CE4u | kUnwind; return; } goto L_001A9CE4; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A9CD4u | kUnwind; return; } goto L_001A9CD4; }
    set32(c.r[16], c.r[22].w[0] - c.r[19].w[0]);
    set32(c.r[2], 0u - 16u);
    set32(c.r[3], c.r[16].w[0] + 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - 16u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9D64u); set32(c.r[4], ld32((c.r[21].w[0] + 4u)));  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x001A9D64u) [[unlikely]] return; }
L_001A9D64:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9D78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x001A9D78u) [[unlikely]] return; }
L_001A9D78:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9D88u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x001A9D88u) [[unlikely]] return; }
L_001A9D88:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { c.r[2].d[0] = c.r[21].d[0] + 0ull;  goto L_001A9D9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9D98u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x001A9D98u) [[unlikely]] return; }
L_001A9D98:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_001A9D9C:
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
L_001A9DD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A9E14; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_001A9E14; } }
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 8u);  goto L_001A9E04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001A9E20; } }
L_001A9E04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9E0Cu);  if (depth < kMaxDepth) unit_0022(c, 200u, depth + 1u); else { c.pc = 0x001AA140u; return; } if (c.pc != 0x001A9E0Cu) [[unlikely]] return; }
L_001A9E0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9E1C; } }
L_001A9E14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9E1Cu);  if (depth < kMaxDepth) unit_0022(c, 207u, depth + 1u); else { c.pc = 0x001AA270u; return; } if (c.pc != 0x001A9E1Cu) [[unlikely]] return; }
L_001A9E1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001A9E20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A9E30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[22], c.r[20].w[0] + 4u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9E78u); set32(c.r[19], c.r[22].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x001A9E78u) [[unlikely]] return; }
L_001A9E78:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[4].w[0] << 2);
    c.budget -= 3;
L_001A9E84:
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0] + 12u)));  if (t) { goto L_001A9EA4; } }
L_001A9E90:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
L_001A9EA4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A9E90u | kUnwind; return; } goto L_001A9E90; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A9E84u | kUnwind; return; } goto L_001A9E84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001A9F10; } }
L_001A9EC4:
    set32(c.r[4], c.r[19].w[0] - c.r[20].w[0]);
    set32(c.r[3], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_001A9EE8; }
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001A9EE8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_001A9EF8; }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_001A9EF8:
    set32(c.r[6], c.r[16].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9F04u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001A9F04u) [[unlikely]] return; }
L_001A9F04:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[19], c.r[2].w[0] + 1u);
    c.budget -= 3;
L_001A9F10:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A9EC4u | kUnwind; return; } goto L_001A9EC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9F28u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x001A9F28u) [[unlikely]] return; }
L_001A9F28:
    set32(c.r[2], c.r[19].w[0] - c.r[20].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001A9F60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001A9F94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A9FA0; } }
L_001A9F94:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 3;
L_001A9FA0:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[18], c.r[2].w[0] + 12u);  if (t) { goto L_001AA0EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9FBCu); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001A9FBCu) [[unlikely]] return; }
L_001A9FBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001AA030; } }
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], ld32((c.r[17].w[0] + 8u)));  if (t) { goto L_001A9FD8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001A9FD8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001AA024; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9FE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001A9FE8u) [[unlikely]] return; }
L_001A9FE8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001AA018; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_001AA008; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA018; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001AA008:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA018u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001AA018u) [[unlikely]] return; }
L_001AA018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_001AA028; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AA024:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_001AA028:
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[19].w[0] + 8u), c.r[20].w[0]);
    c.budget -= 2;
L_001AA030:
    st32((c.r[18].w[0]), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { goto L_001AA11C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_001AA04C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[19].d[0] = c.r[2].d[0] + 0ull;  goto L_001AA0EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA05Cu); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001AA05Cu) [[unlikely]] return; }
L_001AA05C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001AA0D0; } }
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], ld32((c.r[17].w[0] + 8u)));  if (t) { goto L_001AA078; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001AA078:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001AA0C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA088u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001AA088u) [[unlikely]] return; }
L_001AA088:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001AA0B8; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_001AA0A8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA0B8; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001AA0A8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA0B8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001AA0B8u) [[unlikely]] return; }
L_001AA0B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_001AA0C8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AA0C4:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_001AA0C8:
    st32((c.r[18].w[0] + 4u), 0u);
    st32((c.r[18].w[0] + 8u), c.r[20].w[0]);
    c.budget -= 2;
L_001AA0D0:
    st32((c.r[19].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { goto L_001AA11C; } }
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001AA0EC:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));  goto L_001AA104; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 12u);  if (t) { goto L_001AA104; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001AA104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA10Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x001AA10Cu) [[unlikely]] return; }
L_001AA10C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AA04Cu | kUnwind; return; } goto L_001AA04C; }
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_001AA11C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001AA140:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001AA1C0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001AA1A8; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001AA198; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001AA204; } }
L_001AA198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA1A0u); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 248u, depth + 1u); else { c.pc = 0x001AA890u; return; } if (c.pc != 0x001AA1A0u) [[unlikely]] return; }
L_001AA1A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001AA200; } }
L_001AA1A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA1B0u);  if (depth < kMaxDepth) unit_0022(c, 251u, depth + 1u); else { c.pc = 0x001AA920u; return; } if (c.pc != 0x001AA1B0u) [[unlikely]] return; }
L_001AA1B0:
    st32((c.r[29].w[0] + 108u), c.f[0]);
    set32(c.r[18], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001AA200; } }
L_001AA1C0:
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001AA1D4; }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_001AA1D4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0])));  goto L_001AA1E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA1E4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 255u, depth + 1u); else { c.pc = 0x001AA9C0u; return; } if (c.pc != 0x001AA1E4u) [[unlikely]] return; }
L_001AA1E4:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_001AA1E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_001AA1F4; }
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001AA1F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA1FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 191u, depth + 1u); else { c.pc = 0x001A9F60u; return; } if (c.pc != 0x001AA1FCu) [[unlikely]] return; }
L_001AA1FC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001AA200:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001AA204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA20Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 239u, depth + 1u); else { c.pc = 0x001AA710u; return; } if (c.pc != 0x001AA20Cu) [[unlikely]] return; }
L_001AA20C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[20].w[0] - 1u);
    set32(c.r[17], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA240u); st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 240u, depth + 1u); else { c.pc = 0x001AA780u; return; } if (c.pc != 0x001AA240u) [[unlikely]] return; }
L_001AA240:
    set32(c.r[2], c.r[17].w[0] + c.r[20].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001AA270:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001AA2B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_001AA2BC; } }
L_001AA2B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AA2BC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[23].w[0] + 8u)));  goto L_001AA2D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA2CCu); set32(c.r[4], c.r[23].w[0] + 8u);  if (depth < kMaxDepth) unit_0022(c, 255u, depth + 1u); else { c.pc = 0x001AA9C0u; return; } if (c.pc != 0x001AA2CCu) [[unlikely]] return; }
L_001AA2CC:
    set32(c.r[2], ld32((c.r[23].w[0] + 8u)));
    c.budget -= 1;
L_001AA2D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_001AA2DC; }
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001AA2DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA2E4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 191u, depth + 1u); else { c.pc = 0x001A9F60u; return; } if (c.pc != 0x001AA2E4u) [[unlikely]] return; }
L_001AA2E4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA2F4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 239u, depth + 1u); else { c.pc = 0x001AA710u; return; } if (c.pc != 0x001AA2F4u) [[unlikely]] return; }
L_001AA2F4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] - 1u);
    set32(c.r[16], c.r[19].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 15ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA324u); st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 240u, depth + 1u); else { c.pc = 0x001AA780u; return; } if (c.pc != 0x001AA324u) [[unlikely]] return; }
L_001AA324:
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA340u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_0022(c, 240u, depth + 1u); else { c.pc = 0x001AA780u; return; } if (c.pc != 0x001AA340u) [[unlikely]] return; }
L_001AA340:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 4u);
    set32(c.r[16], c.r[2].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA35Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 240u, depth + 1u); else { c.pc = 0x001AA780u; return; } if (c.pc != 0x001AA35Cu) [[unlikely]] return; }
L_001AA35C:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[17], ld32((c.r[23].w[0] + 44u)));
    set32(c.r[18], c.r[2].w[0] + 8u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001AA394; } }
L_001AA370:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], ld32((c.r[28].w[0] - 31912u)));  goto L_001AA37C; }
    set32(c.r[7], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001AA37C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA38Cu); set32(c.r[6], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0022(c, 229u, depth + 1u); else { c.pc = 0x001AA590u; return; } if (c.pc != 0x001AA38Cu) [[unlikely]] return; }
L_001AA38C:
    set32(c.r[17], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_001AA394:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AA370u | kUnwind; return; } goto L_001AA370; }
    set32(c.r[17], c.r[18].w[0] - c.r[19].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA3ACu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 239u, depth + 1u); else { c.pc = 0x001AA710u; return; } if (c.pc != 0x001AA3ACu) [[unlikely]] return; }
L_001AA3AC:
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_001AA3E0; } }
    set32(c.r[3], 0u + 4u);
    set32(c.r[6], c.r[18].w[0] - c.r[16].w[0]);
    set32(c.r[21], c.r[3].w[0] - c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA3D0u); set32(c.r[4], c.r[16].w[0] - c.r[21].w[0]);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001AA3D0u) [[unlikely]] return; }
L_001AA3D0:
    set32(c.r[16], c.r[16].w[0] - c.r[21].w[0]);
    set32(c.r[22], c.r[22].w[0] - c.r[21].w[0]);
    set32(c.r[18], c.r[18].w[0] - c.r[21].w[0]);
    set32(c.r[17], c.r[17].w[0] - c.r[21].w[0]);
    c.budget -= 4;
L_001AA3E0:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA3ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 284u, depth + 1u); else { c.pc = 0x001AAEB0u; return; } if (c.pc != 0x001AA3ECu) [[unlikely]] return; }
L_001AA3EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001AA450; } }
L_001AA3F4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AA430; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001AA434; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001AA41C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001AA444; } }
L_001AA41C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA428u); set32(c.r[6], c.r[21].w[0] + 8u);  if (depth < kMaxDepth) unit_0022(c, 200u, depth + 1u); else { c.pc = 0x001AA140u; return; } if (c.pc != 0x001AA428u) [[unlikely]] return; }
L_001AA428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA440; } }
L_001AA430:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001AA434:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA440u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 207u, depth + 1u); else { c.pc = 0x001AA270u; return; } if (c.pc != 0x001AA440u) [[unlikely]] return; }
L_001AA440:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_001AA444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA44Cu); set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 292u, depth + 1u); else { c.pc = 0x001AAFD0u; return; } if (c.pc != 0x001AA44Cu) [[unlikely]] return; }
L_001AA44C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001AA450:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AA3F4u | kUnwind; return; } goto L_001AA3F4; }
    set32(c.r[2], c.r[18].w[0] - c.r[19].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA46Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 239u, depth + 1u); else { c.pc = 0x001AA710u; return; } if (c.pc != 0x001AA46Cu) [[unlikely]] return; }
L_001AA46C:
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] + 1u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] | 192ull;
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[23], c.r[18].w[0] - c.r[19].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA4A8u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 239u, depth + 1u); else { c.pc = 0x001AA710u; return; } if (c.pc != 0x001AA4A8u) [[unlikely]] return; }
L_001AA4A8:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = c.r[30].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 176u)));  goto L_001AA4F8; }
    set32(c.r[2], 0u + 4u);
    set32(c.r[6], c.r[18].w[0] - c.r[22].w[0]);
    set32(c.r[21], c.r[2].w[0] - c.r[30].w[0]);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA4D0u); set32(c.r[4], c.r[22].w[0] - c.r[21].w[0]);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001AA4D0u) [[unlikely]] return; }
L_001AA4D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[18], c.r[18].w[0] - c.r[21].w[0]);
    set32(c.r[17], c.r[17].w[0] - c.r[21].w[0]);
    set32(c.r[23], c.r[23].w[0] - c.r[21].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[21].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] - c.r[21].w[0]);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 10;
L_001AA4F8:
    set32(c.r[6], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA508u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 240u, depth + 1u); else { c.pc = 0x001AA780u; return; } if (c.pc != 0x001AA508u) [[unlikely]] return; }
L_001AA508:
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[3], c.r[30].w[0] - 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 224u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] << 2);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA53Cu); st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 240u, depth + 1u); else { c.pc = 0x001AA780u; return; } if (c.pc != 0x001AA53Cu) [[unlikely]] return; }
L_001AA53C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA550u); c.r[7].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 240u, depth + 1u); else { c.pc = 0x001AA780u; return; } if (c.pc != 0x001AA550u) [[unlikely]] return; }
L_001AA550:
    set32(c.r[2], c.r[18].w[0] - c.r[19].w[0]);
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_001AA590:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA5C8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0022(c, 191u, depth + 1u); else { c.pc = 0x001A9F60u; return; } if (c.pc != 0x001AA5C8u) [[unlikely]] return; }
L_001AA5C8:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA5D8u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 239u, depth + 1u); else { c.pc = 0x001AA710u; return; } if (c.pc != 0x001AA5D8u) [[unlikely]] return; }
L_001AA5D8:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    c.budget -= 7;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[16].d[0] = c.r[2].d[0] & 255ull;  goto L_001AA638; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001AA620; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001AA610; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001AA678; } }
L_001AA610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA618u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 248u, depth + 1u); else { c.pc = 0x001AA890u; return; } if (c.pc != 0x001AA618u) [[unlikely]] return; }
L_001AA618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001AA674; } }
L_001AA620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA628u);  if (depth < kMaxDepth) unit_0022(c, 251u, depth + 1u); else { c.pc = 0x001AA920u; return; } if (c.pc != 0x001AA628u) [[unlikely]] return; }
L_001AA628:
    st32((c.r[29].w[0] + 140u), c.f[0]);
    set32(c.r[22], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001AA674; } }
L_001AA638:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001AA648; }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_001AA648:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  goto L_001AA65C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA658u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 255u, depth + 1u); else { c.pc = 0x001AA9C0u; return; } if (c.pc != 0x001AA658u) [[unlikely]] return; }
L_001AA658:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_001AA65C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_001AA668; }
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001AA668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA670u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 191u, depth + 1u); else { c.pc = 0x001A9F60u; return; } if (c.pc != 0x001AA670u) [[unlikely]] return; }
L_001AA670:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001AA674:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001AA678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA680u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 239u, depth + 1u); else { c.pc = 0x001AA710u; return; } if (c.pc != 0x001AA680u) [[unlikely]] return; }
L_001AA680:
    set32(c.r[3], c.r[17].w[0] - 1u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[3].w[0] << 4);
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[3], c.r[18].w[0] - 1u);
    set32(c.r[16], c.r[19].w[0] + 1u);
    c.r[4].d[0] = c.r[4].d[0] | 64ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA6C0u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 240u, depth + 1u); else { c.pc = 0x001AA780u; return; } if (c.pc != 0x001AA6C0u) [[unlikely]] return; }
L_001AA6C0:
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA6D8u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 240u, depth + 1u); else { c.pc = 0x001AA780u; return; } if (c.pc != 0x001AA6D8u) [[unlikely]] return; }
L_001AA6D8:
    set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001AA710:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(-128ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001AA778; }
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(128ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(-32768ll) ? 1ull : 0ull;  goto L_001AA734; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA778; } }
L_001AA734:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_001AA778; }
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[5].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0xFF800000u);  goto L_001AA758; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA778; } }
L_001AA758:
    c.r[1].d[0] = c.r[5].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_001AA778; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[1].d[0] = c.r[5].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 4u);  goto L_001AA778; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001AA778:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AA780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001AA798; } }
L_001AA788:
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] >> 8);
    c.budget -= 4;
L_001AA798:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AA788u | kUnwind; return; } goto L_001AA788; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AA7B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001AA7F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10296u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA7E0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 267u, depth + 1u); else { c.pc = 0x001AABB0u; return; } if (c.pc != 0x001AA7E0u) [[unlikely]] return; }
L_001AA7E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001AA7FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA7F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001AA7F8u) [[unlikely]] return; }
L_001AA7F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001AA7FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AA810:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001AA870; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_001AA85C; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AA858; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001AA858; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA858u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001AA858u) [[unlikely]] return; }
L_001AA858:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_001AA85C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001AA874; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA870u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001AA870u) [[unlikely]] return; }
L_001AA870:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001AA874:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AA890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AA8B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA8B8u);  if (depth < kMaxDepth) unit_0022(c, 259u, depth + 1u); else { c.pc = 0x001AAA30u; return; } if (c.pc != 0x001AA8B8u) [[unlikely]] return; }
L_001AA8B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001AA8CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_001AA908; } }
L_001AA8CC:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_001AA8E8; }
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001AA90C; } }
L_001AA8E8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001AA908; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));  goto L_001AA900; }
    set32(c.r[4], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001AA900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA908u);  if (depth < kMaxDepth) unit_0008(c, 176u, depth + 1u); else { c.pc = 0x00142110u; return; } if (c.pc != 0x001AA908u) [[unlikely]] return; }
L_001AA908:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001AA90C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AA920:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AA948; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA948u);  if (depth < kMaxDepth) unit_0022(c, 259u, depth + 1u); else { c.pc = 0x001AAA30u; return; } if (c.pc != 0x001AA948u) [[unlikely]] return; }
L_001AA948:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001AA960; }
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001AA9A4; } }
L_001AA960:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_001AA970; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 4u));  if (t) { goto L_001AA9A4; } }
L_001AA970:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AA9A0; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));  goto L_001AA988; }
    set32(c.r[4], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001AA988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA990u);  if (depth < kMaxDepth) unit_0008(c, 174u, depth + 1u); else { c.pc = 0x001420F8u; return; } if (c.pc != 0x001AA990u) [[unlikely]] return; }
L_001AA990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA998u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 94u, depth + 1u); else { c.pc = 0x0014EB28u; return; } if (c.pc != 0x001AA998u) [[unlikely]] return; }
L_001AA998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001AA9A8; } }
L_001AA9A0:
    c.f[0] = 0u;
    c.budget -= 1;
L_001AA9A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001AA9A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AA9C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AA9F0; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA9E8u); set32(c.r[5], c.r[5].w[0] + 4344u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x001AA9E8u) [[unlikely]] return; }
L_001AA9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001AAA1C; } }
L_001AA9F0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001AAA18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAA04u); c.f[12] = ld32((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001AAA04u) [[unlikely]] return; }
L_001AAA04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 4352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAA18u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x001AAA18u) [[unlikely]] return; }
L_001AAA18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001AAA1C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AAA30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] << 33;
    c.r[5].d[0] = c.r[5].d[0] >> 33;
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[5].w[0]);  if (t) { goto L_001AAA74; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));  goto L_001AAA64; }
    set32(c.r[4], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001AAA64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAA6Cu);  if (depth < kMaxDepth) unit_0008(c, 176u, depth + 1u); else { c.pc = 0x00142110u; return; } if (c.pc != 0x001AAA6Cu) [[unlikely]] return; }
L_001AAA6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001AAAA4; } }
L_001AAA74:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001AAAA8; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));  goto L_001AAA90; }
    set32(c.r[4], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001AAA90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAA98u);  if (depth < kMaxDepth) unit_0008(c, 174u, depth + 1u); else { c.pc = 0x001420F8u; return; } if (c.pc != 0x001AAA98u) [[unlikely]] return; }
L_001AAA98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAAA0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 94u, depth + 1u); else { c.pc = 0x0014EB28u; return; } if (c.pc != 0x001AAAA0u) [[unlikely]] return; }
L_001AAAA0:
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 1;
L_001AAAA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001AAAA8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AAAC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 10312u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 24;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AAB38; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001AAB38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAB38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001AAB38u) [[unlikely]] return; }
L_001AAB38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4360u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_001AAB88; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAB54u); set32(c.r[4], c.r[4].w[0] + 4360u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001AAB54u) [[unlikely]] return; }
L_001AAB54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 4360u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001AAB84; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], c.r[16].w[0] + 8u);  goto L_001AAB78; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AAB84; } }
L_001AAB78:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAB84u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001AAB84u) [[unlikely]] return; }
L_001AAB84:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_001AAB88:
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AABB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001AADA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 10312u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 36u)));  if (t) { goto L_001AAC04; } }
L_001AABE8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 24u)));  if (t) { goto L_001AAC00; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAC00u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AAC00u) [[unlikely]] return; }
L_001AAC00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001AAC04:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AABE8u | kUnwind; return; } goto L_001AABE8; } }
    st32((c.r[19].w[0] + 36u), 0u);
    st32((c.r[19].w[0] + 40u), 0u);
    set32(c.r[5], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 28u)));  if (t) { goto L_001AAC24; } }
    st32((c.r[5].w[0] + 28u), c.r[4].w[0]);
    c.budget -= 1;
L_001AAC24:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 32u)));  goto L_001AAC34; }
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 2;
L_001AAC34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[19].w[0] + 44u)));  goto L_001AAD1C; }
    set32(c.r[3], c.r[2].w[0] + 36u);
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[19].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 32u)));  goto L_001AAC54; }
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 2;
L_001AAC54:
    set32(c.r[3], c.r[2].w[0] + 40u);
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_001AAC68; } }
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_001AAC68:
    set32(c.r[17], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AAD1C; } }
L_001AAC74:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_001AAD1C; } }
    set32(c.r[2], c.r[16].w[0] + 16u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_001AACB0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AACAC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001AACAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AACACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001AACACu) [[unlikely]] return; }
L_001AACAC:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_001AACB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AACE4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AACE4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AACE4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001AACE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AACE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001AACE4u) [[unlikely]] return; }
L_001AACE4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001AAD14; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AAD10; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001AAD10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAD10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001AAD10u) [[unlikely]] return; }
L_001AAD10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001AAD14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAD1Cu);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001AAD1Cu) [[unlikely]] return; }
L_001AAD1C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AAC74u | kUnwind; return; } goto L_001AAC74; }
    set32(c.r[2], c.r[19].w[0] + 20u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 8u);  goto L_001AAD58; }
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AAD54; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001AAD54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAD54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001AAD54u) [[unlikely]] return; }
L_001AAD54:
    set32(c.r[2], c.r[19].w[0] + 8u);
    c.budget -= 1;
L_001AAD58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_001AAD90; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AAD8C; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AAD8C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001AAD8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAD8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001AAD8Cu) [[unlikely]] return; }
L_001AAD8C:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_001AAD90:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_001AADA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AADA4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001AADA4u) [[unlikely]] return; }
L_001AADA4:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001AADA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001AADD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[18].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001AADF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AAE94; } }
L_001AADF4:
    set32(c.r[16], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001AAE88; } }
L_001AAE00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001AAE0C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_001AAE0C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_001AAE64; }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001AAE3C; }
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAE34u); set32(c.r[5], c.r[5].w[0] + 4344u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x001AAE34u) [[unlikely]] return; }
L_001AAE34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AAE60; } }
L_001AAE3C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AAE60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAE4Cu); c.f[12] = ld32((c.r[16].w[0] + 12u));  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001AAE4Cu) [[unlikely]] return; }
L_001AAE4C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAE60u); set32(c.r[5], c.r[5].w[0] + 4352u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x001AAE60u) [[unlikely]] return; }
L_001AAE60:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_001AAE64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));  goto L_001AAE70; }
    set32(c.r[4], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001AAE70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAE78u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x001AAE78u) [[unlikely]] return; }
L_001AAE78:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 24u)));  goto L_001AAE88; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 2;
L_001AAE88:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AAE00u | kUnwind; return; } goto L_001AAE00; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001AAE94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001AAEB0:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[2], ld32((c.r[4].w[0] + 36u)));  if (t) { goto L_001AAED4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AAEDC; } }
L_001AAEC0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 24u)));  goto L_001AAED0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AAEDC; } }
L_001AAED0:
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 1;
L_001AAED4:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AAEC0u | kUnwind; return; } goto L_001AAEC0; } }
L_001AAEDC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AAEF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 9;
    { const bool t = c.r[6].sd[0] >= 0; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001AAFAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AAFB8; } }
L_001AAF1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001AAF28; }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_001AAF28:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_001AAF80; }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001AAF58; }
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAF50u); set32(c.r[5], c.r[5].w[0] + 4344u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x001AAF50u) [[unlikely]] return; }
L_001AAF50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AAF7C; } }
L_001AAF58:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AAF7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAF68u); c.f[12] = ld32((c.r[16].w[0] + 12u));  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001AAF68u) [[unlikely]] return; }
L_001AAF68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAF7Cu); set32(c.r[5], c.r[5].w[0] + 4352u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x001AAF7Cu) [[unlikely]] return; }
L_001AAF7C:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_001AAF80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));  goto L_001AAF8C; }
    set32(c.r[4], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001AAF8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAF94u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x001AAF94u) [[unlikely]] return; }
L_001AAF94:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 24u)));  goto L_001AAFAC; }
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    if (c.r[17].sd[0] < 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001AAFB8; }
    set32(c.r[16], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_001AAFAC:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AAF1Cu | kUnwind; return; } goto L_001AAF1C; }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001AAFB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001AAFD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 24u)));  c.pc = t; return; }
L_001AAFE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001AB080; } }
L_001AAFFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001AB008; }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_001AB008:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_001AB060; }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001AB038; }
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB030u); set32(c.r[5], c.r[5].w[0] + 4344u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x001AB030u) [[unlikely]] return; }
L_001AB030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AB05C; } }
L_001AB038:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AB05C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB048u); c.f[12] = ld32((c.r[16].w[0] + 12u));  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001AB048u) [[unlikely]] return; }
L_001AB048:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB05Cu); set32(c.r[5], c.r[5].w[0] + 4352u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x001AB05Cu) [[unlikely]] return; }
L_001AB05C:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_001AB060:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));  goto L_001AB06C; }
    set32(c.r[4], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001AB06C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB074u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x001AB074u) [[unlikely]] return; }
L_001AB074:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001AB08C; }
    set32(c.r[16], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_001AB080:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AAFFCu | kUnwind; return; } goto L_001AAFFC; }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001AB08C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AB0A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB0B8u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001AB0B8u) [[unlikely]] return; }
L_001AB0B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[2].w[0] + 32u), c.r[16].w[0]);  goto L_001AB100; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], 0u - 2u);
    set32(c.r[4], c.r[4].w[0] + 10312u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 44u), 0u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 32u), c.r[16].w[0]);
    c.budget -= 16;
L_001AB100:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  goto L_001AB118; }
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_001AB124; } }
L_001AB118:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 3;
L_001AB124:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AB140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001AB180; } }
L_001AB15C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));  goto L_001AB168; }
    set32(c.r[4], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001AB168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB170u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x001AB170u) [[unlikely]] return; }
L_001AB170:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 20u)));  goto L_001AB180; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] + 4u);  if (t) { goto L_001AB190; } }
L_001AB180:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB15Cu | kUnwind; return; } goto L_001AB15C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 27056u);
    c.budget -= 2;
L_001AB190:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AB1B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001AB208; } }
L_001AB1E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));  goto L_001AB1F0; }
    set32(c.r[4], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001AB1F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB1F8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x001AB1F8u) [[unlikely]] return; }
L_001AB1F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AB210; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 2;
L_001AB208:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB1E4u | kUnwind; return; } goto L_001AB1E4; }
L_001AB210:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_001AB288; }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], 0u + 24u);  goto L_001AB254; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB228u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001AB228u) [[unlikely]] return; }
L_001AB228:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 44u), c.r[2].w[0]);  goto L_001AB24C; }
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[20].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 7;
L_001AB24C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001AB284; } }
L_001AB254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB25Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001AB25Cu) [[unlikely]] return; }
L_001AB25C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  goto L_001AB280; }
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 7;
L_001AB280:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001AB284:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_001AB288:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AB2A8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001AB2A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB2A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001AB2A8u) [[unlikely]] return; }
L_001AB2A8:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[16].w[0]), 0u);  goto L_001AB2F8; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AB2F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB2C4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001AB2C4u) [[unlikely]] return; }
L_001AB2C4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001AB2D4; } }
    c.budget -= 2;
    if (c.r[6].sd[0] > 0) { c.r[5].d[0] = c.r[19].d[0] + 0ull;  goto L_001AB2DC; }
L_001AB2D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001AB2EC; } }
L_001AB2DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB2E8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001AB2E8u) [[unlikely]] return; }
L_001AB2E8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001AB2EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_001AB2F8; } }
L_001AB2F4:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_001AB2F8:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0])));  goto L_001AB330; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001AB32C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB32Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001AB32Cu) [[unlikely]] return; }
L_001AB32C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_001AB330:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), c.r[4].w[0]);  goto L_001AB348; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 4;
L_001AB348:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001AB370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[5].d[0] = c.r[2].d[0] | 16706ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 10336u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53460000u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB3C0u); c.r[4].d[0] = c.r[2].d[0] | 17474ull;  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00182360u; return; } if (c.pc != 0x001AB3C0u) [[unlikely]] return; }
L_001AB3C0:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[2].d[0] & 65280ull;
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[5].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[4], c.r[4].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB40Cu); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0021(c, 293u, depth + 1u); else { c.pc = 0x001A7560u; return; } if (c.pc != 0x001AB40Cu) [[unlikely]] return; }
L_001AB40C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001AB428; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
L_001AB428:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AB440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001AB4C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 10336u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 6;
    if (c.r[5].sd[0] < 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001AB484; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB480u); set32(c.r[4], c.r[4].w[0] + 4384u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x001AB480u) [[unlikely]] return; }
L_001AB480:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001AB484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB48Cu);  if (depth < kMaxDepth) unit_0021(c, 295u, depth + 1u); else { c.pc = 0x001A75A0u; return; } if (c.pc != 0x001AB48Cu) [[unlikely]] return; }
L_001AB48C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_001AB4B0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 7;
L_001AB4B0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001AB4C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB4C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001AB4C4u) [[unlikely]] return; }
L_001AB4C4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001AB4C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AB4E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB4FCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AB4FCu) [[unlikely]] return; }
L_001AB4FC:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB50Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AB50Cu) [[unlikely]] return; }
L_001AB50C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AB530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[5].w[0]);  c.pc = t; return; }
L_001AB540:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  goto L_001AB560; }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 4;
L_001AB560:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;  c.pc = t; return; }
L_001AB570:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.r[5].w[0]);  c.pc = t; return; }
L_001AB580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001AB598; } }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0] + 16u)));  goto L_001AB5D4; }
L_001AB598:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB5A4u); set32(c.r[4], c.r[4].w[0] + 4432u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x001AB5A4u) [[unlikely]] return; }
L_001AB5A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB5ACu);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x001AB5ACu) [[unlikely]] return; }
L_001AB5AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB5B4u); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x001AB5B4u) [[unlikely]] return; }
L_001AB5B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB5A4u | kUnwind; return; } goto L_001AB5A4; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB5C8u); c.r[4].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AB5C8u) [[unlikely]] return; }
L_001AB5C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB5A4u | kUnwind; return; } goto L_001AB5A4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 1;
L_001AB5D4:
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB5E0u); set32(c.r[6], 0u + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AB5E0u) [[unlikely]] return; }
L_001AB5E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AB5F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001AB608; } }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0] + 16u)));  goto L_001AB644; }
L_001AB608:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB614u); set32(c.r[4], c.r[4].w[0] + 4432u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x001AB614u) [[unlikely]] return; }
L_001AB614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB61Cu);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x001AB61Cu) [[unlikely]] return; }
L_001AB61C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB624u); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x001AB624u) [[unlikely]] return; }
L_001AB624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB614u | kUnwind; return; } goto L_001AB614; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB638u); c.r[4].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AB638u) [[unlikely]] return; }
L_001AB638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB614u | kUnwind; return; } goto L_001AB614; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 1;
L_001AB644:
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB650u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AB650u) [[unlikely]] return; }
L_001AB650:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AB660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB674u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 313u, depth + 1u); else { c.pc = 0x001AB370u; return; } if (c.pc != 0x001AB674u) [[unlikely]] return; }
L_001AB674:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53460000u);
    set32(c.r[3], c.r[3].w[0] + 10368u);
    c.r[4].d[0] = c.r[2].d[0] | 17475ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB68Cu); st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00182360u; return; } if (c.pc != 0x001AB68Cu) [[unlikely]] return; }
L_001AB68C:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[2].d[0] & 65280ull;
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[5].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[6], 0u + 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[4].w[0] >> 8);
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[4], c.r[16].w[0] + 44u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB6E8u); st32((c.r[16].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x001AB6E8u) [[unlikely]] return; }
L_001AB6E8:
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB6F8u); set32(c.r[6], 0u + 136u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x001AB6F8u) [[unlikely]] return; }
L_001AB6F8:
    st32((c.r[16].w[0] + 232u), 0u);
    set32(c.r[4], c.r[16].w[0] + 240u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 33u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB710u); st32((c.r[16].w[0] + 236u), 0u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x001AB710u) [[unlikely]] return; }
L_001AB710:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AB730:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001AB81C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 10368u);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001AB78C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 40u), 0u);  goto L_001AB788; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB784u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AB784u) [[unlikely]] return; }
L_001AB784:
    st32((c.r[19].w[0] + 40u), 0u);
    c.budget -= 1;
L_001AB788:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001AB78C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB794u);  if (depth < kMaxDepth) unit_0023(c, 11u, depth + 1u); else { c.pc = 0x001AC0A0u; return; } if (c.pc != 0x001AB794u) [[unlikely]] return; }
L_001AB794:
    set32(c.r[17], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001AB7FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AB7F0; } }
L_001AB7A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], ld32((c.r[17].w[0] + 32u)));  if (t) { goto L_001AB7BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB7BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001AB7BCu) [[unlikely]] return; }
L_001AB7BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  goto L_001AB7D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB7D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001AB7D0u) [[unlikely]] return; }
L_001AB7D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_001AB7D4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001AB7E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB7E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001AB7E4u) [[unlikely]] return; }
L_001AB7E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001AB7E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB7F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001AB7F0u) [[unlikely]] return; }
L_001AB7F0:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB7A8u | kUnwind; return; } goto L_001AB7A8; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001AB7FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB804u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 316u, depth + 1u); else { c.pc = 0x001AB440u; return; } if (c.pc != 0x001AB804u) [[unlikely]] return; }
L_001AB804:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_001AB820; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB81Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001AB81Cu) [[unlikely]] return; }
L_001AB81C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001AB820:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001AB840:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001AB87C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ABA18; } }
L_001AB87C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AB894; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ABA18; } }
L_001AB894:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], 0u + 36u);  goto L_001AB8A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ABA18; } }
    set32(c.r[4], 0u + 36u);
    c.budget -= 1;
L_001AB8A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB8B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x001AB8B0u) [[unlikely]] return; }
L_001AB8B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001AB8C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ABA18; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001AB8C8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB8D4u); set32(c.r[6], 0u + 36u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x001AB8D4u) [[unlikely]] return; }
L_001AB8D4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_001AB90C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB8E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001AB8E4u) [[unlikely]] return; }
L_001AB8E4:
    set32(c.r[4], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB8F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x001AB8F0u) [[unlikely]] return; }
L_001AB8F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001AB9B4; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB904u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x001477A8u; return; } if (c.pc != 0x001AB904u) [[unlikely]] return; }
L_001AB904:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001AB928; } }
L_001AB90C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB918u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x001AB918u) [[unlikely]] return; }
L_001AB918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001AB9B4; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001AB928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB930u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001AB930u) [[unlikely]] return; }
L_001AB930:
    set32(c.r[4], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB93Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x001AB93Cu) [[unlikely]] return; }
L_001AB93C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001AB9B4; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB950u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x001477A8u; return; } if (c.pc != 0x001AB950u) [[unlikely]] return; }
L_001AB950:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB960u); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0015(c, 255u, depth + 1u); else { c.pc = 0x00176410u; return; } if (c.pc != 0x001AB960u) [[unlikely]] return; }
L_001AB960:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001AB9B4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AB9B4; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 32u)));  goto L_001AB994; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 28u), c.r[16].w[0]);  if (t) { goto L_001AB9AC; } }
L_001AB98C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 2;
L_001AB994:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB98Cu | kUnwind; return; } goto L_001AB98C; } }
    st32((c.r[3].w[0] + 32u), c.r[16].w[0]);
    c.budget -= 1;
L_001AB9AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001ABA18; } }
L_001AB9B4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 4u)));  goto L_001ABA08; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_001AB9D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB9D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001AB9D0u) [[unlikely]] return; }
L_001AB9D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_001AB9D4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  goto L_001AB9E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB9E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001AB9E4u) [[unlikely]] return; }
L_001AB9E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_001AB9E8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001AB9FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB9F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001AB9F8u) [[unlikely]] return; }
L_001AB9F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001AB9FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABA04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001ABA04u) [[unlikely]] return; }
L_001ABA04:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_001ABA08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_001ABA18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001ABA40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABA54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 15u, depth + 1u); else { c.pc = 0x001AC0E0u; return; } if (c.pc != 0x001ABA54u) [[unlikely]] return; }
L_001ABA54:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  goto L_001ABA64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ABAE0; } }
L_001ABA64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  goto L_001ABA8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABA80u);  if (depth < kMaxDepth) unit_0021(c, 241u, depth + 1u); else { c.pc = 0x001A6DA0u; return; } if (c.pc != 0x001ABA80u) [[unlikely]] return; }
L_001ABA80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  goto L_001ABAB8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_001ABA8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABA94u);  if (depth < kMaxDepth) unit_0021(c, 243u, depth + 1u); else { c.pc = 0x001A6E30u; return; } if (c.pc != 0x001ABA94u) [[unlikely]] return; }
L_001ABA94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABAB4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001ABAE0; } }
L_001ABAB4:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_001ABAB8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001ABAE0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 40u), 0u);  goto L_001ABADC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABAD8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ABAD8u) [[unlikely]] return; }
L_001ABAD8:
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 1;
L_001ABADC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001ABAE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ABAF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001ABB28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ABDAC; } }
L_001ABB28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);  goto L_001ABB44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ABDAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 1;
L_001ABB44:
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABB58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ABDAC; } }
L_001ABB58:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 28u)));  goto L_001ABB6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ABDAC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_001ABB6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ABB7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ABDAC; } }
L_001ABB7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABB84u);  if (depth < kMaxDepth) unit_0023(c, 65u, depth + 1u); else { c.pc = 0x001AC750u; return; } if (c.pc != 0x001ABB84u) [[unlikely]] return; }
L_001ABB84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABB8Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 53u, depth + 1u); else { c.pc = 0x001AC5E0u; return; } if (c.pc != 0x001ABB8Cu) [[unlikely]] return; }
L_001ABB8C:
    set32(c.r[25], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABB9Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ABB9Cu) [[unlikely]] return; }
L_001ABB9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABBA4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 45u, depth + 1u); else { c.pc = 0x001AC4F0u; return; } if (c.pc != 0x001ABBA4u) [[unlikely]] return; }
L_001ABBA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF7FF0000u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[2], 0u - 16385u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABBE4u); set32(c.r[5], c.r[18].w[0] + 44u);  if (depth < kMaxDepth) unit_0023(c, 23u, depth + 1u); else { c.pc = 0x001AC280u; return; } if (c.pc != 0x001ABBE4u) [[unlikely]] return; }
L_001ABBE4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  goto L_001ABBF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ABDAC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_001ABBF8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABC04u); st32((c.r[18].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0023(c, 30u, depth + 1u); else { c.pc = 0x001AC390u; return; } if (c.pc != 0x001ABC04u) [[unlikely]] return; }
L_001ABC04:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0] + 16u)));  goto L_001ABC18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ABDAC; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 1;
L_001ABC18:
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABC24u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ABC24u) [[unlikely]] return; }
L_001ABC24:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001ABC38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ABDAC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001ABC38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABC40u);  if (depth < kMaxDepth) unit_0023(c, 48u, depth + 1u); else { c.pc = 0x001AC550u; return; } if (c.pc != 0x001ABC40u) [[unlikely]] return; }
L_001ABC40:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001ABC54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ABDAC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001ABC54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABC5Cu);  if (depth < kMaxDepth) unit_0023(c, 56u, depth + 1u); else { c.pc = 0x001AC630u; return; } if (c.pc != 0x001ABC5Cu) [[unlikely]] return; }
L_001ABC5C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[18].w[0] + 96u);  goto L_001ABC70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ABDAC; } }
    set32(c.r[4], c.r[18].w[0] + 96u);
    c.budget -= 1;
L_001ABC70:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABC7Cu); set32(c.r[6], 0u + 136u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x001ABC7Cu) [[unlikely]] return; }
L_001ABC7C:
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[18].w[0] + 232u)));  goto L_001ABCD4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[18].w[0] + 232u)));  goto L_001ABCC0; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 232u)));  goto L_001ABCAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ABCE4; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 232u)));
    c.budget -= 1;
L_001ABCAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABCB4u); set32(c.r[4], ld32((c.r[18].w[0] + 92u)));  if (depth < kMaxDepth) unit_009C(c, 520u, depth + 1u); else { c.pc = 0x00393EB8u; return; } if (c.pc != 0x001ABCB4u) [[unlikely]] return; }
L_001ABCB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[18].w[0] + 236u)));  if (t) { goto L_001ABD14; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 232u)));
    c.budget -= 1;
L_001ABCC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABCC8u); set32(c.r[4], ld32((c.r[18].w[0] + 92u)));  if (depth < kMaxDepth) unit_009B(c, 214u, depth + 1u); else { c.pc = 0x0038E640u; return; } if (c.pc != 0x001ABCC8u) [[unlikely]] return; }
L_001ABCC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ABD10; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 232u)));
    c.budget -= 1;
L_001ABCD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABCDCu); set32(c.r[4], ld32((c.r[18].w[0] + 92u)));  if (depth < kMaxDepth) unit_009D(c, 257u, depth + 1u); else { c.pc = 0x003970D0u; return; } if (c.pc != 0x001ABCDCu) [[unlikely]] return; }
L_001ABCDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ABD10; } }
L_001ABCE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABCECu);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x001ABCECu) [[unlikely]] return; }
L_001ABCEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABCF4u); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x001ABCF4u) [[unlikely]] return; }
L_001ABCF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ABCE4u | kUnwind; return; } goto L_001ABCE4; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABD08u); c.r[4].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ABD08u) [[unlikely]] return; }
L_001ABD08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ABCE4u | kUnwind; return; } goto L_001ABCE4; } }
L_001ABD10:
    set32(c.r[5], ld32((c.r[18].w[0] + 236u)));
    c.budget -= 1;
L_001ABD14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABD1Cu); set32(c.r[4], ld32((c.r[18].w[0] + 92u)));  if (depth < kMaxDepth) unit_009C(c, 524u, depth + 1u); else { c.pc = 0x00393FA8u; return; } if (c.pc != 0x001ABD1Cu) [[unlikely]] return; }
L_001ABD1C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 240u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABD34; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABD34u); set32(c.r[5], c.r[18].w[0] + 240u);  if (depth < kMaxDepth) unit_009C(c, 121u, depth + 1u); else { c.pc = 0x00390DF8u; return; } if (c.pc != 0x001ABD34u) [[unlikely]] return; }
L_001ABD34:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 28u)));  goto L_001ABD4C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 4;
L_001ABD4C:
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001ABD74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABD60u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 72u, depth + 1u); else { c.pc = 0x001AC820u; return; } if (c.pc != 0x001ABD60u) [[unlikely]] return; }
L_001ABD60:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_001ABD90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ABDAC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001ABD74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABD7Cu);  if (depth < kMaxDepth) unit_0023(c, 78u, depth + 1u); else { c.pc = 0x001AC910u; return; } if (c.pc != 0x001ABD7Cu) [[unlikely]] return; }
L_001ABD7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ABD8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ABDAC; } }
L_001ABD8C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_001ABD90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
L_001ABDAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001ABDD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001ABE9C; }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABDFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ABDFCu) [[unlikely]] return; }
L_001ABDFC:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001ABE54; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001ABE50; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABE50; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_001ABE40; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001ABE3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ABE50; } }
L_001ABE3C:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 1;
L_001ABE40:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABE50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ABE50u) [[unlikely]] return; }
L_001ABE50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001ABE54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABE5Cu);  if (depth < kMaxDepth) unit_0023(c, 65u, depth + 1u); else { c.pc = 0x001AC750u; return; } if (c.pc != 0x001ABE5Cu) [[unlikely]] return; }
L_001ABE5C:
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[5].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF7FF0000u);
    c.r[6].d[0] = c.r[6].d[0] << 33;
    c.r[4].d[0] = c.r[3].d[0] | 65535ull;
    c.r[6].d[0] = c.r[6].d[0] >> 33;
    set32(c.r[3], 0u - 16385u);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[16].w[0] + 4u), c.r[6].w[0]);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 16;
L_001ABE9C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ABEB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001ABED8; }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABED4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ABED4u) [[unlikely]] return; }
L_001ABED4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001ABED8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001ABEE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001ABF24; }
    c.budget -= 2;
    if (c.r[5].sd[0] <= 0) { c.r[1].d[0] = c.r[5].sd[0] < -960ll ? 1ull : 0ull;  goto L_001ABF04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001ABF10; } }
L_001ABF04:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001ABF10; } }
    set32(c.r[5], 0u - 960u);
    c.budget -= 1;
L_001ABF10:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABF20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ABF20u) [[unlikely]] return; }
L_001ABF20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001ABF24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001ABF30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  [[clang::musttail]] return unit_0023(c, 9u, depth); }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_001ABFB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABF68u);  if (depth < kMaxDepth) unit_0021(c, 251u, depth + 1u); else { c.pc = 0x001A6FB0u; return; } if (c.pc != 0x001ABF68u) [[unlikely]] return; }
L_001ABF68:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABFB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ABFB4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABFB4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] << 33;
    c.r[2].d[0] = c.r[2].d[0] >> 33;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_001ABFB4:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 1;
L_001ABFB8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  [[clang::musttail]] return unit_0023(c, 7u, depth); }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABFD0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ABFD0u) [[unlikely]] return; }
L_001ABFD0:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0023(c, 4u, depth); } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  [[clang::musttail]] return unit_0023(c, 2u, depth); }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0023(c, 6u, depth); } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0023(c, 6u, depth); } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
    [[clang::musttail]] return unit_0023(c, 1u, depth);
}

}
