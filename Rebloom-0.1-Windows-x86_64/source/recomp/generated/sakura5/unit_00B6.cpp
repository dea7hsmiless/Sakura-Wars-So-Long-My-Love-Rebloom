#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B6[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0,
    0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    54, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0,
    0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79,
    0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 107, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0,
    0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 127, 0, 128, 0, 0, 129, 0, 0, 0, 130, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0,
    135, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139,
    0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0,
    0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0,
    0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 167, 0, 0,
    0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0,
    0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0,
    0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199,
    0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0,
    0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0,
    0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239,
    0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0,
    0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0,
    0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264,
    0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0,
    0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0,
    0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 298, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0,
    0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0,
    313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0,
    325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0,
    342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0,
    351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0,
    363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0,
    382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00B6(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003F8000;
    case 2u: goto L_003F8050;
    case 3u: goto L_003F8064;
    case 4u: goto L_003F80A0;
    case 5u: goto L_003F80D0;
    case 6u: goto L_003F80E8;
    case 7u: goto L_003F8100;
    case 8u: goto L_003F8128;
    case 9u: goto L_003F8144;
    case 10u: goto L_003F8160;
    case 11u: goto L_003F8170;
    case 12u: goto L_003F8198;
    case 13u: goto L_003F81C4;
    case 14u: goto L_003F8200;
    case 15u: goto L_003F8224;
    case 16u: goto L_003F8230;
    case 17u: goto L_003F8284;
    case 18u: goto L_003F82AC;
    case 19u: goto L_003F82D0;
    case 20u: goto L_003F8310;
    case 21u: goto L_003F8354;
    case 22u: goto L_003F8370;
    case 23u: goto L_003F83B0;
    case 24u: goto L_003F83E8;
    case 25u: goto L_003F8420;
    case 26u: goto L_003F8434;
    case 27u: goto L_003F8460;
    case 28u: goto L_003F8490;
    case 29u: goto L_003F84A8;
    case 30u: goto L_003F84C0;
    case 31u: goto L_003F84E8;
    case 32u: goto L_003F8504;
    case 33u: goto L_003F8520;
    case 34u: goto L_003F8530;
    case 35u: goto L_003F8558;
    case 36u: goto L_003F8584;
    case 37u: goto L_003F85B0;
    case 38u: goto L_003F85D4;
    case 39u: goto L_003F85E0;
    case 40u: goto L_003F8628;
    case 41u: goto L_003F8650;
    case 42u: goto L_003F8690;
    case 43u: goto L_003F86B4;
    case 44u: goto L_003F86C0;
    case 45u: goto L_003F86F0;
    case 46u: goto L_003F8704;
    case 47u: goto L_003F8730;
    case 48u: goto L_003F8760;
    case 49u: goto L_003F8778;
    case 50u: goto L_003F8790;
    case 51u: goto L_003F87B8;
    case 52u: goto L_003F87D4;
    case 53u: goto L_003F87F0;
    case 54u: goto L_003F8800;
    case 55u: goto L_003F8810;
    case 56u: goto L_003F8824;
    case 57u: goto L_003F88E0;
    case 58u: goto L_003F890C;
    case 59u: goto L_003F8918;
    case 60u: goto L_003F8930;
    case 61u: goto L_003F8950;
    case 62u: goto L_003F8974;
    case 63u: goto L_003F898C;
    case 64u: goto L_003F89A8;
    case 65u: goto L_003F89C4;
    case 66u: goto L_003F89EC;
    case 67u: goto L_003F8A14;
    case 68u: goto L_003F8A30;
    case 69u: goto L_003F8A50;
    case 70u: goto L_003F8A78;
    case 71u: goto L_003F8A94;
    case 72u: goto L_003F8AB0;
    case 73u: goto L_003F8AC0;
    case 74u: goto L_003F8BE8;
    case 75u: goto L_003F8BF8;
    case 76u: goto L_003F8C00;
    case 77u: goto L_003F8C54;
    case 78u: goto L_003F8C70;
    case 79u: goto L_003F8C7C;
    case 80u: goto L_003F8CA0;
    case 81u: goto L_003F8CB8;
    case 82u: goto L_003F8CC4;
    case 83u: goto L_003F8CE4;
    case 84u: goto L_003F8D10;
    case 85u: goto L_003F8D64;
    case 86u: goto L_003F8D90;
    case 87u: goto L_003F8E0C;
    case 88u: goto L_003F8E2C;
    case 89u: goto L_003F8E70;
    case 90u: goto L_003F8F3C;
    case 91u: goto L_003F8F54;
    case 92u: goto L_003F8F90;
    case 93u: goto L_003F8FA4;
    case 94u: goto L_003F9000;
    case 95u: goto L_003F905C;
    case 96u: goto L_003F90A0;
    case 97u: goto L_003F90C4;
    case 98u: goto L_003F90D4;
    case 99u: goto L_003F9104;
    case 100u: goto L_003F912C;
    case 101u: goto L_003F913C;
    case 102u: goto L_003F9144;
    case 103u: goto L_003F9154;
    case 104u: goto L_003F917C;
    case 105u: goto L_003F91A4;
    case 106u: goto L_003F91AC;
    case 107u: goto L_003F91B4;
    case 108u: goto L_003F91C0;
    case 109u: goto L_003F91D0;
    case 110u: goto L_003F91FC;
    case 111u: goto L_003F9240;
    case 112u: goto L_003F926C;
    case 113u: goto L_003F9278;
    case 114u: goto L_003F9298;
    case 115u: goto L_003F92A8;
    case 116u: goto L_003F92B0;
    case 117u: goto L_003F92C0;
    case 118u: goto L_003F931C;
    case 119u: goto L_003F9340;
    case 120u: goto L_003F9350;
    case 121u: goto L_003F935C;
    case 122u: goto L_003F9368;
    case 123u: goto L_003F9374;
    case 124u: goto L_003F93B0;
    case 125u: goto L_003F93C0;
    case 126u: goto L_003F9410;
    case 127u: goto L_003F9418;
    case 128u: goto L_003F9420;
    case 129u: goto L_003F942C;
    case 130u: goto L_003F943C;
    case 131u: goto L_003F9444;
    case 132u: goto L_003F944C;
    case 133u: goto L_003F945C;
    case 134u: goto L_003F946C;
    case 135u: goto L_003F9480;
    case 136u: goto L_003F9488;
    case 137u: goto L_003F949C;
    case 138u: goto L_003F94C0;
    case 139u: goto L_003F94FC;
    case 140u: goto L_003F9520;
    case 141u: goto L_003F9538;
    case 142u: goto L_003F9550;
    case 143u: goto L_003F9578;
    case 144u: goto L_003F958C;
    case 145u: goto L_003F95A4;
    case 146u: goto L_003F95B4;
    case 147u: goto L_003F95D4;
    case 148u: goto L_003F95EC;
    case 149u: goto L_003F9604;
    case 150u: goto L_003F962C;
    case 151u: goto L_003F9644;
    case 152u: goto L_003F965C;
    case 153u: goto L_003F9684;
    case 154u: goto L_003F96A8;
    case 155u: goto L_003F96D8;
    case 156u: goto L_003F96EC;
    case 157u: goto L_003F9720;
    case 158u: goto L_003F9730;
    case 159u: goto L_003F97A0;
    case 160u: goto L_003F97BC;
    case 161u: goto L_003F97F0;
    case 162u: goto L_003F9878;
    case 163u: goto L_003F9898;
    case 164u: goto L_003F98B8;
    case 165u: goto L_003F98D8;
    case 166u: goto L_003F98E4;
    case 167u: goto L_003F98F4;
    case 168u: goto L_003F9908;
    case 169u: goto L_003F991C;
    case 170u: goto L_003F9934;
    case 171u: goto L_003F99E8;
    case 172u: goto L_003F99F0;
    case 173u: goto L_003F9A10;
    case 174u: goto L_003F9A18;
    case 175u: goto L_003F9A3C;
    case 176u: goto L_003F9A44;
    case 177u: goto L_003F9A68;
    case 178u: goto L_003F9A70;
    case 179u: goto L_003F9AAC;
    case 180u: goto L_003F9AB4;
    case 181u: goto L_003F9AD8;
    case 182u: goto L_003F9AE0;
    case 183u: goto L_003F9B08;
    case 184u: goto L_003F9B10;
    case 185u: goto L_003F9B38;
    case 186u: goto L_003F9B40;
    case 187u: goto L_003F9B70;
    case 188u: goto L_003F9BAC;
    case 189u: goto L_003F9BC0;
    case 190u: goto L_003F9C20;
    case 191u: goto L_003F9D90;
    case 192u: goto L_003F9DEC;
    case 193u: goto L_003F9E04;
    case 194u: goto L_003F9E90;
    case 195u: goto L_003F9EA4;
    case 196u: goto L_003F9ECC;
    case 197u: goto L_003F9EDC;
    case 198u: goto L_003F9EEC;
    case 199u: goto L_003F9EFC;
    case 200u: goto L_003F9F0C;
    case 201u: goto L_003F9F7C;
    case 202u: goto L_003F9FC4;
    case 203u: goto L_003FA150;
    case 204u: goto L_003FA1A0;
    case 205u: goto L_003FA1C0;
    case 206u: goto L_003FA224;
    case 207u: goto L_003FA248;
    case 208u: goto L_003FA270;
    case 209u: goto L_003FA2CC;
    case 210u: goto L_003FA2F8;
    case 211u: goto L_003FA338;
    case 212u: goto L_003FA370;
    case 213u: goto L_003FA390;
    case 214u: goto L_003FA3C0;
    case 215u: goto L_003FA3D0;
    case 216u: goto L_003FA3F4;
    case 217u: goto L_003FA404;
    case 218u: goto L_003FA444;
    case 219u: goto L_003FA470;
    case 220u: goto L_003FA4C4;
    case 221u: goto L_003FA504;
    case 222u: goto L_003FA544;
    case 223u: goto L_003FA584;
    case 224u: goto L_003FA5C4;
    case 225u: goto L_003FA5E8;
    case 226u: goto L_003FA628;
    case 227u: goto L_003FA668;
    case 228u: goto L_003FA6A8;
    case 229u: goto L_003FA6E8;
    case 230u: goto L_003FA728;
    case 231u: goto L_003FA74C;
    case 232u: goto L_003FA770;
    case 233u: goto L_003FA784;
    case 234u: goto L_003FA7E0;
    case 235u: goto L_003FA810;
    case 236u: goto L_003FA820;
    case 237u: goto L_003FA8B0;
    case 238u: goto L_003FA8E4;
    case 239u: goto L_003FA8FC;
    case 240u: goto L_003FA914;
    case 241u: goto L_003FA940;
    case 242u: goto L_003FA984;
    case 243u: goto L_003FAA3C;
    case 244u: goto L_003FAA60;
    case 245u: goto L_003FAAB8;
    case 246u: goto L_003FAAD8;
    case 247u: goto L_003FAAF0;
    case 248u: goto L_003FAB04;
    case 249u: goto L_003FAB40;
    case 250u: goto L_003FAB78;
    case 251u: goto L_003FAB8C;
    case 252u: goto L_003FAB9C;
    case 253u: goto L_003FABC0;
    case 254u: goto L_003FAC10;
    case 255u: goto L_003FAC40;
    case 256u: goto L_003FAC58;
    case 257u: goto L_003FAC64;
    case 258u: goto L_003FACC0;
    case 259u: goto L_003FACD0;
    case 260u: goto L_003FACF0;
    case 261u: goto L_003FAD20;
    case 262u: goto L_003FAD4C;
    case 263u: goto L_003FAD6C;
    case 264u: goto L_003FAD7C;
    case 265u: goto L_003FAD90;
    case 266u: goto L_003FADF0;
    case 267u: goto L_003FAF38;
    case 268u: goto L_003FAF8C;
    case 269u: goto L_003FAFC0;
    case 270u: goto L_003FAFD4;
    case 271u: goto L_003FB000;
    case 272u: goto L_003FB030;
    case 273u: goto L_003FB048;
    case 274u: goto L_003FB060;
    case 275u: goto L_003FB088;
    case 276u: goto L_003FB0A4;
    case 277u: goto L_003FB0C0;
    case 278u: goto L_003FB0D0;
    case 279u: goto L_003FB11C;
    case 280u: goto L_003FB128;
    case 281u: goto L_003FB144;
    case 282u: goto L_003FB184;
    case 283u: goto L_003FB1D4;
    case 284u: goto L_003FB1E8;
    case 285u: goto L_003FB1F4;
    case 286u: goto L_003FB23C;
    case 287u: goto L_003FB274;
    case 288u: goto L_003FB290;
    case 289u: goto L_003FB2A4;
    case 290u: goto L_003FB2D0;
    case 291u: goto L_003FB300;
    case 292u: goto L_003FB318;
    case 293u: goto L_003FB330;
    case 294u: goto L_003FB358;
    case 295u: goto L_003FB374;
    case 296u: goto L_003FB390;
    case 297u: goto L_003FB3A0;
    case 298u: goto L_003FB404;
    case 299u: goto L_003FB40C;
    case 300u: goto L_003FB424;
    case 301u: goto L_003FB434;
    case 302u: goto L_003FB448;
    case 303u: goto L_003FB460;
    case 304u: goto L_003FB474;
    case 305u: goto L_003FB49C;
    case 306u: goto L_003FB4B0;
    case 307u: goto L_003FB4E0;
    case 308u: goto L_003FB4F8;
    case 309u: goto L_003FB510;
    case 310u: goto L_003FB538;
    case 311u: goto L_003FB554;
    case 312u: goto L_003FB570;
    case 313u: goto L_003FB580;
    case 314u: goto L_003FB5B4;
    case 315u: goto L_003FB5C0;
    case 316u: goto L_003FB5CC;
    case 317u: goto L_003FB668;
    case 318u: goto L_003FB690;
    case 319u: goto L_003FB6C0;
    case 320u: goto L_003FB6E0;
    case 321u: goto L_003FB6F4;
    case 322u: goto L_003FB720;
    case 323u: goto L_003FB750;
    case 324u: goto L_003FB768;
    case 325u: goto L_003FB780;
    case 326u: goto L_003FB7A8;
    case 327u: goto L_003FB7C4;
    case 328u: goto L_003FB7E0;
    case 329u: goto L_003FB7F0;
    case 330u: goto L_003FB824;
    case 331u: goto L_003FB830;
    case 332u: goto L_003FB83C;
    case 333u: goto L_003FB8D8;
    case 334u: goto L_003FB900;
    case 335u: goto L_003FB914;
    case 336u: goto L_003FB940;
    case 337u: goto L_003FB970;
    case 338u: goto L_003FB988;
    case 339u: goto L_003FB9A0;
    case 340u: goto L_003FB9C8;
    case 341u: goto L_003FB9E4;
    case 342u: goto L_003FBA00;
    case 343u: goto L_003FBA10;
    case 344u: goto L_003FBA3C;
    case 345u: goto L_003FBA50;
    case 346u: goto L_003FBA60;
    case 347u: goto L_003FBA74;
    case 348u: goto L_003FBAA0;
    case 349u: goto L_003FBAD0;
    case 350u: goto L_003FBAE8;
    case 351u: goto L_003FBB00;
    case 352u: goto L_003FBB28;
    case 353u: goto L_003FBB44;
    case 354u: goto L_003FBB60;
    case 355u: goto L_003FBB70;
    case 356u: goto L_003FBBBC;
    case 357u: goto L_003FBBD0;
    case 358u: goto L_003FBBE4;
    case 359u: goto L_003FBC0C;
    case 360u: goto L_003FBC20;
    case 361u: goto L_003FBC50;
    case 362u: goto L_003FBC68;
    case 363u: goto L_003FBC80;
    case 364u: goto L_003FBCA8;
    case 365u: goto L_003FBCC4;
    case 366u: goto L_003FBCE0;
    case 367u: goto L_003FBCF0;
    case 368u: goto L_003FBD38;
    case 369u: goto L_003FBD50;
    case 370u: goto L_003FBD80;
    case 371u: goto L_003FBDA0;
    case 372u: goto L_003FBDB4;
    case 373u: goto L_003FBDE0;
    case 374u: goto L_003FBE10;
    case 375u: goto L_003FBE40;
    case 376u: goto L_003FBE58;
    case 377u: goto L_003FBE70;
    case 378u: goto L_003FBE98;
    case 379u: goto L_003FBEB4;
    case 380u: goto L_003FBED0;
    case 381u: goto L_003FBEE0;
    case 382u: goto L_003FBF00;
    case 383u: goto L_003FBF14;
    case 384u: goto L_003FBF40;
    case 385u: goto L_003FBFC0;
    default: bad_entry(c, 0x003F8000u); return;
    }
L_003F8000:
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[4].d[0] = c.r[4].d[0] | 46871ull;
    c.f[0] = c.r[4].w[0];
    c.f[2] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[3].w[0] + 8u));  goto L_003F8028; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), 0u);  if (t) { goto L_003F8038; } }
L_003F8028:
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.budget -= 4;
L_003F8038:
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.f[0]);  c.pc = t; return; }
L_003F8050:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8064u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003F8064u) [[unlikely]] return; }
L_003F8064:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 12192u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F80A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F80E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F80D0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003F80D0u) [[unlikely]] return; }
L_003F80D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F80EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F80E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003F80E8u) [[unlikely]] return; }
L_003F80E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F80EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F8100:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8128u); set32(c.r[4], 0u + 68u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003F8128u) [[unlikely]] return; }
L_003F8128:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003F8148; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8144u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 2u, depth + 1u); else { c.pc = 0x003F8050u; return; } if (c.pc != 0x003F8144u) [[unlikely]] return; }
L_003F8144:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003F8148:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F8160:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 256u);  c.pc = t; return; }
L_003F8170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F81F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8198u);  if (depth < kMaxDepth) unit_00B6(c, 19u, depth + 1u); else { c.pc = 0x003F82D0u; return; } if (c.pc != 0x003F8198u) [[unlikely]] return; }
L_003F8198:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003F81E0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    st32((c.r[16].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003F81E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F81C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 16u, depth + 1u); else { c.pc = 0x003F8230u; return; } if (c.pc != 0x003F81C4u) [[unlikely]] return; }
L_003F81C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[16].w[0] + 64u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003F81F4; }
L_003F81E0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003F81E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003F81F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003F81F4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F8200:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003F8228; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8224u);  if (depth < kMaxDepth) unit_00B6(c, 20u, depth + 1u); else { c.pc = 0x003F8310u; return; } if (c.pc != 0x003F8224u) [[unlikely]] return; }
L_003F8224:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F8228:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F8230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 44u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 48u)));  goto L_003F828C; }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 48u)));  goto L_003F8264; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 48u)));  if (t) { goto L_003F82B4; } }
L_003F8264:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8284u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003F8284u) [[unlikely]] return; }
L_003F8284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_003F82B0; } }
L_003F828C:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F82ACu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003F82ACu) [[unlikely]] return; }
L_003F82AC:
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 1;
L_003F82B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 1;
L_003F82B4:
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F82D0:
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F82FC; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 48u)));  goto L_003F82F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8304; } }
L_003F82F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_003F8304; } }
L_003F82FC:
    set32(c.r[2], ld32((c.r[5].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 2;
L_003F8304:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F8310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 44u)));
    c.budget -= 9;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[5].w[0] + 52u)));  goto L_003F8378; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 32u)));  goto L_003F8344; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003F83A4; } }
L_003F8344:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F83A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8354u); set32(c.r[5], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_000E(c, 148u, depth + 1u); else { c.pc = 0x00158E90u; return; } if (c.pc != 0x003F8354u) [[unlikely]] return; }
L_003F8354:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.r[1].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003F83A0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8370u); set32(c.r[4], ld32((c.r[2].w[0] + 32u)));  if (depth < kMaxDepth) unit_000E(c, 228u, depth + 1u); else { c.pc = 0x00159AE0u; return; } if (c.pc != 0x003F8370u) [[unlikely]] return; }
L_003F8370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F83A0; } }
L_003F8378:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 52u);  if (t) { goto L_003F83A0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[1].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003F83A0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[3].w[0] + 56u), c.r[4].w[0]);
    c.budget -= 2;
L_003F83A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003F83A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F83B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003F83DC; } }
    c.budget -= 2;
    if (c.r[5].sd[0] >= 0) { st32((c.r[17].w[0] + 60u), c.r[5].w[0]);  goto L_003F83E0; }
L_003F83DC:
    st32((c.r[17].w[0] + 60u), 0u);
    c.budget -= 1;
L_003F83E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F83E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 16u, depth + 1u); else { c.pc = 0x003F8230u; return; } if (c.pc != 0x003F83E8u) [[unlikely]] return; }
L_003F83E8:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { st32((c.r[17].w[0] + 64u), c.r[16].w[0]);  goto L_003F8400; }
    set32(c.r[3], 0u - 1u);
    st32((c.r[17].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 2;
L_003F8400:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F8420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8434u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003F8434u) [[unlikely]] return; }
L_003F8434:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 12256u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F8460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F84A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8490u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003F8490u) [[unlikely]] return; }
L_003F8490:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F84AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F84A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003F84A8u) [[unlikely]] return; }
L_003F84A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F84AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F84C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F84E8u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003F84E8u) [[unlikely]] return; }
L_003F84E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003F8508; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8504u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 25u, depth + 1u); else { c.pc = 0x003F8420u; return; } if (c.pc != 0x003F8504u) [[unlikely]] return; }
L_003F8504:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003F8508:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F8520:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 620u);  c.pc = t; return; }
L_003F8530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F859C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8558u);  if (depth < kMaxDepth) unit_00B6(c, 41u, depth + 1u); else { c.pc = 0x003F8650u; return; } if (c.pc != 0x003F8558u) [[unlikely]] return; }
L_003F8558:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003F858C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003F8590; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8584u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 39u, depth + 1u); else { c.pc = 0x003F85E0u; return; } if (c.pc != 0x003F8584u) [[unlikely]] return; }
L_003F8584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003F85A0; } }
L_003F858C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003F8590:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003F859C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003F85A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F85B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003F85D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F85D4u);  if (depth < kMaxDepth) unit_00B6(c, 42u, depth + 1u); else { c.pc = 0x003F8690u; return; } if (c.pc != 0x003F85D4u) [[unlikely]] return; }
L_003F85D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F85D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F85E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 48u)));  goto L_003F8608; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0])));  if (t) { goto L_003F8630; } }
L_003F8608:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8628u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003F8628u) [[unlikely]] return; }
L_003F8628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_003F863C; } }
L_003F8630:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003F863C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F8650:
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F8668; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[4].w[0])));  if (t) { goto L_003F8674; } }
L_003F8668:
    set32(c.r[2], ld32((c.r[5].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_003F8680; } }
L_003F8674:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003F8680:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F8690:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003F86B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F86B4u); set32(c.r[5], ld32((c.r[5].w[0] + 48u)));  if (depth < kMaxDepth) unit_000E(c, 140u, depth + 1u); else { c.pc = 0x00158D80u; return; } if (c.pc != 0x003F86B4u) [[unlikely]] return; }
L_003F86B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F86B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F86C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { st32((c.r[4].w[0] + 56u), 0u);  goto L_003F86DC; }
    c.budget -= 2;
    if (c.r[5].sd[0] >= 0) { st32((c.r[4].w[0] + 56u), c.r[5].w[0]);  goto L_003F86DC; }
    st32((c.r[4].w[0] + 56u), 0u);
    c.budget -= 1;
L_003F86DC:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F85E0u | kUnwind; return; } goto L_003F85E0; }
L_003F86F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8704u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003F8704u) [[unlikely]] return; }
L_003F8704:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 12320u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F8730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F8778; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8760u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003F8760u) [[unlikely]] return; }
L_003F8760:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F877C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8778u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003F8778u) [[unlikely]] return; }
L_003F8778:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F877C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F8790:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F87B8u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003F87B8u) [[unlikely]] return; }
L_003F87B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003F87D8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F87D4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 45u, depth + 1u); else { c.pc = 0x003F86F0u; return; } if (c.pc != 0x003F87D4u) [[unlikely]] return; }
L_003F87D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003F87D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F87F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 31u);  c.pc = t; return; }
L_003F8800:
    c.budget -= 2;
    { c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0018F420u | kUnwind; return; } [[clang::musttail]] return unit_001B(c, 216u, depth); }
L_003F8810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8824u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003F8824u) [[unlikely]] return; }
L_003F8824:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + 12384u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 128u), 0u);
    st32((c.r[16].w[0] + 144u), 0u);
    st32((c.r[16].w[0] + 148u), 0u);
    st32((c.r[16].w[0] + 132u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 168u), 0u);
    st32((c.r[16].w[0] + 172u), 0u);
    st32((c.r[16].w[0] + 176u), 0u);
    st32((c.r[16].w[0] + 164u), 0u);
    st32((c.r[16].w[0] + 196u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 31;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003F88D0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003F88C0; }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F88D0; } }
L_003F88C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003F88D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F88E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F8930; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 12384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F890Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 61u, depth + 1u); else { c.pc = 0x003F8950u; return; } if (c.pc != 0x003F890Cu) [[unlikely]] return; }
L_003F890C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8918u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003F8918u) [[unlikely]] return; }
L_003F8918:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F8934; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8930u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003F8930u) [[unlikely]] return; }
L_003F8930:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F8934:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F8950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F8978; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8974u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003F8974u) [[unlikely]] return; }
L_003F8974:
    st32((c.r[16].w[0] + 84u), 0u);
    c.budget -= 1;
L_003F8978:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 76u)));  goto L_003F8994; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F898Cu);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x003F898Cu) [[unlikely]] return; }
L_003F898C:
    st32((c.r[16].w[0] + 64u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 2;
L_003F8994:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 72u)));  goto L_003F89B0; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F89A8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003F89A8u) [[unlikely]] return; }
L_003F89A8:
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 2;
L_003F89B0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  goto L_003F89CC; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F89C4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003F89C4u) [[unlikely]] return; }
L_003F89C4:
    st32((c.r[16].w[0] + 72u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 2;
L_003F89CC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  goto L_003F89F4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 68u), 0u);  goto L_003F89F0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F89ECu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F89ECu) [[unlikely]] return; }
L_003F89EC:
    st32((c.r[16].w[0] + 68u), 0u);
    c.budget -= 1;
L_003F89F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_003F89F4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 52u)));  goto L_003F8A1C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 80u), 0u);  goto L_003F8A18; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8A14u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F8A14u) [[unlikely]] return; }
L_003F8A14:
    st32((c.r[16].w[0] + 80u), 0u);
    c.budget -= 1;
L_003F8A18:
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_003F8A1C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003F8A38; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8A30u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003F8A30u) [[unlikely]] return; }
L_003F8A30:
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_003F8A38:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F8A50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8A78u); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003F8A78u) [[unlikely]] return; }
L_003F8A78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003F8A98; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8A94u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 55u, depth + 1u); else { c.pc = 0x003F8810u; return; } if (c.pc != 0x003F8A94u) [[unlikely]] return; }
L_003F8A94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003F8A98:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F8AB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 105u);  c.pc = t; return; }
L_003F8AC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003F8E60; }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 172u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[7], ld32((c.r[6].w[0])));  if (t) { goto L_003F8BC8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 192u)));
    st32((c.r[16].w[0] + 152u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 196u)));
    c.budget -= 6;
    if (c.r[3].sd[0] <= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 152u)));  goto L_003F8B20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 156u), c.r[3].w[0]);  if (t) { goto L_003F8B24; } }
L_003F8B20:
    st32((c.r[16].w[0] + 156u), c.r[3].w[0]);
    c.budget -= 1;
L_003F8B24:
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull; st32((c.r[16].w[0] + 136u), c.r[3].w[0]);  if (t) { goto L_003F8E4C; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 176u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003F8E50; }
    set32(c.r[5], ld32((c.r[6].w[0] + 200u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003F8E4C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F8E4C; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_003F8E4C; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F8E4C; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 208u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;  goto L_003F8BB0; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;  goto L_003F8BA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  if (t) { goto L_003F8BCC; } }
L_003F8BA0:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { st32((c.r[16].w[0] + 140u), c.r[2].w[0]);  goto L_003F8BC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 140u), 0u);  if (t) { goto L_003F8BC8; } }
L_003F8BB0:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_003F8BC4; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 140u), c.r[2].w[0]);  if (t) { goto L_003F8BC8; } }
L_003F8BC4:
    st32((c.r[16].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 1;
L_003F8BC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_003F8BCC:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8BE8u); set32(c.r[5], c.r[2].w[0] << 5);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003F8BE8u) [[unlikely]] return; }
L_003F8BE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003F8E4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8BF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 232u, depth + 1u); else { c.pc = 0x003FA770u; return; } if (c.pc != 0x003F8BF8u) [[unlikely]] return; }
L_003F8BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8C00u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_00A9(c, 28u, depth + 1u); else { c.pc = 0x003C42E0u; return; } if (c.pc != 0x003F8C00u) [[unlikely]] return; }
L_003F8C00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_003F8E4C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 68u)));
    st32((c.r[16].w[0] + 132u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 8;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[2], 0u + 5u);  goto L_003F8C8C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 3u);  goto L_003F8C5C; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[16].w[0] + 144u), c.r[4].w[0]);  goto L_003F8C44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8D40; } }
L_003F8C44:
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8C54u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003F8C54u) [[unlikely]] return; }
L_003F8C54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_003F8D40; } }
L_003F8C5C:
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8C70u); c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(48ll);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003F8C70u) [[unlikely]] return; }
L_003F8C70:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8C7Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003F8C7Cu) [[unlikely]] return; }
L_003F8C7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_003F8D40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8E4C; } }
L_003F8C8C:
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8CA0u); c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(20ll);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003F8CA0u) [[unlikely]] return; }
L_003F8CA0:
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8CB8u); set32(c.r[5], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003F8CB8u) [[unlikely]] return; }
L_003F8CB8:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8CC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 237u, depth + 1u); else { c.pc = 0x003FA8B0u; return; } if (c.pc != 0x003F8CC4u) [[unlikely]] return; }
L_003F8CC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F8E4C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F8E4C; } }
    st32((c.r[3].w[0]), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8CE4u); set32(c.r[4], ld32((c.r[16].w[0] + 144u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003F8CE4u) [[unlikely]] return; }
L_003F8CE4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 144u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], 0u + 2u);  if (t) { goto L_003F8D40; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 1;
L_003F8D10:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] - 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 144u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8D10u | kUnwind; return; } goto L_003F8D10; } }
    c.budget -= 1;
L_003F8D40:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F8E4C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 80u), 0u);  goto L_003F8D74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8D64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 241u, depth + 1u); else { c.pc = 0x003FA940u; return; } if (c.pc != 0x003F8D64u) [[unlikely]] return; }
L_003F8D64:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  goto L_003F8D78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8E4C; } }
L_003F8D74:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_003F8D78:
    set32(c.r[3], ld32((c.r[3].w[0] + 164u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003F8DD8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.f[1] = 0u;
    c.budget -= 2;
L_003F8D90:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 164u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.f[2] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F8E4C; } }
    c.f[0] = ld32((c.r[16].w[0] + 172u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 172u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8D90u | kUnwind; return; } goto L_003F8D90; } }
    c.budget -= 1;
L_003F8DD8:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 152u)));  goto L_003F8E04; }
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = ld32((c.r[4].w[0] + 184u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 176u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 6;
L_003F8E04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8E0Cu);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003F8E0Cu) [[unlikely]] return; }
L_003F8E0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 180u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8E2Cu); set32(c.r[4], ld32((c.r[16].w[0] + 156u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003F8E2Cu) [[unlikely]] return; }
L_003F8E2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 184u), c.f[0]);  if (t) { goto L_003F8E5C; } }
L_003F8E4C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003F8E50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003F8E5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003F8E60:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F8E70:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 24u), c.f[22]);
    st32((c.r[29].w[0] + 20u), c.f[21]);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003F9374; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[20].w[0] + 160u), c.f[20]);  if (t) { goto L_003F8EDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 196u), 0u);  if (t) { goto L_003F8EE8; } }
L_003F8EDC:
    set32(c.r[3], ld32((c.r[20].w[0] + 196u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_003F9378; }
L_003F8EE8:
    c.f[0] = ld32((c.r[20].w[0] + 164u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[20].w[0] + 164u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    c.f[0] = ld32((c.r[20].w[0] + 164u));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F9374; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F8F60; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 144u)));
    set32(c.r[17], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_003F8F60; } }
    set32(c.r[16], c.r[17].w[0] << 4);
    c.budget -= 1;
L_003F8F3C:
    set32(c.r[3], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[2], c.r[17].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8F54u); set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x003F8F54u) [[unlikely]] return; }
L_003F8F54:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] > 0; set32(c.r[16], c.r[16].w[0] - 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8F3Cu | kUnwind; return; } goto L_003F8F3C; } }
L_003F8F60:
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 84u)));  goto L_003F8F9C; }
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003F8F98; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 84u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8F90u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 254u, depth + 1u); else { c.pc = 0x003FAC10u; return; } if (c.pc != 0x003F8F90u) [[unlikely]] return; }
L_003F8F90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 148u)));  if (t) { goto L_003F9004; } }
L_003F8F98:
    set32(c.r[4], ld32((c.r[20].w[0] + 84u)));
    c.budget -= 1;
L_003F8F9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8FA4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003F8FA4u) [[unlikely]] return; }
L_003F8FA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16144u));
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.f[2] = ld32((c.r[2].w[0] + 16148u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[3].w[0] + 16152u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 16156u));
    st32((c.r[29].w[0] + 196u), c.f[2]);
    st32((c.r[29].w[0] + 200u), c.f[1]);
    st32((c.r[29].w[0] + 204u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[29].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    st32((c.r[29].w[0] + 200u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 84u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9000u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003F9000u) [[unlikely]] return; }
L_003F9000:
    set32(c.r[3], ld32((c.r[20].w[0] + 148u)));
    c.budget -= 1;
L_003F9004:
    set32(c.r[2], ld32((c.r[20].w[0] + 144u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 44u)));  goto L_003F9020; }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 3;
L_003F9020:
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_003F9048; }
    c.f[1] = ld32((c.r[20].w[0] + 164u));
    c.f[0] = ld32((c.r[4].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F92D0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003F9048:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);  goto L_003F906C; }
    set32(c.r[16], ld32((c.r[20].w[0] + 128u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F905Cu); c.f[12] = ld32((c.r[4].w[0] + 80u));  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003F905Cu) [[unlikely]] return; }
L_003F905C:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F92D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.budget -= 1;
L_003F906C:
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[20].w[0] + 44u)));  goto L_003F908C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_003F90AC; } }
L_003F908C:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F90A0u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003F90A0u) [[unlikely]] return; }
L_003F90A0:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[19], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_003F90AC:
    set32(c.r[2], ld32((c.r[20].w[0] + 148u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[6], ld32((c.r[20].w[0] + 144u)));  goto L_003F90DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F90C4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 234u, depth + 1u); else { c.pc = 0x003FA7E0u; return; } if (c.pc != 0x003F90C4u) [[unlikely]] return; }
L_003F90C4:
    set32(c.r[6], ld32((c.r[20].w[0] + 84u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F90D4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 138u, depth + 1u); else { c.pc = 0x003F94C0u; return; } if (c.pc != 0x003F90D4u) [[unlikely]] return; }
L_003F90D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F92D0; } }
L_003F90DC:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003F90FC; }
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F916C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003F90FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9104u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003F9104u) [[unlikely]] return; }
L_003F9104:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[22] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[21] = 0u;
    c.budget -= 10;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_003F92D0; } }
L_003F912C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F913Cu); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_00B6(c, 249u, depth + 1u); else { c.pc = 0x003FAB40u; return; } if (c.pc != 0x003F913Cu) [[unlikely]] return; }
L_003F913C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9144u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 234u, depth + 1u); else { c.pc = 0x003FA7E0u; return; } if (c.pc != 0x003F9144u) [[unlikely]] return; }
L_003F9144:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9154u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00B6(c, 138u, depth + 1u); else { c.pc = 0x003F94C0u; return; } if (c.pc != 0x003F9154u) [[unlikely]] return; }
L_003F9154:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.f[21] = fp::ee::add(c.fcr31, c.f[21], c.f[22]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F912Cu | kUnwind; return; } goto L_003F912C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F92D0; } }
L_003F916C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[21].d[0] = 0ull + 0ull;  goto L_003F91E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F917Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003F917Cu) [[unlikely]] return; }
L_003F917C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], ld32((c.r[20].w[0] + 64u)));
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], ld32((c.r[20].w[0] + 84u)));
    c.f[13] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[12] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F91A4u);  if (depth < kMaxDepth) unit_0018(c, 118u, depth + 1u); else { c.pc = 0x00180E40u; return; } if (c.pc != 0x003F91A4u) [[unlikely]] return; }
L_003F91A4:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003F92D0; } }
L_003F91AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F91B4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 234u, depth + 1u); else { c.pc = 0x003FA7E0u; return; } if (c.pc != 0x003F91B4u) [[unlikely]] return; }
L_003F91B4:
    set32(c.r[4], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F91C0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 120u, depth + 1u); else { c.pc = 0x00180FF0u; return; } if (c.pc != 0x003F91C0u) [[unlikely]] return; }
L_003F91C0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F91D0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 138u, depth + 1u); else { c.pc = 0x003F94C0u; return; } if (c.pc != 0x003F91D0u) [[unlikely]] return; }
L_003F91D0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F91ACu | kUnwind; return; } goto L_003F91AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F92D0; } }
L_003F91E8:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_003F9260; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003F91FC:
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    c.f[16] = 0u;
    c.f[17] = c.f[16];
    c.f[18] = c.f[16];
    st32((c.r[29].w[0]), 0u);
    set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    c.f[13] = ld32((c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    c.f[14] = ld32((c.r[4].w[0] + 4u));
    c.f[15] = ld32((c.r[4].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[19] = c.f[16];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9240u); set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0018(c, 150u, depth + 1u); else { c.pc = 0x00181D50u; return; } if (c.pc != 0x003F9240u) [[unlikely]] return; }
L_003F9240:
    set32(c.r[6], ld32((c.r[20].w[0] + 144u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 16u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[2].d[0] = c.r[21].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 88u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F91FCu | kUnwind; return; } goto L_003F91FC; } }
    c.budget -= 1;
L_003F9260:
    set32(c.r[5], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F926Cu); set32(c.r[4], ld32((c.r[20].w[0] + 68u)));  if (depth < kMaxDepth) unit_0018(c, 130u, depth + 1u); else { c.pc = 0x00181230u; return; } if (c.pc != 0x003F926Cu) [[unlikely]] return; }
L_003F926C:
    c.f[22] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9278u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003F9278u) [[unlikely]] return; }
L_003F9278:
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[21] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_003F92D0; } }
L_003F9298:
    set32(c.r[4], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F92A8u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_0018(c, 142u, depth + 1u); else { c.pc = 0x00181A10u; return; } if (c.pc != 0x003F92A8u) [[unlikely]] return; }
L_003F92A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F92B0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 234u, depth + 1u); else { c.pc = 0x003FA7E0u; return; } if (c.pc != 0x003F92B0u) [[unlikely]] return; }
L_003F92B0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F92C0u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_00B6(c, 138u, depth + 1u); else { c.pc = 0x003F94C0u; return; } if (c.pc != 0x003F92C0u) [[unlikely]] return; }
L_003F92C0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.f[22] = fp::ee::add(c.fcr31, c.f[22], c.f[21]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9298u | kUnwind; return; } goto L_003F9298; } }
L_003F92D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[20].w[0] + 44u)));  goto L_003F92F8; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[20].w[0] + 196u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 3;
L_003F92F8:
    set32(c.r[2], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_003F936C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[5], c.r[2].w[0] + 240u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F931Cu); set32(c.r[6], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003F931Cu) [[unlikely]] return; }
L_003F931C:
    st32((c.r[20].w[0] + 112u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] + 96u);
    st32((c.r[20].w[0] + 120u), 0u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    st32((c.r[20].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9340u); set32(c.r[6], c.r[20].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x003F9340u) [[unlikely]] return; }
L_003F9340:
    set32(c.r[4], c.r[20].w[0] + 112u);
    set32(c.r[5], c.r[20].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9350u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x003F9350u) [[unlikely]] return; }
L_003F9350:
    set32(c.r[4], c.r[20].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F935Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003F935Cu) [[unlikely]] return; }
L_003F935C:
    set32(c.r[4], c.r[20].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9368u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003F9368u) [[unlikely]] return; }
L_003F9368:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003F936C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9374u);  if (depth < kMaxDepth) unit_00B6(c, 235u, depth + 1u); else { c.pc = 0x003FA810u; return; } if (c.pc != 0x003F9374u) [[unlikely]] return; }
L_003F9374:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_003F9378:
    c.f[22] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003F93B0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8950u | kUnwind; return; } goto L_003F8950; }
L_003F93C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F949C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F9400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003F94A0; } }
L_003F9400:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F9418; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9410u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003F9410u) [[unlikely]] return; }
L_003F9410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9418u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003F9418u) [[unlikely]] return; }
L_003F9418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9420u);  if (depth < kMaxDepth) unit_0013(c, 107u, depth + 1u); else { c.pc = 0x0016D590u; return; } if (c.pc != 0x003F9420u) [[unlikely]] return; }
L_003F9420:
    set32(c.r[4], 0u + 19u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F942Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 117u, depth + 1u); else { c.pc = 0x0016D790u; return; } if (c.pc != 0x003F942Cu) [[unlikely]] return; }
L_003F942C:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 180u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F943Cu); set32(c.r[4], ld32((c.r[17].w[0] + 48u)));  if (depth < kMaxDepth) unit_0013(c, 118u, depth + 1u); else { c.pc = 0x0016D7A0u; return; } if (c.pc != 0x003F943Cu) [[unlikely]] return; }
L_003F943C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9444u); set32(c.r[4], ld32((c.r[17].w[0] + 132u)));  if (depth < kMaxDepth) unit_0013(c, 125u, depth + 1u); else { c.pc = 0x0016D8E0u; return; } if (c.pc != 0x003F9444u) [[unlikely]] return; }
L_003F9444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F944Cu);  if (depth < kMaxDepth) unit_0013(c, 149u, depth + 1u); else { c.pc = 0x0016DBD0u; return; } if (c.pc != 0x003F944Cu) [[unlikely]] return; }
L_003F944C:
    set32(c.r[18], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003F9478; } }
    c.f[12] = ld32((c.r[17].w[0] + 160u));
    c.budget -= 1;
L_003F945C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F946Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 191u, depth + 1u); else { c.pc = 0x003F9D90u; return; } if (c.pc != 0x003F946Cu) [[unlikely]] return; }
L_003F946C:
    set32(c.r[18], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { c.f[12] = ld32((c.r[17].w[0] + 160u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F945Cu | kUnwind; return; } goto L_003F945C; }
L_003F9478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9480u);  if (depth < kMaxDepth) unit_0013(c, 151u, depth + 1u); else { c.pc = 0x0016DBF0u; return; } if (c.pc != 0x003F9480u) [[unlikely]] return; }
L_003F9480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9488u);  if (depth < kMaxDepth) unit_0013(c, 111u, depth + 1u); else { c.pc = 0x0016D670u; return; } if (c.pc != 0x003F9488u) [[unlikely]] return; }
L_003F9488:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 160u), 0u);  if (t) { goto L_003F949C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F949Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003F949Cu) [[unlikely]] return; }
L_003F949C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003F94A0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003F94C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_003F94EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F9778; } }
L_003F94EC:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F94FCu); st32((c.r[16].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x003F94FCu) [[unlikely]] return; }
L_003F94FC:
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[5].w[0] + 96u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F95BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9520u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003F9520u) [[unlikely]] return; }
L_003F9520:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9538u); c.f[20] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003F9538u) [[unlikely]] return; }
L_003F9538:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9550u); c.f[21] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003F9550u) [[unlikely]] return; }
L_003F9550:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[0]);
    st32((c.r[29].w[0] + 68u), c.f[21]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9578u); st32((c.r[29].w[0] + 72u), c.f[20]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003F9578u) [[unlikely]] return; }
L_003F9578:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[1] = ld32((c.r[2].w[0] + 128u));
    c.f[0] = ld32((c.r[2].w[0] + 124u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F958Cu); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003F958Cu) [[unlikely]] return; }
L_003F958C:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[2].w[0] + 124u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F95A4u); c.f[12] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003F95A4u) [[unlikely]] return; }
L_003F95A4:
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F95B4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x003F95B4u) [[unlikely]] return; }
L_003F95B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 44u)));  if (t) { goto L_003F961C; } }
L_003F95BC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F9618; } }
    c.f[12] = ld32((c.r[5].w[0] + 116u));
    c.f[13] = ld32((c.r[5].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F95D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 159u, depth + 1u); else { c.pc = 0x003F97A0u; return; } if (c.pc != 0x003F95D4u) [[unlikely]] return; }
L_003F95D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[21] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0] + 108u));
    c.f[13] = ld32((c.r[2].w[0] + 112u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F95ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 159u, depth + 1u); else { c.pc = 0x003F97A0u; return; } if (c.pc != 0x003F95ECu) [[unlikely]] return; }
L_003F95EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[20] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0] + 100u));
    c.f[13] = ld32((c.r[2].w[0] + 104u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9604u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 159u, depth + 1u); else { c.pc = 0x003F97A0u; return; } if (c.pc != 0x003F9604u) [[unlikely]] return; }
L_003F9604:
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 20u), c.f[20]);
    st32((c.r[16].w[0] + 24u), c.f[21]);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 5;
L_003F9618:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003F961C:
    c.f[12] = ld32((c.r[2].w[0] + 148u));
    c.f[13] = ld32((c.r[2].w[0] + 152u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F962Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 159u, depth + 1u); else { c.pc = 0x003F97A0u; return; } if (c.pc != 0x003F962Cu) [[unlikely]] return; }
L_003F962C:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[21] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0] + 140u));
    c.f[13] = ld32((c.r[2].w[0] + 144u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9644u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 159u, depth + 1u); else { c.pc = 0x003F97A0u; return; } if (c.pc != 0x003F9644u) [[unlikely]] return; }
L_003F9644:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[20] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0] + 132u));
    c.f[13] = ld32((c.r[2].w[0] + 136u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F965Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 159u, depth + 1u); else { c.pc = 0x003F97A0u; return; } if (c.pc != 0x003F965Cu) [[unlikely]] return; }
L_003F965C:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 4u), c.f[20]);
    st32((c.r[16].w[0] + 8u), c.f[21]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[12] = ld32((c.r[2].w[0] + 32u));
    c.f[13] = ld32((c.r[2].w[0] + 36u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9684u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 159u, depth + 1u); else { c.pc = 0x003F97A0u; return; } if (c.pc != 0x003F9684u) [[unlikely]] return; }
L_003F9684:
    st32((c.r[16].w[0] + 64u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.f[2] = ld32((c.r[16].w[0] + 64u));  goto L_003F96B0; }
    c.f[12] = ld32((c.r[3].w[0] + 40u));
    c.f[13] = ld32((c.r[3].w[0] + 44u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F96A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 159u, depth + 1u); else { c.pc = 0x003F97A0u; return; } if (c.pc != 0x003F96A8u) [[unlikely]] return; }
L_003F96A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), c.f[0]);  if (t) { goto L_003F96C4; } }
L_003F96B0:
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.budget -= 5;
L_003F96C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[12] = ld32((c.r[2].w[0] + 84u));
    c.f[13] = ld32((c.r[2].w[0] + 88u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F96D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 159u, depth + 1u); else { c.pc = 0x003F97A0u; return; } if (c.pc != 0x003F96D8u) [[unlikely]] return; }
L_003F96D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F96ECu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003F96ECu) [[unlikely]] return; }
L_003F96EC:
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 212u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003F9718; }
    set32(c.r[2], ld32((c.r[3].w[0] + 200u)));
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[0] = ld32((c.r[2].w[0] + 184u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.f[0]);  if (t) { goto L_003F9734; } }
L_003F9718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9720u);  if (depth < kMaxDepth) unit_00B6(c, 208u, depth + 1u); else { c.pc = 0x003FA270u; return; } if (c.pc != 0x003F9720u) [[unlikely]] return; }
L_003F9720:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9730u); c.f[12] = ld32((c.r[2].w[0] + 184u));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003F9730u) [[unlikely]] return; }
L_003F9730:
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 1;
L_003F9734:
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[0] = ld32((c.r[2].w[0] + 160u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    st32((c.r[16].w[0] + 84u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 56u)));  goto L_003F9760; }
    st32((c.r[2].w[0] + 84u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 2;
L_003F9760:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 56u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 128u), c.r[3].w[0]);
    c.budget -= 6;
L_003F9778:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F97A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F97BCu); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_00A9(c, 275u, depth + 1u); else { c.pc = 0x003C6AE0u; return; } if (c.pc != 0x003F97BCu) [[unlikely]] return; }
L_003F97BC:
    c.f[2] = fp::ee::sub(c.fcr31, c.f[20], c.f[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F97F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 164u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 16;
    if (c.r[3].d[0] == c.r[7].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_003F9854; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[1] = ld32((c.r[18].w[0] + 172u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[6], c.r[3].w[0] - 1u);  goto L_003F9928; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_003F9854:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[14] = c.r[2].w[0];
    c.f[13] = 0u;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9878u); c.f[12] = fp::ee::mul(c.fcr31, c.f[14], c.f[0]);  if (depth < kMaxDepth) unit_00B6(c, 260u, depth + 1u); else { c.pc = 0x003FACF0u; return; } if (c.pc != 0x003F9878u) [[unlikely]] return; }
L_003F9878:
    c.f[23] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[14] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9898u); c.f[12] = fp::ee::mul(c.fcr31, c.f[14], c.f[0]);  if (depth < kMaxDepth) unit_00B6(c, 260u, depth + 1u); else { c.pc = 0x003FACF0u; return; } if (c.pc != 0x003F9898u) [[unlikely]] return; }
L_003F9898:
    c.f[22] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[14] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F98B8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[14], c.f[0]);  if (depth < kMaxDepth) unit_00B6(c, 260u, depth + 1u); else { c.pc = 0x003FACF0u; return; } if (c.pc != 0x003F98B8u) [[unlikely]] return; }
L_003F98B8:
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[14] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[21] = c.f[0];
    c.f[13] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F98D8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[14], c.f[1]);  if (depth < kMaxDepth) unit_00B6(c, 260u, depth + 1u); else { c.pc = 0x003FACF0u; return; } if (c.pc != 0x003F98D8u) [[unlikely]] return; }
L_003F98D8:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F98E4u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003F98E4u) [[unlikely]] return; }
L_003F98E4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F98F4u); set32(c.r[16], c.r[2].w[0] << 24);  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003F98F4u) [[unlikely]] return; }
L_003F98F4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    c.f[12] = c.f[21];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9908u); c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003F9908u) [[unlikely]] return; }
L_003F9908:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.f[12] = c.f[22];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F991Cu); c.r[16].d[0] = c.r[2].d[0] | c.r[16].d[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003F991Cu) [[unlikely]] return; }
L_003F991C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[16].d[0];  if (t) { goto L_003F9B48; } }
L_003F9928:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] <= 0; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_003F9A90; } }
    set32(c.r[8], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_003F9934:
    set32(c.r[3], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[8].w[0])));
    set32(c.r[17], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.f[0] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003F9958; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F9958:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.f[12] = fp::ee::sub(c.fcr31, c.f[12], c.f[0]);  goto L_003F9A7C; }
    c.f[4] = fp::ee::div(c.fcr31, c.f[12], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[5].w[0] + 16u));
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.f[13] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[13], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[14] = c.r[2].w[0];
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    c.f[12] = fp::ee::mul(c.fcr31, c.f[14], c.f[0]);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.facc = fp::ee::add(c.fcr31, c.f[13], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    c.f[22] = fp::ee::mul(c.fcr31, c.f[14], c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[13], c.f[3]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[13], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    c.f[21] = fp::ee::mul(c.fcr31, c.f[14], c.f[2]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F99E8u); c.f[20] = fp::ee::mul(c.fcr31, c.f[14], c.f[0]);  if (depth < kMaxDepth) unit_00B6(c, 260u, depth + 1u); else { c.pc = 0x003FACF0u; return; } if (c.pc != 0x003F99E8u) [[unlikely]] return; }
L_003F99E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F99F0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003F99F0u) [[unlikely]] return; }
L_003F99F0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] << 24);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[14] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9A10u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00B6(c, 260u, depth + 1u); else { c.pc = 0x003FACF0u; return; } if (c.pc != 0x003F9A10u) [[unlikely]] return; }
L_003F9A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9A18u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003F9A18u) [[unlikely]] return; }
L_003F9A18:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 16);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[16].d[0] = c.r[16].d[0] | c.r[3].d[0];
    c.f[14] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9A3Cu); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_00B6(c, 260u, depth + 1u); else { c.pc = 0x003FACF0u; return; } if (c.pc != 0x003F9A3Cu) [[unlikely]] return; }
L_003F9A3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9A44u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003F9A44u) [[unlikely]] return; }
L_003F9A44:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[16].d[0] = c.r[2].d[0] | c.r[16].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[14] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9A68u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00B6(c, 260u, depth + 1u); else { c.pc = 0x003FACF0u; return; } if (c.pc != 0x003F9A68u) [[unlikely]] return; }
L_003F9A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9A70u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003F9A70u) [[unlikely]] return; }
L_003F9A70:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[16].d[0];  if (t) { goto L_003F9B48; } }
L_003F9A7C:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[2].d[0] = c.r[9].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9934u | kUnwind; return; } goto L_003F9934; } }
    c.budget -= 1;
L_003F9A90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[14] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9AACu); c.f[12] = fp::ee::mul(c.fcr31, c.f[14], c.f[0]);  if (depth < kMaxDepth) unit_00B6(c, 260u, depth + 1u); else { c.pc = 0x003FACF0u; return; } if (c.pc != 0x003F9AACu) [[unlikely]] return; }
L_003F9AAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9AB4u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003F9AB4u) [[unlikely]] return; }
L_003F9AB4:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[16], c.r[3].w[0] << 24);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.f[14] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9AD8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[14], c.f[0]);  if (depth < kMaxDepth) unit_00B6(c, 260u, depth + 1u); else { c.pc = 0x003FACF0u; return; } if (c.pc != 0x003F9AD8u) [[unlikely]] return; }
L_003F9AD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9AE0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003F9AE0u) [[unlikely]] return; }
L_003F9AE0:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.r[16].d[0] = c.r[16].d[0] | c.r[3].d[0];
    c.f[14] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9B08u); c.f[12] = fp::ee::mul(c.fcr31, c.f[14], c.f[0]);  if (depth < kMaxDepth) unit_00B6(c, 260u, depth + 1u); else { c.pc = 0x003FACF0u; return; } if (c.pc != 0x003F9B08u) [[unlikely]] return; }
L_003F9B08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9B10u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003F9B10u) [[unlikely]] return; }
L_003F9B10:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[16].d[0] = c.r[3].d[0] | c.r[16].d[0];
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9B38u); c.f[12] = fp::ee::mul(c.fcr31, c.f[14], c.f[0]);  if (depth < kMaxDepth) unit_00B6(c, 260u, depth + 1u); else { c.pc = 0x003FACF0u; return; } if (c.pc != 0x003F9B38u) [[unlikely]] return; }
L_003F9B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9B40u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003F9B40u) [[unlikely]] return; }
L_003F9B40:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[16].d[0];
    c.budget -= 2;
L_003F9B48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F9B70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 152u)));
    mmi::div(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9BACu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003F9BACu) [[unlikely]] return; }
L_003F9BAC:
    set32(c.r[2], ld32((c.r[19].w[0] + 152u)));
    mmi::div(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9BC0u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x003F9BC0u) [[unlikely]] return; }
L_003F9BC0:
    c.f[1] = ld32((c.r[19].w[0] + 180u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    st32((c.r[17].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 184u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 180u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 184u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F9C20:
    set32(c.r[3], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 72u)));  goto L_003F9D4C; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 72u)));  goto L_003F9CFC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 72u)));  goto L_003F9CA8; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 72u)));  goto L_003F9C58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[5].w[0] + 72u)));  if (t) { goto L_003F9D88; } }
L_003F9C58:
    set32(c.r[8], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 72u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 204u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 188u)));  goto L_003F9C88; }
    set32(c.r[2], ld32((c.r[4].w[0] + 136u)));
    c.r[2].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F9D84; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 188u)));
    c.budget -= 1;
L_003F9C88:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 72u)));  goto L_003F9C9C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 200u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_003F9D84; } }
L_003F9C9C:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_003F9D84; } }
L_003F9CA8:
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 136u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[8], ld32((c.r[4].w[0] + 44u)));  goto L_003F9CC8; }
    st32((c.r[5].w[0] + 72u), 0u);
    set32(c.r[8], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 2;
L_003F9CC8:
    set32(c.r[3], ld32((c.r[5].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[8].w[0] + 204u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F9D84; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 188u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] - 1u);  goto L_003F9CF4; }
    set32(c.r[2], ld32((c.r[8].w[0] + 200u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_003F9D84; } }
L_003F9CF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_003F9D84; } }
L_003F9CFC:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[5].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_003F9D14; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[5].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 3;
L_003F9D14:
    set32(c.r[8], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[8].w[0] + 204u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F9D84; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 188u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_003F9D44; }
    set32(c.r[2], ld32((c.r[8].w[0] + 200u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_003F9D84; } }
L_003F9D44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_003F9D84; } }
L_003F9D4C:
    set32(c.r[8], c.r[2].w[0] - 1u);
    st32((c.r[5].w[0] + 72u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 204u)));
    c.r[1].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F9D84; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 188u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[8].w[0] + 1u);  goto L_003F9D80; }
    set32(c.r[2], ld32((c.r[3].w[0] + 200u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_003F9D84; } }
L_003F9D80:
    st32((c.r[5].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 1;
L_003F9D84:
    set32(c.r[5], ld32((c.r[5].w[0] + 72u)));
    c.budget -= 1;
L_003F9D88:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9B70u | kUnwind; return; } goto L_003F9B70; }
L_003F9D90:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 172u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[20] = c.f[12];  if (t) { goto L_003F9E0C; } }
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[6].w[0] + 184u));  goto L_003F9DF4; }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    set32(c.r[6], c.r[29].w[0] + 152u);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9DECu); set32(c.r[7], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00B6(c, 187u, depth + 1u); else { c.pc = 0x003F9B70u; return; } if (c.pc != 0x003F9DECu) [[unlikely]] return; }
L_003F9DEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 44u)));  if (t) { goto L_003F9E24; } }
L_003F9DF4:
    set32(c.r[7], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 152u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9E04u); st32((c.r[16].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_00B6(c, 190u, depth + 1u); else { c.pc = 0x003F9C20u; return; } if (c.pc != 0x003F9E04u) [[unlikely]] return; }
L_003F9E04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F9E20; } }
L_003F9E0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 144u), 0u);
    st32((c.r[29].w[0] + 152u), 0u);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 5;
L_003F9E20:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003F9E24:
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003F9EAC; }
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 168u));
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[17].w[0] + 44u)));  goto L_003F9E6C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 48u), c.f[1]);  goto L_003F9E68; }
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 1;
L_003F9E68:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003F9E6C:
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  goto L_003F9E98; }
    c.f[12] = ld32((c.r[16].w[0] + 48u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9E90u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00B6(c, 253u, depth + 1u); else { c.pc = 0x003FABC0u; return; } if (c.pc != 0x003F9E90u) [[unlikely]] return; }
L_003F9E90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_003F9EC0; } }
L_003F9E98:
    c.f[12] = ld32((c.r[16].w[0] + 48u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9EA4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0018(c, 142u, depth + 1u); else { c.pc = 0x00181A10u; return; } if (c.pc != 0x003F9EA4u) [[unlikely]] return; }
L_003F9EA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F9EBC; } }
L_003F9EAC:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 4;
L_003F9EBC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_003F9EC0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9ECCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003F9ECCu) [[unlikely]] return; }
L_003F9ECC:
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9EDCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003F9EDCu) [[unlikely]] return; }
L_003F9EDC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9EECu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003F9EECu) [[unlikely]] return; }
L_003F9EEC:
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9EFCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003F9EFCu) [[unlikely]] return; }
L_003F9EFC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9F0Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00B6(c, 205u, depth + 1u); else { c.pc = 0x003FA1C0u; return; } if (c.pc != 0x003F9F0Cu) [[unlikely]] return; }
L_003F9F0C:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 44u)));  goto L_003F9F20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003FA134; } }
L_003F9F20:
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_003F9FCC; }
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 168u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 172u));  goto L_003F9FA4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[1] = ld32((c.r[17].w[0] + 172u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F9FA0; } }
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[12] = ld32((c.r[16].w[0] + 52u));  goto L_003F9FBC; }
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.budget -= 1;
L_003F9F7C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 172u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[16].w[0] + 52u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9F7Cu | kUnwind; return; } goto L_003F9F7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F9FB8; } }
L_003F9FA0:
    c.f[1] = ld32((c.r[17].w[0] + 172u));
    c.budget -= 1;
L_003F9FA4:
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F9FB8; } }
    st32((c.r[16].w[0] + 52u), c.f[1]);
    c.budget -= 1;
L_003F9FB8:
    c.f[12] = ld32((c.r[16].w[0] + 52u));
    c.budget -= 1;
L_003F9FBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9FC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 161u, depth + 1u); else { c.pc = 0x003F97F0u; return; } if (c.pc != 0x003F9FC4u) [[unlikely]] return; }
L_003F9FC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003FA134; } }
L_003F9FCC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003FA004; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003FA01C; } }
L_003FA004:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 6;
L_003FA01C:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[6], c.r[3].w[0] << 24);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003FA05C; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003FA074; } }
L_003FA05C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 6;
L_003FA074:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[5], c.r[3].w[0] << 16);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];  if (t) { goto L_003FA0B4; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003FA0D0; } }
L_003FA0B4:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 7;
L_003FA0D0:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[5], c.r[3].w[0] << 8);
    c.f[1] = ld32((c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];  if (t) { goto L_003FA110; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003FA12C; } }
L_003FA110:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_003FA12C:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[18].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.budget -= 2;
L_003FA134:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.f[0] = ld32((c.r[29].w[0] + 148u));  goto L_003FA158; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA150u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_00B6(c, 213u, depth + 1u); else { c.pc = 0x003FA390u; return; } if (c.pc != 0x003FA150u) [[unlikely]] return; }
L_003FA150:
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    c.budget -= 2;
L_003FA158:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 64u));
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[6], ld32((c.r[2].w[0] + 180u)));
    c.f[15] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[17] = ld32((c.r[29].w[0] + 152u));
    c.f[18] = ld32((c.r[29].w[0] + 144u));
    c.f[19] = ld32((c.r[29].w[0] + 156u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA1A0u); c.f[16] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 154u, depth + 1u); else { c.pc = 0x0016DC20u; return; } if (c.pc != 0x003FA1A0u) [[unlikely]] return; }
L_003FA1A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003FA1C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 156u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FA240; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[16].w[0] + 16u);  goto L_003FA21C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 56u));  goto L_003FA1FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003FA264; } }
L_003FA1FC:
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 56u), c.f[1]);  if (t) { goto L_003FA260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_003FA260; } }
L_003FA21C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA224u);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x003FA224u) [[unlikely]] return; }
L_003FA224:
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003FA260; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_003FA260; } }
L_003FA240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA248u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x003FA248u) [[unlikely]] return; }
L_003FA248:
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FA260; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 2;
L_003FA260:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003FA264:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FA270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 140u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_003FA35C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_003FA31C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_003FA2DC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_003FA2B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003FA380; } }
L_003FA2B8:
    set32(c.r[3], ld32((c.r[2].w[0] + 204u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 200u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA2CCu); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003FA2CCu) [[unlikely]] return; }
L_003FA2CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 200u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_003FA37C; } }
L_003FA2DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 200u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 204u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA2F8u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003FA2F8u) [[unlikely]] return; }
L_003FA2F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 200u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FA37C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);  if (t) { goto L_003FA37C; } }
L_003FA31C:
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 204u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 200u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA338u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003FA338u) [[unlikely]] return; }
L_003FA338:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FA37C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);  if (t) { goto L_003FA37C; } }
L_003FA35C:
    set32(c.r[3], ld32((c.r[2].w[0] + 200u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA370u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003FA370u) [[unlikely]] return; }
L_003FA370:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_003FA37C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003FA380:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FA390:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[5], c.r[17].w[0] + 96u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA3C0u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x003FA3C0u) [[unlikely]] return; }
L_003FA3C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA3D0u); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x003FA3D0u) [[unlikely]] return; }
L_003FA3D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[21] = c.f[0];
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[22]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA3F4u); st32((c.r[29].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003FA3F4u) [[unlikely]] return; }
L_003FA3F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA404u); set32(c.r[5], c.r[5].w[0] + 25984u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x003FA404u) [[unlikely]] return; }
L_003FA404:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = c.f[0];  if (t) { goto L_003FA428; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[2].w[0];
    c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
L_003FA428:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 92u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[12] = c.f[20];  goto L_003FA468; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA444u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0005(c, 134u, depth + 1u); else { c.pc = 0x00137278u; return; } if (c.pc != 0x003FA444u) [[unlikely]] return; }
L_003FA444:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003FA750; } }
L_003FA468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA470u);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x003FA470u) [[unlikely]] return; }
L_003FA470:
    c.f[2] = fp::ee::mul(c.fcr31, c.f[22], c.f[21]);
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);  goto L_003FA5F0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);  goto L_003FA4CC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC6800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA4C4u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003FA4C4u) [[unlikely]] return; }
L_003FA4C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FA74C; } }
L_003FA4CC:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);  goto L_003FA50C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC66A0000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 24576ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA504u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003FA504u) [[unlikely]] return; }
L_003FA504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FA74C; } }
L_003FA50C:
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);  goto L_003FA54C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC65D0000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 57344ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA544u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003FA544u) [[unlikely]] return; }
L_003FA544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FA74C; } }
L_003FA54C:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);  goto L_003FA58C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC66A0000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 24576ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA584u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003FA584u) [[unlikely]] return; }
L_003FA584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FA74C; } }
L_003FA58C:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003FA5CC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC6730000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA5C4u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003FA5C4u) [[unlikely]] return; }
L_003FA5C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FA5E8; } }
L_003FA5CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC6800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA5E8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003FA5E8u) [[unlikely]] return; }
L_003FA5E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FA74C; } }
L_003FA5F0:
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);  goto L_003FA630; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC6800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA628u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003FA628u) [[unlikely]] return; }
L_003FA628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FA74C; } }
L_003FA630:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);  goto L_003FA670; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC6A70000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 63488ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA668u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003FA668u) [[unlikely]] return; }
L_003FA668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FA74C; } }
L_003FA670:
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);  goto L_003FA6B0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC6D20000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA6A8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003FA6A8u) [[unlikely]] return; }
L_003FA6A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FA74C; } }
L_003FA6B0:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);  goto L_003FA6F0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC6B70000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 38912ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA6E8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003FA6E8u) [[unlikely]] return; }
L_003FA6E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FA74C; } }
L_003FA6F0:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003FA730; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC69C0000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA728u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003FA728u) [[unlikely]] return; }
L_003FA728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FA74C; } }
L_003FA730:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC6800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA74Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003FA74Cu) [[unlikely]] return; }
L_003FA74C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003FA750:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003FA770:
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003FA7D0; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FA784:
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_003FA7A0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 88u), 0u);  if (t) { goto L_003FA7B8; } }
L_003FA7A0:
    set32(c.r[6], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], c.r[7].w[0] + 96u);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 88u), c.r[5].w[0]);
    c.budget -= 6;
L_003FA7B8:
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], ld32((c.r[3].w[0] + 72u)));
    c.r[3].d[0] = c.r[8].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA784u | kUnwind; return; } goto L_003FA784; } }
L_003FA7D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 56u), 0u);  c.pc = t; return; }
L_003FA7E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FA800; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[4].w[0] + 60u), 0u);  goto L_003FA800; }
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[3].w[0] + 84u), 0u);
    c.budget -= 2;
L_003FA800:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FA810:
    set32(c.r[6], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003FA8A8; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 80u)));
    c.budget -= 1;
L_003FA820:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FA898; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003FA840; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 88u)));
    st32((c.r[5].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
L_003FA840:
    set32(c.r[5], ld32((c.r[6].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003FA858; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 84u)));
    st32((c.r[5].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 3;
L_003FA858:
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_003FA880; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FA878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_003FA880; } }
L_003FA878:
    st32((c.r[4].w[0] + 56u), 0u);
    c.budget -= 2;
L_003FA880:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[6].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    st32((c.r[5].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 60u), c.r[5].w[0]);  if (t) { goto L_003FA8A0; } }
L_003FA898:
    set32(c.r[6], ld32((c.r[6].w[0] + 88u)));
    c.budget -= 2;
L_003FA8A0:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 80u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA820u | kUnwind; return; } goto L_003FA820; }
L_003FA8A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FA8B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 144u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA8E4u); set32(c.r[5], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003FA8E4u) [[unlikely]] return; }
L_003FA8E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_003FA8F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FA924; } }
L_003FA8F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA8FCu); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003FA8FCu) [[unlikely]] return; }
L_003FA8FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  goto L_003FA918; }
    set32(c.r[6], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA914u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 123u, depth + 1u); else { c.pc = 0x001810E0u; return; } if (c.pc != 0x003FA914u) [[unlikely]] return; }
L_003FA914:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 1;
L_003FA918:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_003FA924; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FA924:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FA940:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 56u)));
    set32(c.r[19], ld32((c.r[3].w[0])));
    c.budget -= 14;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FAA1C; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003FA9C0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FA984:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[0] = ld32((c.r[20].w[0] + 168u));
    c.r[2].d[0] = c.r[5].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0] + 168u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA984u | kUnwind; return; } goto L_003FA984; } }
    c.budget -= 1;
L_003FA9C0:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 188u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 192u), c.f[0]);  if (t) { goto L_003FAB14; } }
L_003FAA1C:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAA3Cu); set32(c.r[5], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003FAA3Cu) [[unlikely]] return; }
L_003FAA3C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[21].d[0] != 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_003FAA50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FAB14; } }
L_003FAA50:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003FAAD0; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 2;
L_003FAA60:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.f[1] = ld32((c.r[20].w[0] + 168u));
    c.f[15] = 0u;
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    st32((c.r[29].w[0]), c.f[0]);
    c.f[12] = ld32((c.r[20].w[0] + 168u));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[2].w[0] + 8u));
    c.f[16] = ld32((c.r[2].w[0] + 12u));
    c.f[17] = ld32((c.r[2].w[0] + 16u));
    c.f[18] = ld32((c.r[2].w[0] + 20u));
    c.f[19] = ld32((c.r[2].w[0] + 24u));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAAB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 150u, depth + 1u); else { c.pc = 0x00181D50u; return; } if (c.pc != 0x003FAAB8u) [[unlikely]] return; }
L_003FAAB8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 88u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FAA60u | kUnwind; return; } goto L_003FAA60; } }
    c.budget -= 1;
L_003FAAD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAAD8u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003FAAD8u) [[unlikely]] return; }
L_003FAAD8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 80u), c.r[2].w[0]);  goto L_003FAAF4; }
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAAF0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 123u, depth + 1u); else { c.pc = 0x001810E0u; return; } if (c.pc != 0x003FAAF0u) [[unlikely]] return; }
L_003FAAF0:
    st32((c.r[20].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_003FAAF4:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAB04u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003FAB04u) [[unlikely]] return; }
L_003FAB04:
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_003FAB14; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FAB14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003FAB40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[20] = c.f[12];
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAB78u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003FAB78u) [[unlikely]] return; }
L_003FAB78:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAB8Cu); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003FAB8Cu) [[unlikely]] return; }
L_003FAB8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAB9Cu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003FAB9Cu) [[unlikely]] return; }
L_003FAB9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003FABC0:
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    c.f[4] = ld32((c.r[4].w[0] + 192u));
    c.f[1] = ld32((c.r[4].w[0] + 188u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = 0u;
    set32(c.r[4], ld32((c.r[6].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[12]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[12]);
    st32((c.r[5].w[0]), c.f[0]);
    st32((c.r[5].w[0] + 4u), c.f[3]);
    st32((c.r[5].w[0] + 8u), 0u);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 12u), c.r[3].w[0]);  c.pc = t; return; }
L_003FAC10:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FACD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAC40u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00B6(c, 261u, depth + 1u); else { c.pc = 0x003FAD20u; return; } if (c.pc != 0x003FAC40u) [[unlikely]] return; }
L_003FAC40:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAC58u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 169u, depth + 1u); else { c.pc = 0x00159180u; return; } if (c.pc != 0x003FAC58u) [[unlikely]] return; }
L_003FAC58:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAC64u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003FAC64u) [[unlikely]] return; }
L_003FAC64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16160u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[2] = ld32((c.r[2].w[0] + 16164u));
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[3].w[0] + 16168u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 16172u));
    st32((c.r[29].w[0] + 68u), c.f[2]);
    st32((c.r[29].w[0] + 72u), c.f[1]);
    st32((c.r[29].w[0] + 76u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FACC0u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x003FACC0u) [[unlikely]] return; }
L_003FACC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FACD0u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003FACD0u) [[unlikely]] return; }
L_003FACD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003FACF0:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[13]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FAD04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[13];  if (t) { goto L_003FAD14; } }
L_003FAD04:
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[14]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[14] = c.f[12];  goto L_003FAD10; }
L_003FAD10:
    c.f[0] = c.f[14];
    c.budget -= 1;
L_003FAD14:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FAD20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FAD54; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAD4Cu); set32(c.r[5], ld32((c.r[7].w[0] + 32u)));  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003FAD4Cu) [[unlikely]] return; }
L_003FAD4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003FAD80; } }
L_003FAD54:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_003FAD74; }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAD6Cu); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003FAD6Cu) [[unlikely]] return; }
L_003FAD6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FAD7C; } }
L_003FAD74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAD7Cu);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003FAD7Cu) [[unlikely]] return; }
L_003FAD7C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003FAD80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FAD90:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[29], c.r[29].w[0] - 32u);  if (t) { goto L_003FAFB8; } }
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 6;
    { const bool t = c.r[6].sd[0] <= 0; st128((c.r[29].w[0] + 16u) & ~15u, c.r[3]);  if (t) { goto L_003FAF70; } }
    c.r[1].d[0] = c.r[6].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[6].w[0] - 8u);  if (t) { goto L_003FAF20; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003FADDC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[6].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003FADDC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003FADDC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FAF20; } }
    c.f[2] = ld32((c.r[29].w[0] + 20u));
    c.f[1] = ld32((c.r[29].w[0] + 24u));
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    c.budget -= 3;
L_003FADF0:
    c.f[3] = ld32((c.r[8].w[0]));
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[8].w[0]), c.f[3]);
    c.f[3] = ld32((c.r[8].w[0] + 4u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[8].w[0] + 4u), c.f[3]);
    c.f[3] = ld32((c.r[8].w[0] + 8u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    st32((c.r[8].w[0] + 8u), c.f[3]);
    c.f[3] = ld32((c.r[8].w[0] + 16u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[8].w[0] + 16u), c.f[3]);
    c.f[3] = ld32((c.r[8].w[0] + 20u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[8].w[0] + 20u), c.f[3]);
    c.f[3] = ld32((c.r[8].w[0] + 24u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    st32((c.r[8].w[0] + 24u), c.f[3]);
    c.f[3] = ld32((c.r[8].w[0] + 32u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[8].w[0] + 32u), c.f[3]);
    c.f[3] = ld32((c.r[8].w[0] + 36u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[8].w[0] + 36u), c.f[3]);
    c.f[3] = ld32((c.r[8].w[0] + 40u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    st32((c.r[8].w[0] + 40u), c.f[3]);
    c.f[3] = ld32((c.r[8].w[0] + 48u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[8].w[0] + 48u), c.f[3]);
    c.f[3] = ld32((c.r[8].w[0] + 52u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[8].w[0] + 52u), c.f[3]);
    c.f[3] = ld32((c.r[8].w[0] + 56u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    st32((c.r[8].w[0] + 56u), c.f[3]);
    c.f[3] = ld32((c.r[8].w[0] + 64u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[8].w[0] + 64u), c.f[3]);
    c.f[3] = ld32((c.r[8].w[0] + 68u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[8].w[0] + 68u), c.f[3]);
    c.f[3] = ld32((c.r[8].w[0] + 72u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    st32((c.r[8].w[0] + 72u), c.f[3]);
    c.f[3] = ld32((c.r[8].w[0] + 80u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[8].w[0] + 80u), c.f[3]);
    c.f[3] = ld32((c.r[8].w[0] + 84u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[8].w[0] + 84u), c.f[3]);
    c.f[3] = ld32((c.r[8].w[0] + 88u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    st32((c.r[8].w[0] + 88u), c.f[3]);
    c.f[3] = ld32((c.r[8].w[0] + 96u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[8].w[0] + 96u), c.f[3]);
    c.f[3] = ld32((c.r[8].w[0] + 100u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[8].w[0] + 100u), c.f[3]);
    c.f[3] = ld32((c.r[8].w[0] + 104u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    st32((c.r[8].w[0] + 104u), c.f[3]);
    c.f[3] = ld32((c.r[8].w[0] + 112u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[8].w[0] + 112u), c.f[3]);
    c.f[3] = ld32((c.r[8].w[0] + 116u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[8].w[0] + 116u), c.f[3]);
    c.f[3] = ld32((c.r[8].w[0] + 120u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    st32((c.r[8].w[0] + 120u), c.f[3]);
    c.budget -= 76;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 128u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FADF0u | kUnwind; return; } goto L_003FADF0; } }
L_003FAF20:
    c.r[1].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003FAF70; } }
    c.f[3] = ld32((c.r[29].w[0] + 20u));
    c.f[2] = ld32((c.r[29].w[0] + 24u));
    c.f[1] = ld32((c.r[29].w[0] + 16u));
    c.budget -= 3;
L_003FAF38:
    c.f[0] = ld32((c.r[8].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[8].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[8].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[8].w[0] + 8u), c.f[0]);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FAF38u | kUnwind; return; } goto L_003FAF38; } }
    c.budget -= 1;
L_003FAF70:
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FAFB8; } }
    c.f[3] = ld32((c.r[29].w[0] + 20u));
    c.f[2] = ld32((c.r[29].w[0] + 24u));
    c.f[1] = ld32((c.r[29].w[0] + 16u));
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    c.budget -= 4;
L_003FAF8C:
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[3].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 40u), c.f[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 88u)));
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[3].w[0] + 32u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FAF8Cu | kUnwind; return; } goto L_003FAF8C; }
L_003FAFB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FAFC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAFD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003FAFD4u) [[unlikely]] return; }
L_003FAFD4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 12448u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FB000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FB048; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB030u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003FB030u) [[unlikely]] return; }
L_003FB030:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FB04C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB048u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003FB048u) [[unlikely]] return; }
L_003FB048:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FB04C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FB060:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB088u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003FB088u) [[unlikely]] return; }
L_003FB088:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003FB0A8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB0A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 269u, depth + 1u); else { c.pc = 0x003FAFC0u; return; } if (c.pc != 0x003FB0A4u) [[unlikely]] return; }
L_003FB0A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003FB0A8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FB0C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 622u);  c.pc = t; return; }
L_003FB0D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FB130; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_003FB114; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 44u)));  if (t) { goto L_003FB240; } }
L_003FB114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB11Cu);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003FB11Cu) [[unlikely]] return; }
L_003FB11C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB128u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003FB128u) [[unlikely]] return; }
L_003FB128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FB23C; } }
L_003FB130:
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].sd[0] >= 0) { set32(c.r[4], ld32((c.r[16].w[0] + 448u)));  goto L_003FB168; }
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003FB144:
    set32(c.r[17], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB144u | kUnwind; return; } goto L_003FB144; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FB174; } }
L_003FB168:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 3;
L_003FB174:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003FB278; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB184u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 460u, depth + 1u); else { c.pc = 0x0015BE30u; return; } if (c.pc != 0x003FB184u) [[unlikely]] return; }
L_003FB184:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FB1E0; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003FB1DC; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003FB1DC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FB1CC; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003FB1C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FB228; } }
L_003FB1C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FB1CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB1D4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 445u, depth + 1u); else { c.pc = 0x0015BC00u; return; } if (c.pc != 0x003FB1D4u) [[unlikely]] return; }
L_003FB1D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_003FB234; } }
L_003FB1DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FB1E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB1E8u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 449u, depth + 1u); else { c.pc = 0x0015BCC0u; return; } if (c.pc != 0x003FB1E8u) [[unlikely]] return; }
L_003FB1E8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB1F4u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003FB1F4u) [[unlikely]] return; }
L_003FB1F4:
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[3] = ld32((c.r[29].w[0] + 100u));
    c.f[2] = ld32((c.r[29].w[0] + 84u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 96u), c.f[4]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 104u), c.f[0]);  if (t) { goto L_003FB230; } }
L_003FB228:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FB274; } }
L_003FB230:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_003FB234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB23Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003FB23Cu) [[unlikely]] return; }
L_003FB23C:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 1;
L_003FB240:
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 96u), c.f[2]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB274u); st32((c.r[29].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x003FB274u) [[unlikely]] return; }
L_003FB274:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003FB278:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003FB290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB2A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003FB2A4u) [[unlikely]] return; }
L_003FB2A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 12512u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FB2D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FB318; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12512u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB300u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003FB300u) [[unlikely]] return; }
L_003FB300:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FB31C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB318u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003FB318u) [[unlikely]] return; }
L_003FB318:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FB31C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FB330:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB358u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003FB358u) [[unlikely]] return; }
L_003FB358:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003FB378; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB374u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 288u, depth + 1u); else { c.pc = 0x003FB290u; return; } if (c.pc != 0x003FB374u) [[unlikely]] return; }
L_003FB374:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003FB378:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FB390:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 621u);  c.pc = t; return; }
L_003FB3A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 44u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[18], ld32((c.r[28].w[0] - 31436u)));  if (t) { goto L_003FB42C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_003FB3DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003FB44C; } }
L_003FB3DC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[3] = ld32((c.r[2].w[0] + 16u));
    c.f[2] = ld32((c.r[2].w[0] + 20u));
    c.f[1] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    st32((c.r[29].w[0] + 64u), c.f[3]);
    st32((c.r[29].w[0] + 68u), c.f[2]);
    st32((c.r[29].w[0] + 72u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB404u); st32((c.r[29].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_00A9(c, 289u, depth + 1u); else { c.pc = 0x003C6C80u; return; } if (c.pc != 0x003FB404u) [[unlikely]] return; }
L_003FB404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB40Cu); set32(c.r[16], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_00A8(c, 293u, depth + 1u); else { c.pc = 0x003C3570u; return; } if (c.pc != 0x003FB40Cu) [[unlikely]] return; }
L_003FB40C:
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB424u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 229u, depth + 1u); else { c.pc = 0x00161F30u; return; } if (c.pc != 0x003FB424u) [[unlikely]] return; }
L_003FB424:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FB448; } }
L_003FB42C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB434u);  if (depth < kMaxDepth) unit_00A8(c, 293u, depth + 1u); else { c.pc = 0x003C3570u; return; } if (c.pc != 0x003FB434u) [[unlikely]] return; }
L_003FB434:
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB448u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 233u, depth + 1u); else { c.pc = 0x00162040u; return; } if (c.pc != 0x003FB448u) [[unlikely]] return; }
L_003FB448:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003FB44C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003FB460:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB474u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003FB474u) [[unlikely]] return; }
L_003FB474:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 12576u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB49Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FB49Cu) [[unlikely]] return; }
L_003FB49C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FB4B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FB4F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12576u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB4E0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003FB4E0u) [[unlikely]] return; }
L_003FB4E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FB4FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB4F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003FB4F8u) [[unlikely]] return; }
L_003FB4F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FB4FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FB510:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB538u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003FB538u) [[unlikely]] return; }
L_003FB538:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003FB558; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB554u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 303u, depth + 1u); else { c.pc = 0x003FB460u; return; } if (c.pc != 0x003FB554u) [[unlikely]] return; }
L_003FB554:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003FB558:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FB570:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 623u);  c.pc = t; return; }
L_003FB580:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003FB678; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB5B4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 295u, depth + 1u); else { c.pc = 0x003C35A0u; return; } if (c.pc != 0x003FB5B4u) [[unlikely]] return; }
L_003FB5B4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB5C0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 295u, depth + 1u); else { c.pc = 0x003C35A0u; return; } if (c.pc != 0x003FB5C0u) [[unlikely]] return; }
L_003FB5C0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB5CCu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 295u, depth + 1u); else { c.pc = 0x003C35A0u; return; } if (c.pc != 0x003FB5CCu) [[unlikely]] return; }
L_003FB5CC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003FB674; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 44u)));  goto L_003FB5E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FB674; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 1;
L_003FB5E8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    st32((c.r[29].w[0] + 76u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (t) { goto L_003FB638; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 84u), 0u);  goto L_003FB63C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_003FB63C; } }
L_003FB638:
    st32((c.r[29].w[0] + 84u), 0u);
    c.budget -= 1;
L_003FB63C:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FB658; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FB658:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB668u); set32(c.r[8], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0010(c, 155u, depth + 1u); else { c.pc = 0x00161610u; return; } if (c.pc != 0x003FB668u) [[unlikely]] return; }
L_003FB668:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003FB674:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003FB678:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003FB690:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003FB6B0; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[3].w[0] + 48u), c.f[0]);
    c.budget -= 5;
L_003FB6B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FB6C0:
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), 0u);  c.pc = t; return; }
L_003FB6E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB6F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003FB6F4u) [[unlikely]] return; }
L_003FB6F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 12640u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FB720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FB768; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12640u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB750u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003FB750u) [[unlikely]] return; }
L_003FB750:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FB76C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB768u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003FB768u) [[unlikely]] return; }
L_003FB768:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FB76C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FB780:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB7A8u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003FB7A8u) [[unlikely]] return; }
L_003FB7A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003FB7C8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB7C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 320u, depth + 1u); else { c.pc = 0x003FB6E0u; return; } if (c.pc != 0x003FB7C4u) [[unlikely]] return; }
L_003FB7C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003FB7C8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FB7E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 624u);  c.pc = t; return; }
L_003FB7F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003FB8E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB824u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 295u, depth + 1u); else { c.pc = 0x003C35A0u; return; } if (c.pc != 0x003FB824u) [[unlikely]] return; }
L_003FB824:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB830u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 295u, depth + 1u); else { c.pc = 0x003C35A0u; return; } if (c.pc != 0x003FB830u) [[unlikely]] return; }
L_003FB830:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB83Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 295u, depth + 1u); else { c.pc = 0x003C35A0u; return; } if (c.pc != 0x003FB83Cu) [[unlikely]] return; }
L_003FB83C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003FB8E4; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 44u)));  goto L_003FB858; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FB8E4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 1;
L_003FB858:
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[29].w[0] + 76u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (t) { goto L_003FB8A8; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 84u), 0u);  goto L_003FB8AC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_003FB8AC; } }
L_003FB8A8:
    st32((c.r[29].w[0] + 84u), 0u);
    c.budget -= 1;
L_003FB8AC:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FB8C8; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FB8C8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB8D8u); set32(c.r[8], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0010(c, 155u, depth + 1u); else { c.pc = 0x00161610u; return; } if (c.pc != 0x003FB8D8u) [[unlikely]] return; }
L_003FB8D8:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003FB8E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003FB8E8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003FB900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB914u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003FB914u) [[unlikely]] return; }
L_003FB914:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 12704u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FB940:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FB988; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB970u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003FB970u) [[unlikely]] return; }
L_003FB970:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FB98C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB988u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003FB988u) [[unlikely]] return; }
L_003FB988:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FB98C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FB9A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB9C8u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003FB9C8u) [[unlikely]] return; }
L_003FB9C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003FB9E8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB9E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 334u, depth + 1u); else { c.pc = 0x003FB900u; return; } if (c.pc != 0x003FB9E4u) [[unlikely]] return; }
L_003FB9E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003FB9E8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FBA00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 625u);  c.pc = t; return; }
L_003FBA10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003FBA54; }
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBA3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003FBA3Cu) [[unlikely]] return; }
L_003FBA3C:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[5].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBA50u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x003FBA50u) [[unlikely]] return; }
L_003FBA50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003FBA54:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FBA60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBA74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003FBA74u) [[unlikely]] return; }
L_003FBA74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 12768u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FBAA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FBAE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12768u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBAD0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003FBAD0u) [[unlikely]] return; }
L_003FBAD0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FBAEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBAE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003FBAE8u) [[unlikely]] return; }
L_003FBAE8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FBAEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FBB00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBB28u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003FBB28u) [[unlikely]] return; }
L_003FBB28:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003FBB48; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBB44u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 346u, depth + 1u); else { c.pc = 0x003FBA60u; return; } if (c.pc != 0x003FBB44u) [[unlikely]] return; }
L_003FBB44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003FBB48:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FBB60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 627u);  c.pc = t; return; }
L_003FBB70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003FBBC0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBBBCu); st32((c.r[29].w[0] + 28u), c.f[0]);  if (depth < kMaxDepth) unit_0010(c, 156u, depth + 1u); else { c.pc = 0x00161620u; return; } if (c.pc != 0x003FBBBCu) [[unlikely]] return; }
L_003FBBBC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003FBBC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FBBD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBBE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003FBBE4u) [[unlikely]] return; }
L_003FBBE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 12832u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBC0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FBC0Cu) [[unlikely]] return; }
L_003FBC0C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FBC20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FBC68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBC50u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003FBC50u) [[unlikely]] return; }
L_003FBC50:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FBC6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBC68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003FBC68u) [[unlikely]] return; }
L_003FBC68:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FBC6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FBC80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBCA8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003FBCA8u) [[unlikely]] return; }
L_003FBCA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003FBCC8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBCC4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 357u, depth + 1u); else { c.pc = 0x003FBBD0u; return; } if (c.pc != 0x003FBCC4u) [[unlikely]] return; }
L_003FBCC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003FBCC8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FBCE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 626u);  c.pc = t; return; }
L_003FBCF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003FBD3C; }
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    set32(c.r[5], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    st32((c.r[29].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBD38u); st32((c.r[29].w[0] + 28u), c.f[0]);  if (depth < kMaxDepth) unit_0010(c, 156u, depth + 1u); else { c.pc = 0x00161620u; return; } if (c.pc != 0x003FBD38u) [[unlikely]] return; }
L_003FBD38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003FBD3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FBD50:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003FBD70; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[3].w[0] + 48u), c.f[0]);
    c.budget -= 5;
L_003FBD70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FBD80:
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), 0u);  c.pc = t; return; }
L_003FBDA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBDB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003FBDB4u) [[unlikely]] return; }
L_003FBDB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 12896u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003FBDF0; }
    set32(c.r[25], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBDE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FBDE0u) [[unlikely]] return; }
L_003FBDE0:
    st32((c.r[16].w[0] + 80u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), 0u);  if (t) { goto L_003FBE00; } }
L_003FBDF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003FBE00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FBE10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FBE58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12896u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBE40u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003FBE40u) [[unlikely]] return; }
L_003FBE40:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FBE5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBE58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003FBE58u) [[unlikely]] return; }
L_003FBE58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FBE5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FBE70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBE98u); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003FBE98u) [[unlikely]] return; }
L_003FBE98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003FBEB8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBEB4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 371u, depth + 1u); else { c.pc = 0x003FBDA0u; return; } if (c.pc != 0x003FBEB4u) [[unlikely]] return; }
L_003FBEB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003FBEB8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FBED0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 628u);  c.pc = t; return; }
L_003FBEE0:
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003FBF00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBF14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003FBF14u) [[unlikely]] return; }
L_003FBF14:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003FBF34; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003FBF34:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FBF40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { [[clang::musttail]] return unit_00B7(c, 3u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 40u)));  goto L_003FBF88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { [[clang::musttail]] return unit_00B7(c, 4u, depth); } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_003FBF88:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00B7(c, 3u, depth); } }
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBFC0u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003FBFC0u) [[unlikely]] return; }
L_003FBFC0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00B7(c, 3u, depth); } }
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00B7(c, 3u, depth); } }
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00B7(c, 3u, depth); } }
    set32(c.r[2], 0u + 10u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 3;
    [[clang::musttail]] return unit_00B7(c, 1u, depth);
}

}
