#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006C[4096] = {
    1, 2, 3, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 7, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0,
    0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0,
    0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55,
    0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0,
    0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87,
    0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0,
    0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0,
    0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0,
    0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145,
    0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160,
    0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0,
    0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 180, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0,
    0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0,
    0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0,
    0, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226,
    0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0,
    0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0,
    0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248,
    0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0,
    0, 0, 265, 0, 0, 266, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271,
    0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0,
    0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 293,
    0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299,
    0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308,
    0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0,
    0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0,
    328, 0, 0, 0, 329, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 334, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0,
    337, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 356, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0,
};

void unit_006C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002D0000;
    case 2u: goto L_002D0004;
    case 3u: goto L_002D0008;
    case 4u: goto L_002D0020;
    case 5u: goto L_002D002C;
    case 6u: goto L_002D0100;
    case 7u: goto L_002D0108;
    case 8u: goto L_002D0110;
    case 9u: goto L_002D0120;
    case 10u: goto L_002D016C;
    case 11u: goto L_002D01B0;
    case 12u: goto L_002D0208;
    case 13u: goto L_002D0218;
    case 14u: goto L_002D0294;
    case 15u: goto L_002D02A0;
    case 16u: goto L_002D02B4;
    case 17u: goto L_002D02E0;
    case 18u: goto L_002D033C;
    case 19u: goto L_002D0374;
    case 20u: goto L_002D0388;
    case 21u: goto L_002D039C;
    case 22u: goto L_002D03B0;
    case 23u: goto L_002D03C4;
    case 24u: goto L_002D03F0;
    case 25u: goto L_002D04B8;
    case 26u: goto L_002D04C8;
    case 27u: goto L_002D04D8;
    case 28u: goto L_002D04E8;
    case 29u: goto L_002D04F8;
    case 30u: goto L_002D0508;
    case 31u: goto L_002D0518;
    case 32u: goto L_002D0528;
    case 33u: goto L_002D0538;
    case 34u: goto L_002D0548;
    case 35u: goto L_002D0558;
    case 36u: goto L_002D05C0;
    case 37u: goto L_002D05DC;
    case 38u: goto L_002D0620;
    case 39u: goto L_002D0630;
    case 40u: goto L_002D067C;
    case 41u: goto L_002D06D0;
    case 42u: goto L_002D06E4;
    case 43u: goto L_002D0740;
    case 44u: goto L_002D0770;
    case 45u: goto L_002D0790;
    case 46u: goto L_002D07B0;
    case 47u: goto L_002D07C0;
    case 48u: goto L_002D07D0;
    case 49u: goto L_002D07E0;
    case 50u: goto L_002D0800;
    case 51u: goto L_002D0840;
    case 52u: goto L_002D0898;
    case 53u: goto L_002D08B0;
    case 54u: goto L_002D08F0;
    case 55u: goto L_002D08FC;
    case 56u: goto L_002D0914;
    case 57u: goto L_002D0930;
    case 58u: goto L_002D0940;
    case 59u: goto L_002D0950;
    case 60u: goto L_002D0968;
    case 61u: goto L_002D0970;
    case 62u: goto L_002D0980;
    case 63u: goto L_002D09AC;
    case 64u: goto L_002D09CC;
    case 65u: goto L_002D09EC;
    case 66u: goto L_002D0A0C;
    case 67u: goto L_002D0A2C;
    case 68u: goto L_002D0A54;
    case 69u: goto L_002D0A80;
    case 70u: goto L_002D0AA4;
    case 71u: goto L_002D0AC0;
    case 72u: goto L_002D0B40;
    case 73u: goto L_002D0B80;
    case 74u: goto L_002D0BD8;
    case 75u: goto L_002D0C2C;
    case 76u: goto L_002D0C48;
    case 77u: goto L_002D0C68;
    case 78u: goto L_002D0CAC;
    case 79u: goto L_002D0CC4;
    case 80u: goto L_002D0D50;
    case 81u: goto L_002D0DC8;
    case 82u: goto L_002D0E04;
    case 83u: goto L_002D0E54;
    case 84u: goto L_002D0EA0;
    case 85u: goto L_002D0EC8;
    case 86u: goto L_002D0EF0;
    case 87u: goto L_002D0EFC;
    case 88u: goto L_002D0F14;
    case 89u: goto L_002D0FC0;
    case 90u: goto L_002D0FD0;
    case 91u: goto L_002D100C;
    case 92u: goto L_002D105C;
    case 93u: goto L_002D10D0;
    case 94u: goto L_002D10DC;
    case 95u: goto L_002D10E4;
    case 96u: goto L_002D110C;
    case 97u: goto L_002D1124;
    case 98u: goto L_002D1134;
    case 99u: goto L_002D1144;
    case 100u: goto L_002D1154;
    case 101u: goto L_002D1178;
    case 102u: goto L_002D118C;
    case 103u: goto L_002D11A8;
    case 104u: goto L_002D11BC;
    case 105u: goto L_002D11E4;
    case 106u: goto L_002D11EC;
    case 107u: goto L_002D1210;
    case 108u: goto L_002D123C;
    case 109u: goto L_002D1258;
    case 110u: goto L_002D12A8;
    case 111u: goto L_002D12CC;
    case 112u: goto L_002D12DC;
    case 113u: goto L_002D12F8;
    case 114u: goto L_002D1308;
    case 115u: goto L_002D1320;
    case 116u: goto L_002D1330;
    case 117u: goto L_002D1340;
    case 118u: goto L_002D1374;
    case 119u: goto L_002D13B4;
    case 120u: goto L_002D13C4;
    case 121u: goto L_002D13E4;
    case 122u: goto L_002D1418;
    case 123u: goto L_002D1468;
    case 124u: goto L_002D1498;
    case 125u: goto L_002D14D4;
    case 126u: goto L_002D14EC;
    case 127u: goto L_002D1500;
    case 128u: goto L_002D1520;
    case 129u: goto L_002D15B0;
    case 130u: goto L_002D15CC;
    case 131u: goto L_002D163C;
    case 132u: goto L_002D1648;
    case 133u: goto L_002D1684;
    case 134u: goto L_002D1694;
    case 135u: goto L_002D16A4;
    case 136u: goto L_002D16C0;
    case 137u: goto L_002D16D0;
    case 138u: goto L_002D16F8;
    case 139u: goto L_002D1714;
    case 140u: goto L_002D1768;
    case 141u: goto L_002D1770;
    case 142u: goto L_002D17AC;
    case 143u: goto L_002D17D0;
    case 144u: goto L_002D17F0;
    case 145u: goto L_002D17FC;
    case 146u: goto L_002D180C;
    case 147u: goto L_002D1848;
    case 148u: goto L_002D186C;
    case 149u: goto L_002D187C;
    case 150u: goto L_002D18D8;
    case 151u: goto L_002D18E8;
    case 152u: goto L_002D1934;
    case 153u: goto L_002D1944;
    case 154u: goto L_002D19A4;
    case 155u: goto L_002D19AC;
    case 156u: goto L_002D19C0;
    case 157u: goto L_002D19F0;
    case 158u: goto L_002D1A48;
    case 159u: goto L_002D1A70;
    case 160u: goto L_002D1A7C;
    case 161u: goto L_002D1A88;
    case 162u: goto L_002D1ACC;
    case 163u: goto L_002D1AE8;
    case 164u: goto L_002D1B4C;
    case 165u: goto L_002D1B5C;
    case 166u: goto L_002D1BBC;
    case 167u: goto L_002D1BC8;
    case 168u: goto L_002D1BF4;
    case 169u: goto L_002D1BFC;
    case 170u: goto L_002D1C10;
    case 171u: goto L_002D1C90;
    case 172u: goto L_002D1CE4;
    case 173u: goto L_002D1D04;
    case 174u: goto L_002D1D48;
    case 175u: goto L_002D1D60;
    case 176u: goto L_002D1D78;
    case 177u: goto L_002D1DA8;
    case 178u: goto L_002D1DB4;
    case 179u: goto L_002D1DC0;
    case 180u: goto L_002D1E0C;
    case 181u: goto L_002D1E18;
    case 182u: goto L_002D1E20;
    case 183u: goto L_002D1F40;
    case 184u: goto L_002D1FA0;
    case 185u: goto L_002D201C;
    case 186u: goto L_002D2044;
    case 187u: goto L_002D2058;
    case 188u: goto L_002D20E8;
    case 189u: goto L_002D20F4;
    case 190u: goto L_002D2138;
    case 191u: goto L_002D2150;
    case 192u: goto L_002D215C;
    case 193u: goto L_002D21C8;
    case 194u: goto L_002D21D4;
    case 195u: goto L_002D21EC;
    case 196u: goto L_002D220C;
    case 197u: goto L_002D2228;
    case 198u: goto L_002D2234;
    case 199u: goto L_002D2248;
    case 200u: goto L_002D2258;
    case 201u: goto L_002D2284;
    case 202u: goto L_002D22AC;
    case 203u: goto L_002D22E4;
    case 204u: goto L_002D22EC;
    case 205u: goto L_002D2300;
    case 206u: goto L_002D2330;
    case 207u: goto L_002D2348;
    case 208u: goto L_002D2384;
    case 209u: goto L_002D238C;
    case 210u: goto L_002D23C4;
    case 211u: goto L_002D23F4;
    case 212u: goto L_002D2408;
    case 213u: goto L_002D2414;
    case 214u: goto L_002D2420;
    case 215u: goto L_002D244C;
    case 216u: goto L_002D2460;
    case 217u: goto L_002D246C;
    case 218u: goto L_002D2478;
    case 219u: goto L_002D248C;
    case 220u: goto L_002D2498;
    case 221u: goto L_002D24A4;
    case 222u: goto L_002D24F0;
    case 223u: goto L_002D2528;
    case 224u: goto L_002D25AC;
    case 225u: goto L_002D25B8;
    case 226u: goto L_002D25FC;
    case 227u: goto L_002D260C;
    case 228u: goto L_002D2630;
    case 229u: goto L_002D26CC;
    case 230u: goto L_002D26D4;
    case 231u: goto L_002D2720;
    case 232u: goto L_002D275C;
    case 233u: goto L_002D2768;
    case 234u: goto L_002D2774;
    case 235u: goto L_002D27D0;
    case 236u: goto L_002D27E4;
    case 237u: goto L_002D2808;
    case 238u: goto L_002D2820;
    case 239u: goto L_002D2878;
    case 240u: goto L_002D2884;
    case 241u: goto L_002D28C4;
    case 242u: goto L_002D28DC;
    case 243u: goto L_002D293C;
    case 244u: goto L_002D2948;
    case 245u: goto L_002D2968;
    case 246u: goto L_002D297C;
    case 247u: goto L_002D29E4;
    case 248u: goto L_002D29FC;
    case 249u: goto L_002D2A1C;
    case 250u: goto L_002D2A38;
    case 251u: goto L_002D2A4C;
    case 252u: goto L_002D2A5C;
    case 253u: goto L_002D2A88;
    case 254u: goto L_002D2AC0;
    case 255u: goto L_002D2AC8;
    case 256u: goto L_002D2ADC;
    case 257u: goto L_002D2B0C;
    case 258u: goto L_002D2B24;
    case 259u: goto L_002D2B60;
    case 260u: goto L_002D2B6C;
    case 261u: goto L_002D2BAC;
    case 262u: goto L_002D2BC0;
    case 263u: goto L_002D2BCC;
    case 264u: goto L_002D2BF4;
    case 265u: goto L_002D2C08;
    case 266u: goto L_002D2C14;
    case 267u: goto L_002D2C24;
    case 268u: goto L_002D2C30;
    case 269u: goto L_002D2C80;
    case 270u: goto L_002D2CA0;
    case 271u: goto L_002D2CFC;
    case 272u: goto L_002D2D04;
    case 273u: goto L_002D2D70;
    case 274u: goto L_002D2DDC;
    case 275u: goto L_002D2E40;
    case 276u: goto L_002D2E70;
    case 277u: goto L_002D2E94;
    case 278u: goto L_002D2EE0;
    case 279u: goto L_002D2F08;
    case 280u: goto L_002D2F58;
    case 281u: goto L_002D2F80;
    case 282u: goto L_002D2FC0;
    case 283u: goto L_002D2FE8;
    case 284u: goto L_002D2FFC;
    case 285u: goto L_002D30A0;
    case 286u: goto L_002D30C4;
    case 287u: goto L_002D30FC;
    case 288u: goto L_002D312C;
    case 289u: goto L_002D3150;
    case 290u: goto L_002D3168;
    case 291u: goto L_002D31D8;
    case 292u: goto L_002D31EC;
    case 293u: goto L_002D31FC;
    case 294u: goto L_002D320C;
    case 295u: goto L_002D321C;
    case 296u: goto L_002D322C;
    case 297u: goto L_002D3234;
    case 298u: goto L_002D3244;
    case 299u: goto L_002D327C;
    case 300u: goto L_002D3284;
    case 301u: goto L_002D3294;
    case 302u: goto L_002D32C4;
    case 303u: goto L_002D339C;
    case 304u: goto L_002D33B4;
    case 305u: goto L_002D33C0;
    case 306u: goto L_002D33D4;
    case 307u: goto L_002D33EC;
    case 308u: goto L_002D33FC;
    case 309u: goto L_002D3408;
    case 310u: goto L_002D3444;
    case 311u: goto L_002D345C;
    case 312u: goto L_002D34B0;
    case 313u: goto L_002D35A4;
    case 314u: goto L_002D35D4;
    case 315u: goto L_002D35F8;
    case 316u: goto L_002D3644;
    case 317u: goto L_002D366C;
    case 318u: goto L_002D36BC;
    case 319u: goto L_002D36C8;
    case 320u: goto L_002D370C;
    case 321u: goto L_002D374C;
    case 322u: goto L_002D3774;
    case 323u: goto L_002D3788;
    case 324u: goto L_002D37BC;
    case 325u: goto L_002D37D0;
    case 326u: goto L_002D37E0;
    case 327u: goto L_002D37F0;
    case 328u: goto L_002D3800;
    case 329u: goto L_002D3810;
    case 330u: goto L_002D3818;
    case 331u: goto L_002D3828;
    case 332u: goto L_002D3860;
    case 333u: goto L_002D3868;
    case 334u: goto L_002D3878;
    case 335u: goto L_002D38A8;
    case 336u: goto L_002D3968;
    case 337u: goto L_002D3980;
    case 338u: goto L_002D398C;
    case 339u: goto L_002D39A0;
    case 340u: goto L_002D39B8;
    case 341u: goto L_002D39C8;
    case 342u: goto L_002D39D4;
    case 343u: goto L_002D3A10;
    case 344u: goto L_002D3A28;
    case 345u: goto L_002D3A70;
    case 346u: goto L_002D3AB0;
    case 347u: goto L_002D3ADC;
    case 348u: goto L_002D3AE4;
    case 349u: goto L_002D3B14;
    case 350u: goto L_002D3B24;
    case 351u: goto L_002D3B38;
    case 352u: goto L_002D3B70;
    case 353u: goto L_002D3C00;
    case 354u: goto L_002D3C28;
    case 355u: goto L_002D3C30;
    case 356u: goto L_002D3C40;
    case 357u: goto L_002D3C48;
    case 358u: goto L_002D3C54;
    case 359u: goto L_002D3C70;
    case 360u: goto L_002D3D00;
    case 361u: goto L_002D3D14;
    case 362u: goto L_002D3D30;
    case 363u: goto L_002D3DA0;
    case 364u: goto L_002D3E30;
    case 365u: goto L_002D3E70;
    case 366u: goto L_002D3EA0;
    case 367u: goto L_002D3F54;
    case 368u: goto L_002D3F68;
    case 369u: goto L_002D3FF0;
    default: bad_entry(c, 0x002D0000u); return;
    }
L_002D0000:
    set32(c.r[6], c.r[2].w[0] + 32u);
    c.budget -= 1;
L_002D0004:
    set32(c.r[5], ld32((c.r[16].w[0] + 616u)));
    c.budget -= 1;
L_002D0008:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 48u)));
    st32((c.r[16].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 52u)));
    st32((c.r[16].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 6;
L_002D0020:
    set32(c.r[2], ld32((c.r[5].w[0] + 56u)));
    st32((c.r[16].w[0] + 264u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 3;
L_002D002C:
    st32((c.r[16].w[0] + 268u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 616u)));
    c.f[0] = ld32((c.r[2].w[0] + 64u));
    st32((c.r[16].w[0] + 304u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 68u));
    st32((c.r[16].w[0] + 308u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 72u));
    st32((c.r[16].w[0] + 312u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 76u));
    st32((c.r[16].w[0] + 316u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 208u));
    st32((c.r[16].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 212u));
    st32((c.r[16].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 216u));
    st32((c.r[16].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 220u));
    st32((c.r[16].w[0] + 204u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 256u)));
    st32((c.r[16].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 260u)));
    st32((c.r[16].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    st32((c.r[16].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 268u)));
    st32((c.r[16].w[0] + 252u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 304u));
    st32((c.r[16].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 308u));
    st32((c.r[16].w[0] + 292u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 312u));
    st32((c.r[16].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 316u));
    st32((c.r[16].w[0] + 300u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 53;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0100u); st32((c.r[16].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D0100u) [[unlikely]] return; }
L_002D0100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0108u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 269u, depth + 1u); else { c.pc = 0x002D2C80u; return; } if (c.pc != 0x002D0108u) [[unlikely]] return; }
L_002D0108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0110u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x002D0110u) [[unlikely]] return; }
L_002D0110:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002D0120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D014C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002D01A4; } }
L_002D014C:
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_002D0164; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0] + 64u));  if (t) { goto L_002D01A0; } }
L_002D0164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D016Cu);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002D016Cu) [[unlikely]] return; }
L_002D016C:
    c.r[2].d[0] = c.r[2].d[0] ^ 6ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 140u)));  goto L_002D0190; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.f[1] = ld32((c.r[2].w[0] + 92u));
    c.f[0] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_002D01A0; } }
L_002D0190:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = ld32((c.r[2].w[0] + 64u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 4;
L_002D01A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002D01A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D01B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 11;
    { const bool t = c.r[17].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D03C4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[18].d[0]; set32(c.r[16], ld32((c.r[17].w[0] + 1180u)));  if (t) { goto L_002D0220; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 1180u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_002D0224; }
    set32(c.r[4], ld32((c.r[18].w[0] + 1312u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_002D03C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0208u);  if (depth < kMaxDepth) unit_0059(c, 332u, depth + 1u); else { c.pc = 0x00286500u; return; } if (c.pc != 0x002D0208u) [[unlikely]] return; }
L_002D0208:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D03C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0218u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 35u, depth + 1u); else { c.pc = 0x0028C720u; return; } if (c.pc != 0x002D0218u) [[unlikely]] return; }
L_002D0218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D03C4; } }
L_002D0220:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002D0224:
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D03C4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D025C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 148u)));
    set32(c.r[3], 0u + 20006u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D025C; } }
    set32(c.r[3], 0u + 20031u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D03C4; } }
L_002D025C:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[18].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_002D0270; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D03C4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_002D0270:
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002D02AC; }
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D02A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0294u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002D0294u) [[unlikely]] return; }
L_002D0294:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D02A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002D02A0u) [[unlikely]] return; }
L_002D02A0:
    c.budget -= 2;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[3], 0u + 5u);  goto L_002D02C0; }
L_002D02A8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002D02AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D02B4u);  if (depth < kMaxDepth) unit_005B(c, 35u, depth + 1u); else { c.pc = 0x0028C720u; return; } if (c.pc != 0x002D02B4u) [[unlikely]] return; }
L_002D02B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D03C4; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_002D02C0:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002D02D8; }
    set32(c.r[3], 0u + 24u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 7u);  goto L_002D02EC; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002D02D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D02E0u);  if (depth < kMaxDepth) unit_005B(c, 35u, depth + 1u); else { c.pc = 0x0028C720u; return; } if (c.pc != 0x002D02E0u) [[unlikely]] return; }
L_002D02E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D03C4; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 1;
L_002D02EC:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 1296u)));  goto L_002D0304; }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_002D03C4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1296u)));
    c.budget -= 1;
L_002D0304:
    set32(c.r[2], ld32((c.r[18].w[0] + 1296u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002D03BC; }
    set32(c.r[3], ld32((c.r[18].w[0] + 148u)));
    set32(c.r[2], 0u + 20031u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002D0334; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 192u);  if (t) { goto L_002D036C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002D0334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D033Cu);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002D033Cu) [[unlikely]] return; }
L_002D033C:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002D0360; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[2].w[0] + 44u));  if (t) { goto L_002D0368; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002D0360:
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.f[20] = ld32((c.r[2].w[0] + 48u));
    c.budget -= 2;
L_002D0368:
    set32(c.r[4], c.r[17].w[0] + 192u);
    c.budget -= 1;
L_002D036C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0374u); set32(c.r[5], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x002D0374u) [[unlikely]] return; }
L_002D0374:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002D03A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0388u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 32u, depth + 1u); else { c.pc = 0x0028C6D0u; return; } if (c.pc != 0x002D0388u) [[unlikely]] return; }
L_002D0388:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D03C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D039Cu);  if (depth < kMaxDepth) unit_0059(c, 333u, depth + 1u); else { c.pc = 0x00286530u; return; } if (c.pc != 0x002D039Cu) [[unlikely]] return; }
L_002D039C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D03C4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002D03A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D03B0u);  if (depth < kMaxDepth) unit_005B(c, 35u, depth + 1u); else { c.pc = 0x0028C720u; return; } if (c.pc != 0x002D03B0u) [[unlikely]] return; }
L_002D03B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D03C4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002D03BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D03C4u);  if (depth < kMaxDepth) unit_005B(c, 35u, depth + 1u); else { c.pc = 0x0028C720u; return; } if (c.pc != 0x002D03C4u) [[unlikely]] return; }
L_002D03C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002D03C8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002D03F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 91u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002D0590; } }
    set32(c.r[3], 0u + 87u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[4].w[0] + 120u)));  goto L_002D057C; }
    set32(c.r[3], 0u + 114u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[4].w[0] + 84u)));  goto L_002D0564; }
    set32(c.r[3], 0u + 83u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D0560; } }
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D0550; } }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D0540; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D0530; } }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D0520; } }
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D0510; } }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D0500; } }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D04F0; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D04E0; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D04D0; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D04C0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D04B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002D05AC; } }
L_002D04B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D04B8u);  if (depth < kMaxDepth) unit_006C(c, 50u, depth + 1u); else { c.pc = 0x002D0800u; return; } if (c.pc != 0x002D04B8u) [[unlikely]] return; }
L_002D04B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D05A8; } }
L_002D04C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D04C8u);  if (depth < kMaxDepth) unit_006C(c, 36u, depth + 1u); else { c.pc = 0x002D05C0u; return; } if (c.pc != 0x002D04C8u) [[unlikely]] return; }
L_002D04C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D05A8; } }
L_002D04D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D04D8u);  if (depth < kMaxDepth) unit_006C(c, 38u, depth + 1u); else { c.pc = 0x002D0620u; return; } if (c.pc != 0x002D04D8u) [[unlikely]] return; }
L_002D04D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D05A8; } }
L_002D04E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D04E8u);  if (depth < kMaxDepth) unit_006C(c, 46u, depth + 1u); else { c.pc = 0x002D07B0u; return; } if (c.pc != 0x002D04E8u) [[unlikely]] return; }
L_002D04E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D05A8; } }
L_002D04F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D04F8u);  if (depth < kMaxDepth) unit_006C(c, 39u, depth + 1u); else { c.pc = 0x002D0630u; return; } if (c.pc != 0x002D04F8u) [[unlikely]] return; }
L_002D04F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D05A8; } }
L_002D0500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0508u);  if (depth < kMaxDepth) unit_006C(c, 43u, depth + 1u); else { c.pc = 0x002D0740u; return; } if (c.pc != 0x002D0508u) [[unlikely]] return; }
L_002D0508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D05A8; } }
L_002D0510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0518u);  if (depth < kMaxDepth) unit_006C(c, 44u, depth + 1u); else { c.pc = 0x002D0770u; return; } if (c.pc != 0x002D0518u) [[unlikely]] return; }
L_002D0518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D05A8; } }
L_002D0520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0528u);  if (depth < kMaxDepth) unit_006C(c, 45u, depth + 1u); else { c.pc = 0x002D0790u; return; } if (c.pc != 0x002D0528u) [[unlikely]] return; }
L_002D0528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D05A8; } }
L_002D0530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0538u);  if (depth < kMaxDepth) unit_006C(c, 47u, depth + 1u); else { c.pc = 0x002D07C0u; return; } if (c.pc != 0x002D0538u) [[unlikely]] return; }
L_002D0538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D05A8; } }
L_002D0540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0548u);  if (depth < kMaxDepth) unit_006C(c, 48u, depth + 1u); else { c.pc = 0x002D07D0u; return; } if (c.pc != 0x002D0548u) [[unlikely]] return; }
L_002D0548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D05A8; } }
L_002D0550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0558u);  if (depth < kMaxDepth) unit_006C(c, 49u, depth + 1u); else { c.pc = 0x002D07E0u; return; } if (c.pc != 0x002D0558u) [[unlikely]] return; }
L_002D0558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D05A8; } }
L_002D0560:
    set32(c.r[5], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 1;
L_002D0564:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_002D05A8; } }
L_002D057C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_002D05A8; } }
L_002D0590:
    set32(c.r[5], ld32((c.r[4].w[0] + 120u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF12F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 6;
L_002D05A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002D05AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D05C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D05DCu); set32(c.r[5], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0060(c, 366u, depth + 1u); else { c.pc = 0x002A3780u; return; } if (c.pc != 0x002D05DCu) [[unlikely]] return; }
L_002D05DC:
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_002D05FC; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 5;
L_002D05FC:
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 472u)));  if (t) { goto L_002D0614; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[3].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 2;
L_002D0614:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D0620:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D0630:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    st32((c.r[2].w[0] + 13476u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    st32((c.r[2].w[0] + 13480u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30324u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D0668; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[3].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 3;
L_002D0668:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D067Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002D067Cu) [[unlikely]] return; }
L_002D067C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));  goto L_002D06B4; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D06B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D06B0; } }
    set32(c.r[4], c.r[17].w[0] << 4);
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[4], c.r[4].w[0] + 2u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), 0u);
    c.budget -= 6;
L_002D06B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 1;
L_002D06B4:
    set32(c.r[5], ld32((c.r[3].w[0] + 644u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 84u)));  goto L_002D0718; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D06D0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x002D06D0u) [[unlikely]] return; }
L_002D06D0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));  goto L_002D06F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D06E4u);  if (depth < kMaxDepth) unit_0074(c, 252u, depth + 1u); else { c.pc = 0x002F3AE0u; return; } if (c.pc != 0x002D06E4u) [[unlikely]] return; }
L_002D06E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D0714; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 1;
L_002D06F0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));  goto L_002D0704; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[3].w[0] + 644u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
L_002D0704:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D0714; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[3].w[0] + 648u), 0u);
    c.budget -= 2;
L_002D0714:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_002D0718:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D0740:
    set32(c.r[5], ld32((c.r[28].w[0] - 30324u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D075C; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 88u)));
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 4;
L_002D075C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D0770:
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 112u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 8u), 0u);  c.pc = t; return; }
L_002D0790:
    set32(c.r[5], ld32((c.r[4].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 24u), c.r[3].w[0]);  c.pc = t; return; }
L_002D07B0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F230u | kUnwind; return; } [[clang::musttail]] return unit_005B(c, 313u, depth); }
L_002D07C0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F230u | kUnwind; return; } [[clang::musttail]] return unit_005B(c, 313u, depth); }
L_002D07D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 4;
    { st32((c.r[4].w[0] + 4u), c.r[2].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028EA90u | kUnwind; return; } [[clang::musttail]] return unit_005B(c, 282u, depth); }
L_002D07E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u - 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { st32((c.r[4].w[0] + 4u), c.r[2].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028ECA0u | kUnwind; return; } [[clang::musttail]] return unit_005B(c, 288u, depth); }
L_002D0800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002D0820; }
    set32(c.r[3], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 1;
L_002D0820:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 112u)));  goto L_002D0844; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D0838; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 2;
L_002D0838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0840u); set32(c.r[4], ld32((c.r[2].w[0] + 76u)));  if (depth < kMaxDepth) unit_0068(c, 215u, depth + 1u); else { c.pc = 0x002C2780u; return; } if (c.pc != 0x002D0840u) [[unlikely]] return; }
L_002D0840:
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 1;
L_002D0844:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002D089C; }
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D0898; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], 0u + 5u);
    set32(c.r[4], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D0898; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 13364u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], 0u + 27u);  goto L_002D088C; }
    set32(c.r[3], ld32((c.r[5].w[0] + 13368u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D0898; } }
    set32(c.r[4], 0u + 27u);
    c.budget -= 1;
L_002D088C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0898u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x002D0898u) [[unlikely]] return; }
L_002D0898:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002D089C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D08B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D0914; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28512u);
    set32(c.r[2], c.r[2].w[0] + 28568u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D08F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002D08F0u) [[unlikely]] return; }
L_002D08F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D08FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002D08FCu) [[unlikely]] return; }
L_002D08FC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002D0918; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0914u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002D0914u) [[unlikely]] return; }
L_002D0914:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002D0918:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D0930:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D08B0u | kUnwind; return; } goto L_002D08B0; }
L_002D0940:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D03F0u | kUnwind; return; } goto L_002D03F0; }
L_002D0950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0968u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005B(c, 211u, depth + 1u); else { c.pc = 0x0028E000u; return; } if (c.pc != 0x002D0968u) [[unlikely]] return; }
L_002D0968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (t) { goto L_002D0984; } }
L_002D0970:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 28u)));  if (t) { goto L_002D0980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0980u);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002D0980u) [[unlikely]] return; }
L_002D0980:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002D0984:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D0970u | kUnwind; return; } goto L_002D0970; } }
    st32((c.r[17].w[0] + 136u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  goto L_002D09B4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D09ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D09ACu) [[unlikely]] return; }
L_002D09AC:
    st32((c.r[17].w[0] + 152u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 2;
L_002D09B4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  goto L_002D09D4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D09CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D09CCu) [[unlikely]] return; }
L_002D09CC:
    st32((c.r[17].w[0] + 148u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 2;
L_002D09D4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 120u)));  goto L_002D09F4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D09ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D09ECu) [[unlikely]] return; }
L_002D09EC:
    st32((c.r[17].w[0] + 84u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 2;
L_002D09F4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 116u)));  goto L_002D0A14; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0A0Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D0A0Cu) [[unlikely]] return; }
L_002D0A0C:
    st32((c.r[17].w[0] + 120u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 2;
L_002D0A14:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 124u)));  goto L_002D0A34; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0A2Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D0A2Cu) [[unlikely]] return; }
L_002D0A2C:
    st32((c.r[17].w[0] + 116u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 2;
L_002D0A34:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 72u)));  goto L_002D0A5C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 124u), 0u);  goto L_002D0A58; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0A54u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D0A54u) [[unlikely]] return; }
L_002D0A54:
    st32((c.r[17].w[0] + 124u), 0u);
    c.budget -= 1;
L_002D0A58:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 1;
L_002D0A5C:
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 96u)));  goto L_002D0A8C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 72u)));  goto L_002D0A84; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0A80u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D0A80u) [[unlikely]] return; }
L_002D0A80:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 1;
L_002D0A84:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 2;
L_002D0A8C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002D0AAC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0AA4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D0AA4u) [[unlikely]] return; }
L_002D0AA4:
    st32((c.r[17].w[0] + 96u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_002D0AAC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D0AC0:
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 72u)));  goto L_002D0AD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D0B30; } }
L_002D0AD4:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 1180u)));  goto L_002D0AE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D0B30; } }
L_002D0AE8:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002D0B30; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D0B2C; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D0B2C; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D0B2C; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D0B2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D0B30; } }
L_002D0B2C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002D0B30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D0B40:
    set32(c.r[29], c.r[29].w[0] - 400u);
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
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 156u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0B80u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 346u, depth + 1u); else { c.pc = 0x002A3390u; return; } if (c.pc != 0x002D0B80u) [[unlikely]] return; }
L_002D0B80:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 1144u)));  goto L_002D0B94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D0F84; } }
L_002D0B94:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[23], ld32((c.r[17].w[0] + 1180u)));
    set32(c.r[18], ld32((c.r[17].w[0] + 1100u)));
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 110u)));
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 116u)));
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 122u)));
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 124u)));
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0BD8u); st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0062(c, 19u, depth + 1u); else { c.pc = 0x002A81E0u; return; } if (c.pc != 0x002D0BD8u) [[unlikely]] return; }
L_002D0BD8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 160u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], 0u + 1u);  goto L_002D0C10; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D0C10:
    set32(c.r[2], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[7], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0C2Cu); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 209u, depth + 1u); else { c.pc = 0x0027E360u; return; } if (c.pc != 0x002D0C2Cu) [[unlikely]] return; }
L_002D0C2C:
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002D0C50; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0C48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D0C48u) [[unlikely]] return; }
L_002D0C48:
    st32((c.r[19].w[0] + 96u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 2;
L_002D0C50:
    c.r[22].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 960u)));
    set32(c.r[4], c.r[2].w[0] + 112u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[4].w[0] + 452u);  if (t) { goto L_002D0C8C; } }
L_002D0C68:
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002D0C8C; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_002D0C88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D0C98; } }
L_002D0C88:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002D0C8C:
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D0C68u | kUnwind; return; } goto L_002D0C68; }
L_002D0C98:
    set32(c.r[20], ld32((c.r[17].w[0] + 616u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[30], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[29].w[0] + 308u), c.r[2].w[0]);
    c.budget -= 5;
L_002D0CAC:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
L_002D0CC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 312u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D0CACu | kUnwind; return; } goto L_002D0CAC; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 160u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 324u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 192u));
    st32((c.r[29].w[0] + 336u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 196u));
    st32((c.r[29].w[0] + 340u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 200u));
    st32((c.r[29].w[0] + 344u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 204u));
    st32((c.r[29].w[0] + 348u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 240u)));
    st32((c.r[29].w[0] + 352u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 244u)));
    st32((c.r[29].w[0] + 356u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 248u)));
    st32((c.r[29].w[0] + 360u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 252u)));
    st32((c.r[29].w[0] + 364u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 368u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 372u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 376u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 380u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 384u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 156u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 204u)));
    c.budget -= 33;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0D50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D0D50u) [[unlikely]] return; }
L_002D0D50:
    set32(c.r[3], ld32((c.r[19].w[0] + 156u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 156u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[5].w[0] + 4u);  if (t) { goto L_002D0D9C; } }
    st32((c.r[4].w[0]), 0u);
    c.budget -= 1;
L_002D0D9C:
    set32(c.r[2], ld32((c.r[19].w[0] + 156u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = c.r[19].d[0] + 0ull;  goto L_002D0DE0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0DC8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D0DC8u) [[unlikely]] return; }
L_002D0DC8:
    set32(c.r[2], ld32((c.r[19].w[0] + 156u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 52u), 0u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
L_002D0DE0:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 120u)));  goto L_002D0DF0; }
    set32(c.r[5], c.r[19].w[0] + 52u);
    set32(c.r[4], ld32((c.r[19].w[0] + 120u)));
    c.budget -= 2;
L_002D0DF0:
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 156u)));
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0E04u); set32(c.r[8], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0083(c, 96u, depth + 1u); else { c.pc = 0x0032CD80u; return; } if (c.pc != 0x002D0E04u) [[unlikely]] return; }
L_002D0E04:
    set32(c.r[3], ld32((c.r[19].w[0] + 156u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 156u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 12;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], c.r[22].w[0] << 2);  goto L_002D0E3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D0F84; } }
L_002D0E3C:
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0E54u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002D0E54u) [[unlikely]] return; }
L_002D0E54:
    set32(c.r[3], ld32((c.r[29].w[0] + 288u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002D0E68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 272u)));  if (t) { goto L_002D0E7C; } }
L_002D0E68:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_002D0E7C; }
    c.f[0] = ld32((c.r[29].w[0] + 272u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 3;
L_002D0E7C:
    set32(c.r[4], ld32((c.r[29].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D0EA0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002D0EA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0EA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002D0EA0u) [[unlikely]] return; }
L_002D0EA0:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002D0EF4; }
    set32(c.r[2], ld32((c.r[19].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D0EF0; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 156u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0EC8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 243u, depth + 1u); else { c.pc = 0x0028E5A0u; return; } if (c.pc != 0x002D0EC8u) [[unlikely]] return; }
L_002D0EC8:
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[23].d[0] != c.r[2].d[0];  if (t) { goto L_002D0EF0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1100u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_002D0EF0; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0EF0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 344u, depth + 1u); else { c.pc = 0x0028B8A0u; return; } if (c.pc != 0x002D0EF0u) [[unlikely]] return; }
L_002D0EF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002D0EF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0EFCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005A(c, 313u, depth + 1u); else { c.pc = 0x0028B330u; return; } if (c.pc != 0x002D0EFCu) [[unlikely]] return; }
L_002D0EFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  goto L_002D0F18; }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 200u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0F14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D0F14u) [[unlikely]] return; }
L_002D0F14:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 1;
L_002D0F18:
    set32(c.r[3], 0u + 24u);
    st32((c.r[16].w[0] + 616u), c.r[20].w[0]);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    st16((c.r[16].w[0] + 110u), static_cast<std::uint16_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    st16((c.r[16].w[0] + 116u), static_cast<std::uint16_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    st16((c.r[16].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    st16((c.r[16].w[0] + 124u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    c.r[2].d[0] = c.r[4].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 17;
    { const bool t = c.r[23].d[0] != c.r[3].d[0]; st32((c.r[16].w[0] + 172u), c.r[2].w[0]);  if (t) { goto L_002D0F70; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st32((c.r[16].w[0] + 172u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    st32((c.r[16].w[0] + 1144u), c.r[2].w[0]);
    c.budget -= 5;
L_002D0F70:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], 0u - 3u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_002D0F84:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_002D0FC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D0FD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 1320u)));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D100C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 164u)));  goto L_002D1010; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D100Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D100Cu) [[unlikely]] return; }
L_002D100C:
    set32(c.r[4], ld32((c.r[18].w[0] + 164u)));
    c.budget -= 1;
L_002D1010:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 176u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[16].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];  if (t) { goto L_002D1030; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002D11F0; }
L_002D1030:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], ld32((c.r[18].w[0] + 164u)));  goto L_002D1098; }
    set32(c.r[3], ld32((c.r[18].w[0] + 140u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[7], ld32((c.r[3].w[0] + 448u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[3].w[0] + 52u);  if (t) { goto L_002D1088; } }
    set32(c.r[3], c.r[8].w[0] << 2);
    c.budget -= 1;
L_002D105C:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_002D1088; }
    set32(c.r[3], ld32((c.r[5].w[0] + 1320u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[18].d[0];  if (t) { goto L_002D1084; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 3;
L_002D1084:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_002D1088:
    c.r[3].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[8].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D105Cu | kUnwind; return; } goto L_002D105C; }
    set32(c.r[6], ld32((c.r[18].w[0] + 164u)));
    c.budget -= 1;
L_002D1098:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFDFF0000u);
    c.r[5].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF7F0000u);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[18].w[0] + 164u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 12;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[18].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_002D115C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D10D0u); set32(c.r[4], c.r[18].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002D10D0u) [[unlikely]] return; }
L_002D10D0:
    set32(c.r[4], c.r[18].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D10DCu); set32(c.r[5], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002D10DCu) [[unlikely]] return; }
L_002D10DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D10E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002D10E4u) [[unlikely]] return; }
L_002D10E4:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[18].w[0] + 244u)));  goto L_002D1118; }
    set32(c.r[6], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[4], c.r[18].w[0] + 352u);
    set32(c.r[7], ld32((c.r[18].w[0] + 244u)));
    set32(c.r[8], ld32((c.r[18].w[0] + 248u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D110Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x002D110Cu) [[unlikely]] return; }
L_002D110C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[18].w[0] + 352u);  if (t) { goto L_002D1148; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 244u)));
    c.budget -= 1;
L_002D1118:
    set32(c.r[4], c.r[18].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1124u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x002D1124u) [[unlikely]] return; }
L_002D1124:
    set32(c.r[6], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[4], c.r[18].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1134u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 239u, depth + 1u); else { c.pc = 0x0018FCE0u; return; } if (c.pc != 0x002D1134u) [[unlikely]] return; }
L_002D1134:
    set32(c.r[6], ld32((c.r[18].w[0] + 248u)));
    set32(c.r[4], c.r[18].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1144u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 243u, depth + 1u); else { c.pc = 0x0018FE00u; return; } if (c.pc != 0x002D1144u) [[unlikely]] return; }
L_002D1144:
    set32(c.r[4], c.r[18].w[0] + 352u);
    c.budget -= 1;
L_002D1148:
    set32(c.r[6], c.r[18].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1154u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x002D1154u) [[unlikely]] return; }
L_002D1154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D118C; } }
L_002D115C:
    set32(c.r[3], ld32((c.r[18].w[0] + 1320u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 1168u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D118C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 1324u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1178u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 9u, depth + 1u); else { c.pc = 0x002041E0u; return; } if (c.pc != 0x002D1178u) [[unlikely]] return; }
L_002D1178:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D118C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D118Cu); set32(c.r[4], c.r[18].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002D118Cu) [[unlikely]] return; }
L_002D118C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002D11B4; }
    set32(c.r[4], ld32((c.r[18].w[0] + 1168u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D11EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D11A8u); set32(c.r[5], c.r[18].w[0] + 352u);  if (depth < kMaxDepth) unit_0039(c, 18u, depth + 1u); else { c.pc = 0x00204430u; return; } if (c.pc != 0x002D11A8u) [[unlikely]] return; }
L_002D11A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D11EC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002D11B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D11BCu);  if (depth < kMaxDepth) unit_006C(c, 107u, depth + 1u); else { c.pc = 0x002D1210u; return; } if (c.pc != 0x002D11BCu) [[unlikely]] return; }
L_002D11BC:
    set32(c.r[3], ld32((c.r[18].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[18].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D11EC; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D11E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D11E4u) [[unlikely]] return; }
L_002D11E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D11ECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 5u, depth + 1u); else { c.pc = 0x00288060u; return; } if (c.pc != 0x002D11ECu) [[unlikely]] return; }
L_002D11EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002D11F0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D1210:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1168u)));
    c.budget -= 9;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 164u)));  goto L_002D1240; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D123Cu); set32(c.r[5], c.r[17].w[0] + 352u);  if (depth < kMaxDepth) unit_0039(c, 18u, depth + 1u); else { c.pc = 0x00204430u; return; } if (c.pc != 0x002D123Cu) [[unlikely]] return; }
L_002D123C:
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 1;
L_002D1240:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 176u)));  goto L_002D125C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1258u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D1258u) [[unlikely]] return; }
L_002D1258:
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 1;
L_002D125C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002D1504; }
    set32(c.r[2], ld32((c.r[17].w[0] + 180u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002D1290; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D1290; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_002D1290:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 1320u)));  goto L_002D12AC; }
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 204u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D12A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D12A8u) [[unlikely]] return; }
L_002D12A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 1320u)));
    c.budget -= 1;
L_002D12AC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 420u)));  goto L_002D12E4; }
    set32(c.r[6], ld32((c.r[17].w[0] + 420u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_002D12D4; }
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D12CCu); set32(c.r[5], c.r[17].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x002D12CCu) [[unlikely]] return; }
L_002D12CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 608u)));  if (t) { goto L_002D130C; } }
L_002D12D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D12DCu); set32(c.r[5], c.r[17].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002D12DCu) [[unlikely]] return; }
L_002D12DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D1308; } }
L_002D12E4:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[5], c.r[2].w[0] + 352u);  goto L_002D1300; }
    set32(c.r[5], c.r[2].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D12F8u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x002D12F8u) [[unlikely]] return; }
L_002D12F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D1308; } }
L_002D1300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1308u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002D1308u) [[unlikely]] return; }
L_002D1308:
    set32(c.r[2], ld32((c.r[17].w[0] + 608u)));
    c.budget -= 1;
L_002D130C:
    set32(c.r[4], c.r[17].w[0] + 624u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[18], c.r[2].w[0] + 656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1320u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002D1320u) [[unlikely]] return; }
L_002D1320:
    set32(c.r[4], c.r[17].w[0] + 640u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1330u); set32(c.r[6], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002D1330u) [[unlikely]] return; }
L_002D1330:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1340u); set32(c.r[6], c.r[17].w[0] + 640u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002D1340u) [[unlikely]] return; }
L_002D1340:
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[5], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 160u), c.f[2]);
    st32((c.r[29].w[0] + 164u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1374u); st32((c.r[29].w[0] + 172u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002D1374u) [[unlikely]] return; }
L_002D1374:
    c.f[3] = ld32((c.r[29].w[0] + 132u));
    set32(c.r[4], c.r[17].w[0] + 688u);
    c.f[2] = ld32((c.r[29].w[0] + 136u));
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.f[1] = ld32((c.r[29].w[0] + 140u));
    set32(c.r[6], c.r[18].w[0] + 80u);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    st32((c.r[17].w[0] + 672u), c.f[0]);
    st32((c.r[17].w[0] + 676u), c.f[3]);
    st32((c.r[17].w[0] + 680u), c.f[2]);
    st32((c.r[17].w[0] + 684u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 64u));
    c.f[0] = ld32((c.r[17].w[0] + 296u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D13B4u); st32((c.r[17].w[0] + 656u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002D13B4u) [[unlikely]] return; }
L_002D13B4:
    set32(c.r[4], c.r[17].w[0] + 704u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D13C4u); set32(c.r[6], c.r[18].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002D13C4u) [[unlikely]] return; }
L_002D13C4:
    c.f[1] = ld32((c.r[18].w[0] + 112u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[0] = ld32((c.r[17].w[0] + 296u));
    set32(c.r[5], c.r[17].w[0] + 688u);
    set32(c.r[6], c.r[17].w[0] + 704u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D13E4u); st32((c.r[17].w[0] + 720u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002D13E4u) [[unlikely]] return; }
L_002D13E4:
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[5], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 144u), c.f[2]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1418u); st32((c.r[29].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002D1418u) [[unlikely]] return; }
L_002D1418:
    c.f[3] = ld32((c.r[29].w[0] + 116u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[2] = ld32((c.r[29].w[0] + 120u));
    set32(c.r[5], c.r[17].w[0] + 704u);
    c.f[1] = ld32((c.r[29].w[0] + 124u));
    set32(c.r[6], c.r[17].w[0] + 688u);
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[17].w[0] + 736u), c.f[0]);
    st32((c.r[17].w[0] + 740u), c.f[3]);
    st32((c.r[17].w[0] + 744u), c.f[2]);
    st32((c.r[17].w[0] + 748u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 688u));
    st32((c.r[17].w[0] + 752u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 692u));
    st32((c.r[17].w[0] + 756u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 696u));
    st32((c.r[17].w[0] + 760u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 700u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1468u); st32((c.r[17].w[0] + 764u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002D1468u) [[unlikely]] return; }
L_002D1468:
    c.f[3] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[4], c.r[17].w[0] + 784u);
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.f[1] = ld32((c.r[29].w[0] + 108u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[17].w[0] + 768u), c.f[0]);
    st32((c.r[17].w[0] + 772u), c.f[3]);
    st32((c.r[17].w[0] + 776u), c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1498u); st32((c.r[17].w[0] + 780u), c.f[1]);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002D1498u) [[unlikely]] return; }
L_002D1498:
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    c.f[0] = ld32((c.r[17].w[0] + 296u));
    set32(c.r[5], c.r[17].w[0] + 816u);
    set32(c.r[4], c.r[17].w[0] + 928u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 800u), c.f[0]);
    ld128((c.r[17].w[0] + 624u) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 816u) & ~15u, c.r[3]);
    ld128((c.r[17].w[0] + 640u) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 832u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[17].w[0] + 656u));
    st32((c.r[17].w[0] + 848u), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D14D4u); st32((c.r[17].w[0] + 896u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x002D14D4u) [[unlikely]] return; }
L_002D14D4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 608u)));  goto L_002D14F0; }
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 200u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D14ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D14ECu) [[unlikely]] return; }
L_002D14EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 608u)));
    c.budget -= 1;
L_002D14F0:
    set32(c.r[4], c.r[17].w[0] + 1392u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1500u); set32(c.r[6], c.r[2].w[0] + 2048u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002D1500u) [[unlikely]] return; }
L_002D1500:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002D1504:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_002D1520:
    set32(c.r[29], c.r[29].w[0] - 640u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], 0u + 1u);
    st32((c.r[29].w[0] + 608u), 0u);
    st32((c.r[29].w[0] + 592u), 0u);
    st32((c.r[29].w[0] + 596u), 0u);
    st32((c.r[29].w[0] + 600u), 0u);
    st32((c.r[29].w[0] + 604u), 0u);
    c.f[1] = ld32((c.r[4].w[0] + 628u));
    c.f[0] = ld32((c.r[4].w[0] + 644u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D1564; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] + 624u);  if (t) { goto L_002D1568; } }
L_002D1564:
    set32(c.r[2], c.r[16].w[0] + 640u);
    c.budget -= 1;
L_002D1568:
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 624u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 628u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 632u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[29].w[0] + 636u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[16].w[0] + 1120u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[16].w[0] + 1124u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[16].w[0] + 1128u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D15B0u); st32((c.r[16].w[0] + 1132u), c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002D15B0u) [[unlikely]] return; }
L_002D15B0:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D1694; } }
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D15CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 303u, depth + 1u); else { c.pc = 0x00266780u; return; } if (c.pc != 0x002D15CCu) [[unlikely]] return; }
L_002D15CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 144u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 578u)));
    st16((c.r[29].w[0] + 576u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);  if (t) { goto L_002D15E8; } }
    st16((c.r[29].w[0] + 578u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002D15E8:
    c.f[4] = ld32((c.r[29].w[0] + 624u));
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.f[0] = ld32((c.r[29].w[0] + 628u));
    set32(c.r[5], c.r[29].w[0] + 400u);
    c.f[3] = ld32((c.r[29].w[0] + 632u));
    c.f[2] = ld32((c.r[29].w[0] + 636u));
    st32((c.r[29].w[0] + 368u), c.f[4]);
    st32((c.r[29].w[0] + 372u), c.f[0]);
    st32((c.r[29].w[0] + 376u), c.f[3]);
    st32((c.r[29].w[0] + 380u), c.f[2]);
    c.f[1] = ld32((c.r[16].w[0] + 656u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 480u), 0u);
    st32((c.r[29].w[0] + 400u), c.f[4]);
    st32((c.r[29].w[0] + 408u), c.f[3]);
    st32((c.r[29].w[0] + 412u), c.f[2]);
    st32((c.r[29].w[0] + 384u), c.f[1]);
    st32((c.r[29].w[0] + 416u), c.f[1]);
    st32((c.r[29].w[0] + 372u), c.f[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D163Cu); st32((c.r[29].w[0] + 404u), c.f[0]);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x002D163Cu) [[unlikely]] return; }
L_002D163C:
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1648u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0051(c, 331u, depth + 1u); else { c.pc = 0x00266D40u; return; } if (c.pc != 0x002D1648u) [[unlikely]] return; }
L_002D1648:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002D1668; }
    set32(c.r[2], ld32((c.r[29].w[0] + 592u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[29].w[0] + 592u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_002D1668:
    set32(c.r[5], c.r[29].w[0] + 400u);
    set32(c.r[6], c.r[16].w[0] + 1120u);
    set32(c.r[7], c.r[29].w[0] + 368u);
    set32(c.r[8], c.r[29].w[0] + 592u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1684u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_006B(c, 354u, depth + 1u); else { c.pc = 0x002CF680u; return; } if (c.pc != 0x002D1684u) [[unlikely]] return; }
L_002D1684:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1694u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D1694u) [[unlikely]] return; }
L_002D1694:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_002D1870; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D16A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002D16A4u) [[unlikely]] return; }
L_002D16A4:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 592u);  goto L_002D16C8; }
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D16C0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0051(c, 331u, depth + 1u); else { c.pc = 0x00266D40u; return; } if (c.pc != 0x002D16C0u) [[unlikely]] return; }
L_002D16C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 84u)));  if (t) { goto L_002D16D4; } }
L_002D16C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D16D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 331u, depth + 1u); else { c.pc = 0x00266D40u; return; } if (c.pc != 0x002D16D0u) [[unlikely]] return; }
L_002D16D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_002D16D4:
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002D16F0; }
    set32(c.r[2], ld32((c.r[29].w[0] + 592u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[29].w[0] + 592u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_002D16F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D16F8u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002D16F8u) [[unlikely]] return; }
L_002D16F8:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_002D1804; }
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1714u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 303u, depth + 1u); else { c.pc = 0x00266780u; return; } if (c.pc != 0x002D1714u) [[unlikely]] return; }
L_002D1714:
    set32(c.r[3], ld32((c.r[16].w[0] + 144u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 354u)));
    st16((c.r[29].w[0] + 352u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);  if (t) { goto L_002D1730; } }
    st16((c.r[29].w[0] + 354u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002D1730:
    c.f[3] = ld32((c.r[16].w[0] + 656u));
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.f[0] = ld32((c.r[29].w[0] + 632u));
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.f[2] = ld32((c.r[29].w[0] + 624u));
    c.f[1] = ld32((c.r[29].w[0] + 628u));
    st32((c.r[29].w[0] + 256u), 0u);
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 636u));
    st32((c.r[29].w[0] + 176u), c.f[2]);
    st32((c.r[29].w[0] + 180u), c.f[1]);
    st32((c.r[29].w[0] + 192u), c.f[3]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1768u); st32((c.r[29].w[0] + 188u), c.f[0]);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x002D1768u) [[unlikely]] return; }
L_002D1768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1770u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002D1770u) [[unlikely]] return; }
L_002D1770:
    c.r[2].d[0] = c.r[2].d[0] ^ 8ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002D17B4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 592u)));
    set32(c.r[9], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[16].w[0] + 1120u);
    set32(c.r[7], c.r[29].w[0] + 624u);
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    set32(c.r[8], c.r[29].w[0] + 592u);
    st32((c.r[29].w[0] + 592u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D17ACu); c.r[10].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 354u, depth + 1u); else { c.pc = 0x002CF680u; return; } if (c.pc != 0x002D17ACu) [[unlikely]] return; }
L_002D17AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 176u);  if (t) { goto L_002D17F4; } }
L_002D17B4:
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[16].w[0] + 1120u);
    set32(c.r[7], c.r[29].w[0] + 624u);
    set32(c.r[8], c.r[29].w[0] + 592u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D17D0u); set32(c.r[10], 0u - 1u);  if (depth < kMaxDepth) unit_006B(c, 354u, depth + 1u); else { c.pc = 0x002CF680u; return; } if (c.pc != 0x002D17D0u) [[unlikely]] return; }
L_002D17D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 816u);
    set32(c.r[6], c.r[16].w[0] + 1120u);
    set32(c.r[7], c.r[29].w[0] + 624u);
    set32(c.r[8], c.r[29].w[0] + 592u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D17F0u); set32(c.r[10], 0u - 1u);  if (depth < kMaxDepth) unit_006B(c, 354u, depth + 1u); else { c.pc = 0x002CF680u; return; } if (c.pc != 0x002D17F0u) [[unlikely]] return; }
L_002D17F0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_002D17F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D17FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D17FCu) [[unlikely]] return; }
L_002D17FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D186C; } }
L_002D1804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D180Cu);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002D180Cu) [[unlikely]] return; }
L_002D180C:
    c.r[2].d[0] = c.r[2].d[0] ^ 8ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002D1850; }
    set32(c.r[2], ld32((c.r[29].w[0] + 592u)));
    set32(c.r[9], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 816u);
    set32(c.r[6], c.r[16].w[0] + 1120u);
    set32(c.r[7], c.r[29].w[0] + 624u);
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    set32(c.r[8], c.r[29].w[0] + 592u);
    st32((c.r[29].w[0] + 592u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1848u); c.r[10].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 354u, depth + 1u); else { c.pc = 0x002CF680u; return; } if (c.pc != 0x002D1848u) [[unlikely]] return; }
L_002D1848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D186C; } }
L_002D1850:
    set32(c.r[5], c.r[16].w[0] + 816u);
    set32(c.r[6], c.r[16].w[0] + 1120u);
    set32(c.r[7], c.r[29].w[0] + 624u);
    set32(c.r[8], c.r[29].w[0] + 592u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D186Cu); set32(c.r[10], 0u - 1u);  if (depth < kMaxDepth) unit_006B(c, 354u, depth + 1u); else { c.pc = 0x002CF680u; return; } if (c.pc != 0x002D186Cu) [[unlikely]] return; }
L_002D186C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_002D1870:
    set32(c.r[5], c.r[16].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D187Cu); set32(c.r[6], c.r[16].w[0] + 1120u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002D187Cu) [[unlikely]] return; }
L_002D187C:
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[29].w[0] + 632u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[29].w[0] + 624u), c.f[2]);
    st32((c.r[29].w[0] + 628u), c.f[1]);
    st32((c.r[29].w[0] + 636u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[16].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 14;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002D18E0; }
    st32((c.r[16].w[0] + 192u), c.f[2]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 628u));
    st32((c.r[16].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 632u));
    st32((c.r[16].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 636u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D18D8u); st32((c.r[16].w[0] + 204u), c.f[0]);  if (depth < kMaxDepth) unit_006C(c, 269u, depth + 1u); else { c.pc = 0x002D2C80u; return; } if (c.pc != 0x002D18D8u) [[unlikely]] return; }
L_002D18D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 816u);  if (t) { goto L_002D1BB4; } }
L_002D18E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D18E8u); set32(c.r[5], c.r[29].w[0] + 624u);  if (depth < kMaxDepth) unit_005A(c, 237u, depth + 1u); else { c.pc = 0x0028A0A0u; return; } if (c.pc != 0x002D18E8u) [[unlikely]] return; }
L_002D18E8:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 122u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002D193C; }
    c.f[0] = ld32((c.r[29].w[0] + 624u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 628u));
    st32((c.r[16].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 632u));
    st32((c.r[16].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 636u));
    st32((c.r[16].w[0] + 204u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 122u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1934u); st16((c.r[16].w[0] + 124u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006C(c, 269u, depth + 1u); else { c.pc = 0x002D2C80u; return; } if (c.pc != 0x002D1934u) [[unlikely]] return; }
L_002D1934:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D1BB0; } }
L_002D193C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1944u);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002D1944u) [[unlikely]] return; }
L_002D1944:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[16].w[0] + 192u));  goto L_002D1A20; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D1A1C; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[3] = ld32((c.r[16].w[0] + 216u));  goto L_002D1970; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002D1A40; } }
L_002D1970:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[2] = ld32((c.r[29].w[0] + 632u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[16].w[0] + 208u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 624u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 148u), 0u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 152u), c.f[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D19A4u); st32((c.r[29].w[0] + 144u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002D19A4u) [[unlikely]] return; }
L_002D19A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D19ACu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 122u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002D19ACu) [[unlikely]] return; }
L_002D19AC:
    c.f[1] = ld32((c.r[16].w[0] + 1140u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D19C0u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002D19C0u) [[unlikely]] return; }
L_002D19C0:
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[2] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[5], c.r[16].w[0] + 208u);
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[6], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[29].w[0] + 128u), c.f[2]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D19F0u); st32((c.r[29].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002D19F0u) [[unlikely]] return; }
L_002D19F0:
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[29].w[0] + 164u), c.f[1]);
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 108u));
    c.f[0] = ld32((c.r[29].w[0] + 628u));
    st32((c.r[29].w[0] + 160u), c.f[2]);
    st32((c.r[29].w[0] + 172u), c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 164u), c.f[0]);  if (t) { goto L_002D1A3C; } }
L_002D1A1C:
    c.f[0] = ld32((c.r[16].w[0] + 192u));
    c.budget -= 1;
L_002D1A20:
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 196u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 200u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 204u));
    st32((c.r[29].w[0] + 172u), c.f[0]);
    c.budget -= 7;
L_002D1A3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002D1A40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1A48u);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002D1A48u) [[unlikely]] return; }
L_002D1A48:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 816u);  goto L_002D1A68; }
    c.f[1] = ld32((c.r[16].w[0] + 656u));
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 164u), c.f[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    c.budget -= 5;
L_002D1A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1A70u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0027(c, 96u, depth + 1u); else { c.pc = 0x001BCD20u; return; } if (c.pc != 0x002D1A70u) [[unlikely]] return; }
L_002D1A70:
    set32(c.r[4], c.r[16].w[0] + 928u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1A7Cu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0026(c, 397u, depth + 1u); else { c.pc = 0x001BB7B0u; return; } if (c.pc != 0x002D1A7Cu) [[unlikely]] return; }
L_002D1A7C:
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1A88u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0051(c, 331u, depth + 1u); else { c.pc = 0x00266D40u; return; } if (c.pc != 0x002D1A88u) [[unlikely]] return; }
L_002D1A88:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002D1AA8; }
    set32(c.r[2], ld32((c.r[29].w[0] + 592u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[29].w[0] + 592u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 4;
L_002D1AA8:
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D1AB8; } }
    set32(c.r[5], c.r[2].w[0] + 304u);
    c.budget -= 1;
L_002D1AB8:
    set32(c.r[4], c.r[2].w[0] + 80u);
    set32(c.r[6], c.r[16].w[0] + 816u);
    set32(c.r[7], c.r[29].w[0] + 592u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1ACCu); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0026(c, 417u, depth + 1u); else { c.pc = 0x001BBAD0u; return; } if (c.pc != 0x002D1ACCu) [[unlikely]] return; }
L_002D1ACC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002D1B18; } }
    c.f[12] = ld32((c.r[17].w[0] + 112u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1AE8u); set32(c.r[5], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002D1AE8u) [[unlikely]] return; }
L_002D1AE8:
    c.f[1] = ld32((c.r[16].w[0] + 1120u));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[3] = ld32((c.r[29].w[0] + 84u));
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1120u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1124u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[16].w[0] + 1124u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1128u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 1128u), c.f[0]);
    c.budget -= 12;
L_002D1B18:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002D1B38; }
    st32((c.r[16].w[0] + 1128u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 1124u), 0u);
    st32((c.r[16].w[0] + 1120u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1132u), c.r[2].w[0]);  if (t) { goto L_002D1B7C; } }
L_002D1B38:
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[16].w[0] + 1280u);
    set32(c.r[7], c.r[16].w[0] + 1264u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1B4Cu); set32(c.r[8], c.r[16].w[0] + 1200u);  if (depth < kMaxDepth) unit_006C(c, 273u, depth + 1u); else { c.pc = 0x002D2D70u; return; } if (c.pc != 0x002D1B4Cu) [[unlikely]] return; }
L_002D1B4C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1B5Cu); set32(c.r[6], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002D1B5Cu) [[unlikely]] return; }
L_002D1B5C:
    c.f[3] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[16].w[0] + 1120u), c.f[0]);
    st32((c.r[16].w[0] + 1124u), c.f[3]);
    st32((c.r[16].w[0] + 1128u), c.f[2]);
    st32((c.r[16].w[0] + 1132u), c.f[1]);
    c.budget -= 8;
L_002D1B7C:
    c.f[1] = ld32((c.r[16].w[0] + 1120u));
    c.f[0] = ld32((c.r[16].w[0] + 192u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 192u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 1124u));
    c.f[0] = ld32((c.r[16].w[0] + 196u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 196u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 1128u));
    c.f[0] = ld32((c.r[16].w[0] + 200u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 200u), c.f[0]);
    st16((c.r[16].w[0] + 124u), static_cast<std::uint16_t>(0u));
    c.budget -= 13;
L_002D1BB0:
    set32(c.r[4], c.r[16].w[0] + 816u);
    c.budget -= 1;
L_002D1BB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1BBCu); set32(c.r[5], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0027(c, 96u, depth + 1u); else { c.pc = 0x001BCD20u; return; } if (c.pc != 0x002D1BBCu) [[unlikely]] return; }
L_002D1BBC:
    set32(c.r[4], c.r[16].w[0] + 928u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1BC8u); set32(c.r[5], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0026(c, 397u, depth + 1u); else { c.pc = 0x001BB7B0u; return; } if (c.pc != 0x002D1BC8u) [[unlikely]] return; }
L_002D1BC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1BF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D1BF4u) [[unlikely]] return; }
L_002D1BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1BFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 408u, depth + 1u); else { c.pc = 0x002877B0u; return; } if (c.pc != 0x002D1BFCu) [[unlikely]] return; }
L_002D1BFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 640u);  c.pc = t; return; }
L_002D1C10:
    set32(c.r[29], c.r[29].w[0] - 880u);
    set32(c.r[3], 0u - 9u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], 0u - 17u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 28u), c.f[27]);
    set32(c.r[4], c.r[29].w[0] + 688u);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[6], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[7], ld32((c.r[6].w[0] + 96u)));
    set32(c.r[6], ld32((c.r[7].w[0] + 280u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st32((c.r[7].w[0] + 280u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 280u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1C90u); st32((c.r[6].w[0] + 280u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 303u, depth + 1u); else { c.pc = 0x00266780u; return; } if (c.pc != 0x002D1C90u) [[unlikely]] return; }
L_002D1C90:
    set32(c.r[3], ld32((c.r[19].w[0] + 144u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 866u)));
    st16((c.r[29].w[0] + 864u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);  if (t) { goto L_002D1CAC; } }
    st16((c.r[29].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002D1CAC:
    c.f[4] = ld32((c.r[18].w[0] + 4u));
    set32(c.r[4], c.r[29].w[0] + 800u);
    c.f[3] = ld32((c.r[18].w[0] + 8u));
    set32(c.r[5], c.r[29].w[0] + 688u);
    c.f[2] = ld32((c.r[18].w[0] + 12u));
    c.f[1] = ld32((c.r[19].w[0] + 656u));
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[29].w[0] + 688u), c.f[0]);
    st32((c.r[29].w[0] + 768u), 0u);
    st32((c.r[29].w[0] + 692u), c.f[4]);
    st32((c.r[29].w[0] + 696u), c.f[3]);
    st32((c.r[29].w[0] + 700u), c.f[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1CE4u); st32((c.r[29].w[0] + 704u), c.f[1]);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x002D1CE4u) [[unlikely]] return; }
L_002D1CE4:
    set32(c.r[4], c.r[29].w[0] + 656u);
    set32(c.r[5], 0u + 3u);
    st32((c.r[29].w[0] + 672u), 0u);
    st32((c.r[29].w[0] + 656u), 0u);
    st32((c.r[29].w[0] + 660u), 0u);
    st32((c.r[29].w[0] + 664u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1D04u); st32((c.r[29].w[0] + 668u), 0u);  if (depth < kMaxDepth) unit_0051(c, 331u, depth + 1u); else { c.pc = 0x00266D40u; return; } if (c.pc != 0x002D1D04u) [[unlikely]] return; }
L_002D1D04:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002D1D24; }
    set32(c.r[2], ld32((c.r[29].w[0] + 656u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[29].w[0] + 656u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 4;
L_002D1D24:
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D1D34; } }
    set32(c.r[5], c.r[2].w[0] + 304u);
    c.budget -= 1;
L_002D1D34:
    set32(c.r[4], c.r[2].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 688u);
    set32(c.r[7], c.r[29].w[0] + 656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1D48u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0026(c, 417u, depth + 1u); else { c.pc = 0x001BBAD0u; return; } if (c.pc != 0x002D1D48u) [[unlikely]] return; }
L_002D1D48:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_002D1D6C; }
    set32(c.r[4], c.r[29].w[0] + 688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1D60u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D1D60u) [[unlikely]] return; }
L_002D1D60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D24A8; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_002D1D6C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1D78u); set32(c.r[6], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002D1D78u) [[unlikely]] return; }
L_002D1D78:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[29].w[0] + 624u), c.f[0]);
    st32((c.r[29].w[0] + 636u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 632u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1DA8u); st32((c.r[29].w[0] + 628u), 0u);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002D1DA8u) [[unlikely]] return; }
L_002D1DA8:
    set32(c.r[4], c.r[29].w[0] + 608u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1DB4u); set32(c.r[5], c.r[29].w[0] + 640u);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002D1DB4u) [[unlikely]] return; }
L_002D1DB4:
    set32(c.r[4], c.r[29].w[0] + 608u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1DC0u); set32(c.r[5], c.r[29].w[0] + 624u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x002D1DC0u) [[unlikely]] return; }
L_002D1DC0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_002D1E04; }
    c.f[0] = ld32((c.r[29].w[0] + 628u));
    c.f[2] = ld32((c.r[29].w[0] + 632u));
    c.f[1] = ld32((c.r[29].w[0] + 636u));
    c.f[3] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[29].w[0] + 624u));
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[29].w[0] + 628u), c.f[3]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 632u), c.f[2]);
    st32((c.r[29].w[0] + 636u), c.f[1]);
    st32((c.r[29].w[0] + 624u), c.f[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 12;
L_002D1E04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1E0Cu); set32(c.r[4], c.r[29].w[0] + 592u);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002D1E0Cu) [[unlikely]] return; }
L_002D1E0C:
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1E18u); set32(c.r[5], c.r[29].w[0] + 624u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x002D1E18u) [[unlikely]] return; }
L_002D1E18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1E20u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0005(c, 134u, depth + 1u); else { c.pc = 0x00137278u; return; } if (c.pc != 0x002D1E20u) [[unlikely]] return; }
L_002D1E20:
    c.f[1] = ld32((c.r[28].w[0] - 32192u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 7;
    if (c.r[4].sd[0] < 0) { c.r[3].d[0] = c.r[4].d[0] & 65535ull;  goto L_002D1E4C; }
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_002D1E58; } }
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 1;
L_002D1E4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[5].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 3;
L_002D1E58:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[3].sd[0] < -32768ll ? 1ull : 0ull;  goto L_002D1E74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);  if (t) { goto L_002D1E80; } }
    c.r[1].d[0] = c.r[3].sd[0] < -32768ll ? 1ull : 0ull;
    c.budget -= 1;
L_002D1E74:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D1E80; } }
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_002D1E80:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002D1ED4; } }
    c.budget -= 2;
    if (c.r[4].sd[0] < 0) { c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];  goto L_002D1E9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];  if (t) { goto L_002D1EA4; } }
    c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 1;
L_002D1E9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_002D1EA4:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[3].sd[0] < -32768ll ? 1ull : 0ull;  goto L_002D1EC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);  if (t) { goto L_002D1ECC; } }
    c.r[1].d[0] = c.r[3].sd[0] < -32768ll ? 1ull : 0ull;
    c.budget -= 1;
L_002D1EC0:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002D1F20; }
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_002D1ECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D1F1C; } }
L_002D1ED4:
    c.budget -= 2;
    if (c.r[4].sd[0] < 0) { c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];  goto L_002D1EE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];  if (t) { goto L_002D1EF0; } }
    c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 1;
L_002D1EE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_002D1EF0:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[3].sd[0] < -32768ll ? 1ull : 0ull;  goto L_002D1F0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);  if (t) { goto L_002D1F18; } }
    c.r[1].d[0] = c.r[3].sd[0] < -32768ll ? 1ull : 0ull;
    c.budget -= 1;
L_002D1F0C:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], 0u - c.r[3].w[0]);  goto L_002D1F1C; }
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_002D1F18:
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_002D1F1C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002D1F20:
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 460u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.f[6] = ld32((c.r[19].w[0] + 656u));  goto L_002D1F4C; }
    set32(c.r[4], c.r[29].w[0] + 688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1F40u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D1F40u) [[unlikely]] return; }
L_002D1F40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D24A8; } }
    c.f[6] = ld32((c.r[19].w[0] + 656u));
    c.budget -= 1;
L_002D1F4C:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.f[0] = ld32((c.r[29].w[0] + 624u));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[4] = ld32((c.r[29].w[0] + 628u));
    c.f[3] = ld32((c.r[29].w[0] + 632u));
    c.f[5] = fp::ee::mul(c.fcr31, c.f[0], c.f[6]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[6]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[6]);
    c.f[2] = ld32((c.r[29].w[0] + 640u));
    c.f[1] = ld32((c.r[29].w[0] + 644u));
    c.f[0] = ld32((c.r[29].w[0] + 648u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[5]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 624u), c.f[5]);
    st32((c.r[29].w[0] + 628u), c.f[4]);
    st32((c.r[29].w[0] + 632u), c.f[3]);
    st32((c.r[29].w[0] + 640u), c.f[2]);
    st32((c.r[29].w[0] + 644u), c.f[1]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1FA0u); st32((c.r[29].w[0] + 648u), c.f[0]);  if (depth < kMaxDepth) unit_0051(c, 303u, depth + 1u); else { c.pc = 0x00266780u; return; } if (c.pc != 0x002D1FA0u) [[unlikely]] return; }
L_002D1FA0:
    set32(c.r[3], ld32((c.r[19].w[0] + 144u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 578u)));
    st16((c.r[29].w[0] + 576u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);  if (t) { goto L_002D1FBC; } }
    st16((c.r[29].w[0] + 578u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002D1FBC:
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.f[3] = ld32((c.r[29].w[0] + 640u));
    set32(c.r[2], 0u + 4u);
    c.f[5] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 400u);
    c.f[7] = ld32((c.r[18].w[0] + 8u));
    c.f[2] = ld32((c.r[29].w[0] + 644u));
    c.f[1] = ld32((c.r[29].w[0] + 648u));
    c.f[0] = ld32((c.r[29].w[0] + 652u));
    c.f[6] = ld32((c.r[18].w[0] + 12u));
    c.f[4] = ld32((c.r[18].w[0]));
    st32((c.r[29].w[0] + 400u), c.f[4]);
    st32((c.r[29].w[0] + 480u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 404u), c.f[5]);
    st32((c.r[29].w[0] + 408u), c.f[7]);
    st32((c.r[29].w[0] + 412u), c.f[6]);
    st32((c.r[29].w[0] + 416u), c.f[3]);
    st32((c.r[29].w[0] + 420u), c.f[2]);
    st32((c.r[29].w[0] + 424u), c.f[1]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D201Cu); st32((c.r[29].w[0] + 428u), c.f[0]);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x002D201Cu) [[unlikely]] return; }
L_002D201C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D2030; } }
    set32(c.r[5], c.r[2].w[0] + 304u);
    c.budget -= 1;
L_002D2030:
    set32(c.r[4], c.r[2].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 400u);
    set32(c.r[7], c.r[29].w[0] + 656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2044u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0026(c, 417u, depth + 1u); else { c.pc = 0x001BBAD0u; return; } if (c.pc != 0x002D2044u) [[unlikely]] return; }
L_002D2044:
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2058u); set32(c.r[6], c.r[29].w[0] + 640u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002D2058u) [[unlikely]] return; }
L_002D2058:
    c.f[3] = ld32((c.r[29].w[0] + 152u));
    c.f[4] = ld32((c.r[29].w[0] + 156u));
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; c.f[2] = ld32((c.r[29].w[0] + 144u));  if (t) { goto L_002D207C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_002D2088; } }
L_002D207C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 3;
L_002D2088:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u - 10000u);  goto L_002D20A4; }
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002D20B0; } }
    set32(c.r[2], 0u - 10000u);
    c.budget -= 1;
L_002D20A4:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 3;
L_002D20B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 400u), c.f[2]);
    set32(c.r[4], c.r[29].w[0] + 512u);
    st32((c.r[29].w[0] + 404u), c.f[1]);
    set32(c.r[5], c.r[29].w[0] + 400u);
    st32((c.r[29].w[0] + 408u), c.f[3]);
    st32((c.r[29].w[0] + 428u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 412u), c.f[4]);
    st32((c.r[29].w[0] + 480u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 420u), c.f[0]);
    st32((c.r[29].w[0] + 416u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D20E8u); st32((c.r[29].w[0] + 424u), 0u);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x002D20E8u) [[unlikely]] return; }
L_002D20E8:
    set32(c.r[4], c.r[29].w[0] + 656u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D20F4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0051(c, 331u, depth + 1u); else { c.pc = 0x00266D40u; return; } if (c.pc != 0x002D20F4u) [[unlikely]] return; }
L_002D20F4:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002D2114; }
    set32(c.r[2], ld32((c.r[29].w[0] + 656u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[29].w[0] + 656u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 4;
L_002D2114:
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D2124; } }
    set32(c.r[5], c.r[2].w[0] + 304u);
    c.budget -= 1;
L_002D2124:
    set32(c.r[4], c.r[2].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 400u);
    set32(c.r[7], c.r[29].w[0] + 656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2138u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0026(c, 417u, depth + 1u); else { c.pc = 0x001BBAD0u; return; } if (c.pc != 0x002D2138u) [[unlikely]] return; }
L_002D2138:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002D2168; }
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2150u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D2150u) [[unlikely]] return; }
L_002D2150:
    set32(c.r[4], c.r[29].w[0] + 688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D215Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D215Cu) [[unlikely]] return; }
L_002D215C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D24A8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002D2168:
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[2].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[2].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[2].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[2].w[0] + 140u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 12;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002D21E0; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.f[1] = ld32((c.r[19].w[0] + 196u));
    set32(c.r[2], ld32((c.r[19].w[0] + 608u)));
    c.f[2] = ld32((c.r[3].w[0] + 132u));
    c.f[0] = ld32((c.r[2].w[0] + 2028u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D21DC; } }
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D21C8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D21C8u) [[unlikely]] return; }
L_002D21C8:
    set32(c.r[4], c.r[29].w[0] + 688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D21D4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D21D4u) [[unlikely]] return; }
L_002D21D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D24A8; } }
L_002D21DC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002D21E0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D21ECu); set32(c.r[5], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_005A(c, 237u, depth + 1u); else { c.pc = 0x0028A0A0u; return; } if (c.pc != 0x002D21ECu) [[unlikely]] return; }
L_002D21EC:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 122u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[16].w[0] + 16u);  goto L_002D2240; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D220Cu); set32(c.r[4], ld32((c.r[19].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002D220Cu) [[unlikely]] return; }
L_002D220C:
    c.r[2].d[0] = c.r[2].d[0] ^ 8ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D223C; } }
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2228u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D2228u) [[unlikely]] return; }
L_002D2228:
    set32(c.r[4], c.r[29].w[0] + 688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2234u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D2234u) [[unlikely]] return; }
L_002D2234:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D24A8; } }
L_002D223C:
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 1;
L_002D2240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2248u); set32(c.r[4], c.r[29].w[0] + 624u);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002D2248u) [[unlikely]] return; }
L_002D2248:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2258u); set32(c.r[5], c.r[5].w[0] + 11056u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x002D2258u) [[unlikely]] return; }
L_002D2258:
    c.f[2] = ld32((c.r[19].w[0] + 656u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.f[1] = ld32((c.r[28].w[0] - 32692u));
    set32(c.r[4], c.r[29].w[0] + 656u);
    set32(c.r[5], 0u + 6u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 132u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2284u); st32((c.r[2].w[0] + 132u), c.f[0]);  if (depth < kMaxDepth) unit_0051(c, 331u, depth + 1u); else { c.pc = 0x00266D40u; return; } if (c.pc != 0x002D2284u) [[unlikely]] return; }
L_002D2284:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 208u);  goto L_002D22A4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 656u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[29].w[0] + 656u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
L_002D22A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D22ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 303u, depth + 1u); else { c.pc = 0x00266780u; return; } if (c.pc != 0x002D22ACu) [[unlikely]] return; }
L_002D22AC:
    set32(c.r[3], ld32((c.r[19].w[0] + 144u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 386u)));
    st16((c.r[29].w[0] + 384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);  if (t) { goto L_002D22C8; } }
    st16((c.r[29].w[0] + 386u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002D22C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.f[20] = ld32((c.r[2].w[0] + 128u));
    c.f[21] = ld32((c.r[2].w[0] + 132u));
    c.f[22] = ld32((c.r[2].w[0] + 136u));
    c.f[23] = ld32((c.r[2].w[0] + 140u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D22E4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D22E4u) [[unlikely]] return; }
L_002D22E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D22ECu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D22ECu) [[unlikely]] return; }
L_002D22EC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[19].w[0] + 640u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2300u); set32(c.r[5], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002D2300u) [[unlikely]] return; }
L_002D2300:
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    set32(c.r[6], c.r[19].w[0] + 624u);
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[29].w[0] + 176u), c.f[2]);
    st32((c.r[29].w[0] + 180u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2330u); st32((c.r[29].w[0] + 188u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002D2330u) [[unlikely]] return; }
L_002D2330:
    c.f[24] = ld32((c.r[29].w[0] + 128u));
    c.f[25] = ld32((c.r[29].w[0] + 132u));
    c.f[26] = ld32((c.r[29].w[0] + 136u));
    c.f[27] = ld32((c.r[29].w[0] + 140u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2348u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D2348u) [[unlikely]] return; }
L_002D2348:
    c.f[0] = ld32((c.r[19].w[0] + 656u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    st32((c.r[29].w[0] + 240u), c.f[0]);
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 208u), c.f[20]);
    st32((c.r[29].w[0] + 212u), c.f[21]);
    st32((c.r[29].w[0] + 216u), c.f[22]);
    st32((c.r[29].w[0] + 220u), c.f[23]);
    st32((c.r[29].w[0] + 224u), c.f[24]);
    st32((c.r[29].w[0] + 228u), c.f[25]);
    st32((c.r[29].w[0] + 232u), c.f[26]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2384u); st32((c.r[29].w[0] + 236u), c.f[27]);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x002D2384u) [[unlikely]] return; }
L_002D2384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D238Cu); set32(c.r[4], ld32((c.r[19].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002D238Cu) [[unlikely]] return; }
L_002D238C:
    c.r[2].d[0] = c.r[2].d[0] ^ 8ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002D23D0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D23B0; } }
    set32(c.r[5], c.r[2].w[0] + 304u);
    c.budget -= 1;
L_002D23B0:
    set32(c.r[4], c.r[2].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    set32(c.r[7], c.r[29].w[0] + 656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D23C4u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0026(c, 417u, depth + 1u); else { c.pc = 0x001BBAD0u; return; } if (c.pc != 0x002D23C4u) [[unlikely]] return; }
L_002D23C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D23F4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002D23D0:
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D23E0; } }
    set32(c.r[5], c.r[2].w[0] + 304u);
    c.budget -= 1;
L_002D23E0:
    set32(c.r[4], c.r[2].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    set32(c.r[7], c.r[29].w[0] + 656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D23F4u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0026(c, 417u, depth + 1u); else { c.pc = 0x001BBAD0u; return; } if (c.pc != 0x002D23F4u) [[unlikely]] return; }
L_002D23F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002D242C; }
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2408u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D2408u) [[unlikely]] return; }
L_002D2408:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2414u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D2414u) [[unlikely]] return; }
L_002D2414:
    set32(c.r[4], c.r[29].w[0] + 688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2420u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D2420u) [[unlikely]] return; }
L_002D2420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D24A8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002D242C:
    c.f[1] = ld32((c.r[19].w[0] + 656u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 132u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 132u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D244Cu); set32(c.r[5], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_006C(c, 222u, depth + 1u); else { c.pc = 0x002D24F0u; return; } if (c.pc != 0x002D244Cu) [[unlikely]] return; }
L_002D244C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 208u);  goto L_002D2484; }
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2460u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D2460u) [[unlikely]] return; }
L_002D2460:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D246Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D246Cu) [[unlikely]] return; }
L_002D246C:
    set32(c.r[4], c.r[29].w[0] + 688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2478u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D2478u) [[unlikely]] return; }
L_002D2478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D24A8; } }
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 1;
L_002D2484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D248Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D248Cu) [[unlikely]] return; }
L_002D248C:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2498u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D2498u) [[unlikely]] return; }
L_002D2498:
    set32(c.r[4], c.r[29].w[0] + 688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D24A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D24A4u) [[unlikely]] return; }
L_002D24A4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002D24A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 880u);  c.pc = t; return; }
L_002D24F0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 256u), 0u);
    st32((c.r[29].w[0] + 240u), 0u);
    st32((c.r[29].w[0] + 244u), 0u);
    st32((c.r[29].w[0] + 248u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2528u); st32((c.r[29].w[0] + 252u), 0u);  if (depth < kMaxDepth) unit_0051(c, 303u, depth + 1u); else { c.pc = 0x00266780u; return; } if (c.pc != 0x002D2528u) [[unlikely]] return; }
L_002D2528:
    set32(c.r[3], ld32((c.r[17].w[0] + 144u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 226u)));
    st16((c.r[29].w[0] + 224u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);  if (t) { goto L_002D2544; } }
    st16((c.r[29].w[0] + 226u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002D2544:
    set32(c.r[6], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], 0u - 9u);
    set32(c.r[2], 0u - 17u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[7], ld32((c.r[6].w[0] + 96u)));
    set32(c.r[6], ld32((c.r[7].w[0] + 280u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st32((c.r[7].w[0] + 280u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 280u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[6].w[0] + 280u), c.r[2].w[0]);
    c.f[4] = ld32((c.r[16].w[0] + 4u));
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 656u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[29].w[0] + 52u), c.f[4]);
    st32((c.r[29].w[0] + 56u), c.f[3]);
    st32((c.r[29].w[0] + 60u), c.f[2]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D25ACu); st32((c.r[29].w[0] + 64u), c.f[1]);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x002D25ACu) [[unlikely]] return; }
L_002D25AC:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D25B8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0051(c, 331u, depth + 1u); else { c.pc = 0x00266D40u; return; } if (c.pc != 0x002D25B8u) [[unlikely]] return; }
L_002D25B8:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002D25D8; }
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 4;
L_002D25D8:
    set32(c.r[5], ld32((c.r[17].w[0] + 1296u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D25EC; } }
    set32(c.r[7], c.r[4].w[0] + 80u);
    c.budget -= 1;
L_002D25EC:
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[8], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D25FCu); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0051(c, 393u, depth + 1u); else { c.pc = 0x00267530u; return; } if (c.pc != 0x002D25FCu) [[unlikely]] return; }
L_002D25FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D260Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D260Cu) [[unlikely]] return; }
L_002D260C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_002D2630:
    set32(c.r[29], c.r[29].w[0] - 688u);
    set32(c.r[3], 0u - 9u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[2], 0u - 17u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[6], ld32((c.r[7].w[0] + 280u)));
    set32(c.r[4], c.r[29].w[0] + 672u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st32((c.r[7].w[0] + 280u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 280u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[6].w[0] + 280u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[22], ld32((c.r[3].w[0] + 960u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D26CCu); set32(c.r[16], c.r[2].w[0] + 452u);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002D26CCu) [[unlikely]] return; }
L_002D26CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002D2794; } }
L_002D26D4:
    set32(c.r[2], c.r[16].w[0] + c.r[21].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[20].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002D2794; }
    set32(c.r[4], ld32((c.r[5].w[0] + 84u)));
    c.r[2].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D2790; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 1296u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 1296u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D2790; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D2790; } }
    set32(c.r[5], c.r[5].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2720u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x002D2720u) [[unlikely]] return; }
L_002D2720:
    set32(c.r[3], c.r[16].w[0] + c.r[21].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.f[3] = ld32((c.r[20].w[0] + 656u));
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[3].w[0] + 656u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D2790; } }
    set32(c.r[5], c.r[3].w[0] + 192u);
    set32(c.r[4], c.r[29].w[0] + 656u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D275Cu); set32(c.r[6], c.r[20].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002D275Cu) [[unlikely]] return; }
L_002D275C:
    set32(c.r[4], c.r[29].w[0] + 656u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2768u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002D2768u) [[unlikely]] return; }
L_002D2768:
    set32(c.r[4], c.r[29].w[0] + 672u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2774u); set32(c.r[5], c.r[29].w[0] + 656u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x002D2774u) [[unlikely]] return; }
L_002D2774:
    c.f[1] = ld32((c.r[28].w[0] - 32652u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D2790; } }
    set32(c.r[2], c.r[16].w[0] + c.r[21].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[2].w[0])));  if (t) { goto L_002D27A0; } }
L_002D2790:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002D2794:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[21], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D26D4u | kUnwind; return; } goto L_002D26D4; }
L_002D27A0:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.f[1] = ld32((c.r[18].w[0] + 656u));  goto L_002D27B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D2C34; } }
L_002D27B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = ld32((c.r[20].w[0] + 656u));
    set32(c.r[4], c.r[29].w[0] + 672u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D27D0u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002D27D0u) [[unlikely]] return; }
L_002D27D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[29].w[0] + 464u);
    set32(c.r[17], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D27E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 303u, depth + 1u); else { c.pc = 0x00266780u; return; } if (c.pc != 0x002D27E4u) [[unlikely]] return; }
L_002D27E4:
    st32((c.r[29].w[0] + 448u), 0u);
    st32((c.r[29].w[0] + 432u), 0u);
    st32((c.r[29].w[0] + 436u), 0u);
    st32((c.r[29].w[0] + 440u), 0u);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[29].w[0] + 444u), 0u);  if (t) { goto L_002D2810; } }
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2808u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D2808u) [[unlikely]] return; }
L_002D2808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D2C34; } }
L_002D2810:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2820u); set32(c.r[6], c.r[29].w[0] + 672u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002D2820u) [[unlikely]] return; }
L_002D2820:
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 576u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    set32(c.r[5], c.r[29].w[0] + 464u);
    c.f[3] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 484u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 480u), 0u);
    st32((c.r[29].w[0] + 492u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 488u), 0u);
    c.f[2] = ld32((c.r[29].w[0] + 192u));
    st32((c.r[29].w[0] + 544u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 200u));
    c.f[0] = ld32((c.r[29].w[0] + 204u));
    st32((c.r[29].w[0] + 464u), c.f[2]);
    st32((c.r[29].w[0] + 468u), c.f[3]);
    st32((c.r[29].w[0] + 472u), c.f[1]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2878u); st32((c.r[29].w[0] + 476u), c.f[0]);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x002D2878u) [[unlikely]] return; }
L_002D2878:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2884u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0051(c, 331u, depth + 1u); else { c.pc = 0x00266D40u; return; } if (c.pc != 0x002D2884u) [[unlikely]] return; }
L_002D2884:
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_002D28A4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 432u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[29].w[0] + 432u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_002D28A4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 80u);  goto L_002D28B4; }
    set32(c.r[5], c.r[17].w[0] + 304u);
    set32(c.r[4], c.r[17].w[0] + 80u);
    c.budget -= 2;
L_002D28B4:
    set32(c.r[6], c.r[29].w[0] + 464u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D28C4u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0026(c, 417u, depth + 1u); else { c.pc = 0x001BBAD0u; return; } if (c.pc != 0x002D28C4u) [[unlikely]] return; }
L_002D28C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.f[8] = ld32((c.r[19].w[0] + 4u));  goto L_002D28E4; }
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D28DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D28DCu) [[unlikely]] return; }
L_002D28DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D2C34; } }
L_002D28E4:
    set32(c.r[2], 0u + 4u);
    c.f[5] = ld32((c.r[20].w[0] + 656u));
    set32(c.r[4], c.r[29].w[0] + 576u);
    c.f[3] = ld32((c.r[29].w[0] + 672u));
    set32(c.r[5], c.r[29].w[0] + 464u);
    c.f[7] = ld32((c.r[19].w[0] + 8u));
    c.f[5] = fp::ee::add(c.fcr31, c.f[8], c.f[5]);
    c.f[2] = ld32((c.r[29].w[0] + 676u));
    c.f[6] = ld32((c.r[19].w[0] + 12u));
    c.f[4] = ld32((c.r[19].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 680u));
    c.f[0] = ld32((c.r[29].w[0] + 684u));
    st32((c.r[29].w[0] + 464u), c.f[4]);
    st32((c.r[29].w[0] + 544u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 472u), c.f[7]);
    st32((c.r[29].w[0] + 476u), c.f[6]);
    st32((c.r[29].w[0] + 480u), c.f[3]);
    st32((c.r[29].w[0] + 468u), c.f[5]);
    st32((c.r[29].w[0] + 484u), c.f[2]);
    st32((c.r[29].w[0] + 488u), c.f[1]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D293Cu); st32((c.r[29].w[0] + 492u), c.f[0]);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x002D293Cu) [[unlikely]] return; }
L_002D293C:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2948u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0051(c, 331u, depth + 1u); else { c.pc = 0x00266D40u; return; } if (c.pc != 0x002D2948u) [[unlikely]] return; }
L_002D2948:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D2954; } }
    set32(c.r[5], c.r[17].w[0] + 304u);
    c.budget -= 1;
L_002D2954:
    set32(c.r[4], c.r[17].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 464u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2968u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0026(c, 417u, depth + 1u); else { c.pc = 0x001BBAD0u; return; } if (c.pc != 0x002D2968u) [[unlikely]] return; }
L_002D2968:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002D2984; }
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D297Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D297Cu) [[unlikely]] return; }
L_002D297C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D2C34; } }
L_002D2984:
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[2].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[2].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[2].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[2].w[0] + 140u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 12;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002D29F0; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.f[1] = ld32((c.r[20].w[0] + 196u));
    set32(c.r[2], ld32((c.r[20].w[0] + 608u)));
    c.f[2] = ld32((c.r[3].w[0] + 132u));
    c.f[0] = ld32((c.r[2].w[0] + 2028u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D29EC; } }
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D29E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D29E4u) [[unlikely]] return; }
L_002D29E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D2C34; } }
L_002D29EC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002D29F0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D29FCu); set32(c.r[5], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_005A(c, 237u, depth + 1u); else { c.pc = 0x0028A0A0u; return; } if (c.pc != 0x002D29FCu) [[unlikely]] return; }
L_002D29FC:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 122u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[16].w[0] + 16u);  goto L_002D2A44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2A1Cu); set32(c.r[4], ld32((c.r[20].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002D2A1Cu) [[unlikely]] return; }
L_002D2A1C:
    c.r[2].d[0] = c.r[2].d[0] ^ 8ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D2A40; } }
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2A38u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D2A38u) [[unlikely]] return; }
L_002D2A38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D2C34; } }
L_002D2A40:
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 1;
L_002D2A44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2A4Cu); set32(c.r[4], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002D2A4Cu) [[unlikely]] return; }
L_002D2A4C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2A5Cu); set32(c.r[5], c.r[5].w[0] + 11056u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x002D2A5Cu) [[unlikely]] return; }
L_002D2A5C:
    c.f[2] = ld32((c.r[20].w[0] + 656u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.f[1] = ld32((c.r[28].w[0] - 32692u));
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 132u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2A88u); st32((c.r[2].w[0] + 132u), c.f[0]);  if (depth < kMaxDepth) unit_0051(c, 303u, depth + 1u); else { c.pc = 0x00266780u; return; } if (c.pc != 0x002D2A88u) [[unlikely]] return; }
L_002D2A88:
    set32(c.r[3], ld32((c.r[20].w[0] + 144u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 402u)));
    st16((c.r[29].w[0] + 400u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);  if (t) { goto L_002D2AA4; } }
    st16((c.r[29].w[0] + 402u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002D2AA4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.f[20] = ld32((c.r[2].w[0] + 128u));
    c.f[21] = ld32((c.r[2].w[0] + 132u));
    c.f[22] = ld32((c.r[2].w[0] + 136u));
    c.f[23] = ld32((c.r[2].w[0] + 140u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2AC0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D2AC0u) [[unlikely]] return; }
L_002D2AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2AC8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D2AC8u) [[unlikely]] return; }
L_002D2AC8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[20].w[0] + 640u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2ADCu); set32(c.r[5], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002D2ADCu) [[unlikely]] return; }
L_002D2ADC:
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    set32(c.r[6], c.r[20].w[0] + 624u);
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[29].w[0] + 208u), c.f[2]);
    st32((c.r[29].w[0] + 212u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2B0Cu); st32((c.r[29].w[0] + 220u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002D2B0Cu) [[unlikely]] return; }
L_002D2B0C:
    c.f[24] = ld32((c.r[29].w[0] + 176u));
    c.f[25] = ld32((c.r[29].w[0] + 180u));
    c.f[26] = ld32((c.r[29].w[0] + 184u));
    c.f[27] = ld32((c.r[29].w[0] + 188u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2B24u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D2B24u) [[unlikely]] return; }
L_002D2B24:
    c.f[0] = ld32((c.r[20].w[0] + 656u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    st32((c.r[29].w[0] + 256u), c.f[0]);
    st32((c.r[29].w[0] + 304u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 224u), c.f[20]);
    st32((c.r[29].w[0] + 228u), c.f[21]);
    st32((c.r[29].w[0] + 232u), c.f[22]);
    st32((c.r[29].w[0] + 236u), c.f[23]);
    st32((c.r[29].w[0] + 240u), c.f[24]);
    st32((c.r[29].w[0] + 244u), c.f[25]);
    st32((c.r[29].w[0] + 248u), c.f[26]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2B60u); st32((c.r[29].w[0] + 252u), c.f[27]);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x002D2B60u) [[unlikely]] return; }
L_002D2B60:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2B6Cu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0051(c, 331u, depth + 1u); else { c.pc = 0x00266D40u; return; } if (c.pc != 0x002D2B6Cu) [[unlikely]] return; }
L_002D2B6C:
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_002D2B8C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 432u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[29].w[0] + 432u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_002D2B8C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 80u);  goto L_002D2B9C; }
    set32(c.r[5], c.r[17].w[0] + 304u);
    set32(c.r[4], c.r[17].w[0] + 80u);
    c.budget -= 2;
L_002D2B9C:
    set32(c.r[6], c.r[29].w[0] + 224u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2BACu); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0026(c, 417u, depth + 1u); else { c.pc = 0x001BBAD0u; return; } if (c.pc != 0x002D2BACu) [[unlikely]] return; }
L_002D2BAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002D2BD4; }
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2BC0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D2BC0u) [[unlikely]] return; }
L_002D2BC0:
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2BCCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D2BCCu) [[unlikely]] return; }
L_002D2BCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D2C34; } }
L_002D2BD4:
    c.f[1] = ld32((c.r[20].w[0] + 656u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 132u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 132u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2BF4u); set32(c.r[5], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_006C(c, 222u, depth + 1u); else { c.pc = 0x002D24F0u; return; } if (c.pc != 0x002D2BF4u) [[unlikely]] return; }
L_002D2BF4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 224u);  goto L_002D2C1C; }
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2C08u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D2C08u) [[unlikely]] return; }
L_002D2C08:
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2C14u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D2C14u) [[unlikely]] return; }
L_002D2C14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D2C34; } }
L_002D2C1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2C24u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D2C24u) [[unlikely]] return; }
L_002D2C24:
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2C30u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D2C30u) [[unlikely]] return; }
L_002D2C30:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002D2C34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 688u);  c.pc = t; return; }
L_002D2C80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1320u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D2CC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2CA0u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D2CA0u) [[unlikely]] return; }
L_002D2CA0:
    c.f[0] = ld32((c.r[16].w[0] + 1392u));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1396u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1400u));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1404u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 44u), c.f[0]);  if (t) { goto L_002D2CE4; } }
L_002D2CC4:
    c.f[0] = ld32((c.r[16].w[0] + 192u));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 196u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 200u));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 204u));
    st32((c.r[29].w[0] + 44u), c.f[0]);
    c.budget -= 8;
L_002D2CE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[16].w[0] + 1280u);
    set32(c.r[7], c.r[16].w[0] + 1264u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2CFCu); set32(c.r[8], c.r[16].w[0] + 1200u);  if (depth < kMaxDepth) unit_006C(c, 273u, depth + 1u); else { c.pc = 0x002D2D70u; return; } if (c.pc != 0x002D2CFCu) [[unlikely]] return; }
L_002D2CFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2D04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002D2D04u) [[unlikely]] return; }
L_002D2D04:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 32u));  goto L_002D2D24; }
    set32(c.r[3], ld32((c.r[16].w[0] + 1304u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 164u)));  goto L_002D2D44; }
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002D2D24:
    st32((c.r[16].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[16].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[16].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[16].w[0] + 204u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 8;
L_002D2D44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D2D70:
    set32(c.r[29], c.r[29].w[0] - 784u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 28u), c.f[27]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2DDCu); st32((c.r[4].w[0] + 1420u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002D2DDCu) [[unlikely]] return; }
L_002D2DDC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_002D31E4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D31E0; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_002D2E08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D32E4; } }
L_002D2E08:
    st32((c.r[29].w[0] + 736u), 0u);
    st32((c.r[29].w[0] + 756u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 720u), 0u);
    st32((c.r[29].w[0] + 764u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 724u), 0u);
    st32((c.r[29].w[0] + 728u), 0u);
    st32((c.r[29].w[0] + 732u), 0u);
    st32((c.r[29].w[0] + 752u), 0u);
    st32((c.r[29].w[0] + 760u), 0u);
    c.f[12] = ld32((c.r[20].w[0] + 656u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2E40u); set32(c.r[5], c.r[29].w[0] + 752u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002D2E40u) [[unlikely]] return; }
L_002D2E40:
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.f[2] = ld32((c.r[29].w[0] + 240u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 244u));
    set32(c.r[6], c.r[29].w[0] + 352u);
    st32((c.r[29].w[0] + 360u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 252u));
    st32((c.r[29].w[0] + 352u), c.f[2]);
    st32((c.r[29].w[0] + 356u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2E70u); st32((c.r[29].w[0] + 364u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002D2E70u) [[unlikely]] return; }
L_002D2E70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.f[24] = ld32((c.r[29].w[0] + 288u));
    c.f[25] = ld32((c.r[29].w[0] + 292u));
    c.f[26] = ld32((c.r[29].w[0] + 296u));
    c.f[27] = ld32((c.r[29].w[0] + 300u));
    c.f[12] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2E94u); set32(c.r[5], c.r[29].w[0] + 752u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002D2E94u) [[unlikely]] return; }
L_002D2E94:
    set32(c.r[6], ld32((c.r[28].w[0] - 30316u)));
    c.f[20] = ld32((c.r[29].w[0] + 272u));
    c.f[21] = ld32((c.r[29].w[0] + 276u));
    set32(c.r[3], 0u - 9u);
    c.f[22] = ld32((c.r[29].w[0] + 280u));
    set32(c.r[2], 0u - 17u);
    set32(c.r[7], ld32((c.r[6].w[0] + 96u)));
    c.f[23] = ld32((c.r[29].w[0] + 284u));
    set32(c.r[4], c.r[29].w[0] + 720u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], ld32((c.r[7].w[0] + 280u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st32((c.r[7].w[0] + 280u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 280u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2EE0u); st32((c.r[6].w[0] + 280u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 331u, depth + 1u); else { c.pc = 0x00266D40u; return; } if (c.pc != 0x002D2EE0u) [[unlikely]] return; }
L_002D2EE0:
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 528u);  goto L_002D2F00; }
    set32(c.r[2], ld32((c.r[29].w[0] + 720u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[29].w[0] + 720u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.budget -= 4;
L_002D2F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2F08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 303u, depth + 1u); else { c.pc = 0x00266780u; return; } if (c.pc != 0x002D2F08u) [[unlikely]] return; }
L_002D2F08:
    set32(c.r[3], ld32((c.r[20].w[0] + 144u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 706u)));
    st16((c.r[29].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);  if (t) { goto L_002D2F24; } }
    st16((c.r[29].w[0] + 706u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002D2F24:
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 640u);
    st32((c.r[29].w[0] + 608u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 528u);
    st32((c.r[29].w[0] + 528u), c.f[24]);
    st32((c.r[29].w[0] + 532u), c.f[25]);
    st32((c.r[29].w[0] + 536u), c.f[26]);
    st32((c.r[29].w[0] + 540u), c.f[27]);
    st32((c.r[29].w[0] + 544u), c.f[20]);
    st32((c.r[29].w[0] + 548u), c.f[21]);
    st32((c.r[29].w[0] + 552u), c.f[22]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2F58u); st32((c.r[29].w[0] + 556u), c.f[23]);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x002D2F58u) [[unlikely]] return; }
L_002D2F58:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 1296u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D2F70; } }
    set32(c.r[7], c.r[4].w[0] + 80u);
    c.budget -= 1;
L_002D2F70:
    set32(c.r[6], c.r[29].w[0] + 528u);
    set32(c.r[8], c.r[29].w[0] + 720u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2F80u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0051(c, 393u, depth + 1u); else { c.pc = 0x00267530u; return; } if (c.pc != 0x002D2F80u) [[unlikely]] return; }
L_002D2F80:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[2].w[0] + 120u)));  goto L_002D3008; }
    c.f[0] = c.f[21] ^ fp::kSign;
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 640u);
    set32(c.r[5], c.r[29].w[0] + 528u);
    st32((c.r[29].w[0] + 548u), c.f[0]);
    st32((c.r[29].w[0] + 608u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 528u), c.f[24]);
    st32((c.r[29].w[0] + 532u), c.f[25]);
    st32((c.r[29].w[0] + 536u), c.f[26]);
    st32((c.r[29].w[0] + 540u), c.f[27]);
    st32((c.r[29].w[0] + 544u), c.f[20]);
    st32((c.r[29].w[0] + 552u), c.f[22]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2FC0u); st32((c.r[29].w[0] + 556u), c.f[23]);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x002D2FC0u) [[unlikely]] return; }
L_002D2FC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 1296u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D2FD8; } }
    set32(c.r[7], c.r[4].w[0] + 80u);
    c.budget -= 1;
L_002D2FD8:
    set32(c.r[6], c.r[29].w[0] + 528u);
    set32(c.r[8], c.r[29].w[0] + 720u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2FE8u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0051(c, 393u, depth + 1u); else { c.pc = 0x00267530u; return; } if (c.pc != 0x002D2FE8u) [[unlikely]] return; }
L_002D2FE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D3004; } }
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2FFCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D2FFCu) [[unlikely]] return; }
L_002D2FFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D3460; } }
L_002D3004:
    set32(c.r[5], ld32((c.r[2].w[0] + 120u)));
    c.budget -= 1;
L_002D3008:
    set32(c.r[4], ld32((c.r[5].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002D303C; }
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[5].w[0] + 16u));
    c.f[20] = ld32((c.r[19].w[0]));
    st128((c.r[29].w[0] + 496u) & ~15u, c.r[3]);
    c.f[23] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 500u));
    c.f[21] = c.r[2].w[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.f[22] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_002D3098; } }
L_002D303C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.f[20] = ld32((c.r[2].w[0]));  goto L_002D308C; }
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[2]);
    c.f[23] = ld32((c.r[19].w[0] + 8u));
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[29].w[0] + 468u));
    c.f[0] = ld32((c.r[29].w[0] + 452u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[2] = ld32((c.r[5].w[0] + 32u));  if (t) { goto L_002D3074; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[22] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);  if (t) { goto L_002D307C; } }
L_002D3074:
    c.f[0] = c.f[1];
    c.f[22] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.budget -= 2;
L_002D307C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[19].w[0]));  if (t) { goto L_002D3098; } }
L_002D308C:
    c.f[22] = ld32((c.r[2].w[0] + 4u));
    c.f[23] = ld32((c.r[2].w[0] + 8u));
    c.f[21] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 3;
L_002D3098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D30A0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D30A0u) [[unlikely]] return; }
L_002D30A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[30], c.r[20].w[0] + 672u);
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 960u)));
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[3].w[0] + 452u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  if (t) { goto L_002D31AC; } }
L_002D30C4:
    set32(c.r[3], c.r[22].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[21].d[0] == 0ull) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_002D31AC; }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[21].d[0];  if (t) { goto L_002D31A8; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D31A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D30FCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D30FCu) [[unlikely]] return; }
L_002D30FC:
    set32(c.r[3], ld32((c.r[20].w[0] + 1296u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 1296u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[23], c.r[21].w[0] + 672u);  if (t) { goto L_002D31A8; } }
    c.f[1] = ld32((c.r[30].w[0] + 4u));
    c.f[0] = ld32((c.r[23].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D31A8; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D312Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 313u, depth + 1u); else { c.pc = 0x0028B330u; return; } if (c.pc != 0x002D312Cu) [[unlikely]] return; }
L_002D312C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D31A8; } }
    c.f[3] = ld32((c.r[30].w[0]));
    c.f[2] = ld32((c.r[23].w[0]));
    c.f[0] = ld32((c.r[23].w[0] + 8u));
    c.f[1] = ld32((c.r[30].w[0] + 8u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3150u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 6u, depth + 1u); else { c.pc = 0x00184080u; return; } if (c.pc != 0x002D3150u) [[unlikely]] return; }
L_002D3150:
    c.f[1] = ld32((c.r[20].w[0] + 656u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D31A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3168u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002D3168u) [[unlikely]] return; }
L_002D3168:
    c.f[0] = ld32((c.r[21].w[0] + 708u));
    c.f[1] = ld32((c.r[21].w[0] + 692u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[21].w[0] + 688u);  if (t) { goto L_002D3184; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0] + 32u));  if (t) { goto L_002D318C; } }
L_002D3184:
    c.f[1] = c.f[0];
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    c.budget -= 2;
L_002D318C:
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D31A8; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 144u)));
    c.f[22] = c.f[0];
    st32((c.r[20].w[0] + 1420u), c.r[2].w[0]);
    c.budget -= 3;
L_002D31A8:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_002D31AC:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[22].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D30C4u | kUnwind; return; } goto L_002D30C4; }
    st32((c.r[19].w[0]), c.f[20]);
    set32(c.r[4], c.r[29].w[0] + 528u);
    st32((c.r[19].w[0] + 4u), c.f[22]);
    set32(c.r[5], 0u - 1u);
    st32((c.r[19].w[0] + 8u), c.f[23]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D31D8u); st32((c.r[19].w[0] + 12u), c.f[21]);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D31D8u) [[unlikely]] return; }
L_002D31D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D32E4; } }
L_002D31E0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002D31E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D31ECu);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002D31ECu) [[unlikely]] return; }
L_002D31EC:
    set32(c.r[6], c.r[2].w[0] + 160u);
    set32(c.r[4], c.r[29].w[0] + 768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D31FCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 183u, depth + 1u); else { c.pc = 0x0017DE50u; return; } if (c.pc != 0x002D31FCu) [[unlikely]] return; }
L_002D31FC:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D320Cu); set32(c.r[6], c.r[29].w[0] + 768u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002D320Cu) [[unlikely]] return; }
L_002D320C:
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D321Cu); st128((c.r[29].w[0] + 432u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002D321Cu) [[unlikely]] return; }
L_002D321C:
    set32(c.r[5], c.r[2].w[0] + 176u);
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D322Cu); set32(c.r[6], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x002D322Cu) [[unlikely]] return; }
L_002D322C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3234u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002D3234u) [[unlikely]] return; }
L_002D3234:
    set32(c.r[6], c.r[2].w[0] + 176u);
    set32(c.r[4], c.r[29].w[0] + 752u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3244u); set32(c.r[5], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x002D3244u) [[unlikely]] return; }
L_002D3244:
    c.f[0] = ld32((c.r[29].w[0] + 756u));
    set32(c.r[4], c.r[29].w[0] + 752u);
    c.f[2] = ld32((c.r[29].w[0] + 760u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 764u));
    c.f[3] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[29].w[0] + 752u));
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[29].w[0] + 756u), c.f[3]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 760u), c.f[2]);
    st32((c.r[29].w[0] + 764u), c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D327Cu); st32((c.r[29].w[0] + 752u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002D327Cu) [[unlikely]] return; }
L_002D327C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3284u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 30u, depth + 1u); else { c.pc = 0x0028C670u; return; } if (c.pc != 0x002D3284u) [[unlikely]] return; }
L_002D3284:
    c.f[12] = ld32((c.r[2].w[0] + 32u));
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3294u); set32(c.r[5], c.r[29].w[0] + 752u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002D3294u) [[unlikely]] return; }
L_002D3294:
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.f[2] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[5], c.r[29].w[0] + 768u);
    c.f[1] = ld32((c.r[29].w[0] + 228u));
    set32(c.r[6], c.r[29].w[0] + 320u);
    st32((c.r[29].w[0] + 328u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    st32((c.r[29].w[0] + 320u), c.f[2]);
    st32((c.r[29].w[0] + 324u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D32C4u); st32((c.r[29].w[0] + 332u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002D32C4u) [[unlikely]] return; }
L_002D32C4:
    c.f[3] = ld32((c.r[29].w[0] + 260u));
    c.f[2] = ld32((c.r[29].w[0] + 264u));
    c.f[1] = ld32((c.r[29].w[0] + 268u));
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    st32((c.r[19].w[0]), c.f[0]);
    st32((c.r[19].w[0] + 4u), c.f[3]);
    st32((c.r[19].w[0] + 8u), c.f[2]);
    st32((c.r[19].w[0] + 12u), c.f[1]);
    c.budget -= 8;
L_002D32E4:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 752u));  goto L_002D3310; }
    c.f[0] = ld32((c.r[29].w[0] + 768u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 772u));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 776u));
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 780u));
    st32((c.r[18].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 752u));
    c.budget -= 9;
L_002D3310:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D3364; } }
    c.f[0] = ld32((c.r[29].w[0] + 756u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D3364; } }
    c.f[0] = ld32((c.r[29].w[0] + 760u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D3364; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 148u)));
    set32(c.r[2], 0u + 20026u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_002D3360; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 752u), c.r[2].w[0]);  if (t) { goto L_002D3364; } }
L_002D3360:
    st32((c.r[29].w[0] + 760u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3364:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002D338C; } }
    c.f[0] = ld32((c.r[29].w[0] + 752u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 756u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 760u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 764u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.budget -= 8;
L_002D338C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002D3460; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D339Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002D339Cu) [[unlikely]] return; }
L_002D339C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_002D33F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D33B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002D33B4u) [[unlikely]] return; }
L_002D33B4:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D33C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002D33C0u) [[unlikely]] return; }
L_002D33C0:
    c.f[12] = ld32((c.r[29].w[0] + 752u));
    c.f[13] = ld32((c.r[29].w[0] + 756u));
    c.f[14] = ld32((c.r[29].w[0] + 760u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D33D4u); set32(c.r[4], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_003A(c, 294u, depth + 1u); else { c.pc = 0x0020AC90u; return; } if (c.pc != 0x002D33D4u) [[unlikely]] return; }
L_002D33D4:
    set32(c.r[6], ld32((c.r[29].w[0] + 400u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 404u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 408u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D33ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x002D33ECu) [[unlikely]] return; }
L_002D33EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D345C; } }
L_002D33F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D33FCu);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002D33FCu) [[unlikely]] return; }
L_002D33FC:
    set32(c.r[5], c.r[2].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3408u); set32(c.r[4], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002D3408u) [[unlikely]] return; }
L_002D3408:
    c.f[0] = ld32((c.r[29].w[0] + 388u));
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.f[2] = ld32((c.r[29].w[0] + 392u));
    set32(c.r[5], c.r[29].w[0] + 752u);
    c.f[1] = ld32((c.r[29].w[0] + 396u));
    set32(c.r[6], c.r[29].w[0] + 384u);
    c.f[3] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[29].w[0] + 384u));
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[29].w[0] + 388u), c.f[3]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 392u), c.f[2]);
    st32((c.r[29].w[0] + 396u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3444u); st32((c.r[29].w[0] + 384u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x002D3444u) [[unlikely]] return; }
L_002D3444:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 384u);
    set32(c.r[6], c.r[29].w[0] + 368u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D345Cu); set32(c.r[7], c.r[29].w[0] + 752u);  if (depth < kMaxDepth) unit_0068(c, 194u, depth + 1u); else { c.pc = 0x002C24C0u; return; } if (c.pc != 0x002D345Cu) [[unlikely]] return; }
L_002D345C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002D3460:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 784u);  c.pc = t; return; }
L_002D34B0:
    set32(c.r[29], c.r[29].w[0] - 624u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 25;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_002D3534; } }
    set32(c.r[3], c.r[19].w[0] << 3);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002D3538; } }
L_002D3534:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D3538:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002D3544; }
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_002D3544:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_002D37C8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D37C4; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_002D356C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D38C8; } }
L_002D356C:
    st32((c.r[29].w[0] + 576u), 0u);
    st32((c.r[29].w[0] + 596u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 560u), 0u);
    st32((c.r[29].w[0] + 604u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 564u), 0u);
    st32((c.r[29].w[0] + 568u), 0u);
    st32((c.r[29].w[0] + 572u), 0u);
    st32((c.r[29].w[0] + 592u), 0u);
    st32((c.r[29].w[0] + 600u), 0u);
    c.f[12] = ld32((c.r[20].w[0] + 656u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D35A4u); set32(c.r[5], c.r[29].w[0] + 592u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002D35A4u) [[unlikely]] return; }
L_002D35A4:
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    set32(c.r[6], c.r[29].w[0] + 272u);
    st32((c.r[29].w[0] + 280u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[29].w[0] + 272u), c.f[2]);
    st32((c.r[29].w[0] + 276u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D35D4u); st32((c.r[29].w[0] + 284u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002D35D4u) [[unlikely]] return; }
L_002D35D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[24] = ld32((c.r[29].w[0] + 208u));
    c.f[25] = ld32((c.r[29].w[0] + 212u));
    c.f[26] = ld32((c.r[29].w[0] + 216u));
    c.f[27] = ld32((c.r[29].w[0] + 220u));
    c.f[12] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D35F8u); set32(c.r[5], c.r[29].w[0] + 592u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002D35F8u) [[unlikely]] return; }
L_002D35F8:
    set32(c.r[6], ld32((c.r[28].w[0] - 30316u)));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    c.f[21] = ld32((c.r[29].w[0] + 196u));
    set32(c.r[3], 0u - 9u);
    c.f[22] = ld32((c.r[29].w[0] + 200u));
    set32(c.r[2], 0u - 17u);
    set32(c.r[7], ld32((c.r[6].w[0] + 96u)));
    c.f[23] = ld32((c.r[29].w[0] + 204u));
    set32(c.r[4], c.r[29].w[0] + 560u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], ld32((c.r[7].w[0] + 280u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st32((c.r[7].w[0] + 280u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 280u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3644u); st32((c.r[6].w[0] + 280u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 331u, depth + 1u); else { c.pc = 0x00266D40u; return; } if (c.pc != 0x002D3644u) [[unlikely]] return; }
L_002D3644:
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 368u);  goto L_002D3664; }
    set32(c.r[2], ld32((c.r[29].w[0] + 560u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[29].w[0] + 560u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 4;
L_002D3664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D366Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 303u, depth + 1u); else { c.pc = 0x00266780u; return; } if (c.pc != 0x002D366Cu) [[unlikely]] return; }
L_002D366C:
    set32(c.r[3], ld32((c.r[20].w[0] + 144u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 546u)));
    st16((c.r[29].w[0] + 544u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);  if (t) { goto L_002D3688; } }
    st16((c.r[29].w[0] + 546u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002D3688:
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 480u);
    st32((c.r[29].w[0] + 448u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 368u);
    st32((c.r[29].w[0] + 368u), c.f[24]);
    st32((c.r[29].w[0] + 372u), c.f[25]);
    st32((c.r[29].w[0] + 376u), c.f[26]);
    st32((c.r[29].w[0] + 380u), c.f[27]);
    st32((c.r[29].w[0] + 384u), c.f[20]);
    st32((c.r[29].w[0] + 388u), c.f[21]);
    st32((c.r[29].w[0] + 392u), c.f[22]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D36BCu); st32((c.r[29].w[0] + 396u), c.f[23]);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x002D36BCu) [[unlikely]] return; }
L_002D36BC:
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D36C8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0051(c, 331u, depth + 1u); else { c.pc = 0x00266D40u; return; } if (c.pc != 0x002D36C8u) [[unlikely]] return; }
L_002D36C8:
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002D36E8; }
    set32(c.r[2], ld32((c.r[29].w[0] + 560u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[29].w[0] + 560u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 4;
L_002D36E8:
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D36F8; } }
    set32(c.r[7], c.r[4].w[0] + 80u);
    c.budget -= 1;
L_002D36F8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 368u);
    set32(c.r[8], c.r[29].w[0] + 560u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D370Cu); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0051(c, 393u, depth + 1u); else { c.pc = 0x00267530u; return; } if (c.pc != 0x002D370Cu) [[unlikely]] return; }
L_002D370C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[0] = ld32((c.r[2].w[0]));  goto L_002D3794; }
    c.f[0] = c.f[21] ^ fp::kSign;
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[5], c.r[29].w[0] + 368u);
    st32((c.r[29].w[0] + 388u), c.f[0]);
    st32((c.r[29].w[0] + 448u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 368u), c.f[24]);
    st32((c.r[29].w[0] + 372u), c.f[25]);
    st32((c.r[29].w[0] + 376u), c.f[26]);
    st32((c.r[29].w[0] + 380u), c.f[27]);
    st32((c.r[29].w[0] + 384u), c.f[20]);
    st32((c.r[29].w[0] + 392u), c.f[22]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D374Cu); st32((c.r[29].w[0] + 396u), c.f[23]);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x002D374Cu) [[unlikely]] return; }
L_002D374C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D3760; } }
    set32(c.r[7], c.r[4].w[0] + 80u);
    c.budget -= 1;
L_002D3760:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 368u);
    set32(c.r[8], c.r[29].w[0] + 560u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3774u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0051(c, 393u, depth + 1u); else { c.pc = 0x00267530u; return; } if (c.pc != 0x002D3774u) [[unlikely]] return; }
L_002D3774:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D3790; } }
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3788u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D3788u) [[unlikely]] return; }
L_002D3788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D3A2C; } }
L_002D3790:
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 1;
L_002D3794:
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[5], 0u - 1u);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D37BCu); st32((c.r[18].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002D37BCu) [[unlikely]] return; }
L_002D37BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D38C8; } }
L_002D37C4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002D37C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D37D0u);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002D37D0u) [[unlikely]] return; }
L_002D37D0:
    set32(c.r[6], c.r[2].w[0] + 160u);
    set32(c.r[4], c.r[29].w[0] + 608u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D37E0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 183u, depth + 1u); else { c.pc = 0x0017DE50u; return; } if (c.pc != 0x002D37E0u) [[unlikely]] return; }
L_002D37E0:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D37F0u); set32(c.r[6], c.r[29].w[0] + 608u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002D37F0u) [[unlikely]] return; }
L_002D37F0:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3800u); st128((c.r[29].w[0] + 352u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002D3800u) [[unlikely]] return; }
L_002D3800:
    set32(c.r[5], c.r[2].w[0] + 176u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3810u); set32(c.r[6], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x002D3810u) [[unlikely]] return; }
L_002D3810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3818u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002D3818u) [[unlikely]] return; }
L_002D3818:
    set32(c.r[6], c.r[2].w[0] + 176u);
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3828u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x002D3828u) [[unlikely]] return; }
L_002D3828:
    c.f[0] = ld32((c.r[29].w[0] + 596u));
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.f[2] = ld32((c.r[29].w[0] + 600u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 604u));
    c.f[3] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[29].w[0] + 592u));
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[29].w[0] + 596u), c.f[3]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 600u), c.f[2]);
    st32((c.r[29].w[0] + 604u), c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3860u); st32((c.r[29].w[0] + 592u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002D3860u) [[unlikely]] return; }
L_002D3860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3868u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 30u, depth + 1u); else { c.pc = 0x0028C670u; return; } if (c.pc != 0x002D3868u) [[unlikely]] return; }
L_002D3868:
    c.f[12] = ld32((c.r[2].w[0] + 32u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3878u); set32(c.r[5], c.r[29].w[0] + 592u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002D3878u) [[unlikely]] return; }
L_002D3878:
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[2] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[5], c.r[29].w[0] + 608u);
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    set32(c.r[6], c.r[29].w[0] + 240u);
    st32((c.r[29].w[0] + 248u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[29].w[0] + 240u), c.f[2]);
    st32((c.r[29].w[0] + 244u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D38A8u); st32((c.r[29].w[0] + 252u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002D38A8u) [[unlikely]] return; }
L_002D38A8:
    c.f[3] = ld32((c.r[29].w[0] + 180u));
    c.f[2] = ld32((c.r[29].w[0] + 184u));
    c.f[1] = ld32((c.r[29].w[0] + 188u));
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    st32((c.r[18].w[0]), c.f[0]);
    st32((c.r[18].w[0] + 4u), c.f[3]);
    st32((c.r[18].w[0] + 8u), c.f[2]);
    st32((c.r[18].w[0] + 12u), c.f[1]);
    c.budget -= 8;
L_002D38C8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 592u));  goto L_002D38F4; }
    c.f[0] = ld32((c.r[29].w[0] + 608u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 612u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 616u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 620u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 592u));
    c.budget -= 9;
L_002D38F4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D3930; } }
    c.f[0] = ld32((c.r[29].w[0] + 596u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D3930; } }
    c.f[0] = ld32((c.r[29].w[0] + 600u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D3930; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[29].w[0] + 600u), c.r[2].w[0]);
    c.budget -= 2;
L_002D3930:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002D3958; } }
    c.f[0] = ld32((c.r[29].w[0] + 592u));
    st32((c.r[21].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 596u));
    st32((c.r[21].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 600u));
    st32((c.r[21].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 604u));
    st32((c.r[21].w[0] + 12u), c.f[0]);
    c.budget -= 8;
L_002D3958:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002D3A2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3968u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002D3968u) [[unlikely]] return; }
L_002D3968:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_002D39C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3980u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002D3980u) [[unlikely]] return; }
L_002D3980:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D398Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002D398Cu) [[unlikely]] return; }
L_002D398C:
    c.f[12] = ld32((c.r[29].w[0] + 592u));
    c.f[13] = ld32((c.r[29].w[0] + 596u));
    c.f[14] = ld32((c.r[29].w[0] + 600u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D39A0u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_003A(c, 294u, depth + 1u); else { c.pc = 0x0020AC90u; return; } if (c.pc != 0x002D39A0u) [[unlikely]] return; }
L_002D39A0:
    set32(c.r[6], ld32((c.r[29].w[0] + 320u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 324u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 328u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D39B8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x002D39B8u) [[unlikely]] return; }
L_002D39B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D3A28; } }
L_002D39C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D39C8u);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002D39C8u) [[unlikely]] return; }
L_002D39C8:
    set32(c.r[5], c.r[2].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D39D4u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002D39D4u) [[unlikely]] return; }
L_002D39D4:
    c.f[0] = ld32((c.r[29].w[0] + 308u));
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.f[2] = ld32((c.r[29].w[0] + 312u));
    set32(c.r[5], c.r[29].w[0] + 592u);
    c.f[1] = ld32((c.r[29].w[0] + 316u));
    set32(c.r[6], c.r[29].w[0] + 304u);
    c.f[3] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[29].w[0] + 304u));
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[29].w[0] + 308u), c.f[3]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 312u), c.f[2]);
    st32((c.r[29].w[0] + 316u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3A10u); st32((c.r[29].w[0] + 304u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x002D3A10u) [[unlikely]] return; }
L_002D3A10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 304u);
    set32(c.r[6], c.r[29].w[0] + 288u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3A28u); set32(c.r[7], c.r[29].w[0] + 592u);  if (depth < kMaxDepth) unit_0068(c, 194u, depth + 1u); else { c.pc = 0x002C24C0u; return; } if (c.pc != 0x002D3A28u) [[unlikely]] return; }
L_002D3A28:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002D3A2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 624u);  c.pc = t; return; }
L_002D3A70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[2] = ld32((c.r[4].w[0] + 200u));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 192u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 68u), 0u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 72u), c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3AB0u); st32((c.r[29].w[0] + 64u), c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002D3AB0u) [[unlikely]] return; }
L_002D3AB0:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[29].w[0] + 64u));  goto L_002D3B28; }
    set32(c.r[3], ld32((c.r[16].w[0] + 1304u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D3B24; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3ADCu); set32(c.r[5], c.r[16].w[0] + 1264u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x002D3ADCu) [[unlikely]] return; }
L_002D3ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3AE4u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0005(c, 134u, depth + 1u); else { c.pc = 0x00137278u; return; } if (c.pc != 0x002D3AE4u) [[unlikely]] return; }
L_002D3AE4:
    c.f[1] = ld32((c.r[28].w[0] - 32192u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002D3B60; }
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3B14u); set32(c.r[6], c.r[16].w[0] + 1264u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x002D3B14u) [[unlikely]] return; }
L_002D3B14:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 1264u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3B24u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x002D3B24u) [[unlikely]] return; }
L_002D3B24:
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002D3B28:
    c.f[13] = ld32((c.r[29].w[0] + 68u));
    c.f[14] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3B38u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003A(c, 294u, depth + 1u); else { c.pc = 0x0020AC90u; return; } if (c.pc != 0x002D3B38u) [[unlikely]] return; }
L_002D3B38:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    st32((c.r[16].w[0] + 244u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
L_002D3B60:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D3B70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 208u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 212u));
    st32((c.r[4].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 216u));
    st32((c.r[4].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 220u));
    st32((c.r[4].w[0] + 204u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 256u)));
    st32((c.r[4].w[0] + 240u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 260u)));
    st32((c.r[4].w[0] + 244u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 264u)));
    st32((c.r[4].w[0] + 248u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 268u)));
    st32((c.r[4].w[0] + 252u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 304u));
    st32((c.r[4].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 308u));
    st32((c.r[4].w[0] + 292u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 312u));
    st32((c.r[4].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 316u));
    st32((c.r[4].w[0] + 300u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3C00u); st32((c.r[4].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006C(c, 269u, depth + 1u); else { c.pc = 0x002D2C80u; return; } if (c.pc != 0x002D3C00u) [[unlikely]] return; }
L_002D3C00:
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[16].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002D3C58; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 122u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3C28u); st16((c.r[16].w[0] + 124u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_005A(c, 5u, depth + 1u); else { c.pc = 0x00288060u; return; } if (c.pc != 0x002D3C28u) [[unlikely]] return; }
L_002D3C28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3C30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 290u, depth + 1u); else { c.pc = 0x0028AF40u; return; } if (c.pc != 0x002D3C30u) [[unlikely]] return; }
L_002D3C30:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3C40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D3C40u) [[unlikely]] return; }
L_002D3C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3C48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 408u, depth + 1u); else { c.pc = 0x002877B0u; return; } if (c.pc != 0x002D3C48u) [[unlikely]] return; }
L_002D3C48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3C54u); set32(c.r[5], 0u + 10700u);  if (depth < kMaxDepth) unit_0062(c, 61u, depth + 1u); else { c.pc = 0x002A8760u; return; } if (c.pc != 0x002D3C54u) [[unlikely]] return; }
L_002D3C54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002D3C58:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D3C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 192u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 196u));
    st32((c.r[4].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 200u));
    st32((c.r[4].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 204u));
    st32((c.r[4].w[0] + 220u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 240u)));
    st32((c.r[4].w[0] + 256u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 244u)));
    st32((c.r[4].w[0] + 260u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 248u)));
    st32((c.r[4].w[0] + 264u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 252u)));
    st32((c.r[4].w[0] + 268u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 288u));
    st32((c.r[4].w[0] + 304u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 292u));
    st32((c.r[4].w[0] + 308u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 296u));
    st32((c.r[4].w[0] + 312u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 300u));
    st32((c.r[4].w[0] + 316u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[16].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 34;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002D3D18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3D00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 312u, depth + 1u); else { c.pc = 0x0028B280u; return; } if (c.pc != 0x002D3D00u) [[unlikely]] return; }
L_002D3D00:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3D14u); set32(c.r[5], 0u + 69u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D3D14u) [[unlikely]] return; }
L_002D3D14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002D3D18:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D3D30:
    set32(c.r[3], ld32((c.r[4].w[0] + 336u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 336u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 192u));
    st32((c.r[4].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 196u));
    st32((c.r[4].w[0] + 228u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 200u));
    st32((c.r[4].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 204u));
    st32((c.r[4].w[0] + 236u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 240u)));
    st32((c.r[4].w[0] + 272u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 244u)));
    st32((c.r[4].w[0] + 276u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 248u)));
    st32((c.r[4].w[0] + 280u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 252u)));
    st32((c.r[4].w[0] + 284u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 288u));
    st32((c.r[4].w[0] + 320u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 292u));
    st32((c.r[4].w[0] + 324u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 296u));
    st32((c.r[4].w[0] + 328u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 300u));
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 332u), c.f[0]);  c.pc = t; return; }
L_002D3DA0:
    set32(c.r[5], ld32((c.r[4].w[0] + 336u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[4].w[0] + 336u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 224u));
    st32((c.r[4].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 228u));
    st32((c.r[4].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 232u));
    st32((c.r[4].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 236u));
    st32((c.r[4].w[0] + 204u), c.f[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 272u)));
    st32((c.r[4].w[0] + 240u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 276u)));
    st32((c.r[4].w[0] + 244u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 280u)));
    st32((c.r[4].w[0] + 248u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 284u)));
    st32((c.r[4].w[0] + 252u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 320u));
    st32((c.r[4].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 324u));
    st32((c.r[4].w[0] + 292u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 328u));
    st32((c.r[4].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 332u));
    st32((c.r[4].w[0] + 300u), c.f[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 176u), c.r[3].w[0]);  c.pc = t; return; }
L_002D3E30:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 108u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3E70u); c.r[18].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D3E70u) [[unlikely]] return; }
L_002D3E70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  [[clang::musttail]] return unit_006D(c, 9u, depth); }
    set32(c.r[4], ld32((c.r[20].w[0] + 1180u)));
    set32(c.r[3], 0u + 23u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 176u)));  goto L_002D3EC0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 648u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3EA0u); set32(c.r[4], c.r[3].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x002D3EA0u) [[unlikely]] return; }
L_002D3EA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 172u)));  goto L_002D3ED0; }
    set32(c.r[3], ld32((c.r[2].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D3ECC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_006D(c, 8u, depth); } }
L_002D3EC0:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_006D(c, 8u, depth); } }
L_002D3ECC:
    set32(c.r[3], ld32((c.r[20].w[0] + 172u)));
    c.budget -= 1;
L_002D3ED0:
    c.r[3].d[0] = c.r[3].d[0] & 264ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_006D(c, 8u, depth); } }
    set32(c.r[2], ld32((c.r[20].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[20].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  [[clang::musttail]] return unit_006D(c, 5u, depth); }
    set32(c.r[2], ld32((c.r[28].w[0] - 30324u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D3F08; }
    set32(c.r[2], ld32((c.r[2].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 2;
L_002D3F08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_006D(c, 4u, depth); } }
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_006D(c, 4u, depth); } }
    set32(c.r[2], ld32((c.r[20].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_006D(c, 4u, depth); } }
    set32(c.r[2], ld32((c.r[20].w[0] + 1320u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  goto L_002D3F4C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 176u)));
    c.r[19].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] & 512ull;  if (t) { [[clang::musttail]] return unit_006D(c, 4u, depth); } }
L_002D3F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3F54u); set32(c.r[17], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_000D(c, 364u, depth + 1u); else { c.pc = 0x001575E0u; return; } if (c.pc != 0x002D3F54u) [[unlikely]] return; }
L_002D3F54:
    c.f[12] = ld32((c.r[20].w[0] + 800u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3F68u); set32(c.r[6], c.r[20].w[0] + 784u);  if (depth < kMaxDepth) unit_000F(c, 64u, depth + 1u); else { c.pc = 0x0015C830u; return; } if (c.pc != 0x002D3F68u) [[unlikely]] return; }
L_002D3F68:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[0] = ld32((c.r[20].w[0] + 784u));  goto L_002D3F78; }
    set32(c.r[19], 0u + 1u);
    c.f[0] = ld32((c.r[20].w[0] + 784u));
    c.budget -= 2;
L_002D3F78:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 788u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 792u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 796u));
    st32((c.r[29].w[0] + 124u), c.f[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_002D3FD4; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 176u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[3].d[0] & 15ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
L_002D3FD4:
    c.f[1] = ld32((c.r[20].w[0] + 644u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = ld32((c.r[20].w[0] + 628u));
    c.f[21] = ld32((c.r[20].w[0] + 656u));
    c.f[20] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3FF0u); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x002D3FF0u) [[unlikely]] return; }
L_002D3FF0:
    c.f[2] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 800u));
    c.budget -= 4;
    [[clang::musttail]] return unit_006D(c, 1u, depth);
}

}
