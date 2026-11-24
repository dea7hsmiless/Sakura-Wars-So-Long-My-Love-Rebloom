#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_000F[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0,
    0, 6, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 22,
    0, 23, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30,
    0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0,
    0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0,
    56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 78, 0,
    79, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96,
    0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0,
    0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0,
    0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0,
    154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161,
    0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0,
    0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172,
    0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176,
    0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 205, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 217,
    0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0,
    0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0,
    0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0,
    240, 0, 241, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0,
    0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0,
    255, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267,
    0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0,
    274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0,
    0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284,
    0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0,
    0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_000F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0015C000;
    case 2u: goto L_0015C03C;
    case 3u: goto L_0015C054;
    case 4u: goto L_0015C060;
    case 5u: goto L_0015C070;
    case 6u: goto L_0015C084;
    case 7u: goto L_0015C090;
    case 8u: goto L_0015C0A4;
    case 9u: goto L_0015C0B0;
    case 10u: goto L_0015C0C0;
    case 11u: goto L_0015C0D0;
    case 12u: goto L_0015C0F0;
    case 13u: goto L_0015C180;
    case 14u: goto L_0015C198;
    case 15u: goto L_0015C1AC;
    case 16u: goto L_0015C1F0;
    case 17u: goto L_0015C204;
    case 18u: goto L_0015C218;
    case 19u: goto L_0015C23C;
    case 20u: goto L_0015C260;
    case 21u: goto L_0015C270;
    case 22u: goto L_0015C27C;
    case 23u: goto L_0015C284;
    case 24u: goto L_0015C290;
    case 25u: goto L_0015C2A0;
    case 26u: goto L_0015C2B0;
    case 27u: goto L_0015C2C0;
    case 28u: goto L_0015C2D0;
    case 29u: goto L_0015C2D8;
    case 30u: goto L_0015C2FC;
    case 31u: goto L_0015C304;
    case 32u: goto L_0015C330;
    case 33u: goto L_0015C360;
    case 34u: goto L_0015C378;
    case 35u: goto L_0015C390;
    case 36u: goto L_0015C3A0;
    case 37u: goto L_0015C3BC;
    case 38u: goto L_0015C3D0;
    case 39u: goto L_0015C3F0;
    case 40u: goto L_0015C400;
    case 41u: goto L_0015C410;
    case 42u: goto L_0015C450;
    case 43u: goto L_0015C480;
    case 44u: goto L_0015C4C4;
    case 45u: goto L_0015C500;
    case 46u: goto L_0015C520;
    case 47u: goto L_0015C530;
    case 48u: goto L_0015C550;
    case 49u: goto L_0015C560;
    case 50u: goto L_0015C580;
    case 51u: goto L_0015C590;
    case 52u: goto L_0015C5B0;
    case 53u: goto L_0015C5C0;
    case 54u: goto L_0015C5E0;
    case 55u: goto L_0015C5F0;
    case 56u: goto L_0015C600;
    case 57u: goto L_0015C610;
    case 58u: goto L_0015C620;
    case 59u: goto L_0015C660;
    case 60u: goto L_0015C690;
    case 61u: goto L_0015C6B8;
    case 62u: goto L_0015C7E0;
    case 63u: goto L_0015C7FC;
    case 64u: goto L_0015C830;
    case 65u: goto L_0015C850;
    case 66u: goto L_0015C970;
    case 67u: goto L_0015C9A4;
    case 68u: goto L_0015C9AC;
    case 69u: goto L_0015CA08;
    case 70u: goto L_0015CA60;
    case 71u: goto L_0015CA98;
    case 72u: goto L_0015CAA8;
    case 73u: goto L_0015CB30;
    case 74u: goto L_0015CB3C;
    case 75u: goto L_0015CB48;
    case 76u: goto L_0015CB5C;
    case 77u: goto L_0015CB70;
    case 78u: goto L_0015CB78;
    case 79u: goto L_0015CB80;
    case 80u: goto L_0015CB88;
    case 81u: goto L_0015CBA0;
    case 82u: goto L_0015CC00;
    case 83u: goto L_0015CC10;
    case 84u: goto L_0015CC20;
    case 85u: goto L_0015CC38;
    case 86u: goto L_0015CC48;
    case 87u: goto L_0015CC84;
    case 88u: goto L_0015CCC8;
    case 89u: goto L_0015CCD8;
    case 90u: goto L_0015CCEC;
    case 91u: goto L_0015CD3C;
    case 92u: goto L_0015CD74;
    case 93u: goto L_0015CDA8;
    case 94u: goto L_0015CDCC;
    case 95u: goto L_0015CDE8;
    case 96u: goto L_0015CDFC;
    case 97u: goto L_0015CE20;
    case 98u: goto L_0015CE4C;
    case 99u: goto L_0015CE98;
    case 100u: goto L_0015CEB8;
    case 101u: goto L_0015CED4;
    case 102u: goto L_0015CEEC;
    case 103u: goto L_0015CF20;
    case 104u: goto L_0015CF3C;
    case 105u: goto L_0015CFA0;
    case 106u: goto L_0015CFEC;
    case 107u: goto L_0015D038;
    case 108u: goto L_0015D058;
    case 109u: goto L_0015D084;
    case 110u: goto L_0015D09C;
    case 111u: goto L_0015D0D0;
    case 112u: goto L_0015D0EC;
    case 113u: goto L_0015D160;
    case 114u: goto L_0015D184;
    case 115u: goto L_0015D1D0;
    case 116u: goto L_0015D1F0;
    case 117u: goto L_0015D208;
    case 118u: goto L_0015D220;
    case 119u: goto L_0015D254;
    case 120u: goto L_0015D270;
    case 121u: goto L_0015D2D0;
    case 122u: goto L_0015D330;
    case 123u: goto L_0015D340;
    case 124u: goto L_0015D358;
    case 125u: goto L_0015D370;
    case 126u: goto L_0015D390;
    case 127u: goto L_0015D3A0;
    case 128u: goto L_0015D3B0;
    case 129u: goto L_0015D3C0;
    case 130u: goto L_0015D3D0;
    case 131u: goto L_0015D408;
    case 132u: goto L_0015D454;
    case 133u: goto L_0015D468;
    case 134u: goto L_0015D494;
    case 135u: goto L_0015D4C8;
    case 136u: goto L_0015D4E4;
    case 137u: goto L_0015D4F4;
    case 138u: goto L_0015D508;
    case 139u: goto L_0015D56C;
    case 140u: goto L_0015D5A8;
    case 141u: goto L_0015D5E0;
    case 142u: goto L_0015D5E8;
    case 143u: goto L_0015D604;
    case 144u: goto L_0015D61C;
    case 145u: goto L_0015D654;
    case 146u: goto L_0015D670;
    case 147u: goto L_0015D710;
    case 148u: goto L_0015D738;
    case 149u: goto L_0015D780;
    case 150u: goto L_0015D794;
    case 151u: goto L_0015D7F8;
    case 152u: goto L_0015D830;
    case 153u: goto L_0015D864;
    case 154u: goto L_0015D880;
    case 155u: goto L_0015D910;
    case 156u: goto L_0015D940;
    case 157u: goto L_0015D98C;
    case 158u: goto L_0015D9A0;
    case 159u: goto L_0015DA04;
    case 160u: goto L_0015DA40;
    case 161u: goto L_0015DA7C;
    case 162u: goto L_0015DA84;
    case 163u: goto L_0015DA9C;
    case 164u: goto L_0015DAB4;
    case 165u: goto L_0015DAEC;
    case 166u: goto L_0015DB08;
    case 167u: goto L_0015DBA0;
    case 168u: goto L_0015DBEC;
    case 169u: goto L_0015DC24;
    case 170u: goto L_0015DC4C;
    case 171u: goto L_0015DC64;
    case 172u: goto L_0015DC7C;
    case 173u: goto L_0015DCA0;
    case 174u: goto L_0015DCB0;
    case 175u: goto L_0015DCC0;
    case 176u: goto L_0015DCFC;
    case 177u: goto L_0015DD0C;
    case 178u: goto L_0015DD20;
    case 179u: goto L_0015DD54;
    case 180u: goto L_0015DD68;
    case 181u: goto L_0015DDA8;
    case 182u: goto L_0015DDC4;
    case 183u: goto L_0015DE00;
    case 184u: goto L_0015DE10;
    case 185u: goto L_0015DE40;
    case 186u: goto L_0015DE70;
    case 187u: goto L_0015DE90;
    case 188u: goto L_0015DEA0;
    case 189u: goto L_0015DEBC;
    case 190u: goto L_0015DED4;
    case 191u: goto L_0015DEE4;
    case 192u: goto L_0015E000;
    case 193u: goto L_0015E060;
    case 194u: goto L_0015E094;
    case 195u: goto L_0015E0C4;
    case 196u: goto L_0015E180;
    case 197u: goto L_0015E1B0;
    case 198u: goto L_0015E1D0;
    case 199u: goto L_0015E280;
    case 200u: goto L_0015E2C0;
    case 201u: goto L_0015E2F0;
    case 202u: goto L_0015E490;
    case 203u: goto L_0015E528;
    case 204u: goto L_0015E530;
    case 205u: goto L_0015E538;
    case 206u: goto L_0015E540;
    case 207u: goto L_0015E558;
    case 208u: goto L_0015E56C;
    case 209u: goto L_0015E598;
    case 210u: goto L_0015E5AC;
    case 211u: goto L_0015E5D4;
    case 212u: goto L_0015E5E4;
    case 213u: goto L_0015E5F8;
    case 214u: goto L_0015E6B0;
    case 215u: goto L_0015E76C;
    case 216u: goto L_0015E774;
    case 217u: goto L_0015E77C;
    case 218u: goto L_0015E784;
    case 219u: goto L_0015E7D8;
    case 220u: goto L_0015E800;
    case 221u: goto L_0015E814;
    case 222u: goto L_0015E874;
    case 223u: goto L_0015E888;
    case 224u: goto L_0015E8B4;
    case 225u: goto L_0015E8C8;
    case 226u: goto L_0015E940;
    case 227u: goto L_0015E954;
    case 228u: goto L_0015E96C;
    case 229u: goto L_0015E984;
    case 230u: goto L_0015E9A4;
    case 231u: goto L_0015EA1C;
    case 232u: goto L_0015EA30;
    case 233u: goto L_0015EAB4;
    case 234u: goto L_0015EAE4;
    case 235u: goto L_0015EB60;
    case 236u: goto L_0015EC28;
    case 237u: goto L_0015EC3C;
    case 238u: goto L_0015EC54;
    case 239u: goto L_0015EC78;
    case 240u: goto L_0015EC80;
    case 241u: goto L_0015EC88;
    case 242u: goto L_0015EC90;
    case 243u: goto L_0015ECA4;
    case 244u: goto L_0015ECC0;
    case 245u: goto L_0015ECD4;
    case 246u: goto L_0015ED10;
    case 247u: goto L_0015ED20;
    case 248u: goto L_0015EDC0;
    case 249u: goto L_0015EDF8;
    case 250u: goto L_0015EE0C;
    case 251u: goto L_0015EE28;
    case 252u: goto L_0015EE44;
    case 253u: goto L_0015EE5C;
    case 254u: goto L_0015EE74;
    case 255u: goto L_0015EE80;
    case 256u: goto L_0015EE88;
    case 257u: goto L_0015EECC;
    case 258u: goto L_0015EEF0;
    case 259u: goto L_0015EF80;
    case 260u: goto L_0015EFF0;
    case 261u: goto L_0015F01C;
    case 262u: goto L_0015F028;
    case 263u: goto L_0015F034;
    case 264u: goto L_0015F040;
    case 265u: goto L_0015F050;
    case 266u: goto L_0015F06C;
    case 267u: goto L_0015F07C;
    case 268u: goto L_0015F090;
    case 269u: goto L_0015F0C0;
    case 270u: goto L_0015F108;
    case 271u: goto L_0015F1A0;
    case 272u: goto L_0015F240;
    case 273u: goto L_0015F268;
    case 274u: goto L_0015F280;
    case 275u: goto L_0015F2C4;
    case 276u: goto L_0015F35C;
    case 277u: goto L_0015F368;
    case 278u: goto L_0015F38C;
    case 279u: goto L_0015F39C;
    case 280u: goto L_0015F440;
    case 281u: goto L_0015F44C;
    case 282u: goto L_0015F4CC;
    case 283u: goto L_0015F4EC;
    case 284u: goto L_0015F4FC;
    case 285u: goto L_0015F514;
    case 286u: goto L_0015F524;
    case 287u: goto L_0015F598;
    case 288u: goto L_0015F5B4;
    case 289u: goto L_0015F5D4;
    case 290u: goto L_0015F604;
    case 291u: goto L_0015F630;
    case 292u: goto L_0015F76C;
    case 293u: goto L_0015F790;
    case 294u: goto L_0015F7E0;
    case 295u: goto L_0015F910;
    case 296u: goto L_0015F960;
    case 297u: goto L_0015F970;
    case 298u: goto L_0015FA00;
    case 299u: goto L_0015FA20;
    case 300u: goto L_0015FA40;
    case 301u: goto L_0015FA7C;
    case 302u: goto L_0015FAA4;
    case 303u: goto L_0015FAB8;
    case 304u: goto L_0015FAD8;
    case 305u: goto L_0015FB04;
    case 306u: goto L_0015FB1C;
    case 307u: goto L_0015FB3C;
    case 308u: goto L_0015FB7C;
    case 309u: goto L_0015FCC0;
    case 310u: goto L_0015FD3C;
    case 311u: goto L_0015FD4C;
    case 312u: goto L_0015FDE0;
    case 313u: goto L_0015FDE8;
    case 314u: goto L_0015FE50;
    case 315u: goto L_0015FE60;
    case 316u: goto L_0015FE70;
    case 317u: goto L_0015FE88;
    case 318u: goto L_0015FE94;
    case 319u: goto L_0015FEB0;
    case 320u: goto L_0015FF04;
    case 321u: goto L_0015FF30;
    case 322u: goto L_0015FF5C;
    case 323u: goto L_0015FFBC;
    case 324u: goto L_0015FFCC;
    default: bad_entry(c, 0x0015C000u); return;
    }
L_0015C000:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[16].w[0] + 64u);  goto L_0015C0B8; }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_0015C098; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_0015C078; }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[5].d[0]) { set32(c.r[4], c.r[16].w[0] + 64u);  goto L_0015C068; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_0015C048; }
    goto L_0015C040;
L_0015C03C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 1;
L_0015C040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0015C0C4; } }
L_0015C048:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C054u); set32(c.r[5], c.r[5].w[0] - 19648u);  if (depth < kMaxDepth) unit_001C(c, 117u, depth + 1u); else { c.pc = 0x00191A40u; return; } if (c.pc != 0x0015C054u) [[unlikely]] return; }
L_0015C054:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C060u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_001C(c, 123u, depth + 1u); else { c.pc = 0x00191B10u; return; } if (c.pc != 0x0015C060u) [[unlikely]] return; }
L_0015C060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015C0C0; } }
L_0015C068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C070u);  if (depth < kMaxDepth) unit_001C(c, 123u, depth + 1u); else { c.pc = 0x00191B10u; return; } if (c.pc != 0x0015C070u) [[unlikely]] return; }
L_0015C070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015C0C0; } }
L_0015C078:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C084u); set32(c.r[5], c.r[5].w[0] - 19648u);  if (depth < kMaxDepth) unit_001C(c, 117u, depth + 1u); else { c.pc = 0x00191A40u; return; } if (c.pc != 0x0015C084u) [[unlikely]] return; }
L_0015C084:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C090u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_001C(c, 123u, depth + 1u); else { c.pc = 0x00191B10u; return; } if (c.pc != 0x0015C090u) [[unlikely]] return; }
L_0015C090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015C0C0; } }
L_0015C098:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C0A4u); set32(c.r[5], c.r[5].w[0] - 19648u);  if (depth < kMaxDepth) unit_001C(c, 117u, depth + 1u); else { c.pc = 0x00191A40u; return; } if (c.pc != 0x0015C0A4u) [[unlikely]] return; }
L_0015C0A4:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C0B0u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_001C(c, 123u, depth + 1u); else { c.pc = 0x00191B10u; return; } if (c.pc != 0x0015C0B0u) [[unlikely]] return; }
L_0015C0B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015C0C0; } }
L_0015C0B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C0C0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_001C(c, 123u, depth + 1u); else { c.pc = 0x00191B10u; return; } if (c.pc != 0x0015C0C0u) [[unlikely]] return; }
L_0015C0C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0015C0C4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015C0D0:
    set32(c.r[11], 0u + 7u);
    set32(c.r[10], 0u + 4u);
    set32(c.r[9], 0u + 6u);
    c.r[12].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 3u);
    c.r[7].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[8], 0u + 5u);
    c.budget -= 8;
L_0015C0F0:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015C160; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[9].d[0];  if (t) { goto L_0015C158; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[8].d[0];  if (t) { goto L_0015C158; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_0015C158; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0015C158; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0015C130; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015C160; } }
L_0015C130:
    c.r[1].d[0] = c.r[9].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0015C148; } }
    st32((c.r[4].w[0] + 44u), c.r[10].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { goto L_0015C160; } }
L_0015C148:
    st32((c.r[4].w[0] + 44u), c.r[11].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[11].w[0] + 1u);  if (t) { goto L_0015C160; } }
    c.budget -= 1;
L_0015C158:
    st32((c.r[4].w[0] + 44u), c.r[11].w[0]);
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 2;
L_0015C160:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.r[3].d[0] = c.r[12].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015C0F0u | kUnwind; return; } goto L_0015C0F0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015C180:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C198u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x0015C198u) [[unlikely]] return; }
L_0015C198:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8672u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C1ACu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 66u, depth + 1u); else { c.pc = 0x0015C970u; return; } if (c.pc != 0x0015C1ACu) [[unlikely]] return; }
L_0015C1AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 28u), 0u);  goto L_0015C1C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0015C1DC; } }
L_0015C1C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_0015C1DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015C1F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C204u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x0015C204u) [[unlikely]] return; }
L_0015C204:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8672u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C218u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 66u, depth + 1u); else { c.pc = 0x0015C970u; return; } if (c.pc != 0x0015C218u) [[unlikely]] return; }
L_0015C218:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 32u)));  goto L_0015C234; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0015C31C; } }
L_0015C234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C23Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_001F(c, 92u, depth + 1u); else { c.pc = 0x0019D360u; return; } if (c.pc != 0x0015C23Cu) [[unlikely]] return; }
L_0015C23C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 32u);  goto L_0015C268; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u + 80u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C260u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015C260u) [[unlikely]] return; }
L_0015C260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0015C31C; } }
L_0015C268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C270u);  if (depth < kMaxDepth) unit_001F(c, 105u, depth + 1u); else { c.pc = 0x0019D4B0u; return; } if (c.pc != 0x0015C270u) [[unlikely]] return; }
L_0015C270:
    c.f[12] = c.f[0] ^ fp::kSign;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C27Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 54u, depth + 1u); else { c.pc = 0x0015C5E0u; return; } if (c.pc != 0x0015C27Cu) [[unlikely]] return; }
L_0015C27C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C284u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_001F(c, 106u, depth + 1u); else { c.pc = 0x0019D4C0u; return; } if (c.pc != 0x0015C284u) [[unlikely]] return; }
L_0015C284:
    c.f[12] = c.f[0] ^ fp::kSign;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C290u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 56u, depth + 1u); else { c.pc = 0x0015C600u; return; } if (c.pc != 0x0015C290u) [[unlikely]] return; }
L_0015C290:
    set32(c.r[4], c.r[29].w[0] + 92u);
    set32(c.r[5], c.r[29].w[0] + 88u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C2A0u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_001F(c, 107u, depth + 1u); else { c.pc = 0x0019D4D0u; return; } if (c.pc != 0x0015C2A0u) [[unlikely]] return; }
L_0015C2A0:
    c.f[12] = ld32((c.r[29].w[0] + 92u));
    c.f[13] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C2B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 46u, depth + 1u); else { c.pc = 0x0015C520u; return; } if (c.pc != 0x0015C2B0u) [[unlikely]] return; }
L_0015C2B0:
    set32(c.r[4], c.r[29].w[0] + 92u);
    set32(c.r[5], c.r[29].w[0] + 88u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C2C0u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_001F(c, 108u, depth + 1u); else { c.pc = 0x0019D510u; return; } if (c.pc != 0x0015C2C0u) [[unlikely]] return; }
L_0015C2C0:
    c.f[12] = ld32((c.r[29].w[0] + 92u));
    c.f[13] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C2D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 50u, depth + 1u); else { c.pc = 0x0015C580u; return; } if (c.pc != 0x0015C2D0u) [[unlikely]] return; }
L_0015C2D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C2D8u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_001F(c, 109u, depth + 1u); else { c.pc = 0x0019D530u; return; } if (c.pc != 0x0015C2D8u) [[unlikely]] return; }
L_0015C2D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C2FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 41u, depth + 1u); else { c.pc = 0x0015C410u; return; } if (c.pc != 0x0015C2FCu) [[unlikely]] return; }
L_0015C2FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C304u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_001F(c, 98u, depth + 1u); else { c.pc = 0x0019D410u; return; } if (c.pc != 0x0015C304u) [[unlikely]] return; }
L_0015C304:
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
L_0015C31C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0015C330:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015C378; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8672u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C360u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 240u, depth + 1u); else { c.pc = 0x00166010u; return; } if (c.pc != 0x0015C360u) [[unlikely]] return; }
L_0015C360:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0015C37C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C378u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0015C378u) [[unlikely]] return; }
L_0015C378:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015C37C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015C390:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015C3A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0015C3BC; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0015C3C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C3BCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001F(c, 99u, depth + 1u); else { c.pc = 0x0019D420u; return; } if (c.pc != 0x0015C3BCu) [[unlikely]] return; }
L_0015C3BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0015C3C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015C3D0:
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.f[0]);  c.pc = t; return; }
L_0015C3F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 108u));  c.pc = t; return; }
L_0015C400:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 112u));  c.pc = t; return; }
L_0015C410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0015C434; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), 0u);  if (t) { goto L_0015C46C; } }
L_0015C434:
    st32((c.r[16].w[0] + 136u), 0u);
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));  if (t) { goto L_0015C448; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0015C448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C450u);  if (depth < kMaxDepth) unit_0019(c, 10u, depth + 1u); else { c.pc = 0x001842C0u; return; } if (c.pc != 0x0015C450u) [[unlikely]] return; }
L_0015C450:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 96u), c.f[0]);
    c.budget -= 7;
L_0015C46C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015C480:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 136u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[2] = ld32((c.r[4].w[0] + 108u));  goto L_0015C4A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015C4E8; } }
L_0015C4A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = ld32((c.r[4].w[0] + 96u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C4C4u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0005(c, 116u, depth + 1u); else { c.pc = 0x00136BE8u; return; } if (c.pc != 0x0015C4C4u) [[unlikely]] return; }
L_0015C4C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 9;
L_0015C4E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015C500:
    set32(c.r[2], ld32((c.r[4].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015C514; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[4].w[0] + 96u));  if (t) { goto L_0015C518; } }
L_0015C514:
    c.f[0] = 0u;
    c.budget -= 1;
L_0015C518:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015C520:
    st32((c.r[4].w[0] + 80u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 84u), c.f[13]);  c.pc = t; return; }
L_0015C530:
    c.f[0] = ld32((c.r[4].w[0] + 80u));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 84u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.f[0]);  c.pc = t; return; }
L_0015C550:
    st32((c.r[4].w[0] + 120u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 124u), c.f[13]);  c.pc = t; return; }
L_0015C560:
    c.f[0] = ld32((c.r[4].w[0] + 120u));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 124u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.f[0]);  c.pc = t; return; }
L_0015C580:
    st32((c.r[4].w[0] + 88u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 92u), c.f[13]);  c.pc = t; return; }
L_0015C590:
    c.f[0] = ld32((c.r[4].w[0] + 88u));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 92u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.f[0]);  c.pc = t; return; }
L_0015C5B0:
    st32((c.r[4].w[0] + 128u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 132u), c.f[13]);  c.pc = t; return; }
L_0015C5C0:
    c.f[0] = ld32((c.r[4].w[0] + 128u));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 132u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.f[0]);  c.pc = t; return; }
L_0015C5E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 100u), c.f[12]);  c.pc = t; return; }
L_0015C5F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 100u));  c.pc = t; return; }
L_0015C600:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 104u), c.f[12]);  c.pc = t; return; }
L_0015C610:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 104u));  c.pc = t; return; }
L_0015C620:
    st32((c.r[4].w[0] + 64u), c.f[12]);
    st32((c.r[4].w[0] + 68u), c.f[13]);
    st32((c.r[4].w[0] + 72u), c.f[14]);
    st32((c.r[4].w[0] + 76u), c.f[15]);
    c.f[1] = ld32((c.r[4].w[0] + 72u));
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 108u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 76u));
    c.f[0] = ld32((c.r[4].w[0] + 68u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 112u), c.f[0]);  c.pc = t; return; }
L_0015C660:
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 68u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 72u));
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 76u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0] + 4u), c.f[0]);  c.pc = t; return; }
L_0015C690:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C6B8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x0015C6B8u) [[unlikely]] return; }
L_0015C6B8:
    c.f[0] = ld32((c.r[18].w[0] + 100u));
    c.f[5] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[17].w[0]), 0u);  goto L_0015C6E8; }
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[5]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015C6F4; } }
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_0015C6E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_0015C7C4; } }
L_0015C6F4:
    c.f[6] = 0u;
    fpu_compare(c, fp::key(c.f[6]) == fp::key(c.f[5]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[5] = ld32((c.r[18].w[0] + 96u));  goto L_0015C748; }
    c.f[4] = ld32((c.r[18].w[0] + 96u));
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    c.f[1] = ld32((c.r[18].w[0] + 80u));
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[4]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[5]);
    c.f[3] = ld32((c.r[18].w[0] + 88u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    c.f[3] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[5]);
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    c.f[2] = ld32((c.r[18].w[0] + 92u));
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);  if (t) { goto L_0015C778; } }
L_0015C748:
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[2] = ld32((c.r[18].w[0] + 80u));
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[5]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[5]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[2]);
    c.f[4] = ld32((c.r[18].w[0] + 88u));
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    c.f[2] = ld32((c.r[18].w[0] + 92u));
    c.f[3] = fp::ee::msub(c.fcr31, c.facc, c.f[4], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[0]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    c.budget -= 12;
L_0015C778:
    c.f[0] = ld32((c.r[18].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015C7BC; } }
    c.f[0] = ld32((c.r[18].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[17].w[0]), c.f[3]);  goto L_0015C7C0; }
    c.f[0] = ld32((c.r[18].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015C7BC; } }
    c.f[0] = ld32((c.r[18].w[0] + 76u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015C7BC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0015C7BC:
    st32((c.r[17].w[0]), c.f[3]);
    c.budget -= 1;
L_0015C7C0:
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_0015C7C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015C7E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[8], c.r[29].w[0] + 40u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C7FCu); set32(c.r[7], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000F(c, 60u, depth + 1u); else { c.pc = 0x0015C690u; return; } if (c.pc != 0x0015C7FCu) [[unlikely]] return; }
L_0015C7FC:
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[1]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015C830:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C850u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x0015C850u) [[unlikely]] return; }
L_0015C850:
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[1], c.f[20]);
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_0015C954; }
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[20]);
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_0015C890; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015C954; } }
L_0015C890:
    c.f[0] = c.r[2].w[0];
    c.f[5] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[4] = ld32((c.r[16].w[0] + 96u));
    c.f[1] = ld32((c.r[16].w[0] + 88u));
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    c.f[3] = ld32((c.r[29].w[0] + 52u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    c.f[6] = fp::ee::mul(c.fcr31, c.f[5], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 84u));
    c.f[4] = 0u;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[3], c.f[20]);
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 21;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[20]);  goto L_0015C8EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015C954; } }
L_0015C8EC:
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[3] = ld32((c.r[29].w[0] + 48u));  goto L_0015C90C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015C954; } }
L_0015C90C:
    c.f[2] = ld32((c.r[16].w[0] + 80u));
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[20]);
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = fp::ee::sub(c.fcr31, c.f[3], c.f[20]);  goto L_0015C934; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015C954; } }
L_0015C934:
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0015C950; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0015C950:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_0015C954:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015C970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x52430000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = c.r[3].d[0] | 21320ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C9A4u); st32((c.r[4].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x001647B0u; return; } if (c.pc != 0x0015C9A4u) [[unlikely]] return; }
L_0015C9A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C9ACu); st32((c.r[16].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 73u, depth + 1u); else { c.pc = 0x001647C0u; return; } if (c.pc != 0x0015C9ACu) [[unlikely]] return; }
L_0015C9AC:
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], 0u + 5461u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x476A0000u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | 24576ull;
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 84u), c.f[0]);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    st32((c.r[16].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 132u), c.r[3].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CA08u); st32((c.r[16].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_0019(c, 10u, depth + 1u); else { c.pc = 0x001842C0u; return; } if (c.pc != 0x0015CA08u) [[unlikely]] return; }
L_0015CA08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 96u), c.f[0]);
    st32((c.r[16].w[0] + 136u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    st32((c.r[16].w[0] + 76u), c.f[0]);
    st32((c.r[16].w[0] + 140u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015CA60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[2] = ld32((c.r[4].w[0] + 68u));
    c.f[1] = ld32((c.r[4].w[0] + 72u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 76u));
    st32((c.r[29].w[0] + 52u), c.f[2]);
    st32((c.r[29].w[0] + 56u), c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CA98u); st32((c.r[29].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x001647B0u; return; } if (c.pc != 0x0015CA98u) [[unlikely]] return; }
L_0015CA98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CAA8u); c.f[20] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0011(c, 73u, depth + 1u); else { c.pc = 0x001647C0u; return; } if (c.pc != 0x0015CAA8u) [[unlikely]] return; }
L_0015CAA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[29].w[0] + 52u));  goto L_0015CAD8; }
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.budget -= 2;
L_0015CAD8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[29].w[0] + 56u));  goto L_0015CAF4; }
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 2;
L_0015CAF4:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[29].w[0] + 60u));  goto L_0015CB08; }
    st32((c.r[29].w[0] + 56u), c.f[20]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    c.budget -= 2;
L_0015CB08:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[12] = ld32((c.r[16].w[0] + 80u));  goto L_0015CB1C; }
    st32((c.r[29].w[0] + 60u), c.f[2]);
    c.f[12] = ld32((c.r[16].w[0] + 80u));
    c.budget -= 2;
L_0015CB1C:
    c.f[14] = ld32((c.r[16].w[0] + 88u));
    c.f[15] = ld32((c.r[16].w[0] + 92u));
    c.f[16] = ld32((c.r[16].w[0] + 96u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CB30u); c.f[13] = ld32((c.r[16].w[0] + 84u));  if (depth < kMaxDepth) unit_0019(c, 70u, depth + 1u); else { c.pc = 0x00184F80u; return; } if (c.pc != 0x0015CB30u) [[unlikely]] return; }
L_0015CB30:
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CB3Cu); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0019(c, 68u, depth + 1u); else { c.pc = 0x00184F60u; return; } if (c.pc != 0x0015CB3Cu) [[unlikely]] return; }
L_0015CB3C:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CB48u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0019(c, 69u, depth + 1u); else { c.pc = 0x00184F70u; return; } if (c.pc != 0x0015CB48u) [[unlikely]] return; }
L_0015CB48:
    c.f[13] = ld32((c.r[16].w[0] + 124u));
    c.f[14] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CB5Cu); c.f[12] = ld32((c.r[16].w[0] + 120u));  if (depth < kMaxDepth) unit_0019(c, 72u, depth + 1u); else { c.pc = 0x00184FC0u; return; } if (c.pc != 0x0015CB5Cu) [[unlikely]] return; }
L_0015CB5C:
    c.f[13] = ld32((c.r[29].w[0] + 52u));
    c.f[14] = ld32((c.r[29].w[0] + 56u));
    c.f[15] = ld32((c.r[29].w[0] + 60u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CB70u); c.f[12] = ld32((c.r[29].w[0] + 48u));  if (depth < kMaxDepth) unit_0019(c, 67u, depth + 1u); else { c.pc = 0x00184F30u; return; } if (c.pc != 0x0015CB70u) [[unlikely]] return; }
L_0015CB70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CB78u); set32(c.r[4], ld32((c.r[16].w[0] + 136u)));  if (depth < kMaxDepth) unit_0019(c, 73u, depth + 1u); else { c.pc = 0x00184FF0u; return; } if (c.pc != 0x0015CB78u) [[unlikely]] return; }
L_0015CB78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CB80u); c.f[12] = ld32((c.r[16].w[0] + 140u));  if (depth < kMaxDepth) unit_0019(c, 76u, depth + 1u); else { c.pc = 0x00185070u; return; } if (c.pc != 0x0015CB80u) [[unlikely]] return; }
L_0015CB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CB88u);  if (depth < kMaxDepth) unit_0019(c, 40u, depth + 1u); else { c.pc = 0x00184830u; return; } if (c.pc != 0x0015CB88u) [[unlikely]] return; }
L_0015CB88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015CBA0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0015CE00; } }
    c.f[2] = ld32((c.r[18].w[0] + 108u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = ld32((c.r[18].w[0] + 112u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[21] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CC00u); c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_001F(c, 89u, depth + 1u); else { c.pc = 0x0019D310u; return; } if (c.pc != 0x0015CC00u) [[unlikely]] return; }
L_0015CC00:
    c.f[0] = ld32((c.r[18].w[0] + 100u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CC10u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_001F(c, 100u, depth + 1u); else { c.pc = 0x0019D430u; return; } if (c.pc != 0x0015CC10u) [[unlikely]] return; }
L_0015CC10:
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CC20u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_001F(c, 101u, depth + 1u); else { c.pc = 0x0019D440u; return; } if (c.pc != 0x0015CC20u) [[unlikely]] return; }
L_0015CC20:
    c.f[1] = ld32((c.r[18].w[0] + 80u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CC38u); c.f[13] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_001F(c, 102u, depth + 1u); else { c.pc = 0x0019D450u; return; } if (c.pc != 0x0015CC38u) [[unlikely]] return; }
L_0015CC38:
    c.f[12] = ld32((c.r[18].w[0] + 88u));
    c.f[13] = ld32((c.r[18].w[0] + 92u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CC48u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001F(c, 103u, depth + 1u); else { c.pc = 0x0019D490u; return; } if (c.pc != 0x0015CC48u) [[unlikely]] return; }
L_0015CC48:
    set32(c.r[3], ld32((c.r[18].w[0] + 136u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[2] = ld32((c.r[18].w[0] + 108u));  goto L_0015CC60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015CCA8; } }
L_0015CC60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = ld32((c.r[18].w[0] + 96u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CC84u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0005(c, 116u, depth + 1u); else { c.pc = 0x00136BE8u; return; } if (c.pc != 0x0015CC84u) [[unlikely]] return; }
L_0015CC84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 9;
L_0015CCA8:
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CCC8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_001F(c, 104u, depth + 1u); else { c.pc = 0x0019D4A0u; return; } if (c.pc != 0x0015CCC8u) [[unlikely]] return; }
L_0015CCC8:
    c.f[12] = ld32((c.r[17].w[0] + 72u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CCD8u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_001F(c, 119u, depth + 1u); else { c.pc = 0x0019D680u; return; } if (c.pc != 0x0015CCD8u) [[unlikely]] return; }
L_0015CCD8:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] & 2ull;  goto L_0015CD5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CCECu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001F(c, 109u, depth + 1u); else { c.pc = 0x0019D530u; return; } if (c.pc != 0x0015CCECu) [[unlikely]] return; }
L_0015CCEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 10;
    if (c.r[2].d[0] != 0ull) { st32((c.r[18].w[0] + 136u), 0u);  goto L_0015CD24; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 136u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 96u), 0u);  if (t) { goto L_0015CD58; } }
L_0015CD24:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_0015CD34; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0015CD34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CD3Cu);  if (depth < kMaxDepth) unit_0019(c, 10u, depth + 1u); else { c.pc = 0x001842C0u; return; } if (c.pc != 0x0015CD3Cu) [[unlikely]] return; }
L_0015CD3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 108u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 96u), c.f[0]);
    c.budget -= 7;
L_0015CD58:
    c.r[2].d[0] = c.r[16].d[0] & 2ull;
    c.budget -= 1;
L_0015CD5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] & 4ull;  goto L_0015CD90; }
    set32(c.r[4], c.r[29].w[0] + 140u);
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CD74u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001F(c, 107u, depth + 1u); else { c.pc = 0x0019D4D0u; return; } if (c.pc != 0x0015CD74u) [[unlikely]] return; }
L_0015CD74:
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[21]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[20]);
    st32((c.r[18].w[0] + 80u), c.f[0]);
    st32((c.r[18].w[0] + 84u), c.f[1]);
    c.r[2].d[0] = c.r[16].d[0] & 4ull;
    c.budget -= 7;
L_0015CD90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] & 8ull;  goto L_0015CDBC; }
    set32(c.r[4], c.r[29].w[0] + 132u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CDA8u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001F(c, 108u, depth + 1u); else { c.pc = 0x0019D510u; return; } if (c.pc != 0x0015CDA8u) [[unlikely]] return; }
L_0015CDA8:
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[18].w[0] + 88u), c.f[0]);
    st32((c.r[18].w[0] + 92u), c.f[1]);
    c.r[2].d[0] = c.r[16].d[0] & 8ull;
    c.budget -= 5;
L_0015CDBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] & 16ull;  goto L_0015CDD8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CDCCu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001F(c, 105u, depth + 1u); else { c.pc = 0x0019D4B0u; return; } if (c.pc != 0x0015CDCCu) [[unlikely]] return; }
L_0015CDCC:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[18].w[0] + 100u), c.f[0]);
    c.r[2].d[0] = c.r[16].d[0] & 16ull;
    c.budget -= 3;
L_0015CDD8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_0015CDF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CDE8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001F(c, 106u, depth + 1u); else { c.pc = 0x0019D4C0u; return; } if (c.pc != 0x0015CDE8u) [[unlikely]] return; }
L_0015CDE8:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[18].w[0] + 104u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
L_0015CDF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CDFCu);  if (depth < kMaxDepth) unit_001F(c, 98u, depth + 1u); else { c.pc = 0x0019D410u; return; } if (c.pc != 0x0015CDFCu) [[unlikely]] return; }
L_0015CDFC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0015CE00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0015CE20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CE4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x0015CE4Cu) [[unlikely]] return; }
L_0015CE4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46530000u);
    set32(c.r[3], c.r[3].w[0] + 8704u);
    c.r[2].d[0] = c.r[2].d[0] | 21576ull;
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 64u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], ld32((c.r[28].w[0] - 31440u)));  goto L_0015CE84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0015CF7C; } }
L_0015CE84:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[4], 0u + 240u);  goto L_0015CEB0; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CE98u); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015CE98u) [[unlikely]] return; }
L_0015CE98:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015CF7C; } }
L_0015CEB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CEB8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0015CEB8u) [[unlikely]] return; }
L_0015CEB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 64u), c.r[2].w[0]);  goto L_0015CED8; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CED4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 202u, depth + 1u); else { c.pc = 0x0015E490u; return; } if (c.pc != 0x0015CED4u) [[unlikely]] return; }
L_0015CED4:
    st32((c.r[18].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 1;
L_0015CED8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  goto L_0015CF04; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CEECu); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015CEECu) [[unlikely]] return; }
L_0015CEEC:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015CF7C; } }
L_0015CF04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[2].w[0] + 84u)));  goto L_0015CF58; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CF20u); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015CF20u) [[unlikely]] return; }
L_0015CF20:
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 64u), 0u);  goto L_0015CF40; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CF3Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015CF3Cu) [[unlikely]] return; }
L_0015CF3C:
    st32((c.r[18].w[0] + 64u), 0u);
    c.budget -= 1;
L_0015CF40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015CF7C; } }
L_0015CF58:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[2].w[0] + 84u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 28u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 9;
L_0015CF7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015CFA0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CFECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x0015CFECu) [[unlikely]] return; }
L_0015CFEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46530000u);
    set32(c.r[3], c.r[3].w[0] + 8704u);
    c.r[2].d[0] = c.r[2].d[0] | 21576ull;
    st32((c.r[20].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    st32((c.r[20].w[0] + 64u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { set32(c.r[21], ld32((c.r[28].w[0] - 31440u)));  goto L_0015D024; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0015D12C; } }
L_0015D024:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { set32(c.r[4], 0u + 240u);  goto L_0015D050; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D038u); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015D038u) [[unlikely]] return; }
L_0015D038:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015D12C; } }
L_0015D050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D058u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0015D058u) [[unlikely]] return; }
L_0015D058:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 64u), c.r[2].w[0]);  goto L_0015D088; }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[10].d[0] = c.r[22].d[0] + 0ull;
    c.r[11].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D084u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 214u, depth + 1u); else { c.pc = 0x0015E6B0u; return; } if (c.pc != 0x0015D084u) [[unlikely]] return; }
L_0015D084:
    st32((c.r[20].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 1;
L_0015D088:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  goto L_0015D0B4; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D09Cu); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015D09Cu) [[unlikely]] return; }
L_0015D09C:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015D12C; } }
L_0015D0B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[2].w[0] + 84u)));  goto L_0015D108; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D0D0u); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015D0D0u) [[unlikely]] return; }
L_0015D0D0:
    set32(c.r[4], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 64u), 0u);  goto L_0015D0F0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D0ECu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015D0ECu) [[unlikely]] return; }
L_0015D0EC:
    st32((c.r[20].w[0] + 64u), 0u);
    c.budget -= 1;
L_0015D0F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015D12C; } }
L_0015D108:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[2].w[0] + 84u), c.r[5].w[0]);
    st32((c.r[20].w[0] + 28u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 9;
L_0015D12C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0015D160:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D184u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x0015D184u) [[unlikely]] return; }
L_0015D184:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46530000u);
    set32(c.r[3], c.r[3].w[0] + 8704u);
    c.r[2].d[0] = c.r[2].d[0] | 21576ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 64u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[28].w[0] - 31440u)));  goto L_0015D1BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0015D2B0; } }
L_0015D1BC:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[4], 0u + 240u);  goto L_0015D1E8; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D1D0u); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015D1D0u) [[unlikely]] return; }
L_0015D1D0:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015D2B0; } }
L_0015D1E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D1F0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0015D1F0u) [[unlikely]] return; }
L_0015D1F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 64u), c.r[2].w[0]);  goto L_0015D20C; }
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D208u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 235u, depth + 1u); else { c.pc = 0x0015EB60u; return; } if (c.pc != 0x0015D208u) [[unlikely]] return; }
L_0015D208:
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 1;
L_0015D20C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  goto L_0015D238; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D220u); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015D220u) [[unlikely]] return; }
L_0015D220:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015D2B0; } }
L_0015D238:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[2].w[0] + 84u)));  goto L_0015D28C; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D254u); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015D254u) [[unlikely]] return; }
L_0015D254:
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 64u), 0u);  goto L_0015D274; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D270u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015D270u) [[unlikely]] return; }
L_0015D270:
    st32((c.r[17].w[0] + 64u), 0u);
    c.budget -= 1;
L_0015D274:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015D2B0; } }
L_0015D28C:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[2].w[0] + 84u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 9;
L_0015D2B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015D2D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015D358; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8704u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0015D338; }
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] > 0; st32((c.r[3].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_0015D330; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 64u), 0u);  goto L_0015D334; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D330u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015D330u) [[unlikely]] return; }
L_0015D330:
    st32((c.r[16].w[0] + 64u), 0u);
    c.budget -= 1;
L_0015D334:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0015D338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D340u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 240u, depth + 1u); else { c.pc = 0x00166010u; return; } if (c.pc != 0x0015D340u) [[unlikely]] return; }
L_0015D340:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0015D35C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D358u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0015D358u) [[unlikely]] return; }
L_0015D358:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0015D35C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015D370:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0015D398; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D390u); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015D390u) [[unlikely]] return; }
L_0015D390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015D3A0; } }
L_0015D398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D3A0u);  if (depth < kMaxDepth) unit_000F(c, 300u, depth + 1u); else { c.pc = 0x0015FA40u; return; } if (c.pc != 0x0015D3A0u) [[unlikely]] return; }
L_0015D3A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015D3B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015D3C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015D3D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D408u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x0015D408u) [[unlikely]] return; }
L_0015D408:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x58450000u);
    set32(c.r[3], c.r[3].w[0] + 8736u);
    c.r[2].d[0] = c.r[2].d[0] | 21576ull;
    st32((c.r[20].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    st32((c.r[20].w[0] + 64u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[20].w[0] + 68u), 0u);
    st32((c.r[20].w[0] + 72u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 14;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x48540000u);  goto L_0015D448; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0015D6E4; } }
L_0015D448:
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D454u); c.r[4].d[0] = c.r[2].d[0] | 17752ull;  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00182360u; return; } if (c.pc != 0x0015D454u) [[unlikely]] return; }
L_0015D454:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_0015D480; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D468u); set32(c.r[5], 0u + 28u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015D468u) [[unlikely]] return; }
L_0015D468:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015D6E4; } }
L_0015D480:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0015D4B0; } }
L_0015D494:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] - c.r[3].w[0]);
    set32(c.r[19], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
L_0015D4B0:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_0015D4D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48540000u);
    set32(c.r[21], ld32((c.r[19].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D4C8u); c.r[4].d[0] = c.r[2].d[0] | 21318ull;  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00182360u; return; } if (c.pc != 0x0015D4C8u) [[unlikely]] return; }
L_0015D4C8:
    c.budget -= 2;
    if (c.r[21].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D494u | kUnwind; return; } goto L_0015D494; }
L_0015D4D0:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[4], c.r[18].w[0] << 3);  goto L_0015D4EC; }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D4E4u); set32(c.r[5], 0u + 37u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015D4E4u) [[unlikely]] return; }
L_0015D4E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0015D6E4; } }
L_0015D4EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D4F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x0015D4F4u) [[unlikely]] return; }
L_0015D4F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_0015D520; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D508u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015D508u) [[unlikely]] return; }
L_0015D508:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015D6E4; } }
L_0015D520:
    st32((c.r[20].w[0] + 64u), c.r[18].w[0]);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[18].sd[0] <= 0; st32((c.r[20].w[0] + 72u), c.r[4].w[0]);  if (t) { goto L_0015D5C8; } }
    c.r[1].d[0] = c.r[18].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0015D5A0; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0015D564; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015D564; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0015D564:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015D5A0; } }
L_0015D56C:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[18], c.r[18].w[0] - 8u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[1].d[0] = c.r[18].sd[0] < 9ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D56Cu | kUnwind; return; } goto L_0015D56C; } }
    c.budget -= 1;
L_0015D5A0:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_0015D5C8; } }
L_0015D5A8:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[18].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D5A8u | kUnwind; return; } goto L_0015D5A8; } }
    c.budget -= 1;
L_0015D5C8:
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[19], ld32((c.r[28].w[0] - 31440u)));
    set32(c.r[18], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[21], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0015D6C8; } }
L_0015D5E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D5E8u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0015D5E8u) [[unlikely]] return; }
L_0015D5E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015D608; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D604u); c.r[7].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 202u, depth + 1u); else { c.pc = 0x0015E490u; return; } if (c.pc != 0x0015D604u) [[unlikely]] return; }
L_0015D604:
    c.budget -= 1;
L_0015D608:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_0015D634; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D61Cu); set32(c.r[5], 0u + 33u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015D61Cu) [[unlikely]] return; }
L_0015D61C:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015D6E4; } }
L_0015D634:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 84u)));  goto L_0015D68C; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D654u); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015D654u) [[unlikely]] return; }
L_0015D654:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0]), 0u);  goto L_0015D674; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D670u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015D670u) [[unlikely]] return; }
L_0015D670:
    st32((c.r[18].w[0]), 0u);
    c.budget -= 1;
L_0015D674:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015D6E4; } }
L_0015D68C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + 32u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[21], c.r[21].w[0] + 4u);
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D5E0u | kUnwind; return; } goto L_0015D5E0; } }
L_0015D6C8:
    set32(c.r[2], 0u + 1u);
    st32((c.r[20].w[0] + 28u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
L_0015D6E4:
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
L_0015D710:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D738u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x0015D738u) [[unlikely]] return; }
L_0015D738:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x58450000u);
    set32(c.r[3], c.r[3].w[0] + 8736u);
    c.r[2].d[0] = c.r[2].d[0] | 21576ull;
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 64u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[18].w[0] + 68u), 0u);
    st32((c.r[18].w[0] + 72u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 14;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] << 3);  goto L_0015D778; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0015D8EC; } }
L_0015D778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D780u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x0015D780u) [[unlikely]] return; }
L_0015D780:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_0015D7AC; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D794u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015D794u) [[unlikely]] return; }
L_0015D794:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015D8EC; } }
L_0015D7AC:
    st32((c.r[18].w[0] + 64u), c.r[16].w[0]);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] <= 0; st32((c.r[18].w[0] + 72u), c.r[4].w[0]);  if (t) { goto L_0015D850; } }
    c.r[1].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0015D828; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0015D7F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015D7F0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0015D7F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015D828; } }
L_0015D7F8:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] - 8u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[1].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D7F8u | kUnwind; return; } goto L_0015D7F8; } }
L_0015D828:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_0015D850; } }
L_0015D830:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D830u | kUnwind; return; } goto L_0015D830; } }
    c.budget -= 1;
L_0015D850:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0015D8D0; } }
L_0015D864:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_0015D898; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D880u); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015D880u) [[unlikely]] return; }
L_0015D880:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015D8EC; } }
L_0015D898:
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D864u | kUnwind; return; } goto L_0015D864; } }
    c.budget -= 1;
L_0015D8D0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
L_0015D8EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015D910:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D940u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x0015D940u) [[unlikely]] return; }
L_0015D940:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x58450000u);
    set32(c.r[3], c.r[3].w[0] + 8736u);
    c.r[2].d[0] = c.r[2].d[0] | 21576ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 64u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 72u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 14;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[18].w[0] + 64u)));  goto L_0015D980; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0015DB74; } }
L_0015D980:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D98Cu); set32(c.r[4], c.r[16].w[0] << 3);  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x0015D98Cu) [[unlikely]] return; }
L_0015D98C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_0015D9B8; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D9A0u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015D9A0u) [[unlikely]] return; }
L_0015D9A0:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015DB74; } }
L_0015D9B8:
    st32((c.r[17].w[0] + 64u), c.r[16].w[0]);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] <= 0; st32((c.r[17].w[0] + 72u), c.r[4].w[0]);  if (t) { goto L_0015DA60; } }
    c.r[1].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0015DA38; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0015D9FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015D9FC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0015D9FC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015DA38; } }
L_0015DA04:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] - 8u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[1].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015DA04u | kUnwind; return; } goto L_0015DA04; } }
    c.budget -= 1;
L_0015DA38:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_0015DA60; } }
L_0015DA40:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015DA40u | kUnwind; return; } goto L_0015DA40; } }
    c.budget -= 1;
L_0015DA60:
    set32(c.r[16], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[20], ld32((c.r[28].w[0] - 31440u)));
    set32(c.r[19], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[21], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0015DB58; } }
L_0015DA7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DA84u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0015DA84u) [[unlikely]] return; }
L_0015DA84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015DAA0; } }
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DA9Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 235u, depth + 1u); else { c.pc = 0x0015EB60u; return; } if (c.pc != 0x0015DA9Cu) [[unlikely]] return; }
L_0015DA9C:
    c.budget -= 1;
L_0015DAA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_0015DACC; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DAB4u); set32(c.r[5], 0u + 33u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015DAB4u) [[unlikely]] return; }
L_0015DAB4:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015DB74; } }
L_0015DACC:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 84u)));  goto L_0015DB24; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DAECu); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015DAECu) [[unlikely]] return; }
L_0015DAEC:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0]), 0u);  goto L_0015DB0C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DB08u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015DB08u) [[unlikely]] return; }
L_0015DB08:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_0015DB0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015DB74; } }
L_0015DB24:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 32u);
    set32(c.r[19], c.r[19].w[0] + 4u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015DA7Cu | kUnwind; return; } goto L_0015DA7C; } }
    c.budget -= 1;
L_0015DB58:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
L_0015DB74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0015DBA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0015DC7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8736u);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 64u), 0u);  goto L_0015DC50; }
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[16], ld32((c.r[19].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0015DC40; } }
L_0015DBEC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015DC28; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] > 0; st32((c.r[3].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_0015DC28; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015DC28; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DC24u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015DC24u) [[unlikely]] return; }
L_0015DC24:
    c.budget -= 1;
L_0015DC28:
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015DBECu | kUnwind; return; } goto L_0015DBEC; } }
    c.budget -= 1;
L_0015DC40:
    set32(c.r[4], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DC4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0015DC4Cu) [[unlikely]] return; }
L_0015DC4C:
    st32((c.r[19].w[0] + 64u), 0u);
    c.budget -= 1;
L_0015DC50:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 68u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DC64u); st32((c.r[19].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_0011(c, 240u, depth + 1u); else { c.pc = 0x00166010u; return; } if (c.pc != 0x0015DC64u) [[unlikely]] return; }
L_0015DC64:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_0015DC80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DC7Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0015DC7Cu) [[unlikely]] return; }
L_0015DC7C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0015DC80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015DCA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015DCB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015DCC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015DD04; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DCFCu); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015DCFCu) [[unlikely]] return; }
L_0015DCFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015DE14; } }
L_0015DD04:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 64u)));
    c.budget -= 2;
L_0015DD0C:
    set32(c.r[5], ld32((c.r[21].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0015DD48; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 2;
L_0015DD20:
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 64u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015DD20u | kUnwind; return; } goto L_0015DD20; } }
    c.budget -= 1;
L_0015DD48:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DD54u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 185u, depth + 1u); else { c.pc = 0x0015DE40u; return; } if (c.pc != 0x0015DD54u) [[unlikely]] return; }
L_0015DD54:
    set32(c.r[5], ld32((c.r[21].w[0] + 64u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 72u)));
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0015DD90; } }
L_0015DD68:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] << 33;
    c.r[2].d[0] = c.r[2].d[0] >> 33;
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 64u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015DD68u | kUnwind; return; } goto L_0015DD68; } }
L_0015DD90:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0015DDF0; } }
    set32(c.r[16], ld32((c.r[21].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0015DDE0; } }
    c.budget -= 1;
L_0015DDA8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015DDC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DDC4u);  if (depth < kMaxDepth) unit_000F(c, 295u, depth + 1u); else { c.pc = 0x0015F910u; return; } if (c.pc != 0x0015DDC4u) [[unlikely]] return; }
L_0015DDC4:
    c.budget -= 1;
L_0015DDC8:
    set32(c.r[5], ld32((c.r[21].w[0] + 64u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015DDA8u | kUnwind; return; } goto L_0015DDA8; } }
    c.budget -= 1;
L_0015DDE0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 64u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015DD0Cu | kUnwind; return; } goto L_0015DD0C; }
L_0015DDF0:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], 0u + 3u);  goto L_0015DE08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DE00u); set32(c.r[4], ld32((c.r[21].w[0] + 68u)));  if (depth < kMaxDepth) unit_001A(c, 13u, depth + 1u); else { c.pc = 0x00188420u; return; } if (c.pc != 0x0015DE00u) [[unlikely]] return; }
L_0015DE00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0015DE14; } }
L_0015DE08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DE10u); set32(c.r[5], 0u + 34u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015DE10u) [[unlikely]] return; }
L_0015DE10:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0015DE14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0015DE40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0015DF10; } }
L_0015DE70:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015DEF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DE90u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 274u, depth + 1u); else { c.pc = 0x0015F280u; return; } if (c.pc != 0x0015DE90u) [[unlikely]] return; }
L_0015DE90:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015DEF8; } }
L_0015DEA0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 3u);  goto L_0015DECC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DEBCu);  if (depth < kMaxDepth) unit_0010(c, 91u, depth + 1u); else { c.pc = 0x00160E40u; return; } if (c.pc != 0x0015DEBCu) [[unlikely]] return; }
L_0015DEBC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_0015DEDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015E03C; } }
L_0015DECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DED4u); set32(c.r[5], 0u + 34u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015DED4u) [[unlikely]] return; }
L_0015DED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015E03C; } }
L_0015DEDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DEE4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 274u, depth + 1u); else { c.pc = 0x0015F280u; return; } if (c.pc != 0x0015DEE4u) [[unlikely]] return; }
L_0015DEE4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015DEA0u | kUnwind; return; } goto L_0015DEA0; } }
    c.budget -= 1;
L_0015DEF8:
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015DE70u | kUnwind; return; } goto L_0015DE70; } }
    c.budget -= 1;
L_0015DF10:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0015E03C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x30000000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 16480u)));
    c.r[4].d[0] = c.r[3].d[0] | 2ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 17264u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51000000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 16480u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[18], ld32((c.r[5].w[0])));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[17], ld32((c.r[17].w[0] + 16480u)));
    set32(c.r[17], ld32((c.r[17].w[0])));
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[16], ld32((c.r[16].w[0] + 16480u)));
    set32(c.r[16], ld32((c.r[16].w[0])));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[15].w[0] + 16480u)));
    set32(c.r[15], ld32((c.r[16].w[0])));
    set32(c.r[15], c.r[15].w[0] + 16u);
    st32((c.r[16].w[0]), c.r[15].w[0]);
    set32(c.r[14], ld32((c.r[14].w[0] + 16484u)));
    set32(c.r[14], ld32((c.r[14].w[0])));
    st32((c.r[14].w[0]), c.r[4].w[0]);
    set32(c.r[13], ld32((c.r[13].w[0] + 16484u)));
    set32(c.r[13], ld32((c.r[13].w[0])));
    st32((c.r[13].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[12], ld32((c.r[12].w[0] + 16484u)));
    set32(c.r[12], ld32((c.r[12].w[0])));
    st32((c.r[12].w[0] + 8u), 0u);
    set32(c.r[11], ld32((c.r[11].w[0] + 16484u)));
    set32(c.r[11], ld32((c.r[11].w[0])));
    st32((c.r[11].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[11], ld32((c.r[10].w[0] + 16484u)));
    set32(c.r[10], ld32((c.r[11].w[0])));
    set32(c.r[10], c.r[10].w[0] + 16u);
    st32((c.r[11].w[0]), c.r[10].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0] + 16488u)));
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.budget -= 58;
L_0015E000:
    st32((c.r[9].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[8].w[0] + 16488u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 16488u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[6].w[0] + 16488u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 16488u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 15;
L_0015E03C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015E060:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0015E0E0; } }
L_0015E094:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 72u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015E0C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E0C4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 291u, depth + 1u); else { c.pc = 0x0015F630u; return; } if (c.pc != 0x0015E0C4u) [[unlikely]] return; }
L_0015E0C4:
    c.budget -= 1;
L_0015E0C8:
    set32(c.r[2], c.r[17].w[0] - 1u);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[17].sd[0] > 0; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E094u | kUnwind; return; } goto L_0015E094; } }
    c.budget -= 1;
L_0015E0E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 16480u);
    set32(c.r[8], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[6], ld32((c.r[8].w[0])));
    set32(c.r[5], c.r[5].w[0] - 17264u);
    c.r[3].d[0] = c.r[3].d[0] | 65520ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[7].d[0] = c.r[2].d[0] | 2ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51000000u);
    c.r[4].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[3].w[0]), c.r[7].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[8].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 37;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015E180:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0015E1E8; } }
L_0015E1B0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015E1D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E1D0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 291u, depth + 1u); else { c.pc = 0x0015F630u; return; } if (c.pc != 0x0015E1D0u) [[unlikely]] return; }
L_0015E1D0:
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E1B0u | kUnwind; return; } goto L_0015E1B0; } }
    c.budget -= 1;
L_0015E1E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 16480u);
    set32(c.r[8], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[6], ld32((c.r[8].w[0])));
    set32(c.r[5], c.r[5].w[0] - 17264u);
    c.r[3].d[0] = c.r[3].d[0] | 65520ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[7].d[0] = c.r[2].d[0] | 2ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51000000u);
    c.r[4].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[3].w[0]), c.r[7].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[8].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 37;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015E280:
    set32(c.r[5], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 68u)));  goto L_0015E298; }
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_0015E2A0; } }
L_0015E298:
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    st32((c.r[3].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 2;
L_0015E2A0:
    set32(c.r[5], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0015E2B4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    st32((c.r[5].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 2;
L_0015E2B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015E2C0:
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_0015E2D4; } }
    st32((c.r[3].w[0] + 72u), c.r[4].w[0]);
    c.budget -= 1;
L_0015E2D4:
    st32((c.r[4].w[0] + 72u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 24u), c.r[4].w[0]);  c.pc = t; return; }
L_0015E2F0:
    c.r[12].d[0] = c.r[4].d[0] & 3840ull;
    set32(c.r[2], 0u + 2304u);
    c.budget -= 4;
    { const bool t = c.r[12].d[0] == c.r[2].d[0]; st32((c.r[5].w[0]), 0u);  if (t) { goto L_0015E328; } }
    set32(c.r[2], 0u + 2048u);
    c.budget -= 3;
    if (c.r[12].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0015E314; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_0015E344; } }
L_0015E314:
    st32((c.r[8].w[0]), c.r[2].w[0]);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    st32((c.r[7].w[0]), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), 0u);  if (t) { goto L_0015E418; } }
L_0015E328:
    set32(c.r[3], 0u + 8u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[8].w[0]), c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    st32((c.r[7].w[0]), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_0015E418; } }
L_0015E344:
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    if (c.r[11].d[0] == c.r[2].d[0]) { set32(c.r[3], 0u + 32u);  goto L_0015E3D4; }
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    if (c.r[11].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0015E480; }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    if (c.r[11].d[0] == c.r[2].d[0]) { set32(c.r[3], 0u + 16u);  goto L_0015E3C4; }
    set32(c.r[10], 0u + 16u);
    c.budget -= 3;
    if (c.r[11].d[0] == c.r[10].d[0]) { set32(c.r[3], 0u + 8u);  goto L_0015E3B4; }
    set32(c.r[9], 0u + 3u);
    c.budget -= 3;
    if (c.r[11].d[0] == c.r[9].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0015E480; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[11].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 32u);  goto L_0015E3A8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[11].d[0] == c.r[2].d[0]) { st32((c.r[8].w[0]), c.r[10].w[0]);  goto L_0015E3A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015E3E4; } }
L_0015E3A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_0015E3EC; } }
L_0015E3A8:
    st32((c.r[8].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[9].w[0]);  if (t) { goto L_0015E3EC; } }
L_0015E3B4:
    set32(c.r[2], 0u + 1u);
    st32((c.r[8].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_0015E3EC; } }
L_0015E3C4:
    set32(c.r[2], 0u + 2u);
    st32((c.r[8].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_0015E3EC; } }
L_0015E3D4:
    set32(c.r[2], 0u + 3u);
    st32((c.r[8].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_0015E3EC; } }
L_0015E3E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015E480; } }
L_0015E3EC:
    c.budget -= 2;
    if (c.r[12].d[0] == 0ull) { set32(c.r[2], ld32((c.r[8].w[0])));  goto L_0015E3FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[5].w[0])));  if (t) { goto L_0015E408; } }
L_0015E3FC:
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), 0u);  if (t) { goto L_0015E418; } }
L_0015E408:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 61440ull;  goto L_0015E41C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015E480; } }
L_0015E418:
    c.r[3].d[0] = c.r[4].d[0] & 61440ull;
    c.budget -= 1;
L_0015E41C:
    set32(c.r[2], 0u + 12288u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[5].w[0])));  goto L_0015E458; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[5].w[0])));  goto L_0015E444; }
    set32(c.r[2], 0u + 8192u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0015E480; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[5].w[0])));  if (t) { goto L_0015E46C; } }
L_0015E444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015E47C; } }
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_0015E47C; } }
L_0015E458:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015E47C; } }
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_0015E47C; } }
L_0015E46C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015E47C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015E480; } }
L_0015E47C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0015E480:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015E490:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[7], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[6].d[0] = c.r[2].d[0] | 16706ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55580000u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] + 8768u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 21576ull;
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 124u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    st16((c.r[4].w[0] + 224u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 226u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 228u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 120u), 0u);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E528u); set32(c.r[4], c.r[18].w[0] + 128u);  if (depth < kMaxDepth) unit_0018(c, 215u, depth + 1u); else { c.pc = 0x00182BB0u; return; } if (c.pc != 0x0015E528u) [[unlikely]] return; }
L_0015E528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E530u); set32(c.r[4], c.r[18].w[0] + 208u);  if (depth < kMaxDepth) unit_0018(c, 216u, depth + 1u); else { c.pc = 0x00182BC0u; return; } if (c.pc != 0x0015E530u) [[unlikely]] return; }
L_0015E530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E538u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 200u, depth + 1u); else { c.pc = 0x0015E2C0u; return; } if (c.pc != 0x0015E538u) [[unlikely]] return; }
L_0015E538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E540u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 259u, depth + 1u); else { c.pc = 0x0015EF80u; return; } if (c.pc != 0x0015E540u) [[unlikely]] return; }
L_0015E540:
    set32(c.r[3], c.r[18].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48540000u);
    st32((c.r[18].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E558u); c.r[4].d[0] = c.r[2].d[0] | 21318ull;  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00182360u; return; } if (c.pc != 0x0015E558u) [[unlikely]] return; }
L_0015E558:
    c.budget -= 2;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_0015E584; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E56Cu); set32(c.r[5], 0u + 29u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015E56Cu) [[unlikely]] return; }
L_0015E56C:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015E68C; } }
L_0015E584:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[19], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E598u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00160DB0u; return; } if (c.pc != 0x0015E598u) [[unlikely]] return; }
L_0015E598:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_0015E5C4; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E5ACu); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015E5ACu) [[unlikely]] return; }
L_0015E5AC:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015E68C; } }
L_0015E5C4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E5D4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0015E5D4u) [[unlikely]] return; }
L_0015E5D4:
    set32(c.r[6], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[4], c.r[18].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E5E4u); set32(c.r[5], c.r[18].w[0] + 208u);  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00182BF0u; return; } if (c.pc != 0x0015E5E4u) [[unlikely]] return; }
L_0015E5E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 128u)));  goto L_0015E610; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E5F8u); set32(c.r[5], 0u + 27u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015E5F8u) [[unlikely]] return; }
L_0015E5F8:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015E68C; } }
L_0015E610:
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 208u)));  goto L_0015E62C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 208u)));
    c.budget -= 4;
L_0015E62C:
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[28].w[0] - 31448u));  goto L_0015E648; }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.r[3].d[0] = ld64((c.r[28].w[0] - 31448u));
    c.budget -= 4;
L_0015E648:
    c.r[2].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(1ll);
    st64((c.r[28].w[0] - 31448u), c.r[2].d[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[18].w[0] + 112u), c.r[3].d[0]);  if (t) { goto L_0015E668; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0015E678; } }
L_0015E668:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u - 8193u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_0015E678:
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 5;
L_0015E68C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015E6B0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 204u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 200u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 196u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[11].w[0]);
    set32(c.r[7], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].d[0] = c.r[2].d[0] | 16706ull;
    set32(c.r[3], c.r[3].w[0] + 8768u);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55580000u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 21576ull;
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 124u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    st16((c.r[4].w[0] + 224u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 226u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 228u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 120u), 0u);
    c.budget -= 47;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E76Cu); set32(c.r[4], c.r[20].w[0] + 128u);  if (depth < kMaxDepth) unit_0018(c, 215u, depth + 1u); else { c.pc = 0x00182BB0u; return; } if (c.pc != 0x0015E76Cu) [[unlikely]] return; }
L_0015E76C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E774u); set32(c.r[4], c.r[20].w[0] + 208u);  if (depth < kMaxDepth) unit_0018(c, 216u, depth + 1u); else { c.pc = 0x00182BC0u; return; } if (c.pc != 0x0015E774u) [[unlikely]] return; }
L_0015E774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E77Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 200u, depth + 1u); else { c.pc = 0x0015E2C0u; return; } if (c.pc != 0x0015E77Cu) [[unlikely]] return; }
L_0015E77C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E784u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 259u, depth + 1u); else { c.pc = 0x0015EF80u; return; } if (c.pc != 0x0015E784u) [[unlikely]] return; }
L_0015E784:
    set32(c.r[2], c.r[20].w[0] + 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    st32((c.r[20].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.r[3].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 8;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[23], 0u + 1u);  goto L_0015E7A8; }
    set32(c.r[23], 0u + 2u);
    c.budget -= 1;
L_0015E7A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF2000000u);
    c.r[17].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 6;
    if (c.r[17].d[0] != c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0xF3000000u);  goto L_0015E7E0; }
    set32(c.r[4], c.r[20].w[0] + 128u);
    st32((c.r[29].w[0] + 200u), 0u);
    st32((c.r[29].w[0] + 196u), 0u);
    st32((c.r[29].w[0] + 160u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E7D8u); st32((c.r[29].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_0018(c, 245u, depth + 1u); else { c.pc = 0x00183520u; return; } if (c.pc != 0x0015E7D8u) [[unlikely]] return; }
L_0015E7D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 128u)));  if (t) { goto L_0015EA4C; } }
L_0015E7E0:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 204u)));  goto L_0015E8A0; }
    set32(c.r[4], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[6], c.r[29].w[0] + 216u);
    set32(c.r[7], c.r[29].w[0] + 212u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E800u); set32(c.r[8], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_000F(c, 201u, depth + 1u); else { c.pc = 0x0015E2F0u; return; } if (c.pc != 0x0015E800u) [[unlikely]] return; }
L_0015E800:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld64((c.r[28].w[0] - 31448u));  goto L_0015E82C; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E814u); set32(c.r[5], 0u + 28u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015E814u) [[unlikely]] return; }
L_0015E814:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015EB28; } }
L_0015E82C:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 128u);
    st32((c.r[29].w[0] + 196u), 0u);
    c.r[2].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(1ll);
    st32((c.r[29].w[0] + 200u), 0u);
    st64((c.r[28].w[0] - 31448u), c.r[2].d[0]);
    st64((c.r[20].w[0] + 112u), c.r[3].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    st32((c.r[29].w[0] + 160u), 0u);
    st16((c.r[20].w[0] + 224u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    st16((c.r[20].w[0] + 226u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    st16((c.r[20].w[0] + 228u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E874u); st32((c.r[29].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_0018(c, 264u, depth + 1u); else { c.pc = 0x001839E0u; return; } if (c.pc != 0x0015E874u) [[unlikely]] return; }
L_0015E874:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015EA48; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E888u); set32(c.r[5], 0u + 45u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015E888u) [[unlikely]] return; }
L_0015E888:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015EB28; } }
L_0015E8A0:
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[6], c.r[29].w[0] + 216u);
    set32(c.r[7], c.r[29].w[0] + 212u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E8B4u); set32(c.r[8], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_000F(c, 201u, depth + 1u); else { c.pc = 0x0015E2F0u; return; } if (c.pc != 0x0015E8B4u) [[unlikely]] return; }
L_0015E8B4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 220u)));  goto L_0015E8E0; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E8C8u); set32(c.r[5], 0u + 28u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015E8C8u) [[unlikely]] return; }
L_0015E8C8:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015EB28; } }
L_0015E8E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_0015E900; } }
    set32(c.r[2], c.r[3].w[0] + 7u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 3;
L_0015E900:
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xF4000000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[21].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[22].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] >> 3);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == c.r[4].d[0]; set32(c.r[30], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0015E92C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0015E934; } }
L_0015E92C:
    set32(c.r[30], 0u + 16u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0015E934:
    c.budget -= 2;
    { const bool t = c.r[23].sd[0] <= 0;  if (t) { goto L_0015E9E0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0015E940:
    set32(c.r[4], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[2], c.r[20].w[0] + c.r[18].w[0]);
    set32(c.r[16], c.r[2].w[0] + 100u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E954u); c.r[5].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00160DB0u; return; } if (c.pc != 0x0015E954u) [[unlikely]] return; }
L_0015E954:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0015E9BC; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_0015E998; } }
    set32(c.r[16], c.r[19].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] - 4u);
    c.budget -= 2;
L_0015E96C:
    set32(c.r[2], c.r[20].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 1u);  if (t) { goto L_0015E990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E984u); set32(c.r[4], ld32((c.r[20].w[0] + 88u)));  if (depth < kMaxDepth) unit_0010(c, 86u, depth + 1u); else { c.pc = 0x00160DF0u; return; } if (c.pc != 0x0015E984u) [[unlikely]] return; }
L_0015E984:
    set32(c.r[2], c.r[20].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 100u), 0u);
    c.budget -= 3;
L_0015E990:
    c.budget -= 2;
    if (c.r[19].sd[0] > 0) { set32(c.r[16], c.r[16].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E96Cu | kUnwind; return; } goto L_0015E96C; }
L_0015E998:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E9A4u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015E9A4u) [[unlikely]] return; }
L_0015E9A4:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015EB28; } }
L_0015E9BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF4000000u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_0015E9D0; } }
    st32((c.r[2].w[0]), 0u);
    c.budget -= 2;
L_0015E9D0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E940u | kUnwind; return; } goto L_0015E940; } }
L_0015E9E0:
    c.r[3].d[0] = ld64((c.r[28].w[0] - 31448u));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(1ll);
    st64((c.r[28].w[0] - 31448u), c.r[2].d[0]);
    st64((c.r[20].w[0] + 112u), c.r[3].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    st16((c.r[20].w[0] + 224u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    st16((c.r[20].w[0] + 226u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    st16((c.r[20].w[0] + 228u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EA1Cu); set32(c.r[4], c.r[20].w[0] + 128u);  if (depth < kMaxDepth) unit_0018(c, 252u, depth + 1u); else { c.pc = 0x00183660u; return; } if (c.pc != 0x0015EA1Cu) [[unlikely]] return; }
L_0015EA1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015EA48; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EA30u); set32(c.r[5], 0u + 46u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015EA30u) [[unlikely]] return; }
L_0015EA30:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015EB28; } }
L_0015EA48:
    set32(c.r[2], ld32((c.r[20].w[0] + 128u)));
    c.budget -= 1;
L_0015EA4C:
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 208u)));  goto L_0015EA68; }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 208u)));
    c.budget -= 4;
L_0015EA68:
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0xF4000000u);  goto L_0015EA84; }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF4000000u);
    c.budget -= 4;
L_0015EA84:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 204u)));  goto L_0015EAE8; }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 160u)));  goto L_0015EAB8; }
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015EAB4; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 100u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EAB4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0015EAB4u) [[unlikely]] return; }
L_0015EAB4:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 1;
L_0015EAB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015EAE4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015EAE4; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EAE4u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0015EAE4u) [[unlikely]] return; }
L_0015EAE4:
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 1;
L_0015EAE8:
    st32((c.r[20].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 4u)));  goto L_0015EB08; }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0015EB14; } }
L_0015EB08:
    set32(c.r[2], 0u - 8193u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_0015EB14:
    set32(c.r[4], ld32((c.r[20].w[0] + 88u)));
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 5;
L_0015EB28:
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
L_0015EB60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[8], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[7].d[0] = c.r[2].d[0] | 16706ull;
    set32(c.r[3], c.r[3].w[0] + 8768u);
    st32((c.r[4].w[0]), c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55580000u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 21576ull;
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 84u), 0u);
    set32(c.r[2], ld32((c.r[6].w[0] + 96u)));
    st32((c.r[4].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 100u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    set32(c.r[2], ld32((c.r[6].w[0] + 92u)));
    st32((c.r[4].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 120u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 224u)));
    st16((c.r[4].w[0] + 224u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 226u)));
    st16((c.r[4].w[0] + 226u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 228u)));
    st16((c.r[4].w[0] + 228u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld64((c.r[28].w[0] - 31448u));
    c.r[2].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(1ll);
    st64((c.r[28].w[0] - 31448u), c.r[2].d[0]);
    st64((c.r[4].w[0] + 112u), c.r[3].d[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 124u)));
    c.budget -= 48;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 124u), 0u);  goto L_0015EC6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EC28u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0015EC28u) [[unlikely]] return; }
L_0015EC28:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 124u), c.r[2].w[0]);  goto L_0015EC40; }
    set32(c.r[5], ld32((c.r[19].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EC3Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 175u, depth + 1u); else { c.pc = 0x00165530u; return; } if (c.pc != 0x0015EC3Cu) [[unlikely]] return; }
L_0015EC3C:
    st32((c.r[20].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 1;
L_0015EC40:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[20].w[0] + 128u);  goto L_0015EC70; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EC54u); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015EC54u) [[unlikely]] return; }
L_0015EC54:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015ED98; } }
L_0015EC6C:
    set32(c.r[4], c.r[20].w[0] + 128u);
    c.budget -= 1;
L_0015EC70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EC78u);  if (depth < kMaxDepth) unit_0018(c, 215u, depth + 1u); else { c.pc = 0x00182BB0u; return; } if (c.pc != 0x0015EC78u) [[unlikely]] return; }
L_0015EC78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EC80u); set32(c.r[4], c.r[20].w[0] + 208u);  if (depth < kMaxDepth) unit_0018(c, 216u, depth + 1u); else { c.pc = 0x00182BC0u; return; } if (c.pc != 0x0015EC80u) [[unlikely]] return; }
L_0015EC80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EC88u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 200u, depth + 1u); else { c.pc = 0x0015E2C0u; return; } if (c.pc != 0x0015EC88u) [[unlikely]] return; }
L_0015EC88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EC90u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 259u, depth + 1u); else { c.pc = 0x0015EF80u; return; } if (c.pc != 0x0015EC90u) [[unlikely]] return; }
L_0015EC90:
    set32(c.r[2], c.r[20].w[0] + 32u);
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 64u), c.r[2].w[0]);
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_0015ECA4:
    set32(c.r[5], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0015ECF0; }
    set32(c.r[4], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[2], c.r[20].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ECC0u); set32(c.r[21], c.r[2].w[0] + 100u);  if (depth < kMaxDepth) unit_0010(c, 87u, depth + 1u); else { c.pc = 0x00160E00u; return; } if (c.pc != 0x0015ECC0u) [[unlikely]] return; }
L_0015ECC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[21].w[0]), c.r[2].w[0]);  if (t) { goto L_0015ECEC; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ECD4u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015ECD4u) [[unlikely]] return; }
L_0015ECD4:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015ED98; } }
L_0015ECEC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0015ECF0:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015ECA4u | kUnwind; return; } goto L_0015ECA4; } }
    set32(c.r[4], c.r[20].w[0] + 128u);
    set32(c.r[5], c.r[19].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ED10u); set32(c.r[6], 0u + 68u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0015ED10u) [[unlikely]] return; }
L_0015ED10:
    set32(c.r[4], c.r[20].w[0] + 208u);
    set32(c.r[5], c.r[19].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ED20u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0015ED20u) [[unlikely]] return; }
L_0015ED20:
    set32(c.r[2], ld32((c.r[20].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 208u)));  goto L_0015ED40; }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 208u)));
    c.budget -= 4;
L_0015ED40:
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  goto L_0015ED5C; }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 4;
L_0015ED5C:
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 4u)));  goto L_0015ED78; }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0015ED84; } }
L_0015ED78:
    set32(c.r[2], 0u - 8193u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_0015ED84:
    set32(c.r[4], ld32((c.r[20].w[0] + 88u)));
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 5;
L_0015ED98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0015EDC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015EECC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8768u);
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
L_0015EDF8:
    set32(c.r[5], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0015EE10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EE0Cu); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_0010(c, 86u, depth + 1u); else { c.pc = 0x00160DF0u; return; } if (c.pc != 0x0015EE0Cu) [[unlikely]] return; }
L_0015EE0C:
    c.budget -= 1;
L_0015EE10:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015EDF8u | kUnwind; return; } goto L_0015EDF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EE28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 272u, depth + 1u); else { c.pc = 0x0015F240u; return; } if (c.pc != 0x0015EE28u) [[unlikely]] return; }
L_0015EE28:
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_0015EE48; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EE44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015EE44u) [[unlikely]] return; }
L_0015EE44:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0015EE48:
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_0015EE60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EE5Cu); set32(c.r[4], c.r[17].w[0] + 128u);  if (depth < kMaxDepth) unit_0018(c, 217u, depth + 1u); else { c.pc = 0x00182BD0u; return; } if (c.pc != 0x0015EE5Cu) [[unlikely]] return; }
L_0015EE5C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0015EE60:
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0015EE78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EE74u); set32(c.r[4], c.r[17].w[0] + 208u);  if (depth < kMaxDepth) unit_0018(c, 218u, depth + 1u); else { c.pc = 0x00182BE0u; return; } if (c.pc != 0x0015EE74u) [[unlikely]] return; }
L_0015EE74:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015EE78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EE80u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0015EEF0u; return; } if (c.pc != 0x0015EE80u) [[unlikely]] return; }
L_0015EE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EE88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 199u, depth + 1u); else { c.pc = 0x0015E280u; return; } if (c.pc != 0x0015EE88u) [[unlikely]] return; }
L_0015EE88:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[3].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_0015EEB4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_0015EEB4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0015EED0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EECCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0015EECCu) [[unlikely]] return; }
L_0015EECC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015EED0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015EEF0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 80u)));  goto L_0015EF44; }
    set32(c.r[5], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 76u)));  goto L_0015EF18; }
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0015EF20; } }
L_0015EF18:
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    st32((c.r[3].w[0] + 28u), c.r[5].w[0]);
    c.budget -= 2;
L_0015EF20:
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 80u)));  goto L_0015EF38; }
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_0015EF74; } }
L_0015EF38:
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 32u), c.r[5].w[0]);  if (t) { goto L_0015EF74; } }
L_0015EF44:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 76u)));  goto L_0015EF58; }
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0015EF60; } }
L_0015EF58:
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    st32((c.r[3].w[0] + 36u), c.r[5].w[0]);
    c.budget -= 2;
L_0015EF60:
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0015EF74; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    st32((c.r[5].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 2;
L_0015EF74:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015EF80:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 88u)));  goto L_0015EFC0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0015EFAC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 32u), c.r[4].w[0]);  if (t) { goto L_0015EFB0; } }
L_0015EFAC:
    st32((c.r[3].w[0] + 80u), c.r[4].w[0]);
    c.budget -= 1;
L_0015EFB0:
    st32((c.r[4].w[0] + 80u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 28u), c.r[4].w[0]);  if (t) { goto L_0015EFDC; } }
L_0015EFC0:
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0015EFD0; } }
    st32((c.r[3].w[0] + 80u), c.r[4].w[0]);
    c.budget -= 1;
L_0015EFD0:
    st32((c.r[4].w[0] + 80u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    c.budget -= 3;
L_0015EFDC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015EFF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0015F020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F01Cu); set32(c.r[4], c.r[16].w[0] + 208u);  if (depth < kMaxDepth) unit_0018(c, 227u, depth + 1u); else { c.pc = 0x00182CE0u; return; } if (c.pc != 0x0015F01Cu) [[unlikely]] return; }
L_0015F01C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0015F020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F028u); set32(c.r[4], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_0018(c, 228u, depth + 1u); else { c.pc = 0x00182CF0u; return; } if (c.pc != 0x0015F028u) [[unlikely]] return; }
L_0015F028:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F034u); set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 89u, depth + 1u); else { c.pc = 0x00160E20u; return; } if (c.pc != 0x0015F034u) [[unlikely]] return; }
L_0015F034:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 120u), c.r[2].w[0]);  if (t) { goto L_0015F044; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015F0A0; } }
    goto L_0015F044;
L_0015F040:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0015F044:
    set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F050u); set32(c.r[4], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_0018(c, 233u, depth + 1u); else { c.pc = 0x00182DB0u; return; } if (c.pc != 0x0015F050u) [[unlikely]] return; }
L_0015F050:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 32u);  goto L_0015F084; }
    set32(c.r[5], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F06Cu); set32(c.r[4], c.r[16].w[0] + 208u);  if (depth < kMaxDepth) unit_0018(c, 232u, depth + 1u); else { c.pc = 0x00182DA0u; return; } if (c.pc != 0x0015F06Cu) [[unlikely]] return; }
L_0015F06C:
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], c.r[16].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F07Cu); set32(c.r[6], c.r[16].w[0] + 208u);  if (depth < kMaxDepth) unit_0018(c, 243u, depth + 1u); else { c.pc = 0x001832A0u; return; } if (c.pc != 0x0015F07Cu) [[unlikely]] return; }
L_0015F07C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_0015F094; } }
L_0015F084:
    set32(c.r[5], c.r[16].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F090u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 243u, depth + 1u); else { c.pc = 0x001832A0u; return; } if (c.pc != 0x0015F090u) [[unlikely]] return; }
L_0015F090:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0015F094:
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_0015F0A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015F0C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[5], c.r[20].w[0] + 128u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[2].w[0] + 16480u)));
    set32(c.r[19], ld32((c.r[28].w[0] - 31168u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[17], ld32((c.r[2].w[0] + 16484u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], ld32((c.r[2].w[0] + 16488u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F108u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 236u, depth + 1u); else { c.pc = 0x00182EC0u; return; } if (c.pc != 0x0015F108u) [[unlikely]] return; }
L_0015F108:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[3].d[0] = c.r[3].d[0] | 65520ull;
    c.r[3].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    st64((c.r[2].w[0] + 8u), 0ull);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    st64((c.r[2].w[0] + 8u), 0ull);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st64((c.r[2].w[0] + 8u), 0ull);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 35;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0015F220; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F1A0u); set32(c.r[5], c.r[20].w[0] + 208u);  if (depth < kMaxDepth) unit_0018(c, 234u, depth + 1u); else { c.pc = 0x00182E40u; return; } if (c.pc != 0x0015F1A0u) [[unlikely]] return; }
L_0015F1A0:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[3].d[0] = c.r[3].d[0] | 65520ull;
    c.r[3].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    st64((c.r[2].w[0] + 8u), 0ull);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    st64((c.r[2].w[0] + 8u), 0ull);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st64((c.r[2].w[0] + 8u), 0ull);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 32;
L_0015F220:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0015F240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0015F260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015F270; } }
L_0015F260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F268u); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_0010(c, 90u, depth + 1u); else { c.pc = 0x00160E30u; return; } if (c.pc != 0x0015F268u) [[unlikely]] return; }
L_0015F268:
    st32((c.r[16].w[0] + 120u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0015F270:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015F280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015F2BC; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 92u)));  goto L_0015F32C; }
    c.r[3].d[0] = c.r[6].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015F328; } }
L_0015F2BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F2C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0015EEF0u; return; } if (c.pc != 0x0015F2C4u) [[unlikely]] return; }
L_0015F2C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 88u)));  goto L_0015F304; }
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_0015F2F0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 32u), c.r[17].w[0]);  if (t) { goto L_0015F2F4; } }
L_0015F2F0:
    st32((c.r[2].w[0] + 80u), c.r[17].w[0]);
    c.budget -= 1;
L_0015F2F4:
    st32((c.r[17].w[0] + 80u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), c.r[17].w[0]);  if (t) { goto L_0015F320; } }
L_0015F304:
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_0015F314; } }
    st32((c.r[2].w[0] + 80u), c.r[17].w[0]);
    c.budget -= 1;
L_0015F314:
    st32((c.r[17].w[0] + 80u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    st32((c.r[2].w[0] + 36u), c.r[17].w[0]);
    c.budget -= 3;
L_0015F320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0015F618; } }
L_0015F328:
    set32(c.r[5], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 1;
L_0015F32C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF3000000u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = c.r[6].d[0] & 128ull;  goto L_0015F3B4; }
    c.r[2].d[0] = c.r[6].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0015F354; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0015F514; } }
L_0015F354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F35Cu); set32(c.r[4], c.r[17].w[0] + 128u);  if (depth < kMaxDepth) unit_0018(c, 228u, depth + 1u); else { c.pc = 0x00182CF0u; return; } if (c.pc != 0x0015F35Cu) [[unlikely]] return; }
L_0015F35C:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F368u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0010(c, 89u, depth + 1u); else { c.pc = 0x00160E20u; return; } if (c.pc != 0x0015F368u) [[unlikely]] return; }
L_0015F368:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 120u), c.r[2].w[0]);  if (t) { goto L_0015F378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015F3AC; } }
L_0015F378:
    set32(c.r[3], c.r[2].w[0] + 31u);
    set32(c.r[4], c.r[17].w[0] + 128u);
    set32(c.r[2], 0u - 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F38Cu); c.r[5].d[0] = c.r[3].d[0] & c.r[2].d[0];  if (depth < kMaxDepth) unit_0018(c, 233u, depth + 1u); else { c.pc = 0x00182DB0u; return; } if (c.pc != 0x0015F38Cu) [[unlikely]] return; }
L_0015F38C:
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F39Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 243u, depth + 1u); else { c.pc = 0x001832A0u; return; } if (c.pc != 0x0015F39Cu) [[unlikely]] return; }
L_0015F39C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_0015F3AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015F514; } }
L_0015F3B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015F454; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF2000000u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015F514; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0015F444; }
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 96u)));  goto L_0015F40C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 100u)));  if (t) { goto L_0015F418; } }
L_0015F40C:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 3;
L_0015F418:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF4000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F438; } }
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 1;
L_0015F438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F440u); set32(c.r[4], c.r[17].w[0] + 128u);  if (depth < kMaxDepth) unit_0018(c, 258u, depth + 1u); else { c.pc = 0x001838A0u; return; } if (c.pc != 0x0015F440u) [[unlikely]] return; }
L_0015F440:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015F444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F44Cu);  if (depth < kMaxDepth) unit_000F(c, 269u, depth + 1u); else { c.pc = 0x0015F0C0u; return; } if (c.pc != 0x0015F44Cu) [[unlikely]] return; }
L_0015F44C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0015F514; } }
L_0015F454:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 92u)));  goto L_0015F4D0; }
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 96u)));  goto L_0015F498; }
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 100u)));  if (t) { goto L_0015F4A4; } }
L_0015F498:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 3;
L_0015F4A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF4000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F4C4; } }
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 1;
L_0015F4C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F4CCu); set32(c.r[4], c.r[17].w[0] + 128u);  if (depth < kMaxDepth) unit_0018(c, 258u, depth + 1u); else { c.pc = 0x001838A0u; return; } if (c.pc != 0x0015F4CCu) [[unlikely]] return; }
L_0015F4CC:
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 1;
L_0015F4D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF2000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0015F4F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F4ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 298u, depth + 1u); else { c.pc = 0x0015FA00u; return; } if (c.pc != 0x0015F4ECu) [[unlikely]] return; }
L_0015F4EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0015F514; } }
L_0015F4F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F4FCu);  if (depth < kMaxDepth) unit_000F(c, 260u, depth + 1u); else { c.pc = 0x0015EFF0u; return; } if (c.pc != 0x0015F4FCu) [[unlikely]] return; }
L_0015F4FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F514; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0015F514; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F514u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 269u, depth + 1u); else { c.pc = 0x0015F0C0u; return; } if (c.pc != 0x0015F514u) [[unlikely]] return; }
L_0015F514:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0015F618; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F524u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0015EEF0u; return; } if (c.pc != 0x0015F524u) [[unlikely]] return; }
L_0015F524:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 88u)));  goto L_0015F56C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_0015F558; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 32u), c.r[17].w[0]);  if (t) { goto L_0015F55C; } }
L_0015F558:
    st32((c.r[2].w[0] + 80u), c.r[17].w[0]);
    c.budget -= 1;
L_0015F55C:
    st32((c.r[17].w[0] + 80u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), c.r[17].w[0]);  if (t) { goto L_0015F588; } }
L_0015F56C:
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_0015F57C; } }
    st32((c.r[2].w[0] + 80u), c.r[17].w[0]);
    c.budget -= 1;
L_0015F57C:
    st32((c.r[17].w[0] + 80u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    st32((c.r[2].w[0] + 36u), c.r[17].w[0]);
    c.budget -= 3;
L_0015F588:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0015F618; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F598u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 16u, depth + 1u); else { c.pc = 0x00160330u; return; } if (c.pc != 0x0015F598u) [[unlikely]] return; }
L_0015F598:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_0015F5D8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F5D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F5B4u); set32(c.r[4], ld32((c.r[2].w[0] + 64u)));  if (depth < kMaxDepth) unit_0011(c, 201u, depth + 1u); else { c.pc = 0x00165A40u; return; } if (c.pc != 0x0015F5B4u) [[unlikely]] return; }
L_0015F5B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F5D4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 128u);
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F5D4u); set32(c.r[6], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0018(c, 243u, depth + 1u); else { c.pc = 0x001832A0u; return; } if (c.pc != 0x0015F5D4u) [[unlikely]] return; }
L_0015F5D4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0015F5D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 112ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F604u); st32((c.r[3].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 316u, depth + 1u); else { c.pc = 0x0015FE70u; return; } if (c.pc != 0x0015F604u) [[unlikely]] return; }
L_0015F604:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
L_0015F618:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015F630:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015F6A8; } }
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0015F67C; }
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0015F8EC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0015F67C:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0015F694; }
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015F6A8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0015F694:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[3].d[0] & 128ull;  goto L_0015F6B8; }
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F6B4; } }
L_0015F6A8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015F8EC; } }
L_0015F6B4:
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 1;
L_0015F6B8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 92u)));  goto L_0015F6C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015F8EC; } }
L_0015F6C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF3000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0015F8EC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF2000000u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0015F6F4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015F8EC; } }
L_0015F6F4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015F76C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 92u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 96u)));  goto L_0015F738; }
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 100u)));  if (t) { goto L_0015F744; } }
L_0015F738:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 3;
L_0015F744:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF4000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F764; } }
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 1;
L_0015F764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F76Cu); set32(c.r[4], c.r[20].w[0] + 128u);  if (depth < kMaxDepth) unit_0018(c, 258u, depth + 1u); else { c.pc = 0x001838A0u; return; } if (c.pc != 0x0015F76Cu) [[unlikely]] return; }
L_0015F76C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[18], ld32((c.r[28].w[0] - 31168u)));
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 16480u);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[20].w[0] + 128u);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F790u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 236u, depth + 1u); else { c.pc = 0x00182EC0u; return; } if (c.pc != 0x0015F790u) [[unlikely]] return; }
L_0015F790:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[3].d[0] = c.r[3].d[0] | 65520ull;
    c.r[3].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st64((c.r[2].w[0] + 8u), 0ull);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F814; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F7E0u); set32(c.r[5], c.r[20].w[0] + 208u);  if (depth < kMaxDepth) unit_0018(c, 234u, depth + 1u); else { c.pc = 0x00182E40u; return; } if (c.pc != 0x0015F7E0u) [[unlikely]] return; }
L_0015F7E0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[3].d[0] = c.r[3].d[0] | 65520ull;
    c.r[3].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st64((c.r[2].w[0] + 8u), 0ull);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 13;
L_0015F814:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0015F82C; }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0015F84C; } }
L_0015F82C:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_0015F844; }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0015F84C; } }
L_0015F844:
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0015F84C:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0])));  goto L_0015F888; }
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F884; } }
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F884; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_0015F884:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0015F888:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[7].d[0] = c.r[2].d[0] | 2ull;
    set32(c.r[4], c.r[4].w[0] - 17264u);
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 65520ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51000000u);
    c.r[5].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[6].w[0]), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[2].d[0] | 2ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 25;
L_0015F8EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0015F910:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0015F934; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0015F9EC; } }
L_0015F934:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF2000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0015F968; }
    set32(c.r[5], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0015F964; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F960u); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_0010(c, 90u, depth + 1u); else { c.pc = 0x00160E30u; return; } if (c.pc != 0x0015F960u) [[unlikely]] return; }
L_0015F960:
    st32((c.r[16].w[0] + 120u), 0u);
    c.budget -= 1;
L_0015F964:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0015F968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F970u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0015EEF0u; return; } if (c.pc != 0x0015F970u) [[unlikely]] return; }
L_0015F970:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[2], 0u - 4337u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  goto L_0015F9CC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_0015F9B8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 32u), c.r[16].w[0]);  if (t) { goto L_0015F9BC; } }
L_0015F9B8:
    st32((c.r[2].w[0] + 80u), c.r[16].w[0]);
    c.budget -= 1;
L_0015F9BC:
    st32((c.r[16].w[0] + 80u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), c.r[16].w[0]);  if (t) { goto L_0015F9E8; } }
L_0015F9CC:
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_0015F9DC; } }
    st32((c.r[2].w[0] + 80u), c.r[16].w[0]);
    c.budget -= 1;
L_0015F9DC:
    st32((c.r[16].w[0] + 80u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    st32((c.r[2].w[0] + 36u), c.r[16].w[0]);
    c.budget -= 3;
L_0015F9E8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0015F9EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015FA00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FA20u); set32(c.r[5], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_0018(c, 243u, depth + 1u); else { c.pc = 0x001832A0u; return; } if (c.pc != 0x0015FA20u) [[unlikely]] return; }
L_0015FA20:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015FA40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015FA70; } }
    c.r[2].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  goto L_0015FA84; }
L_0015FA70:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FA7Cu); set32(c.r[5], 0u + 31u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015FA7Cu) [[unlikely]] return; }
L_0015FA7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015FCA8; } }
L_0015FA84:
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_0015FB64; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FAA4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 274u, depth + 1u); else { c.pc = 0x0015F280u; return; } if (c.pc != 0x0015FAA4u) [[unlikely]] return; }
L_0015FAA4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015FB50; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 1;
L_0015FAB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF2000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  goto L_0015FAF0; }
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FAD8u); set32(c.r[5], 0u + 108u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015FAD8u) [[unlikely]] return; }
L_0015FAD8:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015FCA8; } }
L_0015FAF0:
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015FB10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FB04u);  if (depth < kMaxDepth) unit_0010(c, 91u, depth + 1u); else { c.pc = 0x00160E40u; return; } if (c.pc != 0x0015FB04u) [[unlikely]] return; }
L_0015FB04:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0015FB34; }
    c.budget -= 1;
L_0015FB10:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FB1Cu); set32(c.r[5], 0u + 34u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015FB1Cu) [[unlikely]] return; }
L_0015FB1C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015FCA8; } }
L_0015FB34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FB3Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 274u, depth + 1u); else { c.pc = 0x0015F280u; return; } if (c.pc != 0x0015FB3Cu) [[unlikely]] return; }
L_0015FB3C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 92u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015FAB8u | kUnwind; return; } goto L_0015FAB8; }
    c.budget -= 1;
L_0015FB50:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] << 33;
    c.r[2].d[0] = c.r[2].d[0] >> 33;
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
L_0015FB64:
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015FB7C; } }
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FB7Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001A(c, 13u, depth + 1u); else { c.pc = 0x00188420u; return; } if (c.pc != 0x0015FB7Cu) [[unlikely]] return; }
L_0015FB7C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0015FCA8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x30000000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 16480u)));
    c.r[4].d[0] = c.r[3].d[0] | 2ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 17264u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51000000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 16480u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[24], ld32((c.r[5].w[0])));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[24].w[0] + 4u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[17], ld32((c.r[17].w[0] + 16480u)));
    set32(c.r[17], ld32((c.r[17].w[0])));
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[16], ld32((c.r[16].w[0] + 16480u)));
    set32(c.r[16], ld32((c.r[16].w[0])));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[15].w[0] + 16480u)));
    set32(c.r[15], ld32((c.r[16].w[0])));
    set32(c.r[15], c.r[15].w[0] + 16u);
    st32((c.r[16].w[0]), c.r[15].w[0]);
    set32(c.r[14], ld32((c.r[14].w[0] + 16484u)));
    set32(c.r[14], ld32((c.r[14].w[0])));
    st32((c.r[14].w[0]), c.r[4].w[0]);
    set32(c.r[13], ld32((c.r[13].w[0] + 16484u)));
    set32(c.r[13], ld32((c.r[13].w[0])));
    st32((c.r[13].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[12], ld32((c.r[12].w[0] + 16484u)));
    set32(c.r[12], ld32((c.r[12].w[0])));
    st32((c.r[12].w[0] + 8u), 0u);
    set32(c.r[11], ld32((c.r[11].w[0] + 16484u)));
    set32(c.r[11], ld32((c.r[11].w[0])));
    st32((c.r[11].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[11], ld32((c.r[10].w[0] + 16484u)));
    set32(c.r[10], ld32((c.r[11].w[0])));
    set32(c.r[10], c.r[10].w[0] + 16u);
    st32((c.r[11].w[0]), c.r[10].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0] + 16488u)));
    set32(c.r[9], ld32((c.r[9].w[0])));
    st32((c.r[9].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[8].w[0] + 16488u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 16488u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[6].w[0] + 16488u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 16488u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 73;
L_0015FCA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015FCC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF4000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0015FD04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015FE30; } }
L_0015FD04:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 96u)));  goto L_0015FDC8; }
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF2000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0015FD44; }
    set32(c.r[5], ld32((c.r[18].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0015FD40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FD3Cu); set32(c.r[4], ld32((c.r[18].w[0] + 88u)));  if (depth < kMaxDepth) unit_0010(c, 90u, depth + 1u); else { c.pc = 0x00160E30u; return; } if (c.pc != 0x0015FD3Cu) [[unlikely]] return; }
L_0015FD3C:
    st32((c.r[18].w[0] + 120u), 0u);
    c.budget -= 1;
L_0015FD40:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0015FD44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FD4Cu);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0015EEF0u; return; } if (c.pc != 0x0015FD4Cu) [[unlikely]] return; }
L_0015FD4C:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[2], 0u - 4337u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 88u)));  goto L_0015FDA8; }
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_0015FD94; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 32u), c.r[18].w[0]);  if (t) { goto L_0015FD98; } }
L_0015FD94:
    st32((c.r[2].w[0] + 80u), c.r[18].w[0]);
    c.budget -= 1;
L_0015FD98:
    st32((c.r[18].w[0] + 80u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), c.r[18].w[0]);  if (t) { goto L_0015FDC4; } }
L_0015FDA8:
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_0015FDB8; } }
    st32((c.r[2].w[0] + 80u), c.r[18].w[0]);
    c.budget -= 1;
L_0015FDB8:
    st32((c.r[18].w[0] + 80u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    st32((c.r[2].w[0] + 36u), c.r[18].w[0]);
    c.budget -= 3;
L_0015FDC4:
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 1;
L_0015FDC8:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0]), c.r[17].w[0]);  goto L_0015FDF0; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_0015FDE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FDE8u); set32(c.r[5], 0u + 50u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015FDE8u) [[unlikely]] return; }
L_0015FDE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015FE30; } }
L_0015FDF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 92u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0015FE30; }
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 3u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015FDE0u | kUnwind; return; } goto L_0015FDE0; }
    st32((c.r[2].w[0]), c.r[16].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0015FE30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015FE50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 92u)));  c.pc = t; return; }
L_0015FE60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld16((c.r[4].w[0] + 136u));  c.pc = t; return; }
L_0015FE70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FE88u); set32(c.r[4], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_0018(c, 230u, depth + 1u); else { c.pc = 0x00182D20u; return; } if (c.pc != 0x0015FE88u) [[unlikely]] return; }
L_0015FE88:
    set32(c.r[4], c.r[16].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FE94u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 229u, depth + 1u); else { c.pc = 0x00182D00u; return; } if (c.pc != 0x0015FE94u) [[unlikely]] return; }
L_0015FE94:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015FEB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0015FEF8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015FF0C; } }
L_0015FEF8:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FF04u); set32(c.r[5], 0u + 43u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015FF04u) [[unlikely]] return; }
L_0015FF04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0010(c, 8u, depth); } }
L_0015FF0C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0015FF38; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015FF38; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FF30u); set32(c.r[5], 0u + 31u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015FF30u) [[unlikely]] return; }
L_0015FF30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0010(c, 8u, depth); } }
L_0015FF38:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_0015FF68; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015FF64; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FF5Cu); set32(c.r[5], 0u + 31u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015FF5Cu) [[unlikely]] return; }
L_0015FF5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0010(c, 8u, depth); } }
L_0015FF64:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 1;
L_0015FF68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 224u)));  [[clang::musttail]] return unit_0010(c, 5u, depth); }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0010(c, 4u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF2000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0015FFC4; }
    set32(c.r[5], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0015FFC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FFBCu); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_0010(c, 90u, depth + 1u); else { c.pc = 0x00160E30u; return; } if (c.pc != 0x0015FFBCu) [[unlikely]] return; }
L_0015FFBC:
    st32((c.r[16].w[0] + 120u), 0u);
    c.budget -= 1;
L_0015FFC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0015FFC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FFCCu);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0015EEF0u; return; } if (c.pc != 0x0015FFCCu) [[unlikely]] return; }
L_0015FFCC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[2], 0u - 4337u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  [[clang::musttail]] return unit_0010(c, 2u, depth); }
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 2;
    [[clang::musttail]] return unit_0010(c, 1u, depth);
}

}
