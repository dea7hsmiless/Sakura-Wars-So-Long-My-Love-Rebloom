#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A4[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0,
    0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0,
    0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0,
    0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 76, 0, 77, 0, 0, 0, 78, 0, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0,
    0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0,
    0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0,
    0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 136, 137, 0, 0, 0, 0, 0, 138, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0,
    0, 151, 0, 152, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0,
    0, 158, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0,
    169, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0,
    0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0,
    0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232,
    0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0,
    0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0,
    0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0,
    0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0,
    0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279,
    0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 287,
    0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0,
    0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0,
    0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00A4(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003B0000;
    case 2u: goto L_003B0014;
    case 3u: goto L_003B002C;
    case 4u: goto L_003B0040;
    case 5u: goto L_003B006C;
    case 6u: goto L_003B00A8;
    case 7u: goto L_003B00CC;
    case 8u: goto L_003B00F8;
    case 9u: goto L_003B011C;
    case 10u: goto L_003B0148;
    case 11u: goto L_003B016C;
    case 12u: goto L_003B0208;
    case 13u: goto L_003B0228;
    case 14u: goto L_003B0244;
    case 15u: goto L_003B0280;
    case 16u: goto L_003B02A0;
    case 17u: goto L_003B02BC;
    case 18u: goto L_003B02F8;
    case 19u: goto L_003B0314;
    case 20u: goto L_003B0350;
    case 21u: goto L_003B037C;
    case 22u: goto L_003B0390;
    case 23u: goto L_003B03C0;
    case 24u: goto L_003B03E8;
    case 25u: goto L_003B03FC;
    case 26u: goto L_003B0440;
    case 27u: goto L_003B0468;
    case 28u: goto L_003B047C;
    case 29u: goto L_003B04B0;
    case 30u: goto L_003B04D8;
    case 31u: goto L_003B04EC;
    case 32u: goto L_003B0520;
    case 33u: goto L_003B054C;
    case 34u: goto L_003B0560;
    case 35u: goto L_003B0590;
    case 36u: goto L_003B05B8;
    case 37u: goto L_003B05CC;
    case 38u: goto L_003B0608;
    case 39u: goto L_003B063C;
    case 40u: goto L_003B0650;
    case 41u: goto L_003B06B8;
    case 42u: goto L_003B06E0;
    case 43u: goto L_003B06F4;
    case 44u: goto L_003B0708;
    case 45u: goto L_003B0728;
    case 46u: goto L_003B0754;
    case 47u: goto L_003B076C;
    case 48u: goto L_003B0798;
    case 49u: goto L_003B07C4;
    case 50u: goto L_003B07DC;
    case 51u: goto L_003B0808;
    case 52u: goto L_003B0830;
    case 53u: goto L_003B0848;
    case 54u: goto L_003B0878;
    case 55u: goto L_003B08A0;
    case 56u: goto L_003B08B8;
    case 57u: goto L_003B08F0;
    case 58u: goto L_003B0918;
    case 59u: goto L_003B0930;
    case 60u: goto L_003B0960;
    case 61u: goto L_003B0990;
    case 62u: goto L_003B09A8;
    case 63u: goto L_003B09E8;
    case 64u: goto L_003B0A18;
    case 65u: goto L_003B0A30;
    case 66u: goto L_003B0A70;
    case 67u: goto L_003B0AA4;
    case 68u: goto L_003B0ABC;
    case 69u: goto L_003B0B00;
    case 70u: goto L_003B0B28;
    case 71u: goto L_003B0B30;
    case 72u: goto L_003B0B38;
    case 73u: goto L_003B0B40;
    case 74u: goto L_003B0B48;
    case 75u: goto L_003B0B50;
    case 76u: goto L_003B0B58;
    case 77u: goto L_003B0B60;
    case 78u: goto L_003B0B70;
    case 79u: goto L_003B0B84;
    case 80u: goto L_003B0BB0;
    case 81u: goto L_003B0BC4;
    case 82u: goto L_003B0BF0;
    case 83u: goto L_003B0C38;
    case 84u: goto L_003B0CC8;
    case 85u: goto L_003B0D58;
    case 86u: goto L_003B0D94;
    case 87u: goto L_003B0DA0;
    case 88u: goto L_003B0E58;
    case 89u: goto L_003B0E94;
    case 90u: goto L_003B0EC8;
    case 91u: goto L_003B0EF8;
    case 92u: goto L_003B0F2C;
    case 93u: goto L_003B0F3C;
    case 94u: goto L_003B0F70;
    case 95u: goto L_003B100C;
    case 96u: goto L_003B1040;
    case 97u: goto L_003B106C;
    case 98u: goto L_003B1088;
    case 99u: goto L_003B10F8;
    case 100u: goto L_003B112C;
    case 101u: goto L_003B1150;
    case 102u: goto L_003B118C;
    case 103u: goto L_003B11A8;
    case 104u: goto L_003B11B0;
    case 105u: goto L_003B11C4;
    case 106u: goto L_003B11D8;
    case 107u: goto L_003B1208;
    case 108u: goto L_003B1228;
    case 109u: goto L_003B1258;
    case 110u: goto L_003B1298;
    case 111u: goto L_003B12C0;
    case 112u: goto L_003B12E8;
    case 113u: goto L_003B1300;
    case 114u: goto L_003B1328;
    case 115u: goto L_003B1350;
    case 116u: goto L_003B1358;
    case 117u: goto L_003B1398;
    case 118u: goto L_003B13D0;
    case 119u: goto L_003B1440;
    case 120u: goto L_003B1508;
    case 121u: goto L_003B1518;
    case 122u: goto L_003B1544;
    case 123u: goto L_003B1568;
    case 124u: goto L_003B15A8;
    case 125u: goto L_003B15D8;
    case 126u: goto L_003B15F8;
    case 127u: goto L_003B1618;
    case 128u: goto L_003B1638;
    case 129u: goto L_003B1658;
    case 130u: goto L_003B1678;
    case 131u: goto L_003B1698;
    case 132u: goto L_003B16B8;
    case 133u: goto L_003B16F8;
    case 134u: goto L_003B1748;
    case 135u: goto L_003B1750;
    case 136u: goto L_003B175C;
    case 137u: goto L_003B1760;
    case 138u: goto L_003B1778;
    case 139u: goto L_003B17B8;
    case 140u: goto L_003B17F0;
    case 141u: goto L_003B1840;
    case 142u: goto L_003B1868;
    case 143u: goto L_003B1970;
    case 144u: goto L_003B1990;
    case 145u: goto L_003B19C8;
    case 146u: goto L_003B19E8;
    case 147u: goto L_003B1A28;
    case 148u: goto L_003B1AC8;
    case 149u: goto L_003B1AD0;
    case 150u: goto L_003B1AF4;
    case 151u: goto L_003B1B04;
    case 152u: goto L_003B1B0C;
    case 153u: goto L_003B1B14;
    case 154u: goto L_003B1B1C;
    case 155u: goto L_003B1B40;
    case 156u: goto L_003B1B50;
    case 157u: goto L_003B1B74;
    case 158u: goto L_003B1B84;
    case 159u: goto L_003B1B8C;
    case 160u: goto L_003B1BA0;
    case 161u: goto L_003B1BC4;
    case 162u: goto L_003B1BCC;
    case 163u: goto L_003B1BD4;
    case 164u: goto L_003B1BDC;
    case 165u: goto L_003B1BF8;
    case 166u: goto L_003B1C10;
    case 167u: goto L_003B1C40;
    case 168u: goto L_003B1C5C;
    case 169u: goto L_003B1C80;
    case 170u: goto L_003B1C90;
    case 171u: goto L_003B1C98;
    case 172u: goto L_003B1CB4;
    case 173u: goto L_003B1CDC;
    case 174u: goto L_003B1CE4;
    case 175u: goto L_003B1D28;
    case 176u: goto L_003B1D48;
    case 177u: goto L_003B1D78;
    case 178u: goto L_003B1DA4;
    case 179u: goto L_003B1E20;
    case 180u: goto L_003B1E30;
    case 181u: goto L_003B1E54;
    case 182u: goto L_003B1E5C;
    case 183u: goto L_003B1E80;
    case 184u: goto L_003B1EB4;
    case 185u: goto L_003B1EC0;
    case 186u: goto L_003B1F20;
    case 187u: goto L_003B1F30;
    case 188u: goto L_003B1F38;
    case 189u: goto L_003B1F70;
    case 190u: goto L_003B1F9C;
    case 191u: goto L_003B1FD0;
    case 192u: goto L_003B1FE0;
    case 193u: goto L_003B2030;
    case 194u: goto L_003B2048;
    case 195u: goto L_003B205C;
    case 196u: goto L_003B2078;
    case 197u: goto L_003B20C8;
    case 198u: goto L_003B20F8;
    case 199u: goto L_003B2118;
    case 200u: goto L_003B2148;
    case 201u: goto L_003B216C;
    case 202u: goto L_003B21A0;
    case 203u: goto L_003B21A8;
    case 204u: goto L_003B22E0;
    case 205u: goto L_003B22F0;
    case 206u: goto L_003B2318;
    case 207u: goto L_003B2340;
    case 208u: goto L_003B2364;
    case 209u: goto L_003B2370;
    case 210u: goto L_003B23C8;
    case 211u: goto L_003B23E0;
    case 212u: goto L_003B23F8;
    case 213u: goto L_003B2418;
    case 214u: goto L_003B2438;
    case 215u: goto L_003B2458;
    case 216u: goto L_003B2558;
    case 217u: goto L_003B2594;
    case 218u: goto L_003B25B0;
    case 219u: goto L_003B25B8;
    case 220u: goto L_003B25CC;
    case 221u: goto L_003B25E0;
    case 222u: goto L_003B2610;
    case 223u: goto L_003B2630;
    case 224u: goto L_003B2660;
    case 225u: goto L_003B2678;
    case 226u: goto L_003B26A0;
    case 227u: goto L_003B2750;
    case 228u: goto L_003B277C;
    case 229u: goto L_003B27E0;
    case 230u: goto L_003B282C;
    case 231u: goto L_003B2860;
    case 232u: goto L_003B287C;
    case 233u: goto L_003B28A0;
    case 234u: goto L_003B28C4;
    case 235u: goto L_003B28F8;
    case 236u: goto L_003B2954;
    case 237u: goto L_003B2978;
    case 238u: goto L_003B29B8;
    case 239u: goto L_003B29E0;
    case 240u: goto L_003B2A08;
    case 241u: goto L_003B2A40;
    case 242u: goto L_003B2A78;
    case 243u: goto L_003B2AA8;
    case 244u: goto L_003B2AD0;
    case 245u: goto L_003B2AF4;
    case 246u: goto L_003B2B08;
    case 247u: goto L_003B2B20;
    case 248u: goto L_003B2B60;
    case 249u: goto L_003B2B74;
    case 250u: goto L_003B2BF4;
    case 251u: goto L_003B2C18;
    case 252u: goto L_003B2C34;
    case 253u: goto L_003B2C50;
    case 254u: goto L_003B2CCC;
    case 255u: goto L_003B2CE0;
    case 256u: goto L_003B2D30;
    case 257u: goto L_003B2DF0;
    case 258u: goto L_003B2E14;
    case 259u: goto L_003B2E34;
    case 260u: goto L_003B2E58;
    case 261u: goto L_003B2EA0;
    case 262u: goto L_003B2EE0;
    case 263u: goto L_003B2EF0;
    case 264u: goto L_003B2F18;
    case 265u: goto L_003B2F90;
    case 266u: goto L_003B2FB8;
    case 267u: goto L_003B3020;
    case 268u: goto L_003B302C;
    case 269u: goto L_003B31E0;
    case 270u: goto L_003B3240;
    case 271u: goto L_003B3250;
    case 272u: goto L_003B3264;
    case 273u: goto L_003B3274;
    case 274u: goto L_003B32A0;
    case 275u: goto L_003B3328;
    case 276u: goto L_003B3378;
    case 277u: goto L_003B3388;
    case 278u: goto L_003B33B0;
    case 279u: goto L_003B33FC;
    case 280u: goto L_003B3410;
    case 281u: goto L_003B3430;
    case 282u: goto L_003B3454;
    case 283u: goto L_003B3480;
    case 284u: goto L_003B34B0;
    case 285u: goto L_003B34D8;
    case 286u: goto L_003B34EC;
    case 287u: goto L_003B34FC;
    case 288u: goto L_003B3510;
    case 289u: goto L_003B351C;
    case 290u: goto L_003B352C;
    case 291u: goto L_003B3540;
    case 292u: goto L_003B35CC;
    case 293u: goto L_003B35E8;
    case 294u: goto L_003B3604;
    case 295u: goto L_003B3620;
    case 296u: goto L_003B3658;
    case 297u: goto L_003B3668;
    case 298u: goto L_003B3698;
    case 299u: goto L_003B36A8;
    case 300u: goto L_003B36D8;
    case 301u: goto L_003B36E8;
    case 302u: goto L_003B3718;
    case 303u: goto L_003B3734;
    case 304u: goto L_003B3748;
    case 305u: goto L_003B3778;
    case 306u: goto L_003B379C;
    case 307u: goto L_003B37BC;
    case 308u: goto L_003B37D8;
    case 309u: goto L_003B3808;
    case 310u: goto L_003B382C;
    case 311u: goto L_003B3840;
    case 312u: goto L_003B3878;
    case 313u: goto L_003B38C0;
    case 314u: goto L_003B38F8;
    case 315u: goto L_003B3940;
    case 316u: goto L_003B3978;
    case 317u: goto L_003B39C0;
    case 318u: goto L_003B39F8;
    case 319u: goto L_003B3A40;
    case 320u: goto L_003B3A88;
    case 321u: goto L_003B3AA0;
    case 322u: goto L_003B3AB8;
    case 323u: goto L_003B3B10;
    case 324u: goto L_003B3B20;
    case 325u: goto L_003B3B38;
    case 326u: goto L_003B3B4C;
    case 327u: goto L_003B3B80;
    case 328u: goto L_003B3B90;
    case 329u: goto L_003B3BB0;
    case 330u: goto L_003B3C04;
    case 331u: goto L_003B3C20;
    case 332u: goto L_003B3C38;
    case 333u: goto L_003B3CE8;
    case 334u: goto L_003B3D58;
    case 335u: goto L_003B3E80;
    case 336u: goto L_003B3E90;
    case 337u: goto L_003B3EB0;
    case 338u: goto L_003B3EC8;
    default: bad_entry(c, 0x003B0000u); return;
    }
L_003B0000:
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0014u); set32(c.r[16], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_00A3(c, 344u, depth + 1u); else { c.pc = 0x003AF6D0u; return; } if (c.pc != 0x003B0014u) [[unlikely]] return; }
L_003B0014:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B002C; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
L_003B002C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B0040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st32((c.r[18].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B006Cu); set32(c.r[17], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_00A3(c, 344u, depth + 1u); else { c.pc = 0x003AF6D0u; return; } if (c.pc != 0x003B006Cu) [[unlikely]] return; }
L_003B006C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B0094; }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].sd[0] < 110ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B0090; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003B0090:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B0094:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B00A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B00CCu); set32(c.r[16], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_00A3(c, 344u, depth + 1u); else { c.pc = 0x003AF6D0u; return; } if (c.pc != 0x003B00CCu) [[unlikely]] return; }
L_003B00CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B00E4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
L_003B00E4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B00F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B011Cu); set32(c.r[16], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_00A3(c, 344u, depth + 1u); else { c.pc = 0x003AF6D0u; return; } if (c.pc != 0x003B011Cu) [[unlikely]] return; }
L_003B011C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B0134; }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
L_003B0134:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B0148:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B016Cu); set32(c.r[16], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_00A3(c, 344u, depth + 1u); else { c.pc = 0x003AF6D0u; return; } if (c.pc != 0x003B016Cu) [[unlikely]] return; }
L_003B016C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B0184; }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
L_003B0184:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B0208:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0228u); st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A4(c, 18u, depth + 1u); else { c.pc = 0x003B02F8u; return; } if (c.pc != 0x003B0228u) [[unlikely]] return; }
L_003B0228:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[6], 0u + 13u);  if (t) { goto L_003B0268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0244u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003B0244u) [[unlikely]] return; }
L_003B0244:
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
L_003B0268:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B0280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B02A0u); st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A4(c, 18u, depth + 1u); else { c.pc = 0x003B02F8u; return; } if (c.pc != 0x003B02A0u) [[unlikely]] return; }
L_003B02A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[6], 0u + 13u);  if (t) { goto L_003B02E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B02BCu);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003B02BCu) [[unlikely]] return; }
L_003B02BC:
    set32(c.r[2], 0u + 1u);
    ldl(c.r[3], (c.r[17].w[0] + 19u));
    ldr(c.r[3], (c.r[17].w[0] + 12u));
    lwl(c.r[4], (c.r[17].w[0] + 23u));
    lwr(c.r[4], (c.r[17].w[0] + 20u));
    sdl(c.r[3], (c.r[16].w[0] + 7u));
    sdr(c.r[3], (c.r[16].w[0]));
    swl(c.r[4], (c.r[16].w[0] + 11u));
    swr(c.r[4], (c.r[16].w[0] + 8u));
    c.budget -= 9;
L_003B02E0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B02F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0314u); set32(c.r[17], ld32((c.r[4].w[0] + 4u)));  if (depth < kMaxDepth) unit_00A3(c, 344u, depth + 1u); else { c.pc = 0x003AF6D0u; return; } if (c.pc != 0x003B0314u) [[unlikely]] return; }
L_003B0314:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B0338; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF970u | kUnwind; return; } [[clang::musttail]] return unit_00A3(c, 360u, depth); }
L_003B0338:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B0350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] & 255ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B037Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 18u, depth + 1u); else { c.pc = 0x003B02F8u; return; } if (c.pc != 0x003B037Cu) [[unlikely]] return; }
L_003B037C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B03A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0390u);  if (depth < kMaxDepth) unit_00A4(c, 82u, depth + 1u); else { c.pc = 0x003B0BF0u; return; } if (c.pc != 0x003B0390u) [[unlikely]] return; }
L_003B0390:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B03A8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003B03A8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B03C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] & 255ull;
    st32((c.r[18].w[0]), 0u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B03E8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 18u, depth + 1u); else { c.pc = 0x003B02F8u; return; } if (c.pc != 0x003B03E8u) [[unlikely]] return; }
L_003B03E8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B0428; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B03FCu);  if (depth < kMaxDepth) unit_00A4(c, 82u, depth + 1u); else { c.pc = 0x003B0BF0u; return; } if (c.pc != 0x003B03FCu) [[unlikely]] return; }
L_003B03FC:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_003B0410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B0428; } }
L_003B0410:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B0428; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 26u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003B0428:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B0440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] & 255ull;
    st32((c.r[18].w[0]), 0u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0468u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 18u, depth + 1u); else { c.pc = 0x003B02F8u; return; } if (c.pc != 0x003B0468u) [[unlikely]] return; }
L_003B0468:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B0494; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B047Cu);  if (depth < kMaxDepth) unit_00A4(c, 82u, depth + 1u); else { c.pc = 0x003B0BF0u; return; } if (c.pc != 0x003B047Cu) [[unlikely]] return; }
L_003B047C:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B0494; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 27u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003B0494:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B04B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] & 255ull;
    st32((c.r[18].w[0]), 0u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B04D8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 18u, depth + 1u); else { c.pc = 0x003B02F8u; return; } if (c.pc != 0x003B04D8u) [[unlikely]] return; }
L_003B04D8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B0504; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B04ECu);  if (depth < kMaxDepth) unit_00A4(c, 82u, depth + 1u); else { c.pc = 0x003B0BF0u; return; } if (c.pc != 0x003B04ECu) [[unlikely]] return; }
L_003B04EC:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B0504; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003B0504:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B0520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] & 255ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B054Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 18u, depth + 1u); else { c.pc = 0x003B02F8u; return; } if (c.pc != 0x003B054Cu) [[unlikely]] return; }
L_003B054C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B0578; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0560u);  if (depth < kMaxDepth) unit_00A4(c, 82u, depth + 1u); else { c.pc = 0x003B0BF0u; return; } if (c.pc != 0x003B0560u) [[unlikely]] return; }
L_003B0560:
    set32(c.r[3], 0u + 224u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B0578; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003B0578:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B0590:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] & 255ull;
    st32((c.r[18].w[0]), 0u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B05B8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 18u, depth + 1u); else { c.pc = 0x003B02F8u; return; } if (c.pc != 0x003B05B8u) [[unlikely]] return; }
L_003B05B8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B05EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B05CCu);  if (depth < kMaxDepth) unit_00A4(c, 82u, depth + 1u); else { c.pc = 0x003B0BF0u; return; } if (c.pc != 0x003B05CCu) [[unlikely]] return; }
L_003B05CC:
    set32(c.r[3], 0u + 224u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B05EC; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 26u));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[3].d[0] ^ 65535ull;
    if (c.r[4].d[0] == 0) c.r[3].d[0] = 0ull;
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_003B05EC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B0608:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] & 255ull;
    st32((c.r[18].w[0]), 0u);
    st32((c.r[19].w[0]), 0u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B063Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 18u, depth + 1u); else { c.pc = 0x003B02F8u; return; } if (c.pc != 0x003B063Cu) [[unlikely]] return; }
L_003B063C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B069C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0650u);  if (depth < kMaxDepth) unit_00A4(c, 82u, depth + 1u); else { c.pc = 0x003B0BF0u; return; } if (c.pc != 0x003B0650u) [[unlikely]] return; }
L_003B0650:
    set32(c.r[3], 0u + 224u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B069C; } }
    set32(c.r[5], c.r[17].w[0] + 28u);
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    st32((c.r[18].w[0]), c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] >> 4);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 4095ull;
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.budget -= 16;
L_003B069C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B06B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] & 255ull;
    st32((c.r[18].w[0]), 0u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B06E0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 18u, depth + 1u); else { c.pc = 0x003B02F8u; return; } if (c.pc != 0x003B06E0u) [[unlikely]] return; }
L_003B06E0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B0710; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B06F4u);  if (depth < kMaxDepth) unit_00A4(c, 82u, depth + 1u); else { c.pc = 0x003B0BF0u; return; } if (c.pc != 0x003B06F4u) [[unlikely]] return; }
L_003B06F4:
    set32(c.r[3], 0u + 224u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B0710; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0708u); c.r[4].d[0] = ld8((c.r[17].w[0] + 31u));  if (depth < kMaxDepth) unit_00A4(c, 69u, depth + 1u); else { c.pc = 0x003B0B00u; return; } if (c.pc != 0x003B0708u) [[unlikely]] return; }
L_003B0708:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_003B0710:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B0728:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] & 255ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0754u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 18u, depth + 1u); else { c.pc = 0x003B02F8u; return; } if (c.pc != 0x003B0754u) [[unlikely]] return; }
L_003B0754:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B0780; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B076Cu);  if (depth < kMaxDepth) unit_00A4(c, 80u, depth + 1u); else { c.pc = 0x003B0BB0u; return; } if (c.pc != 0x003B076Cu) [[unlikely]] return; }
L_003B076C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B0784; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 33u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003B0780:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B0784:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B0798:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] & 255ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B07C4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 18u, depth + 1u); else { c.pc = 0x003B02F8u; return; } if (c.pc != 0x003B07C4u) [[unlikely]] return; }
L_003B07C4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B07F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B07DCu);  if (depth < kMaxDepth) unit_00A4(c, 80u, depth + 1u); else { c.pc = 0x003B0BB0u; return; } if (c.pc != 0x003B07DCu) [[unlikely]] return; }
L_003B07DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B07F4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 34u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003B07F0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B07F4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B0808:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] & 255ull;
    st32((c.r[18].w[0]), 0u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0830u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 18u, depth + 1u); else { c.pc = 0x003B02F8u; return; } if (c.pc != 0x003B0830u) [[unlikely]] return; }
L_003B0830:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B0860; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0848u);  if (depth < kMaxDepth) unit_00A4(c, 80u, depth + 1u); else { c.pc = 0x003B0BB0u; return; } if (c.pc != 0x003B0848u) [[unlikely]] return; }
L_003B0848:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B0864; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 35u));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003B0860:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B0864:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B0878:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] & 255ull;
    st32((c.r[18].w[0]), 0u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B08A0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 18u, depth + 1u); else { c.pc = 0x003B02F8u; return; } if (c.pc != 0x003B08A0u) [[unlikely]] return; }
L_003B08A0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B08D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B08B8u);  if (depth < kMaxDepth) unit_00A4(c, 80u, depth + 1u); else { c.pc = 0x003B0BB0u; return; } if (c.pc != 0x003B08B8u) [[unlikely]] return; }
L_003B08B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B08D8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 35u));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_003B08D4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B08D8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B08F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] & 255ull;
    st32((c.r[18].w[0]), 0u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0918u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 18u, depth + 1u); else { c.pc = 0x003B02F8u; return; } if (c.pc != 0x003B0918u) [[unlikely]] return; }
L_003B0918:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B0944; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0930u);  if (depth < kMaxDepth) unit_00A4(c, 80u, depth + 1u); else { c.pc = 0x003B0BB0u; return; } if (c.pc != 0x003B0930u) [[unlikely]] return; }
L_003B0930:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B0948; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 36u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003B0944:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B0948:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B0960:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[19], 0u - 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] & 255ull;
    st32((c.r[18].w[0]), c.r[19].w[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0990u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 18u, depth + 1u); else { c.pc = 0x003B02F8u; return; } if (c.pc != 0x003B0990u) [[unlikely]] return; }
L_003B0990:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B09C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B09A8u);  if (depth < kMaxDepth) unit_00A4(c, 80u, depth + 1u); else { c.pc = 0x003B0BB0u; return; } if (c.pc != 0x003B09A8u) [[unlikely]] return; }
L_003B09A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B09CC; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 37u));
    c.r[3].d[0] = c.r[2].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_003B09C4; } }
    st32((c.r[18].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_003B09C4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003B09C8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B09CC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B09E8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[19], 0u - 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] & 255ull;
    st32((c.r[18].w[0]), c.r[19].w[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0A18u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 18u, depth + 1u); else { c.pc = 0x003B02F8u; return; } if (c.pc != 0x003B0A18u) [[unlikely]] return; }
L_003B0A18:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B0A50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0A30u);  if (depth < kMaxDepth) unit_00A4(c, 80u, depth + 1u); else { c.pc = 0x003B0BB0u; return; } if (c.pc != 0x003B0A30u) [[unlikely]] return; }
L_003B0A30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B0A54; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 38u));
    c.r[3].d[0] = c.r[2].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_003B0A4C; } }
    st32((c.r[18].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_003B0A4C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003B0A50:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B0A54:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B0A70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] & 255ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0AA4u); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 18u, depth + 1u); else { c.pc = 0x003B02F8u; return; } if (c.pc != 0x003B0AA4u) [[unlikely]] return; }
L_003B0AA4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B0AE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0ABCu);  if (depth < kMaxDepth) unit_00A4(c, 80u, depth + 1u); else { c.pc = 0x003B0BB0u; return; } if (c.pc != 0x003B0ABCu) [[unlikely]] return; }
L_003B0ABC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B0AE4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].sd[0] < 210ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B0AE4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 39u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003B0AE0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B0AE4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B0B00:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B0B68; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 17920u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003B0000u < 16384u) { entry = entries_00A4[(t - 0x003B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B0B28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 23976u);  c.pc = t; return; }
L_003B0B30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 24000u);  c.pc = t; return; }
L_003B0B38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 25000u);  c.pc = t; return; }
L_003B0B40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 29970u);  c.pc = t; return; }
L_003B0B48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 30000u);  c.pc = t; return; }
L_003B0B50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull | 50000ull;  c.pc = t; return; }
L_003B0B58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull | 59940ull;  c.pc = t; return; }
L_003B0B60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull | 60000ull;  c.pc = t; return; }
L_003B0B68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003B0B70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0B84u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 82u, depth + 1u); else { c.pc = 0x003B0BF0u; return; } if (c.pc != 0x003B0B84u) [[unlikely]] return; }
L_003B0B84:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B0BA0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 32u));
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 4;
L_003B0BA0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B0BB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0BC4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 82u, depth + 1u); else { c.pc = 0x003B0BF0u; return; } if (c.pc != 0x003B0BC4u) [[unlikely]] return; }
L_003B0BC4:
    set32(c.r[3], 0u + 224u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B0BE0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 32u));
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 4;
L_003B0BE0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B0BF0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u + 192u);
    set32(c.r[3], c.r[5].w[0] - 192u);
    set32(c.r[4], c.r[5].w[0] - 224u);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;  if (t) { goto L_003B0C2C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], 0u + 224u);  if (t) { goto L_003B0C2C; } }
    set32(c.r[2], 0u + 189u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 191u);  if (t) { goto L_003B0C2C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B0C2C; } }
    set32(c.r[2], 0u + 189u);
    c.budget -= 1;
L_003B0C2C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B0C38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u + 97u);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[8].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003B0C98; } }
    c.r[2].d[0] = c.r[3].sd[0] < 98ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 257u);  if (t) { goto L_003B0C98; } }
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].sd[0] < 50ll ? 1ull : 0ull;  if (t) { goto L_003B0C98; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_003B0C9C; }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 33u);  if (t) { goto L_003B0CB8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B0C90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003B0CA0; } }
L_003B0C90:
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B0D58; }
L_003B0C98:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 1;
L_003B0C9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B0CA0:
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 17952u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B1E80; }
L_003B0CB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B0CC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u + 97u);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[8].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003B0D28; } }
    c.r[2].d[0] = c.r[3].sd[0] < 98ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 257u);  if (t) { goto L_003B0D28; } }
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].sd[0] < 50ll ? 1ull : 0ull;  if (t) { goto L_003B0D28; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_003B0D2C; }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 33u);  if (t) { goto L_003B0D48; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B0D20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003B0D30; } }
L_003B0D20:
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B0D58; }
L_003B0D28:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 1;
L_003B0D2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B0D30:
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 18000u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B1E80; }
L_003B0D48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B0D58:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[8], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[29].w[0] + 36u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[6].w[0]);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[7].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0D94u); st32((c.r[29].w[0] + 8u), c.r[8].w[0]);  if (depth < kMaxDepth) unit_0098(c, 29u, depth + 1u); else { c.pc = 0x00381858u; return; } if (c.pc != 0x003B0D94u) [[unlikely]] return; }
L_003B0D94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B0DA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 97u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003B0F20; } }
    c.r[2].d[0] = c.r[3].sd[0] < 98ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 257u);  if (t) { goto L_003B0E20; } }
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].sd[0] < 50ll ? 1ull : 0ull;  if (t) { goto L_003B0EF0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 65u);  if (t) { goto L_003B0E08; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 33u);  if (t) { goto L_003B0E50; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003B0F68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B0F9C; } }
L_003B0E08:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 81u);  if (t) { goto L_003B0F20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003B0F24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B0F9C; } }
L_003B0E20:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].sd[0] < 258ll ? 1ull : 0ull;  if (t) { goto L_003B0F98; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003B0F9C; }
    set32(c.r[2], 0u + 273u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4097u);  if (t) { goto L_003B0F98; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003B0EC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B0F9C; } }
    c.budget -= 1;
L_003B0E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0E58u);  if (depth < kMaxDepth) unit_00A4(c, 203u, depth + 1u); else { c.pc = 0x003B21A8u; return; } if (c.pc != 0x003B0E58u) [[unlikely]] return; }
L_003B0E58:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B0E88; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B0FC0; }
L_003B0E88:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0E94u); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_00A4(c, 123u, depth + 1u); else { c.pc = 0x003B1568u; return; } if (c.pc != 0x003B0E94u) [[unlikely]] return; }
L_003B0E94:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[7], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B0FC0; }
L_003B0EC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0EC8u); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_00A4(c, 123u, depth + 1u); else { c.pc = 0x003B1568u; return; } if (c.pc != 0x003B0EC8u) [[unlikely]] return; }
L_003B0EC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[7], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B0FC0; }
L_003B0EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0EF8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00A4(c, 123u, depth + 1u); else { c.pc = 0x003B1568u; return; } if (c.pc != 0x003B0EF8u) [[unlikely]] return; }
L_003B0EF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[7], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B0FC0; }
L_003B0F20:
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_003B0F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0F2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 121u, depth + 1u); else { c.pc = 0x003B1518u; return; } if (c.pc != 0x003B0F2Cu) [[unlikely]] return; }
L_003B0F2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0F3Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 123u, depth + 1u); else { c.pc = 0x003B1568u; return; } if (c.pc != 0x003B0F3Cu) [[unlikely]] return; }
L_003B0F3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[7], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B0FC0; }
L_003B0F68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0F70u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A4(c, 123u, depth + 1u); else { c.pc = 0x003B1568u; return; } if (c.pc != 0x003B0F70u) [[unlikely]] return; }
L_003B0F70:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B1088; }
L_003B0F98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003B0F9C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[6], c.r[6].w[0] + 18056u);
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B1E80; }
L_003B0FC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 4u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    st32((c.r[29].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B100Cu); st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A4(c, 119u, depth + 1u); else { c.pc = 0x003B1440u; return; } if (c.pc != 0x003B100Cu) [[unlikely]] return; }
L_003B100C:
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[7], 0u + 1u);  if (t) { goto L_003B1038; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_003B103C; } }
    c.budget -= 1;
L_003B1038:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_003B103C:
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 1;
L_003B1040:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 28u), c.r[2].w[0]);  goto L_003B1058; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 3;
L_003B1058:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[7].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003B1064; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 1;
L_003B1064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B106Cu);  if (depth < kMaxDepth) unit_0098(c, 4u, depth + 1u); else { c.pc = 0x00380F30u; return; } if (c.pc != 0x003B106Cu) [[unlikely]] return; }
L_003B106C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003B1088:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 4u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    set32(c.r[18], c.r[29].w[0] + 16u);
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], c.r[3].w[0] >> 31);
    set32(c.r[7], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st32((c.r[29].w[0]), c.r[7].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[19].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[8].w[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B10F8u); st32((c.r[29].w[0] + 4u), c.r[8].w[0]);  if (depth < kMaxDepth) unit_0098(c, 4u, depth + 1u); else { c.pc = 0x00380F30u; return; } if (c.pc != 0x003B10F8u) [[unlikely]] return; }
L_003B10F8:
    set32(c.r[7], ld32((c.r[16].w[0] + 72u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[6], ld32((c.r[20].w[0] + 64u)));
    st32((c.r[29].w[0] + 16u), c.r[19].w[0]);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B112Cu); st32((c.r[29].w[0] + 8u), c.r[7].w[0]);  if (depth < kMaxDepth) unit_0098(c, 38u, depth + 1u); else { c.pc = 0x00381A18u; return; } if (c.pc != 0x003B112Cu) [[unlikely]] return; }
L_003B112C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003B1150:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B1168; }
L_003B1168:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[16], c.r[16].w[0] + 10488u);
    set32(c.r[6], 0u + 200u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B118Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003B118Cu) [[unlikely]] return; }
L_003B118C:
    set32(c.r[3], 0u + 8u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B11A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B11B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B11C4u);  if (depth < kMaxDepth) unit_00A4(c, 107u, depth + 1u); else { c.pc = 0x003B1208u; return; } if (c.pc != 0x003B11C4u) [[unlikely]] return; }
L_003B11C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B11F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B11D8u);  if (depth < kMaxDepth) unit_00A4(c, 109u, depth + 1u); else { c.pc = 0x003B1258u; return; } if (c.pc != 0x003B11D8u) [[unlikely]] return; }
L_003B11D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[3].w[0] + 10488u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.budget -= 8;
L_003B11F8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B1208:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10488u);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[2], c.r[2].w[0] + 8u);  if (t) { goto L_003B124C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_003B1228:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 24u);  if (t) { goto L_003B1250; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1228u | kUnwind; return; } goto L_003B1228; } }
L_003B124C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B1250:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B1258:
    set32(c.r[3], c.r[4].w[0] + 20u);
    set32(c.r[2], c.r[4].w[0] + 8u);
    set32(c.r[9], 0u + 31u);
    set32(c.r[5], 0u + 100u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 64u);
    set32(c.r[6], 0u - 128u);
    st32((c.r[2].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), c.r[7].w[0]);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003B1298:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B12B8; } }
    st32((c.r[4].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[3].w[0] + 10488u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_003B12B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B12C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], c.r[16].w[0] + 8u);
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B12E8u); set32(c.r[5], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_0098(c, 10u, depth + 1u); else { c.pc = 0x00381098u; return; } if (c.pc != 0x003B12E8u) [[unlikely]] return; }
L_003B12E8:
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B1300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[7].d[0] = ld8((c.r[2].w[0] + 22u));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 20u));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 21u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003812E8u | kUnwind; return; } [[clang::musttail]] return unit_0098(c, 15u, depth); }
L_003B1328:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[7].d[0] = ld8((c.r[2].w[0] + 22u));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 20u));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 21u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00381540u | kUnwind; return; } [[clang::musttail]] return unit_0098(c, 20u, depth); }
L_003B1350:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  c.pc = t; return; }
L_003B1358:
    set32(c.r[2], c.r[4].w[0] + 8u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[2].w[0]), c.r[7].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_003B1398:
    set32(c.r[4], c.r[4].w[0] + 20u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));  c.pc = t; return; }
L_003B13D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[2].w[0] + 72u), c.r[8].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 68u), c.r[7].w[0]);
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B2290; }
L_003B1440:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 97u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].sd[0] < 98ll ? 1ull : 0ull;  if (t) { goto L_003B1508; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 257u);  if (t) { goto L_003B14A8; } }
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].sd[0] < 50ll ? 1ull : 0ull;  if (t) { goto L_003B1508; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 65u);  if (t) { goto L_003B1490; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 33u);  if (t) { goto L_003B1508; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003B14F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003B14FC; } }
L_003B1490:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 81u);  if (t) { goto L_003B1508; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003B1508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003B14FC; } }
L_003B14A8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003B150C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 258ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 273u);  if (t) { goto L_003B14D8; } }
    set32(c.r[2], 0u + 113u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 241u);  if (t) { goto L_003B1508; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003B1508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003B14FC; } }
L_003B14D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4097u);  if (t) { goto L_003B1508; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003B14F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B150C; } }
L_003B14F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003B150C; } }
L_003B14F8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B14FC:
    set32(c.r[6], c.r[6].w[0] + 18128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1508u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 183u, depth + 1u); else { c.pc = 0x003B1E80u; return; } if (c.pc != 0x003B1508u) [[unlikely]] return; }
L_003B1508:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B150C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B1518:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], 0u + 81u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[16].d[0]; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003B1554; } }
    set32(c.r[3], 0u + 97u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_003B1554; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1544u);  if (depth < kMaxDepth) unit_00A4(c, 188u, depth + 1u); else { c.pc = 0x003B1F38u; return; } if (c.pc != 0x003B1544u) [[unlikely]] return; }
L_003B1544:
    set32(c.r[4], 0u + 5u);
    c.r[3].d[0] = c.r[2].d[0] ^ c.r[16].d[0];
    set32(c.r[2], 0u + 4u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.budget -= 4;
L_003B1554:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B1568:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B1580; }
L_003B1580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B15A8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 133u, depth + 1u); else { c.pc = 0x003B16F8u; return; } if (c.pc != 0x003B15A8u) [[unlikely]] return; }
L_003B15A8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B16E0; }
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(101ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 60u), c.r[18].w[0]);  if (t) { goto L_003B16B8; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 18240u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003B0000u < 16384u) { entry = entries_00A4[(t - 0x003B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B15D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B1778; }
L_003B15F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B1868; }
L_003B1618:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B1888; }
L_003B1638:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B18A8; }
L_003B1658:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B18C8; }
L_003B1678:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B18E0; }
L_003B1698:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B1798; }
L_003B16B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[6], c.r[6].w[0] + 18176u);
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B1E80; }
L_003B16E0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B16F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 100u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B1764; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[5].d[0]; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B1764; } }
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(101ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B1764; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 18656u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003B0000u < 16384u) { entry = entries_00A4[(t - 0x003B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B1748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1750u); set32(c.r[4], ld32((c.r[4].w[0] + 52u)));  if (depth < kMaxDepth) unit_00A4(c, 115u, depth + 1u); else { c.pc = 0x003B1350u; return; } if (c.pc != 0x003B1750u) [[unlikely]] return; }
L_003B1750:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B1764; } }
L_003B175C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B1760:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003B1764:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B1778:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B2AD0; }
L_003B1798:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B17B0; }
L_003B17B0:
    set32(c.r[5], 0u + 15u);
    set32(c.r[2], c.r[4].w[0] + 15u);
    c.budget -= 2;
L_003B17B8:
    set32(c.r[5], c.r[5].w[0] - 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B17B8u | kUnwind; return; } goto L_003B17B8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F140000u);
    c.r[1].d[0] = c.r[1].d[0] | 65011ull;
    c.f[2] = c.r[1].w[0];
    set32(c.r[5], 0u + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[1].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 7;
L_003B17F0:
    set32(c.r[2], c.r[5].w[0] - 16u);
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.f[3] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[3]);
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = c.r[5].sd[0] < 236ll ? 1ull : 0ull;  if (t) { goto L_003B182C; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[3] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[3]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.budget -= 4;
L_003B182C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B17F0u | kUnwind; return; } goto L_003B17F0; } }
    set32(c.r[5], 0u + 236u);
    set32(c.r[6], 0u - 128u);
    c.budget -= 3;
L_003B1840:
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1840u | kUnwind; return; } goto L_003B1840; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B1868:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B12C0u | kUnwind; return; } goto L_003B12C0; }
L_003B1888:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1300u | kUnwind; return; } goto L_003B1300; }
L_003B18A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1328u | kUnwind; return; } goto L_003B1328; }
L_003B18C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003817A0u | kUnwind; return; } [[clang::musttail]] return unit_0098(c, 26u, depth); }
L_003B18E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00381798u | kUnwind; return; } [[clang::musttail]] return unit_0098(c, 25u, depth); }
L_003B1970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1990u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_00A4(c, 261u, depth + 1u); else { c.pc = 0x003B2EA0u; return; } if (c.pc != 0x003B1990u) [[unlikely]] return; }
L_003B1990:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 32u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[6].w[0] + 19112u);  if (t) { goto L_003B19C0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B1E80; }
L_003B19C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B19C8u);  if (depth < kMaxDepth) unit_00A4(c, 280u, depth + 1u); else { c.pc = 0x003B3410u; return; } if (c.pc != 0x003B19C8u) [[unlikely]] return; }
L_003B19C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1778u | kUnwind; return; } goto L_003B1778; }
L_003B19E8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[18].w[0])));  if (t) { goto L_003B1A2C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1A28u); set32(c.r[5], c.r[5].w[0] + 19160u);  if (depth < kMaxDepth) unit_00A4(c, 148u, depth + 1u); else { c.pc = 0x003B1AC8u; return; } if (c.pc != 0x003B1A28u) [[unlikely]] return; }
L_003B1A28:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_003B1A2C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;  if (t) { goto L_003B1A78; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B1AA0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));  goto L_003B1AA4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0DA0u | kUnwind; return; } goto L_003B0DA0; }
L_003B1A78:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0CC8u | kUnwind; return; } goto L_003B0CC8; }
L_003B1AA0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 1;
L_003B1AA4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[6], c.r[6].w[0] + 19168u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  goto L_003B1E80; }
L_003B1AC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 17u);  c.pc = t; return; }
L_003B1AD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 10688u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003B1B30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1AF4u);  if (depth < kMaxDepth) unit_00A4(c, 155u, depth + 1u); else { c.pc = 0x003B1B40u; return; } if (c.pc != 0x003B1AF4u) [[unlikely]] return; }
L_003B1AF4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] - 17056u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1B04u); st32((c.r[3].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A4(c, 156u, depth + 1u); else { c.pc = 0x003B1B50u; return; } if (c.pc != 0x003B1B04u) [[unlikely]] return; }
L_003B1B04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1B0Cu);  if (depth < kMaxDepth) unit_00A4(c, 210u, depth + 1u); else { c.pc = 0x003B23C8u; return; } if (c.pc != 0x003B1B0Cu) [[unlikely]] return; }
L_003B1B0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1B14u);  if (depth < kMaxDepth) unit_00A4(c, 216u, depth + 1u); else { c.pc = 0x003B2558u; return; } if (c.pc != 0x003B1B14u) [[unlikely]] return; }
L_003B1B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1B1Cu);  if (depth < kMaxDepth) unit_00A4(c, 101u, depth + 1u); else { c.pc = 0x003B1150u; return; } if (c.pc != 0x003B1B1Cu) [[unlikely]] return; }
L_003B1B1C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[3].w[0] + 10692u), 0u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_003B1B30:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B1B40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 19224u);  c.pc = t; return; }
L_003B1B50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[16], c.r[16].w[0] + 10696u);
    set32(c.r[6], 0u + 1000u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1B74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003B1B74u) [[unlikely]] return; }
L_003B1B74:
    set32(c.r[3], 0u + 8u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1B84u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A4(c, 185u, depth + 1u); else { c.pc = 0x003B1EC0u; return; } if (c.pc != 0x003B1B84u) [[unlikely]] return; }
L_003B1B84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1B8Cu);  if (depth < kMaxDepth) unit_0097(c, 118u, depth + 1u); else { c.pc = 0x0037D160u; return; } if (c.pc != 0x003B1B8Cu) [[unlikely]] return; }
L_003B1B8C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037D1F8u | kUnwind; return; } [[clang::musttail]] return unit_0097(c, 126u, depth); }
L_003B1BA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 10688u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] <= 0; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003B1BE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1BC4u);  if (depth < kMaxDepth) unit_00A4(c, 218u, depth + 1u); else { c.pc = 0x003B25B0u; return; } if (c.pc != 0x003B1BC4u) [[unlikely]] return; }
L_003B1BC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1BCCu);  if (depth < kMaxDepth) unit_00A4(c, 103u, depth + 1u); else { c.pc = 0x003B11A8u; return; } if (c.pc != 0x003B1BCCu) [[unlikely]] return; }
L_003B1BCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1BD4u);  if (depth < kMaxDepth) unit_00A4(c, 211u, depth + 1u); else { c.pc = 0x003B23E0u; return; } if (c.pc != 0x003B1BD4u) [[unlikely]] return; }
L_003B1BD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1BDCu);  if (depth < kMaxDepth) unit_0097(c, 120u, depth + 1u); else { c.pc = 0x0037D198u; return; } if (c.pc != 0x003B1BDCu) [[unlikely]] return; }
L_003B1BDC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003B1BE8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B1BF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] + 10704u);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0]), c.r[4].w[0]);  c.pc = t; return; }
L_003B1C10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1C40u); c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 175u, depth + 1u); else { c.pc = 0x003B1D28u; return; } if (c.pc != 0x003B1C40u) [[unlikely]] return; }
L_003B1C40:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B1D04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1C5Cu);  if (depth < kMaxDepth) unit_00A4(c, 179u, depth + 1u); else { c.pc = 0x003B1E20u; return; } if (c.pc != 0x003B1C5Cu) [[unlikely]] return; }
L_003B1C5C:
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003B1C88; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1C80u); set32(c.r[6], c.r[6].w[0] + 19280u);  if (depth < kMaxDepth) unit_00A4(c, 183u, depth + 1u); else { c.pc = 0x003B1E80u; return; } if (c.pc != 0x003B1C80u) [[unlikely]] return; }
L_003B1C80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B1D04; } }
L_003B1C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1C90u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 177u, depth + 1u); else { c.pc = 0x003B1D78u; return; } if (c.pc != 0x003B1C90u) [[unlikely]] return; }
L_003B1C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1C98u);  if (depth < kMaxDepth) unit_00A4(c, 219u, depth + 1u); else { c.pc = 0x003B25B8u; return; } if (c.pc != 0x003B1C98u) [[unlikely]] return; }
L_003B1C98:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 19328u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003B1CD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1CB4u); st32((c.r[18].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A4(c, 104u, depth + 1u); else { c.pc = 0x003B11B0u; return; } if (c.pc != 0x003B1CB4u) [[unlikely]] return; }
L_003B1CB4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[8], c.r[2].w[0] + 10696u);
    set32(c.r[6], c.r[6].w[0] + 19360u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[7].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003B1CF0; } }
L_003B1CD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1CDCu);  if (depth < kMaxDepth) unit_00A4(c, 183u, depth + 1u); else { c.pc = 0x003B1E80u; return; } if (c.pc != 0x003B1CDCu) [[unlikely]] return; }
L_003B1CDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1CE4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 180u, depth + 1u); else { c.pc = 0x003B1E30u; return; } if (c.pc != 0x003B1CE4u) [[unlikely]] return; }
L_003B1CE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B1D04; } }
    c.budget -= 1;
L_003B1CF0:
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 52u), c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[8].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_003B1D04:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B1D28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10696u);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[2], c.r[2].w[0] + 24u);  if (t) { goto L_003B1D6C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_003B1D48:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 120u);  if (t) { goto L_003B1D70; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1D48u | kUnwind; return; } goto L_003B1D48; } }
L_003B1D6C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B1D70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B1D78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 120u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1DA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003B1DA4u) [[unlikely]] return; }
L_003B1DA4:
    set32(c.r[3], c.r[17].w[0] + 31u);
    set32(c.r[2], 0u - 32u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], 0u + 17u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], c.r[3].w[0] + 3072u);
    set32(c.r[4], c.r[3].w[0] + 1024u);
    set32(c.r[5], c.r[3].w[0] + 2048u);
    set32(c.r[6], 0u - 1u);
    st32((c.r[16].w[0] + 88u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 92u), c.r[18].w[0]);
    st32((c.r[16].w[0]), c.r[8].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 72u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 76u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 104u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 44u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 116u), 0u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 31;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B1E20:
    c.r[2].d[0] = c.r[4].sd[0] < 6175ll ? 1ull : 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_003B1E30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003B1E70; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1E54u); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_00A4(c, 225u, depth + 1u); else { c.pc = 0x003B2678u; return; } if (c.pc != 0x003B1E54u) [[unlikely]] return; }
L_003B1E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1E5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 110u, depth + 1u); else { c.pc = 0x003B1298u; return; } if (c.pc != 0x003B1E5Cu) [[unlikely]] return; }
L_003B1E5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[3].w[0] + 10696u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_003B1E70:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B1E80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 10704u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[2].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_003B1EB4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1EB4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B1EB4u) [[unlikely]] return; }
L_003B1EB4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B1EC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 10716u), c.r[4].w[0]);  c.pc = t; return; }
L_003B1F20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[5].w[0]);  c.pc = t; return; }
L_003B1F30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[5].w[0]);  c.pc = t; return; }
L_003B1F38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_003B1F70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], 0u + 100u);
    set32(c.r[16], c.r[16].w[0] << 2);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1F9Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 191u, depth + 1u); else { c.pc = 0x003B1FD0u; return; } if (c.pc != 0x003B1F9Cu) [[unlikely]] return; }
L_003B1F9C:
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0] + 64u), c.r[18].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B1FD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), c.r[5].w[0]);  c.pc = t; return; }
L_003B1FE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    set32(c.r[17], c.r[8].w[0] + 24u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 19392u);
    set32(c.r[6], c.r[6].w[0] + 19400u);
    set32(c.r[16], ld32((c.r[8].w[0] + 40u)));
    set32(c.r[7], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2030u); st32((c.r[29].w[0] + 4u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0096(c, 320u, depth + 1u); else { c.pc = 0x0037B920u; return; } if (c.pc != 0x003B2030u) [[unlikely]] return; }
L_003B2030:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B2050; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2048u);  if (depth < kMaxDepth) unit_00A4(c, 226u, depth + 1u); else { c.pc = 0x003B26A0u; return; } if (c.pc != 0x003B2048u) [[unlikely]] return; }
L_003B2048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003B2060; } }
L_003B2050:
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B205Cu); set32(c.r[6], ld32((c.r[29].w[0] + 20u)));  if (depth < kMaxDepth) unit_00A4(c, 226u, depth + 1u); else { c.pc = 0x003B26A0u; return; } if (c.pc != 0x003B205Cu) [[unlikely]] return; }
L_003B205C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003B2060:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B2078:
    set32(c.r[4], c.r[4].w[0] + 24u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  goto L_003B2098; }
    st32((c.r[5].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), 0u);  c.pc = t; return; }
L_003B2098:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003B20C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B2DF0; }
L_003B20F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 76u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B27E0; }
L_003B2118:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1358u | kUnwind; return; } goto L_003B1358; }
L_003B2148:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B216Cu); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_00A4(c, 117u, depth + 1u); else { c.pc = 0x003B1398u; return; } if (c.pc != 0x003B216Cu) [[unlikely]] return; }
L_003B216C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1FD0u | kUnwind; return; } goto L_003B1FD0; }
L_003B21A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 56u), c.r[5].w[0]);  c.pc = t; return; }
L_003B21A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 56u)));  c.pc = t; return; }
L_003B2290:
    set32(c.r[2], c.r[6].w[0] >> 31);
    set32(c.r[3], c.r[5].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] << 1);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B22E0u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_00A4(c, 206u, depth + 1u); else { c.pc = 0x003B2318u; return; } if (c.pc != 0x003B22E0u) [[unlikely]] return; }
L_003B22E0:
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B22F0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 206u, depth + 1u); else { c.pc = 0x003B2318u; return; } if (c.pc != 0x003B22F0u) [[unlikely]] return; }
L_003B22F0:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B2318; }
L_003B2318:
    set32(c.r[7], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    mmi::mult(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003B2340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2364u); c.r[16].d[0] = c.r[16].d[0] & 255ull;  if (depth < kMaxDepth) unit_0097(c, 122u, depth + 1u); else { c.pc = 0x0037D1B0u; return; } if (c.pc != 0x003B2364u) [[unlikely]] return; }
L_003B2364:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2370u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 191u, depth + 1u); else { c.pc = 0x003B1FD0u; return; } if (c.pc != 0x003B2370u) [[unlikely]] return; }
L_003B2370:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] >> 1);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B2148u | kUnwind; return; } goto L_003B2148; }
L_003B23C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B3430; }
L_003B23E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B3490; }
L_003B23F8:
    set32(c.r[4], c.r[4].w[0] + 96u);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_003B2418:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 96u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B3620; }
L_003B2438:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 96u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B3668; }
L_003B2458:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 96u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B36A8; }
L_003B2558:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B2570; }
L_003B2570:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[16], c.r[16].w[0] + 11696u);
    set32(c.r[6], 0u + 620u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2594u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003B2594u) [[unlikely]] return; }
L_003B2594:
    set32(c.r[3], 0u + 8u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B2ED0; }
L_003B25B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B25B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B25CCu);  if (depth < kMaxDepth) unit_00A4(c, 222u, depth + 1u); else { c.pc = 0x003B2610u; return; } if (c.pc != 0x003B25CCu) [[unlikely]] return; }
L_003B25CC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B2600; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B25E0u);  if (depth < kMaxDepth) unit_00A4(c, 224u, depth + 1u); else { c.pc = 0x003B2660u; return; } if (c.pc != 0x003B25E0u) [[unlikely]] return; }
L_003B25E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[3].w[0] + 11696u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.budget -= 8;
L_003B2600:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B2610:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11696u);
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[2], c.r[2].w[0] + 12u);  if (t) { goto L_003B2654; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_003B2630:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 76u);  if (t) { goto L_003B2658; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B2630u | kUnwind; return; } goto L_003B2630; } }
L_003B2654:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B2658:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B2660:
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 72u), 0u);  c.pc = t; return; }
L_003B2678:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B2698; } }
    st32((c.r[4].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[3].w[0] + 11696u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_003B2698:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B26A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[4].w[0] + 8u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B26C8; }
L_003B26C8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    set32(c.r[19], c.r[2].w[0] + 24u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    set32(c.r[20], c.r[2].w[0] + 40u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[3], c.r[2].w[0] + 8u);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[8], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 14;
    { const bool t = c.r[8].d[0] != 0ull; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003B2720; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 8u), 0u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    st32((c.r[20].w[0] + 8u), 0u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), 0u);  if (t) { goto L_003B2790; } }
L_003B2720:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[18], c.r[29].w[0] + 16u);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[16], c.r[16].w[0] + 19416u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 19408u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[8].w[0]);
    set32(c.r[17], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2750u); st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0096(c, 320u, depth + 1u); else { c.pc = 0x0037B920u; return; } if (c.pc != 0x003B2750u) [[unlikely]] return; }
L_003B2750:
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] + 19424u);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[19].w[0]), c.r[17].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B277Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 320u, depth + 1u); else { c.pc = 0x0037B920u; return; } if (c.pc != 0x003B277Cu) [[unlikely]] return; }
L_003B277C:
    st32((c.r[20].w[0]), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 5;
L_003B2790:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B27E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    set32(c.r[19], c.r[2].w[0] + 19416u);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], c.r[3].w[0] + 19432u);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 4u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B282Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 235u, depth + 1u); else { c.pc = 0x003B28F8u; return; } if (c.pc != 0x003B282Cu) [[unlikely]] return; }
L_003B282C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[6], c.r[29].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 19440u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003B2858; } }
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[3].w[0]);  if (t) { goto L_003B28D4; } }
L_003B2858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2860u);  if (depth < kMaxDepth) unit_0009(c, 191u, depth + 1u); else { c.pc = 0x00147240u; return; } if (c.pc != 0x003B2860u) [[unlikely]] return; }
L_003B2860:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] + 19448u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B287Cu); set32(c.r[8], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00A4(c, 235u, depth + 1u); else { c.pc = 0x003B28F8u; return; } if (c.pc != 0x003B287Cu) [[unlikely]] return; }
L_003B287C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[29].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_003B2898; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003B28D4; } }
L_003B2898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B28A0u); c.r[4].d[0] = ld64((c.r[29].w[0] + 8u));  if (depth < kMaxDepth) unit_000B(c, 7u, depth + 1u); else { c.pc = 0x0014C158u; return; } if (c.pc != 0x003B28A0u) [[unlikely]] return; }
L_003B28A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] + 19456u);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 16u);
    set32(c.r[7], c.r[29].w[0] + 24u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B28C4u); set32(c.r[8], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 191u, depth + 1u); else { c.pc = 0x00147240u; return; } if (c.pc != 0x003B28C4u) [[unlikely]] return; }
L_003B28C4:
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_003B28D4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003B28F8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], c.r[4].w[0] + 40u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), 0u);  goto L_003B2934; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  goto L_003B2940; }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_003B2934:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_003B2964; } }
    c.budget -= 1;
L_003B2940:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2954u); st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0096(c, 320u, depth + 1u); else { c.pc = 0x0037B920u; return; } if (c.pc != 0x003B2954u) [[unlikely]] return; }
L_003B2954:
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_003B2964:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B2978:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B2990; }
L_003B2990:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[4].d[0] = c.r[5].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[6].d[0] ^ c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[8], 0u + 8u);
    if (c.r[2].d[0] == 0) c.r[6].d[0] = c.r[3].d[0];
    set32(c.r[2], c.r[7].w[0] + 32u);
    if (c.r[4].d[0] == 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 10;
L_003B29B8:
    set32(c.r[8], c.r[8].w[0] - 1u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 7;
    { const bool t = c.r[8].sd[0] >= 0; set32(c.r[2], c.r[2].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B29B8u | kUnwind; return; } goto L_003B29B8; } }
    set32(c.r[2], c.r[7].w[0] + 36u);
    set32(c.r[8], 0u + 7u);
    c.budget -= 3;
L_003B29E0:
    set32(c.r[8], c.r[8].w[0] - 1u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.budget -= 7;
    { const bool t = c.r[8].sd[0] >= 0; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B29E0u | kUnwind; return; } goto L_003B29E0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[6].d[0]; set32(c.r[8], 0u + 17u);  if (t) { goto L_003B2A30; } }
    set32(c.r[3], c.r[7].w[0] + 68u);
    c.budget -= 1;
L_003B2A08:
    set32(c.r[8], c.r[8].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.r[2].d[0] = c.r[8].sd[0] < 224ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B2A08u | kUnwind; return; } goto L_003B2A08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[7].w[0] + 896u);  if (t) { goto L_003B2A74; } }
    c.budget -= 1;
L_003B2A30:
    set32(c.r[10], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[11], 0u + 207u);
    set32(c.r[9], c.r[7].w[0] + 68u);
    c.budget -= 4;
L_003B2A40:
    mmi::divu(c, 0, c.r[10].w[0], c.r[11].w[0]);
    set32(c.r[3], c.r[8].w[0] - 17u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 5;
    if (c.r[11].d[0] == 0ull) { breakpoint(c, 0x003B2A50u);  goto L_003B2A54; }
L_003B2A54:
    c.r[4].d[0] = c.r[8].sd[0] < 224ll ? 1ull : 0ull;
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[12].w[0] + c.r[5].w[0]);
    st32((c.r[9].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B2A40u | kUnwind; return; } goto L_003B2A40; } }
    set32(c.r[2], c.r[7].w[0] + 896u);
    c.budget -= 1;
L_003B2A74:
    set32(c.r[8], 0u + 15u);
    c.budget -= 1;
L_003B2A78:
    set32(c.r[8], c.r[8].w[0] - 1u);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = c.r[8].sd[0] >= 0; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B2A78u | kUnwind; return; } goto L_003B2A78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[7], c.r[7].w[0] + 960u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[8], 0u + 15u);
    c.budget -= 5;
L_003B2AA8:
    set32(c.r[8], c.r[8].w[0] - 1u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[8].sd[0] >= 0; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B2AA8u | kUnwind; return; } goto L_003B2AA8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B2AD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 4u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2AF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 229u, depth + 1u); else { c.pc = 0x003B27E0u; return; } if (c.pc != 0x003B2AF4u) [[unlikely]] return; }
L_003B2AF4:
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2B08u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 247u, depth + 1u); else { c.pc = 0x003B2B20u; return; } if (c.pc != 0x003B2B08u) [[unlikely]] return; }
L_003B2B08:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B2B20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[19], c.r[20].w[0] + 1024u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1024u);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2B60u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003B2B60u) [[unlikely]] return; }
L_003B2B60:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2B74u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 237u, depth + 1u); else { c.pc = 0x003B2978u; return; } if (c.pc != 0x003B2B74u) [[unlikely]] return; }
L_003B2B74:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 16u);  if (t) { goto L_003B2BE8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003B2BC0; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  goto L_003B2C18; }
L_003B2BC0:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  goto L_003B2CA8; }
L_003B2BE8:
    c.f[13] = ld32((c.r[18].w[0] + 64u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2BF4u); c.f[12] = ld32((c.r[18].w[0] + 60u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B2BF4u) [[unlikely]] return; }
L_003B2BF4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B2C18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2C34u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 262u, depth + 1u); else { c.pc = 0x003B2EE0u; return; } if (c.pc != 0x003B2C34u) [[unlikely]] return; }
L_003B2C34:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_003B2C88; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_003B2C50:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] >> 15);
    c.r[3].d[0] = c.r[4].sd[0] < 256ll ? 1ull : 0ull;
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B2C50u | kUnwind; return; } goto L_003B2C50; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B2C88:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[6], c.r[6].w[0] + 19472u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1E80u | kUnwind; return; } goto L_003B1E80; }
L_003B2CA8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 24u), c.f[20]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2CCCu); c.f[20] = ld32((c.r[4].w[0] + 64u));  if (depth < kMaxDepth) unit_00A4(c, 262u, depth + 1u); else { c.pc = 0x003B2EE0u; return; } if (c.pc != 0x003B2CCCu) [[unlikely]] return; }
L_003B2CCC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003B2D10; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[7].d[0] = c.r[7].d[0] | 65408ull;
    c.budget -= 2;
L_003B2CE0:
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[6].sd[0] < 256ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B2CE0u | kUnwind; return; } goto L_003B2CE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B2DD8; } }
L_003B2D10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4EFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4B7F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.f[2] = c.r[1].w[0];
    set32(c.r[8], 0u + 1u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 8;
L_003B2D30:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.r[7].d[0] = c.r[6].sd[0] < 256ll ? 1ull : 0ull;
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);  if (t) { goto L_003B2D54; } }
    st32((c.r[3].w[0]), c.r[8].w[0]);
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 2;
L_003B2D54:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[3], c.r[4].w[0] >> 1);  if (t) { goto L_003B2D70; } }
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);  if (t) { goto L_003B2D88; } }
    c.budget -= 1;
L_003B2D70:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 6;
L_003B2D88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.f[4] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[4]);
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B2DCC; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    c.budget -= 4;
L_003B2DCC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B2D30u | kUnwind; return; } goto L_003B2D30; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B2DD8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B2DF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), c.f[21]);
    c.f[21] = c.f[12];
    st32((c.r[29].w[0] + 16u), c.f[20]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2E14u); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_00A4(c, 260u, depth + 1u); else { c.pc = 0x003B2E58u; return; } if (c.pc != 0x003B2E14u) [[unlikely]] return; }
L_003B2E14:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 19536u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003B2E34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2E34u);  if (depth < kMaxDepth) unit_00A4(c, 183u, depth + 1u); else { c.pc = 0x003B1E80u; return; } if (c.pc != 0x003B2E34u) [[unlikely]] return; }
L_003B2E34:
    st32((c.r[16].w[0] + 64u), c.f[20]);
    st32((c.r[16].w[0] + 60u), c.f[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 24u));
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B2E58:
    fpu_compare(c, fp::key(c.f[13]) <= fp::key(c.f[12]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = fp::ee::sub(c.fcr31, c.f[13], c.f[12]);  if (t) { goto L_003B2E6C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B2E6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC1600000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_003B2E80; }
L_003B2E80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B2EA0:
    c.f[2] = 0u;
    set32(c.r[2], 0u + 1u);
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = ld32((c.r[4].w[0] + 64u));  if (t) { goto L_003B2EC4; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_003B2EC4; }
L_003B2EC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B2ED0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 11700u), c.r[4].w[0]);  c.pc = t; return; }
L_003B2EE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 11700u)));  c.pc = t; return; }
L_003B2EF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2F18u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 280u, depth + 1u); else { c.pc = 0x003B3410u; return; } if (c.pc != 0x003B2F18u) [[unlikely]] return; }
L_003B2F18:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[6], 0u + 16u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B2FE0; }
L_003B2F90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2FB8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 280u, depth + 1u); else { c.pc = 0x003B3410u; return; } if (c.pc != 0x003B2FB8u) [[unlikely]] return; }
L_003B2FB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[6], 0u + 32u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B2FE0; }
L_003B2FE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B3024; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3020u); set32(c.r[5], c.r[5].w[0] + 19584u);  if (depth < kMaxDepth) unit_00A4(c, 148u, depth + 1u); else { c.pc = 0x003B1AC8u; return; } if (c.pc != 0x003B3020u) [[unlikely]] return; }
L_003B3020:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_003B3024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B302Cu); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_00A4(c, 261u, depth + 1u); else { c.pc = 0x003B2EA0u; return; } if (c.pc != 0x003B302Cu) [[unlikely]] return; }
L_003B302C:
    set32(c.r[7], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[6].w[0] + 19592u);  if (t) { goto L_003B3068; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1E80u | kUnwind; return; } goto L_003B1E80; }
L_003B3068:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[7].d[0]; c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;  if (t) { goto L_003B30B8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B30E8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B30EC; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 48u);  goto L_003B3110; }
L_003B30B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 48u);  goto L_003B32A0; }
L_003B30E8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B30EC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[6], c.r[6].w[0] + 19640u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1E80u | kUnwind; return; } goto L_003B1E80; }
L_003B3110:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    set32(c.r[16], c.r[18].w[0] + 4u);
    st64((c.r[29].w[0] + 104u), c.r[21].d[0]);
    set32(c.r[10], c.r[18].w[0] + 20u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 120u), c.r[31].d[0]);
    set32(c.r[11], c.r[18].w[0] + 36u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[12], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[5].w[0] >> 31);
    set32(c.r[8], ld32((c.r[10].w[0])));
    mmi::mult(c, 0, c.r[12].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[9], ld32((c.r[11].w[0])));
    c.r[21].d[0] = c.r[12].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    set32(c.r[13], ld32((c.r[10].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] >> 31);
    set32(c.r[7], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[11].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[11], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[9], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);
    if (c.r[7].d[0] != 0) c.r[21].d[0] = c.r[7].d[0];
    st32((c.r[29].w[0]), c.r[6].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[13].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[10].w[0]);
    c.budget -= 49;
    { const bool t = c.r[11].d[0] == 0ull; st32((c.r[29].w[0] + 12u), c.r[12].w[0]);  if (t) { goto L_003B31D8; } }
    c.r[20].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 1;
L_003B31D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B31E0u);  if (depth < kMaxDepth) unit_00A4(c, 278u, depth + 1u); else { c.pc = 0x003B33B0u; return; } if (c.pc != 0x003B31E0u) [[unlikely]] return; }
L_003B31E0:
    set32(c.r[10], 0u + 32u);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[9], 0u + 16u);
    set32(c.r[8], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], c.r[3].w[0] >> 31);
    set32(c.r[6], 0u + 11u);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[22].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[21].w[0]);
    c.budget -= 17;
    { const bool t = c.r[19].d[0] == c.r[9].d[0]; st32((c.r[29].w[0] + 44u), c.r[20].w[0]);  if (t) { goto L_003B3238; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[10].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003B3258; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld64((c.r[29].w[0] + 72u));  if (t) { goto L_003B327C; } }
    c.budget -= 1;
L_003B3238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3240u);  if (depth < kMaxDepth) unit_00A4(c, 123u, depth + 1u); else { c.pc = 0x003B1568u; return; } if (c.pc != 0x003B3240u) [[unlikely]] return; }
L_003B3240:
    set32(c.r[6], ld32((c.r[17].w[0] + 64u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3250u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0097(c, 127u, depth + 1u); else { c.pc = 0x0037D238u; return; } if (c.pc != 0x003B3250u) [[unlikely]] return; }
L_003B3250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003B3278; } }
L_003B3258:
    set32(c.r[6], 0u + 13u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3264u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 123u, depth + 1u); else { c.pc = 0x003B1568u; return; } if (c.pc != 0x003B3264u) [[unlikely]] return; }
L_003B3264:
    set32(c.r[6], ld32((c.r[17].w[0] + 64u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3274u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0097(c, 128u, depth + 1u); else { c.pc = 0x0037D240u; return; } if (c.pc != 0x003B3274u) [[unlikely]] return; }
L_003B3274:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003B3278:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 1;
L_003B327C:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 120u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003B32A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[10], 0u + 64u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[19].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 104u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 120u), c.r[31].d[0]);
    set32(c.r[16], c.r[22].w[0] + 4u);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] >> 31);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    if (c.r[8].d[0] != 0) c.r[21].d[0] = c.r[8].d[0];
    st32((c.r[29].w[0] + 12u), c.r[10].w[0]);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st32((c.r[29].w[0] + 4u), c.r[9].w[0]);
    c.budget -= 31;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[29].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_003B3320; } }
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_003B3320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3328u);  if (depth < kMaxDepth) unit_00A4(c, 278u, depth + 1u); else { c.pc = 0x003B33B0u; return; } if (c.pc != 0x003B3328u) [[unlikely]] return; }
L_003B3328:
    set32(c.r[6], 0u + 32u);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], 0u + 16u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] >> 31);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[20].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st32((c.r[29].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[21].w[0]);
    st32((c.r[29].w[0] + 44u), c.r[19].w[0]);
    c.budget -= 14;
    { const bool t = c.r[17].d[0] == c.r[5].d[0]; st32((c.r[29].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_003B3388; } }
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[6].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003B338C; }
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3378u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 123u, depth + 1u); else { c.pc = 0x003B1568u; return; } if (c.pc != 0x003B3378u) [[unlikely]] return; }
L_003B3378:
    set32(c.r[6], ld32((c.r[18].w[0] + 64u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3388u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0097(c, 129u, depth + 1u); else { c.pc = 0x0037D250u; return; } if (c.pc != 0x003B3388u) [[unlikely]] return; }
L_003B3388:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003B338C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 120u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003B33B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003B3400; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003B33EC; } }
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003B3400; } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_003B3400; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 1;
L_003B33EC:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 19696u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B33FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 183u, depth + 1u); else { c.pc = 0x003B1E80u; return; } if (c.pc != 0x003B33FCu) [[unlikely]] return; }
L_003B33FC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B3400:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B3410:
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 4u), c.r[5].w[0]);  c.pc = t; return; }
L_003B3430:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 12320u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003B346C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3454u);  if (depth < kMaxDepth) unit_00A4(c, 283u, depth + 1u); else { c.pc = 0x003B3480u; return; } if (c.pc != 0x003B3454u) [[unlikely]] return; }
L_003B3454:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 17048u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_003B346C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B3480:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 19744u);  c.pc = t; return; }
L_003B3490:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] + 12320u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[4], c.r[3].w[0] - 1u);  if (t) { goto L_003B34A8; } }
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_003B34A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B34B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 19800u);
    set32(c.r[6], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B34D8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 232u, depth + 1u); else { c.pc = 0x00147D60u; return; } if (c.pc != 0x003B34D8u) [[unlikely]] return; }
L_003B34D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 19u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B34ECu); set32(c.r[5], c.r[5].w[0] + 19816u);  if (depth < kMaxDepth) unit_0009(c, 188u, depth + 1u); else { c.pc = 0x001471A8u; return; } if (c.pc != 0x003B34ECu) [[unlikely]] return; }
L_003B34EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B34FCu); set32(c.r[16], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00147530u; return; } if (c.pc != 0x003B34FCu) [[unlikely]] return; }
L_003B34FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3510u); set32(c.r[5], c.r[5].w[0] + 19824u);  if (depth < kMaxDepth) unit_0009(c, 232u, depth + 1u); else { c.pc = 0x00147D60u; return; } if (c.pc != 0x003B3510u) [[unlikely]] return; }
L_003B3510:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B351Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 291u, depth + 1u); else { c.pc = 0x003B3540u; return; } if (c.pc != 0x003B351Cu) [[unlikely]] return; }
L_003B351C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B352Cu); set32(c.r[5], c.r[5].w[0] + 19832u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00147530u; return; } if (c.pc != 0x003B352Cu) [[unlikely]] return; }
L_003B352C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B3540:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    set32(c.r[17], c.r[29].w[0] + 16u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    set32(c.r[18], c.r[29].w[0] + 32u);
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[10], c.r[3].w[0] + 19856u);
    ldl(c.r[7], (c.r[10].w[0] + 7u));
    ldr(c.r[7], (c.r[10].w[0]));
    sdl(c.r[7], (c.r[29].w[0] + 7u));
    sdr(c.r[7], (c.r[29].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[9], c.r[5].w[0] + 19880u);
    ldl(c.r[3], (c.r[9].w[0] + 7u));
    ldr(c.r[3], (c.r[9].w[0]));
    sdl(c.r[3], (c.r[17].w[0] + 7u));
    sdr(c.r[3], (c.r[17].w[0]));
    set32(c.r[4], c.r[16].w[0] + 2u);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[7], c.r[6].w[0] + 19904u);
    ldl(c.r[10], (c.r[7].w[0] + 7u));
    ldr(c.r[10], (c.r[7].w[0]));
    sdl(c.r[10], (c.r[18].w[0] + 7u));
    sdr(c.r[10], (c.r[18].w[0]));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B35CCu); set32(c.r[5], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0009(c, 232u, depth + 1u); else { c.pc = 0x00147D60u; return; } if (c.pc != 0x003B35CCu) [[unlikely]] return; }
L_003B35CC:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[16].w[0] + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B35E8u); set32(c.r[5], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0009(c, 232u, depth + 1u); else { c.pc = 0x00147D60u; return; } if (c.pc != 0x003B35E8u) [[unlikely]] return; }
L_003B35E8:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3604u); set32(c.r[5], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_0009(c, 232u, depth + 1u); else { c.pc = 0x00147D60u; return; } if (c.pc != 0x003B3604u) [[unlikely]] return; }
L_003B3604:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003B3620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003B3638; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_003B3640; } }
L_003B3638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B3658; } }
L_003B3640:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 17u)));
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3658u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 176u, depth + 1u); else { c.pc = 0x00142110u; return; } if (c.pc != 0x003B3658u) [[unlikely]] return; }
L_003B3658:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B3668:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003B367C; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003B3688; } }
L_003B367C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B369C; } }
    c.budget -= 1;
L_003B3688:
    set32(c.r[4], c.r[4].w[0] + 18u);
    set32(c.r[5], c.r[5].w[0] + 19848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3698u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x00147BA8u; return; } if (c.pc != 0x003B3698u) [[unlikely]] return; }
L_003B3698:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 1;
L_003B369C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B36A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003B36BC; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003B36C8; } }
L_003B36BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B36DC; } }
    c.budget -= 1;
L_003B36C8:
    set32(c.r[4], c.r[4].w[0] + 19u);
    set32(c.r[5], c.r[5].w[0] + 19872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B36D8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x00147BA8u; return; } if (c.pc != 0x003B36D8u) [[unlikely]] return; }
L_003B36D8:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 1;
L_003B36DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B36E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003B3708; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003B3710; } }
L_003B3708:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B3738; } }
L_003B3710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3718u);  if (depth < kMaxDepth) unit_00A4(c, 295u, depth + 1u); else { c.pc = 0x003B3620u; return; } if (c.pc != 0x003B3718u) [[unlikely]] return; }
L_003B3718:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[16].w[0] + 20u);
    set32(c.r[5], c.r[5].w[0] + 19896u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_003B3738; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3734u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x00147BA8u; return; } if (c.pc != 0x003B3734u) [[unlikely]] return; }
L_003B3734:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 1;
L_003B3738:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B3748:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003B3768; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003B3770; } }
L_003B3768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B37C8; } }
L_003B3770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3778u);  if (depth < kMaxDepth) unit_00A4(c, 295u, depth + 1u); else { c.pc = 0x003B3620u; return; } if (c.pc != 0x003B3778u) [[unlikely]] return; }
L_003B3778:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 19888u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_003B37C8; } }
    set32(c.r[16], c.r[16].w[0] + 21u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B379Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x00147BA8u; return; } if (c.pc != 0x003B379Cu) [[unlikely]] return; }
L_003B379C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 19896u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003B37C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B37BCu);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x00147BA8u; return; } if (c.pc != 0x003B37BCu) [[unlikely]] return; }
L_003B37BC:
    set32(c.r[3], 0u + 2u);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    c.budget -= 2;
L_003B37C4:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_003B37C8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B37D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003B37F8; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003B3800; } }
L_003B37F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B3830; } }
L_003B3800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3808u);  if (depth < kMaxDepth) unit_00A4(c, 295u, depth + 1u); else { c.pc = 0x003B3620u; return; } if (c.pc != 0x003B3808u) [[unlikely]] return; }
L_003B3808:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[16].w[0] + 22u);
    set32(c.r[5], c.r[5].w[0] + 19840u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_003B3830; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B382Cu);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x00147BA8u; return; } if (c.pc != 0x003B382Cu) [[unlikely]] return; }
L_003B382C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003B3830:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B3840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003B3864; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_003B3870; } }
L_003B3864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B38A8; } }
    c.budget -= 1;
L_003B3870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3878u);  if (depth < kMaxDepth) unit_00A4(c, 295u, depth + 1u); else { c.pc = 0x003B3620u; return; } if (c.pc != 0x003B3878u) [[unlikely]] return; }
L_003B3878:
    set32(c.r[6], 0u + 23u);
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B38A8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B3A40; }
L_003B38A8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B38C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003B38E4; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_003B38F0; } }
L_003B38E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B3928; } }
    c.budget -= 1;
L_003B38F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B38F8u);  if (depth < kMaxDepth) unit_00A4(c, 295u, depth + 1u); else { c.pc = 0x003B3620u; return; } if (c.pc != 0x003B38F8u) [[unlikely]] return; }
L_003B38F8:
    set32(c.r[6], 0u + 26u);
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B3928; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B3A40; }
L_003B3928:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B3940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003B3964; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_003B3970; } }
L_003B3964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B39A8; } }
    c.budget -= 1;
L_003B3970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3978u);  if (depth < kMaxDepth) unit_00A4(c, 295u, depth + 1u); else { c.pc = 0x003B3620u; return; } if (c.pc != 0x003B3978u) [[unlikely]] return; }
L_003B3978:
    set32(c.r[6], 0u + 29u);
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B39A8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B3A40; }
L_003B39A8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B39C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003B39E4; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_003B39F0; } }
L_003B39E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B3A28; } }
    c.budget -= 1;
L_003B39F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B39F8u);  if (depth < kMaxDepth) unit_00A4(c, 295u, depth + 1u); else { c.pc = 0x003B3620u; return; } if (c.pc != 0x003B39F8u) [[unlikely]] return; }
L_003B39F8:
    set32(c.r[6], 0u + 32u);
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B3A28; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B3A40; }
L_003B3A28:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B3A40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003B3A54; } }
    c.budget -= 2;
    if (c.r[5].sd[0] >= 0) { set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);  goto L_003B3A60; }
L_003B3A54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B3A90; } }
    c.budget -= 1;
L_003B3A60:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3A88u); st8((c.r[29].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (depth < kMaxDepth) unit_00A4(c, 321u, depth + 1u); else { c.pc = 0x003B3AA0u; return; } if (c.pc != 0x003B3A88u) [[unlikely]] return; }
L_003B3A88:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 2;
L_003B3A90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B3AA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001493A8u | kUnwind; return; } [[clang::musttail]] return unit_000A(c, 112u, depth); }
L_003B3AB8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st32((c.r[18].w[0]), 0u);
    c.budget -= 14;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0]), 0u);  if (t) { goto L_003B3B5C; } }
    c.budget -= 2;
    if (c.r[5].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B3B60; }
    c.budget -= 2;
    if (c.r[5].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B3B60; }
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
L_003B3B10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[21].w[0] + 19912u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3B20u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 69u, depth + 1u); else { c.pc = 0x00145310u; return; } if (c.pc != 0x003B3B20u) [[unlikely]] return; }
L_003B3B20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + 19800u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 8u);  if (t) { goto L_003B3B50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3B38u);  if (depth < kMaxDepth) unit_0009(c, 69u, depth + 1u); else { c.pc = 0x00145310u; return; } if (c.pc != 0x003B3B38u) [[unlikely]] return; }
L_003B3B38:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003B3B54; }
    st32((c.r[19].w[0]), c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3B4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 327u, depth + 1u); else { c.pc = 0x003B3B80u; return; } if (c.pc != 0x003B3B4Cu) [[unlikely]] return; }
L_003B3B4C:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003B3B50:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003B3B54:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3B10u | kUnwind; return; } goto L_003B3B10; } }
L_003B3B5C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B3B60:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B3B80:
    set32(c.r[2], 0u + 35u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[4].d[0] == 0) c.r[2].d[0] = 0ull;  c.pc = t; return; }
L_003B3B90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3BB0u); set32(c.r[4], c.r[2].w[0] + 19952u);  if (depth < kMaxDepth) unit_0093(c, 99u, depth + 1u); else { c.pc = 0x0036D358u; return; } if (c.pc != 0x003B3BB0u) [[unlikely]] return; }
L_003B3BB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[4].w[0] + 12336u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[5].d[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_003B3BF0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 12340u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B3CD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B3BF4; } }
L_003B3BF0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003B3BF4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st32((c.r[3].w[0] + 12340u), c.r[16].w[0]);  if (t) { goto L_003B3C10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3C04u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 1u, depth + 1u); else { c.pc = 0x003B4028u; return; } if (c.pc != 0x003B3C04u) [[unlikely]] return; }
L_003B3C04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003B3CD8; } }
    c.budget -= 1;
L_003B3C10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3C20u); set32(c.r[4], c.r[4].w[0] + 19960u);  if (depth < kMaxDepth) unit_0093(c, 99u, depth + 1u); else { c.pc = 0x0036D358u; return; } if (c.pc != 0x003B3C20u) [[unlikely]] return; }
L_003B3C20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[4].d[0] = c.r[4].d[0] | 51712ull;
    c.r[3].d[0] = ld32((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3C38u); if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];  if (depth < kMaxDepth) unit_00A5(c, 1u, depth + 1u); else { c.pc = 0x003B4028u; return; } if (c.pc != 0x003B3C38u) [[unlikely]] return; }
L_003B3C38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], c.r[16].w[0] << 2);
    set32(c.r[7], 0u + 130u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 19920u)));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[2].d[0] & 199ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[7].d[0]; st32((c.r[4].w[0] + 12344u), c.r[2].w[0]);  if (t) { goto L_003B3C80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 19936u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[6].w[0]), c.r[7].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + 19936u);  if (t) { goto L_003B3C88; } }
L_003B3C80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[3].w[0] + 19936u);
    c.budget -= 2;
L_003B3C88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] - 17040u);
    set32(c.r[5], c.r[5].w[0] - 17024u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], c.r[7].w[0] - 17008u);
    set32(c.r[6], c.r[6].w[0] - 17004u);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st64((c.r[4].w[0]), 0ull);
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    st64((c.r[5].w[0]), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 8u));
    st64((c.r[5].w[0] + 8u), c.r[3].d[0]);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    st32((c.r[6].w[0]), 0u);
    c.budget -= 19;
L_003B3CD4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003B3CD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B3CE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[3].w[0] + 12336u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_003B3D44; } }
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], ld32((c.r[2].w[0] + 12340u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_003B3D44; } }
    set32(c.r[4], 0u + 130u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12344u)));
    c.r[6].d[0] = c.r[3].d[0] ^ 3072ull;
    c.r[3].d[0] = c.r[3].d[0] & 199ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { goto L_003B3D44; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 19920u)));
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.budget -= 4;
L_003B3D44:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { st32((c.r[7].w[0]), 0u);  goto L_003B3D50; }
L_003B3D50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B3D58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] + 12336u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[3], 0u - 1u);  if (t) { goto L_003B3D7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 12340u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003B3D88; } }
L_003B3D7C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003B3D88:
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[9].w[0] - 17004u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; set32(c.r[3], c.r[6].w[0] << 2);  if (t) { goto L_003B3E20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], c.r[2].w[0] - 17040u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = ld64((c.r[7].w[0]));
    set32(c.r[3], c.r[3].w[0] - 17024u);
    set32(c.r[8], c.r[2].w[0] - 17008u);
    set32(c.r[4], c.r[6].w[0] << 2);
    st64((c.r[3].w[0]), c.r[5].d[0]);
    c.r[2].d[0] = ld64((c.r[7].w[0] + 8u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 19936u)));
    st64((c.r[3].w[0] + 8u), c.r[2].d[0]);
    st32((c.r[8].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.r[2].d[0] = ld16((c.r[7].w[0] + 8u));
    c.r[6].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B3E0C; } }
    c.r[2].d[0] = ld64((c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    st64((c.r[7].w[0]), c.r[2].d[0]);
    c.budget -= 4;
L_003B3E0C:
    st16((c.r[7].w[0] + 8u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].d[0] = ld64((c.r[7].w[0]));
    st32((c.r[8].w[0]), c.r[7].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[6].d[0] + c.r[2].d[0];  if (t) { goto L_003B3E64; } }
L_003B3E20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 19936u)));
    set32(c.r[2], c.r[2].w[0] - 17008u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    c.r[4].d[0] = ld64((c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[6].d[0] + c.r[4].d[0];
    c.r[2].d[0] = ld16((c.r[3].w[0] + 8u));
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[9].w[0] - 17004u);  if (t) { goto L_003B3E68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[5].d[0] + c.r[2].d[0];
    c.budget -= 2;
L_003B3E64:
    set32(c.r[4], c.r[9].w[0] - 17004u);
    c.budget -= 1;
L_003B3E68:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003B3E80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3E90u);  if (depth < kMaxDepth) unit_00A4(c, 334u, depth + 1u); else { c.pc = 0x003B3D58u; return; } if (c.pc != 0x003B3E90u) [[unlikely]] return; }
L_003B3E90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = ld64((c.r[3].w[0] + 12328u));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B3EB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A5(c, 1u, depth); }
L_003B3EC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld64((c.r[3].w[0] + 12328u));  c.pc = t; return; }
}

}
