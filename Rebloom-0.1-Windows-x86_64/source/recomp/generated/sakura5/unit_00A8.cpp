#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A8[4096] = {
    1, 2, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 7, 0, 0, 8, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0,
    0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36,
    0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 40, 0, 41, 0, 0, 42,
    0, 0, 0, 0, 43, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0,
    0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0,
    0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0,
    0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61,
    0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0,
    0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0,
    0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 113, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0,
    0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142,
    0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0,
    0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 202, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0,
    0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0,
    0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0,
    246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0,
    0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0,
    0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0,
    273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0,
    287, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0,
    294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0,
    306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0,
    318, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0,
    0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0,
    329, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0,
    0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0,
    0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0,
    0, 345, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    348, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00A8(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003C0000;
    case 2u: goto L_003C0004;
    case 3u: goto L_003C0018;
    case 4u: goto L_003C0020;
    case 5u: goto L_003C0064;
    case 6u: goto L_003C0070;
    case 7u: goto L_003C008C;
    case 8u: goto L_003C0098;
    case 9u: goto L_003C00A0;
    case 10u: goto L_003C00A8;
    case 11u: goto L_003C00D0;
    case 12u: goto L_003C01A0;
    case 13u: goto L_003C01BC;
    case 14u: goto L_003C01C8;
    case 15u: goto L_003C01D0;
    case 16u: goto L_003C0200;
    case 17u: goto L_003C0238;
    case 18u: goto L_003C0250;
    case 19u: goto L_003C0288;
    case 20u: goto L_003C02A4;
    case 21u: goto L_003C02F0;
    case 22u: goto L_003C030C;
    case 23u: goto L_003C0330;
    case 24u: goto L_003C03A0;
    case 25u: goto L_003C03D0;
    case 26u: goto L_003C03EC;
    case 27u: goto L_003C0430;
    case 28u: goto L_003C0438;
    case 29u: goto L_003C0468;
    case 30u: goto L_003C0550;
    case 31u: goto L_003C0600;
    case 32u: goto L_003C061C;
    case 33u: goto L_003C065C;
    case 34u: goto L_003C06C4;
    case 35u: goto L_003C06E4;
    case 36u: goto L_003C06FC;
    case 37u: goto L_003C0718;
    case 38u: goto L_003C0758;
    case 39u: goto L_003C0760;
    case 40u: goto L_003C0768;
    case 41u: goto L_003C0770;
    case 42u: goto L_003C077C;
    case 43u: goto L_003C0790;
    case 44u: goto L_003C0798;
    case 45u: goto L_003C07A4;
    case 46u: goto L_003C07D4;
    case 47u: goto L_003C07F4;
    case 48u: goto L_003C0808;
    case 49u: goto L_003C0A4C;
    case 50u: goto L_003C0A70;
    case 51u: goto L_003C0A78;
    case 52u: goto L_003C0A84;
    case 53u: goto L_003C0AA0;
    case 54u: goto L_003C0ABC;
    case 55u: goto L_003C0B00;
    case 56u: goto L_003C0B78;
    case 57u: goto L_003C0B94;
    case 58u: goto L_003C0BD4;
    case 59u: goto L_003C0BE0;
    case 60u: goto L_003C0BF0;
    case 61u: goto L_003C0BFC;
    case 62u: goto L_003C0C0C;
    case 63u: goto L_003C0C50;
    case 64u: goto L_003C0C5C;
    case 65u: goto L_003C0D4C;
    case 66u: goto L_003C0D70;
    case 67u: goto L_003C0D80;
    case 68u: goto L_003C0D98;
    case 69u: goto L_003C0DD0;
    case 70u: goto L_003C0E18;
    case 71u: goto L_003C0E3C;
    case 72u: goto L_003C0E80;
    case 73u: goto L_003C0EC0;
    case 74u: goto L_003C0EE4;
    case 75u: goto L_003C0EF4;
    case 76u: goto L_003C0F0C;
    case 77u: goto L_003C0F40;
    case 78u: goto L_003C0F70;
    case 79u: goto L_003C0FA0;
    case 80u: goto L_003C0FD8;
    case 81u: goto L_003C0FF4;
    case 82u: goto L_003C1004;
    case 83u: goto L_003C1020;
    case 84u: goto L_003C1050;
    case 85u: goto L_003C10A4;
    case 86u: goto L_003C10B0;
    case 87u: goto L_003C1130;
    case 88u: goto L_003C1190;
    case 89u: goto L_003C11A0;
    case 90u: goto L_003C1200;
    case 91u: goto L_003C1210;
    case 92u: goto L_003C1234;
    case 93u: goto L_003C1268;
    case 94u: goto L_003C12B0;
    case 95u: goto L_003C12C4;
    case 96u: goto L_003C12F0;
    case 97u: goto L_003C130C;
    case 98u: goto L_003C1350;
    case 99u: goto L_003C1358;
    case 100u: goto L_003C13B0;
    case 101u: goto L_003C13DC;
    case 102u: goto L_003C13E8;
    case 103u: goto L_003C1400;
    case 104u: goto L_003C1420;
    case 105u: goto L_003C145C;
    case 106u: goto L_003C1468;
    case 107u: goto L_003C1480;
    case 108u: goto L_003C14B0;
    case 109u: goto L_003C14E4;
    case 110u: goto L_003C14F0;
    case 111u: goto L_003C1514;
    case 112u: goto L_003C1540;
    case 113u: goto L_003C1588;
    case 114u: goto L_003C1598;
    case 115u: goto L_003C15A0;
    case 116u: goto L_003C15C0;
    case 117u: goto L_003C15C8;
    case 118u: goto L_003C15E0;
    case 119u: goto L_003C1608;
    case 120u: goto L_003C1610;
    case 121u: goto L_003C162C;
    case 122u: goto L_003C165C;
    case 123u: goto L_003C1690;
    case 124u: goto L_003C16B0;
    case 125u: goto L_003C16E8;
    case 126u: goto L_003C170C;
    case 127u: goto L_003C1730;
    case 128u: goto L_003C1758;
    case 129u: goto L_003C1768;
    case 130u: goto L_003C1770;
    case 131u: goto L_003C17D0;
    case 132u: goto L_003C1810;
    case 133u: goto L_003C1844;
    case 134u: goto L_003C1860;
    case 135u: goto L_003C1930;
    case 136u: goto L_003C1968;
    case 137u: goto L_003C199C;
    case 138u: goto L_003C19BC;
    case 139u: goto L_003C19E4;
    case 140u: goto L_003C1A20;
    case 141u: goto L_003C1A54;
    case 142u: goto L_003C1A7C;
    case 143u: goto L_003C1A98;
    case 144u: goto L_003C1AF0;
    case 145u: goto L_003C1B14;
    case 146u: goto L_003C1B30;
    case 147u: goto L_003C1B54;
    case 148u: goto L_003C1B70;
    case 149u: goto L_003C1C34;
    case 150u: goto L_003C1C40;
    case 151u: goto L_003C1C6C;
    case 152u: goto L_003C1CA0;
    case 153u: goto L_003C1CAC;
    case 154u: goto L_003C1CBC;
    case 155u: goto L_003C1CDC;
    case 156u: goto L_003C1CEC;
    case 157u: goto L_003C1D30;
    case 158u: goto L_003C1D9C;
    case 159u: goto L_003C1DE8;
    case 160u: goto L_003C1DF4;
    case 161u: goto L_003C1E10;
    case 162u: goto L_003C1E38;
    case 163u: goto L_003C1E48;
    case 164u: goto L_003C1E68;
    case 165u: goto L_003C1E78;
    case 166u: goto L_003C1EB8;
    case 167u: goto L_003C1ED4;
    case 168u: goto L_003C1EF0;
    case 169u: goto L_003C1F58;
    case 170u: goto L_003C1F68;
    case 171u: goto L_003C1F88;
    case 172u: goto L_003C1F98;
    case 173u: goto L_003C2000;
    case 174u: goto L_003C2030;
    case 175u: goto L_003C2074;
    case 176u: goto L_003C20A4;
    case 177u: goto L_003C20B0;
    case 178u: goto L_003C20D0;
    case 179u: goto L_003C2158;
    case 180u: goto L_003C21A0;
    case 181u: goto L_003C21BC;
    case 182u: goto L_003C21D4;
    case 183u: goto L_003C21F4;
    case 184u: goto L_003C221C;
    case 185u: goto L_003C2224;
    case 186u: goto L_003C2248;
    case 187u: goto L_003C226C;
    case 188u: goto L_003C2294;
    case 189u: goto L_003C22E0;
    case 190u: goto L_003C2318;
    case 191u: goto L_003C2338;
    case 192u: goto L_003C2350;
    case 193u: goto L_003C2360;
    case 194u: goto L_003C239C;
    case 195u: goto L_003C23AC;
    case 196u: goto L_003C23B8;
    case 197u: goto L_003C2450;
    case 198u: goto L_003C248C;
    case 199u: goto L_003C249C;
    case 200u: goto L_003C24A8;
    case 201u: goto L_003C2530;
    case 202u: goto L_003C2588;
    case 203u: goto L_003C2598;
    case 204u: goto L_003C25A4;
    case 205u: goto L_003C25EC;
    case 206u: goto L_003C260C;
    case 207u: goto L_003C261C;
    case 208u: goto L_003C2660;
    case 209u: goto L_003C26B0;
    case 210u: goto L_003C26C0;
    case 211u: goto L_003C26CC;
    case 212u: goto L_003C2760;
    case 213u: goto L_003C27B0;
    case 214u: goto L_003C27C0;
    case 215u: goto L_003C27CC;
    case 216u: goto L_003C2860;
    case 217u: goto L_003C28B0;
    case 218u: goto L_003C28C0;
    case 219u: goto L_003C28CC;
    case 220u: goto L_003C290C;
    case 221u: goto L_003C2934;
    case 222u: goto L_003C2960;
    case 223u: goto L_003C29AC;
    case 224u: goto L_003C29E8;
    case 225u: goto L_003C2A30;
    case 226u: goto L_003C2AA0;
    case 227u: goto L_003C2AF8;
    case 228u: goto L_003C2B08;
    case 229u: goto L_003C2B14;
    case 230u: goto L_003C2B58;
    case 231u: goto L_003C2BA0;
    case 232u: goto L_003C2BB0;
    case 233u: goto L_003C2BD4;
    case 234u: goto L_003C2C04;
    case 235u: goto L_003C2C38;
    case 236u: goto L_003C2C5C;
    case 237u: goto L_003C2CB0;
    case 238u: goto L_003C2D20;
    case 239u: goto L_003C2D80;
    case 240u: goto L_003C2D90;
    case 241u: goto L_003C2D9C;
    case 242u: goto L_003C2DE4;
    case 243u: goto L_003C2E30;
    case 244u: goto L_003C2E54;
    case 245u: goto L_003C2E64;
    case 246u: goto L_003C2E80;
    case 247u: goto L_003C2EA4;
    case 248u: goto L_003C2EB4;
    case 249u: goto L_003C2ED0;
    case 250u: goto L_003C2F20;
    case 251u: goto L_003C2F40;
    case 252u: goto L_003C2F70;
    case 253u: goto L_003C2F7C;
    case 254u: goto L_003C2FA4;
    case 255u: goto L_003C3010;
    case 256u: goto L_003C3064;
    case 257u: goto L_003C3084;
    case 258u: goto L_003C30A0;
    case 259u: goto L_003C30AC;
    case 260u: goto L_003C30D4;
    case 261u: goto L_003C3140;
    case 262u: goto L_003C316C;
    case 263u: goto L_003C31AC;
    case 264u: goto L_003C31E0;
    case 265u: goto L_003C3210;
    case 266u: goto L_003C3228;
    case 267u: goto L_003C3240;
    case 268u: goto L_003C3274;
    case 269u: goto L_003C3294;
    case 270u: goto L_003C32C8;
    case 271u: goto L_003C32E0;
    case 272u: goto L_003C32EC;
    case 273u: goto L_003C3300;
    case 274u: goto L_003C3334;
    case 275u: goto L_003C335C;
    case 276u: goto L_003C336C;
    case 277u: goto L_003C33A0;
    case 278u: goto L_003C33E0;
    case 279u: goto L_003C3420;
    case 280u: goto L_003C3444;
    case 281u: goto L_003C3450;
    case 282u: goto L_003C345C;
    case 283u: goto L_003C3480;
    case 284u: goto L_003C34B0;
    case 285u: goto L_003C34D0;
    case 286u: goto L_003C34E0;
    case 287u: goto L_003C3500;
    case 288u: goto L_003C3510;
    case 289u: goto L_003C3520;
    case 290u: goto L_003C3530;
    case 291u: goto L_003C3550;
    case 292u: goto L_003C3560;
    case 293u: goto L_003C3570;
    case 294u: goto L_003C3580;
    case 295u: goto L_003C35A0;
    case 296u: goto L_003C35C0;
    case 297u: goto L_003C35E0;
    case 298u: goto L_003C3618;
    case 299u: goto L_003C3630;
    case 300u: goto L_003C3640;
    case 301u: goto L_003C3650;
    case 302u: goto L_003C367C;
    case 303u: goto L_003C3710;
    case 304u: goto L_003C3750;
    case 305u: goto L_003C3768;
    case 306u: goto L_003C3780;
    case 307u: goto L_003C37AC;
    case 308u: goto L_003C37C0;
    case 309u: goto L_003C37D0;
    case 310u: goto L_003C3850;
    case 311u: goto L_003C3874;
    case 312u: goto L_003C38B0;
    case 313u: goto L_003C38F4;
    case 314u: goto L_003C3930;
    case 315u: goto L_003C3950;
    case 316u: goto L_003C3960;
    case 317u: goto L_003C3970;
    case 318u: goto L_003C3980;
    case 319u: goto L_003C3990;
    case 320u: goto L_003C39A0;
    case 321u: goto L_003C39E8;
    case 322u: goto L_003C3A0C;
    case 323u: goto L_003C3A3C;
    case 324u: goto L_003C3A74;
    case 325u: goto L_003C3AB0;
    case 326u: goto L_003C3AD0;
    case 327u: goto L_003C3AE0;
    case 328u: goto L_003C3AF0;
    case 329u: goto L_003C3B00;
    case 330u: goto L_003C3B10;
    case 331u: goto L_003C3B20;
    case 332u: goto L_003C3B40;
    case 333u: goto L_003C3B70;
    case 334u: goto L_003C3B84;
    case 335u: goto L_003C3BF0;
    case 336u: goto L_003C3C10;
    case 337u: goto L_003C3C50;
    case 338u: goto L_003C3C60;
    case 339u: goto L_003C3C70;
    case 340u: goto L_003C3D70;
    case 341u: goto L_003C3DA0;
    case 342u: goto L_003C3DC0;
    case 343u: goto L_003C3DE8;
    case 344u: goto L_003C3DF4;
    case 345u: goto L_003C3E04;
    case 346u: goto L_003C3E10;
    case 347u: goto L_003C3E20;
    case 348u: goto L_003C3E80;
    case 349u: goto L_003C3E8C;
    case 350u: goto L_003C3E9C;
    case 351u: goto L_003C3ED8;
    case 352u: goto L_003C3EF0;
    case 353u: goto L_003C3F34;
    case 354u: goto L_003C3F44;
    case 355u: goto L_003C3F70;
    case 356u: goto L_003C3FD0;
    default: bad_entry(c, 0x003C0000u); return;
    }
L_003C0000:
    c.budget -= 1;
L_003C0004:
    set32(c.r[4], ld32((c.r[6].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C0018; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0018u); set32(c.r[5], ld32((c.r[16].w[0] + 112u)));  if (depth < kMaxDepth) unit_000E(c, 279u, depth + 1u); else { c.pc = 0x0015A3E0u; return; } if (c.pc != 0x003C0018u) [[unlikely]] return; }
L_003C0018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 196u), 0u);  if (t) { goto L_003C0070; } }
L_003C0020:
    set32(c.r[3], ld32((c.r[5].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C0068; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 192u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 128u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C0068; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C0068; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0064u); set32(c.r[5], ld32((c.r[16].w[0] + 112u)));  if (depth < kMaxDepth) unit_000E(c, 279u, depth + 1u); else { c.pc = 0x0015A3E0u; return; } if (c.pc != 0x003C0064u) [[unlikely]] return; }
L_003C0064:
    c.budget -= 1;
L_003C0068:
    st32((c.r[16].w[0] + 196u), 0u);
    c.budget -= 2;
L_003C0070:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003C00A0; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C008Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C008Cu) [[unlikely]] return; }
L_003C008C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C00A0; } }
    c.budget -= 1;
L_003C0098:
    set32(c.r[17], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 2;
L_003C00A0:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 192u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BFEECu | kUnwind; return; } [[clang::musttail]] return unit_00A7(c, 412u, depth); }
L_003C00A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C00D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C02D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C02D0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C02D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_003C0160; }
    set32(c.r[3], ld32((c.r[19].w[0] + 184u)));
    c.f[1] = ld32((c.r[19].w[0] + 200u));
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[19].w[0] + 176u)));  goto L_003C0150; }
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_003C015C; } }
L_003C0150:
    c.f[0] = ld32((c.r[3].w[0] + 156u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 200u), c.f[0]);
    c.budget -= 3;
L_003C015C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_003C0160:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C02D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C02D0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 196u)));  goto L_003C01A4; }
    set32(c.r[5], ld32((c.r[19].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C01A0u); set32(c.r[4], c.r[19].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003C01A0u) [[unlikely]] return; }
L_003C01A0:
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    c.budget -= 1;
L_003C01A4:
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003C01C0; }
    set32(c.r[4], c.r[19].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C01BCu); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003C01BCu) [[unlikely]] return; }
L_003C01BC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003C01C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C01C8u);  if (depth < kMaxDepth) unit_00A7(c, 310u, depth + 1u); else { c.pc = 0x003BEE40u; return; } if (c.pc != 0x003C01C8u) [[unlikely]] return; }
L_003C01C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C01D0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 327u, depth + 1u); else { c.pc = 0x003BF090u; return; } if (c.pc != 0x003C01D0u) [[unlikely]] return; }
L_003C01D0:
    set32(c.r[3], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003C01F8; }
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C02D0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003C01F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0200u);  if (depth < kMaxDepth) unit_00A7(c, 331u, depth + 1u); else { c.pc = 0x003BF130u; return; } if (c.pc != 0x003C0200u) [[unlikely]] return; }
L_003C0200:
    set32(c.r[3], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 192u)));  goto L_003C0228; }
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C02D0; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 192u)));
    c.budget -= 1;
L_003C0228:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0238u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 366u, depth + 1u); else { c.pc = 0x003BF760u; return; } if (c.pc != 0x003C0238u) [[unlikely]] return; }
L_003C0238:
    st32((c.r[19].w[0] + 168u), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003C02D0; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003C0250:
    set32(c.r[2], ld32((c.r[19].w[0] + 216u)));
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 10u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C0288; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 192u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[7], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0288u); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 79u, depth + 1u); else { c.pc = 0x003C0FA0u; return; } if (c.pc != 0x003C0288u) [[unlikely]] return; }
L_003C0288:
    set32(c.r[2], ld32((c.r[19].w[0] + 192u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C02A4u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 383u, depth + 1u); else { c.pc = 0x003BFB30u; return; } if (c.pc != 0x003C02A4u) [[unlikely]] return; }
L_003C02A4:
    set32(c.r[3], ld32((c.r[19].w[0] + 216u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 10u));
    c.r[3].d[0] = c.r[3].d[0] & 254ull;
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0250u | kUnwind; return; } goto L_003C0250; } }
L_003C02D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C02F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[10], c.r[6].w[0] + 1u);
    c.r[1].d[0] = c.r[7].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003C0390; } }
    set32(c.r[3], c.r[10].w[0] << 3);
    set32(c.r[8], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_003C030C:
    c.f[0] = ld32((c.r[8].w[0]));
    set32(c.r[9], c.r[10].w[0] - 1u);
    c.f[1] = ld32((c.r[8].w[0] + 4u));
    set32(c.r[3], c.r[9].w[0] << 3);
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 12u), c.f[1]);  if (t) { goto L_003C0348; } }
    c.budget -= 1;
L_003C0330:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[9], c.r[9].w[0] - 1u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] - 8u);
    c.budget -= 6;
L_003C0348:
    c.r[3].d[0] = c.r[9].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C0368; } }
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0330u | kUnwind; return; } goto L_003C0330; } }
    c.budget -= 1;
L_003C0368:
    set32(c.r[3], c.r[9].w[0] << 3);
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.r[1].d[0] = c.r[7].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    set32(c.r[8], c.r[8].w[0] + 8u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[4].w[0] + 12u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C030Cu | kUnwind; return; } goto L_003C030C; } }
    c.budget -= 1;
L_003C0390:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C03A0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C0530; } }
    set32(c.r[7], c.r[6].w[0] - 1u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003C03D0:
    set32(c.r[3], c.r[7].w[0] - c.r[6].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003C03F8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C03ECu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 21u, depth + 1u); else { c.pc = 0x003C02F0u; return; } if (c.pc != 0x003C03ECu) [[unlikely]] return; }
L_003C03EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C0510; } }
    c.budget -= 1;
L_003C03F8:
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], c.r[7].w[0] << 3);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_003C0438; } }
    c.budget -= 1;
L_003C0430:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 2;
L_003C0438:
    set32(c.r[3], c.r[10].w[0] << 3);
    set32(c.r[8], c.r[17].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0430u | kUnwind; return; } goto L_003C0430; } }
    set32(c.r[3], c.r[9].w[0] << 3);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C0488; } }
L_003C0468:
    set32(c.r[3], c.r[3].w[0] - 8u);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    set32(c.r[9], c.r[9].w[0] - 1u);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0468u | kUnwind; return; } goto L_003C0468; } }
    c.budget -= 1;
L_003C0488:
    c.r[1].d[0] = c.r[10].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003C04D8; } }
    set32(c.r[3], c.r[9].w[0] << 3);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.f[1] = ld32((c.r[8].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[29].w[0] + 328u), c.f[1]);
    st32((c.r[8].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 332u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    set32(c.r[3], ld32((c.r[29].w[0] + 328u)));
    c.f[0] = ld32((c.r[29].w[0] + 332u));
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0438u | kUnwind; return; } goto L_003C0438; } }
L_003C04D8:
    c.r[1].d[0] = c.r[7].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003C0510; } }
    c.r[3].d[0] = c.r[9].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C0510; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 64u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 192u), c.r[10].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[10].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C03D0u | kUnwind; return; } goto L_003C03D0; } }
    c.budget -= 1;
L_003C0510:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003C0530; } }
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 192u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C03D0u | kUnwind; return; } goto L_003C03D0; } }
L_003C0530:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_003C0550:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 17;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_003C0AD4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C0AD0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C0AD0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C0AD0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C0AD0; } }
    set32(c.r[18], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 352u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[30].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_003C0630; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003C0614; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0600u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003C0600u) [[unlikely]] return; }
L_003C0600:
    set32(c.r[3], ld32((c.r[18].w[0] + 352u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_003C0630; } }
L_003C0614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C061Cu);  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003C061Cu) [[unlikely]] return; }
L_003C061C:
    set32(c.r[4], ld32((c.r[18].w[0] + 352u)));
    set32(c.r[2], 0u - 65u);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_003C0630:
    set32(c.r[3], ld32((c.r[18].w[0] + 352u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    c.r[23].d[0] = ld16((c.r[3].w[0] + 74u));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[17], c.r[23].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    if (c.r[17].sd[0] >= 0) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003C0654; }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_003C0654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C065Cu);  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003C065Cu) [[unlikely]] return; }
L_003C065C:
    set32(c.r[3], ld32((c.r[18].w[0] + 352u)));
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    st16((c.r[3].w[0] + 74u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 128ull;  goto L_003C0694; }
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C0AD0; } }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 1;
L_003C0694:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 172u)));  goto L_003C06B0; }
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C0AD0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 1;
L_003C06B0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 168u)));  goto L_003C06CC; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C06C4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003C06C4u) [[unlikely]] return; }
L_003C06C4:
    st32((c.r[16].w[0] + 172u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 2;
L_003C06CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 212u)));  goto L_003C06F0; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[5], c.r[2].w[0] << 3);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C06E4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003C06E4u) [[unlikely]] return; }
L_003C06E4:
    st32((c.r[16].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 168u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 3;
L_003C06F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003C0730; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C06FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 192u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0718u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 399u, depth + 1u); else { c.pc = 0x003BFD40u; return; } if (c.pc != 0x003C0718u) [[unlikely]] return; }
L_003C0718:
    set32(c.r[2], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C06FCu | kUnwind; return; } goto L_003C06FC; } }
    c.budget -= 1;
L_003C0730:
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003C0A7C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C0A78; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0758u); set32(c.r[20], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x003C0758u) [[unlikely]] return; }
L_003C0758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0760u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x003C0760u) [[unlikely]] return; }
L_003C0760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0768u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003C0768u) [[unlikely]] return; }
L_003C0768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0770u);  if (depth < kMaxDepth) unit_0013(c, 107u, depth + 1u); else { c.pc = 0x0016D590u; return; } if (c.pc != 0x003C0770u) [[unlikely]] return; }
L_003C0770:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C077Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 117u, depth + 1u); else { c.pc = 0x0016D790u; return; } if (c.pc != 0x003C077Cu) [[unlikely]] return; }
L_003C077C:
    set32(c.r[19], ld32((c.r[16].w[0] + 172u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0790u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 24u, depth + 1u); else { c.pc = 0x003C03A0u; return; } if (c.pc != 0x003C0790u) [[unlikely]] return; }
L_003C0790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0798u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0013(c, 125u, depth + 1u); else { c.pc = 0x0016D8E0u; return; } if (c.pc != 0x003C0798u) [[unlikely]] return; }
L_003C0798:
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_003C0A68; } }
L_003C07A4:
    set32(c.r[17], ld32((c.r[19].w[0])));
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 4;
    { const bool t = c.r[22].d[0] != c.r[4].d[0];  if (t) { goto L_003C07C0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_003C07D8; } }
L_003C07C0:
    set32(c.r[20], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[22].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C0A50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C07D4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 118u, depth + 1u); else { c.pc = 0x0016D7A0u; return; } if (c.pc != 0x003C07D4u) [[unlikely]] return; }
L_003C07D4:
    c.budget -= 1;
L_003C07D8:
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C0800; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C07F4u); set32(c.r[4], ld32((c.r[3].w[0] + 88u)));  if (depth < kMaxDepth) unit_0013(c, 125u, depth + 1u); else { c.pc = 0x0016D8E0u; return; } if (c.pc != 0x003C07F4u) [[unlikely]] return; }
L_003C07F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C0808; } }
    c.budget -= 1;
L_003C0800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0808u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0013(c, 125u, depth + 1u); else { c.pc = 0x0016D8E0u; return; } if (c.pc != 0x003C0808u) [[unlikely]] return; }
L_003C0808:
    set32(c.r[12], ld32((c.r[17].w[0] + 176u)));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[4] = ld32((c.r[12].w[0] + 124u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[12].w[0] + 112u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[9].w[0] + 15712u), c.f[1]);
    st32((c.r[8].w[0] + 15716u), c.f[4]);
    c.f[3] = ld32((c.r[12].w[0] + 116u));
    c.f[2] = c.r[11].w[0];
    c.f[0] = c.r[10].w[0];
    st32((c.r[7].w[0] + 15736u), c.f[1]);
    st32((c.r[6].w[0] + 15740u), c.f[3]);
    c.f[1] = ld32((c.r[12].w[0] + 120u));
    st32((c.r[4].w[0] + 15764u), c.f[4]);
    st32((c.r[2].w[0] + 15788u), c.f[3]);
    st32((c.r[5].w[0] + 15760u), c.f[1]);
    st32((c.r[3].w[0] + 15784u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 92u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 31;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003C0894; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003C08AC; } }
L_003C0894:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
L_003C08AC:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[5], c.r[2].w[0] << 24);
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003C08EC; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003C0904; } }
L_003C08EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
L_003C0904:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[2].w[0] << 16);
    c.f[1] = ld32((c.r[17].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];  if (t) { goto L_003C0944; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003C0960; } }
L_003C0944:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_003C0960:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[2].w[0] << 8);
    c.f[1] = ld32((c.r[17].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];  if (t) { goto L_003C09A0; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003C09BC; } }
L_003C09A0:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_003C09BC:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[3].w[0] + 15732u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 15756u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[3].w[0] + 15780u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 15804u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[17].w[0] + 144u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[17].w[0] + 140u));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[4].w[0] + 15724u), c.f[0]);
    set32(c.r[7], c.r[17].w[0] + 16u);
    st32((c.r[5].w[0] + 15728u), c.f[2]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[17].w[0] + 152u));
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] + 15712u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[11].w[0] + 15748u), c.f[0]);
    st32((c.r[10].w[0] + 15752u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    st32((c.r[8].w[0] + 15776u), c.f[2]);
    st32((c.r[2].w[0] + 15800u), c.f[1]);
    st32((c.r[9].w[0] + 15772u), c.f[0]);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0A4Cu); st32((c.r[3].w[0] + 15796u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 140u, depth + 1u); else { c.pc = 0x0016DA50u; return; } if (c.pc != 0x003C0A4Cu) [[unlikely]] return; }
L_003C0A4C:
    c.budget -= 1;
L_003C0A50:
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C07A4u | kUnwind; return; } goto L_003C07A4; } }
    c.budget -= 1;
L_003C0A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0A70u);  if (depth < kMaxDepth) unit_0013(c, 111u, depth + 1u); else { c.pc = 0x0016D670u; return; } if (c.pc != 0x003C0A70u) [[unlikely]] return; }
L_003C0A70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0A78u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x003C0A78u) [[unlikely]] return; }
L_003C0A78:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003C0A7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0A84u);  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003C0A84u) [[unlikely]] return; }
L_003C0A84:
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    c.r[3].d[0] = c.r[23].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.budget -= 5;
    { const bool t = c.r[30].d[0] == 0ull; st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003C0AB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0AA0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003C0AA0u) [[unlikely]] return; }
L_003C0AA0:
    set32(c.r[4], ld32((c.r[18].w[0] + 352u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_003C0AD0; } }
L_003C0AB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0ABCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003C0ABCu) [[unlikely]] return; }
L_003C0ABC:
    set32(c.r[5], ld32((c.r[18].w[0] + 352u)));
    set32(c.r[3], 0u - 65u);
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 5;
L_003C0AD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003C0AD4:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003C0B00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003C0D50; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C0D4C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C0D4C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C0D4C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C0D4C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C0BA8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C0B78:
    set32(c.r[2], ld32((c.r[18].w[0] + 192u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0B94u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 405u, depth + 1u); else { c.pc = 0x003BFE00u; return; } if (c.pc != 0x003C0B94u) [[unlikely]] return; }
L_003C0B94:
    set32(c.r[3], ld32((c.r[18].w[0] + 212u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0B78u | kUnwind; return; } goto L_003C0B78; } }
L_003C0BA8:
    set32(c.r[3], ld32((c.r[18].w[0] + 192u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 212u)));  goto L_003C0BE4; }
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C0BE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0BD4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 78u, depth + 1u); else { c.pc = 0x003C0F70u; return; } if (c.pc != 0x003C0BD4u) [[unlikely]] return; }
L_003C0BD4:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0BE0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003C0BE0u) [[unlikely]] return; }
L_003C0BE0:
    set32(c.r[5], ld32((c.r[18].w[0] + 212u)));
    c.budget -= 1;
L_003C0BE4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003C0C20; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C0BF0:
    set32(c.r[4], ld32((c.r[18].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0BFCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 101u, depth + 1u); else { c.pc = 0x003C4F80u; return; } if (c.pc != 0x003C0BFCu) [[unlikely]] return; }
L_003C0BFC:
    set32(c.r[2], ld32((c.r[18].w[0] + 192u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0C0Cu); set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 411u, depth + 1u); else { c.pc = 0x003BFEC0u; return; } if (c.pc != 0x003C0C0Cu) [[unlikely]] return; }
L_003C0C0C:
    set32(c.r[5], ld32((c.r[18].w[0] + 212u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0BF0u | kUnwind; return; } goto L_003C0BF0; } }
L_003C0C20:
    set32(c.r[4], ld32((c.r[18].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[1] = ld32((c.r[4].w[0] + 156u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C0D4C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003C0D08; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C0C50:
    set32(c.r[4], ld32((c.r[18].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0C5Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 101u, depth + 1u); else { c.pc = 0x003C4F80u; return; } if (c.pc != 0x003C0C5Cu) [[unlikely]] return; }
L_003C0C5C:
    set32(c.r[3], ld32((c.r[18].w[0] + 180u)));
    c.f[0] = ld32((c.r[18].w[0] + 144u));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.f[1] = ld32((c.r[3].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C0CF0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 192u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C0CD0; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 168u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C0CB0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 212u)));
    c.f[0] = ld32((c.r[4].w[0] + 160u));
    c.f[1] = ld32((c.r[3].w[0] + 156u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_003C0CB8; } }
L_003C0CB0:
    set32(c.r[3], ld32((c.r[4].w[0] + 212u)));
    c.f[1] = ld32((c.r[3].w[0] + 156u));
    c.budget -= 2;
L_003C0CB8:
    set32(c.r[3], ld32((c.r[18].w[0] + 204u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_003C0CF0; } }
L_003C0CD0:
    set32(c.r[3], ld32((c.r[18].w[0] + 204u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 156u));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 8;
L_003C0CF0:
    set32(c.r[3], ld32((c.r[18].w[0] + 212u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0C50u | kUnwind; return; } goto L_003C0C50; } }
    c.budget -= 1;
L_003C0D08:
    set32(c.r[3], ld32((c.r[18].w[0] + 176u)));
    c.f[1] = ld32((c.r[18].w[0] + 144u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 156u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[18].w[0] + 144u), c.f[1]);
    set32(c.r[3], ld32((c.r[18].w[0] + 184u)));
    c.f[1] = ld32((c.r[3].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C0D4C; } }
    c.f[0] = ld32((c.r[18].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C0D4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0D4Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 296u, depth + 1u); else { c.pc = 0x003BEC50u; return; } if (c.pc != 0x003C0D4Cu) [[unlikely]] return; }
L_003C0D4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003C0D50:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C0D70:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BEC50u | kUnwind; return; } [[clang::musttail]] return unit_00A7(c, 296u, depth); }
L_003C0D80:
    set32(c.r[5], ld32((c.r[4].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003C0DC0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003C0DC0; } }
L_003C0D98:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_003C0DB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C0DC4; } }
L_003C0DB4:
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0D98u | kUnwind; return; } goto L_003C0D98; } }
L_003C0DC0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C0DC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C0DD0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 192u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003C0E50; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C0E50; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C0E18:
    set32(c.r[2], ld32((c.r[21].w[0] + 192u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0E3Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 72u, depth + 1u); else { c.pc = 0x003C0E80u; return; } if (c.pc != 0x003C0E3Cu) [[unlikely]] return; }
L_003C0E3C:
    set32(c.r[3], ld32((c.r[21].w[0] + 212u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0E18u | kUnwind; return; } goto L_003C0E18; } }
L_003C0E50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003C0E80:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_003C0F18; } }
L_003C0EC0:
    set32(c.r[8], ld32((c.r[18].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_003C0EE8; } }
    set32(c.r[9], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0EE4u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 72u, depth + 1u); else { c.pc = 0x003C0E80u; return; } if (c.pc != 0x003C0EE4u) [[unlikely]] return; }
L_003C0EE4:
    c.budget -= 1;
L_003C0EE8:
    set32(c.r[4], ld32((c.r[22].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0EF4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 101u, depth + 1u); else { c.pc = 0x003C4F80u; return; } if (c.pc != 0x003C0EF4u) [[unlikely]] return; }
L_003C0EF4:
    set32(c.r[16], ld32((c.r[18].w[0] + 184u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0F0Cu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 276u, depth + 1u); else { c.pc = 0x003BE860u; return; } if (c.pc != 0x003C0F0Cu) [[unlikely]] return; }
L_003C0F0C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[18].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0EC0u | kUnwind; return; } goto L_003C0EC0; } }
    c.budget -= 1;
L_003C0F18:
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
L_003C0F40:
    set32(c.r[3], ld32((c.r[4].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C0F5C; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C0F5C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 112u)));
    c.budget -= 1;
L_003C0F5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C0F70:
    set32(c.r[3], ld32((c.r[4].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C0F8C; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C0F8C; } }
    set32(c.r[2], c.r[3].w[0] + 16u);
    c.budget -= 1;
L_003C0F8C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C0FA0:
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
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003C1030; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 192u)));
    c.budget -= 1;
L_003C0FD8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003C0FF8; } }
    set32(c.r[8], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0FF4u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 79u, depth + 1u); else { c.pc = 0x003C0FA0u; return; } if (c.pc != 0x003C0FF4u) [[unlikely]] return; }
L_003C0FF4:
    c.budget -= 1;
L_003C0FF8:
    set32(c.r[4], ld32((c.r[20].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1004u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 101u, depth + 1u); else { c.pc = 0x003C4F80u; return; } if (c.pc != 0x003C1004u) [[unlikely]] return; }
L_003C1004:
    set32(c.r[3], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_003C1020; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1020u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 265u, depth + 1u); else { c.pc = 0x003BE720u; return; } if (c.pc != 0x003C1020u) [[unlikely]] return; }
L_003C1020:
    set32(c.r[19], ld32((c.r[19].w[0] + 184u)));
    c.budget -= 3;
    if (c.r[19].d[0] != 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 192u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0FD8u | kUnwind; return; } goto L_003C0FD8; }
    c.budget -= 1;
L_003C1030:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C1050:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003C1108; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C1108; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C1108; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C10A4:
    set32(c.r[4], ld32((c.r[20].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C10B0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 101u, depth + 1u); else { c.pc = 0x003C4F80u; return; } if (c.pc != 0x003C10B0u) [[unlikely]] return; }
L_003C10B0:
    set32(c.r[3], ld32((c.r[20].w[0] + 180u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[19].d[0];  if (t) { goto L_003C10F0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 216u)));
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 10u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 216u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 216u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 11;
L_003C10F0:
    set32(c.r[3], ld32((c.r[20].w[0] + 212u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C10A4u | kUnwind; return; } goto L_003C10A4; } }
    c.budget -= 1;
L_003C1108:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C1130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003C1194; }
    set32(c.r[3], ld32((c.r[4].w[0] + 212u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003C1190; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_003C1190; } }
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 192u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C1190; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1190u);  if (depth < kMaxDepth) unit_00A8(c, 91u, depth + 1u); else { c.pc = 0x003C1210u; return; } if (c.pc != 0x003C1190u) [[unlikely]] return; }
L_003C1190:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003C1194:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C11A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003C1204; }
    set32(c.r[3], ld32((c.r[4].w[0] + 212u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003C1200; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_003C1200; } }
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 192u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C1200; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1200u);  if (depth < kMaxDepth) unit_00A8(c, 91u, depth + 1u); else { c.pc = 0x003C1210u; return; } if (c.pc != 0x003C1200u) [[unlikely]] return; }
L_003C1200:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003C1204:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C1210:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1234u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 101u, depth + 1u); else { c.pc = 0x003C4F80u; return; } if (c.pc != 0x003C1234u) [[unlikely]] return; }
L_003C1234:
    set32(c.r[3], ld32((c.r[18].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C12D0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 192u)));  goto L_003C128C; }
    set32(c.r[3], ld32((c.r[18].w[0] + 192u)));
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_003C1298; } }
L_003C1268:
    set32(c.r[16], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1268u | kUnwind; return; } goto L_003C1268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C1298; } }
L_003C128C:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 3;
L_003C1298:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003C12D0; } }
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0] + 216u)));
    c.budget -= 4;
L_003C12B0:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 9u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C12C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 161u, depth + 1u); else { c.pc = 0x003BD3F0u; return; } if (c.pc != 0x003C12C4u) [[unlikely]] return; }
L_003C12C4:
    set32(c.r[16], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 216u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C12B0u | kUnwind; return; } goto L_003C12B0; }
L_003C12D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C12F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C130Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_00A8(c, 296u, depth + 1u); else { c.pc = 0x003C35C0u; return; } if (c.pc != 0x003C130Cu) [[unlikely]] return; }
L_003C130C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 5008u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 224u), 0u);
    st32((c.r[16].w[0] + 228u), 0u);
    st32((c.r[16].w[0] + 232u), 0u);
    st32((c.r[16].w[0] + 236u), 0u);
    st32((c.r[16].w[0] + 240u), 0u);
    st32((c.r[16].w[0] + 244u), 0u);
    st32((c.r[16].w[0] + 248u), 0u);
    st32((c.r[16].w[0] + 252u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1350u); st32((c.r[16].w[0] + 256u), 0u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003C1350u) [[unlikely]] return; }
L_003C1350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1358u); set32(c.r[4], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003C1358u) [[unlikely]] return; }
L_003C1358:
    st32((c.r[16].w[0] + 144u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 148u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 152u), 0u);
    st32((c.r[16].w[0] + 156u), 0u);
    st32((c.r[16].w[0] + 160u), 0u);
    st32((c.r[16].w[0] + 164u), 0u);
    st32((c.r[16].w[0] + 168u), c.f[20]);
    st32((c.r[16].w[0] + 172u), c.f[20]);
    st32((c.r[16].w[0] + 176u), 0u);
    st32((c.r[16].w[0] + 204u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 192u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 196u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 200u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 208u), 0u);
    st32((c.r[16].w[0] + 212u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C13B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C1400; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 5008u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C13DCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 112u, depth + 1u); else { c.pc = 0x003C1540u; return; } if (c.pc != 0x003C13DCu) [[unlikely]] return; }
L_003C13DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C13E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 297u, depth + 1u); else { c.pc = 0x003C35E0u; return; } if (c.pc != 0x003C13E8u) [[unlikely]] return; }
L_003C13E8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003C1404; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1400u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003C1400u) [[unlikely]] return; }
L_003C1400:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C1404:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C1420:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 236u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C1490; } }
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C145Cu); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003C145Cu) [[unlikely]] return; }
L_003C145C:
    set32(c.r[18], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1468u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_000D(c, 364u, depth + 1u); else { c.pc = 0x001575E0u; return; } if (c.pc != 0x003C1468u) [[unlikely]] return; }
L_003C1468:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = ld32((c.r[3].w[0] + 12u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1480u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 64u, depth + 1u); else { c.pc = 0x0015C830u; return; } if (c.pc != 0x003C1480u) [[unlikely]] return; }
L_003C1480:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003C1494; }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 236u), c.r[3].w[0]);
    c.budget -= 2;
L_003C1490:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003C1494:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C14B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 240u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 24ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C1530; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C14E4u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000D(c, 328u, depth + 1u); else { c.pc = 0x00157250u; return; } if (c.pc != 0x003C14E4u) [[unlikely]] return; }
L_003C14E4:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C14F0u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003C14F0u) [[unlikely]] return; }
L_003C14F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003C1534; }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1514u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0017(c, 51u, depth + 1u); else { c.pc = 0x0017C6D0u; return; } if (c.pc != 0x003C1514u) [[unlikely]] return; }
L_003C1514:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C1530; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 240u), c.r[3].w[0]);
    c.budget -= 2;
L_003C1530:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003C1534:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C1540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 10;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003C15CC; }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C15C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1588u); set32(c.r[5], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 93u, depth + 1u); else { c.pc = 0x003C4E90u; return; } if (c.pc != 0x003C1588u) [[unlikely]] return; }
L_003C1588:
    set32(c.r[2], ld32((c.r[16].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C15B8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003C1598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C15A0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 124u, depth + 1u); else { c.pc = 0x003C16B0u; return; } if (c.pc != 0x003C15A0u) [[unlikely]] return; }
L_003C15A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 228u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1598u | kUnwind; return; } goto L_003C1598; }
    c.budget -= 1;
L_003C15B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C15C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 144u, depth + 1u); else { c.pc = 0x003C1AF0u; return; } if (c.pc != 0x003C15C0u) [[unlikely]] return; }
L_003C15C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C15C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 146u, depth + 1u); else { c.pc = 0x003C1B30u; return; } if (c.pc != 0x003C15C8u) [[unlikely]] return; }
L_003C15C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003C15CC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C15E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1608u); c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 100u, depth + 1u); else { c.pc = 0x003C4F40u; return; } if (c.pc != 0x003C1608u) [[unlikely]] return; }
L_003C1608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1610u); set32(c.r[4], 0u + 224u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003C1610u) [[unlikely]] return; }
L_003C1610:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 224u)));  goto L_003C1634; }
    set32(c.r[6], ld32((c.r[16].w[0] + 224u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C162Cu); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_00A7(c, 280u, depth + 1u); else { c.pc = 0x003BE900u; return; } if (c.pc != 0x003C162Cu) [[unlikely]] return; }
L_003C162C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 2;
L_003C1634:
    set32(c.r[5], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 224u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 144u)));  goto L_003C1660; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C165Cu);  if (depth < kMaxDepth) unit_00A8(c, 285u, depth + 1u); else { c.pc = 0x003C34D0u; return; } if (c.pc != 0x003C165Cu) [[unlikely]] return; }
L_003C165C:
    set32(c.r[3], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 1;
L_003C1660:
    set32(c.r[7], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 16u)));  if (t) { goto L_003C1690; } }
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003C1694; }
    set32(c.r[5], ld32((c.r[6].w[0] + 40u)));
    c.f[12] = ld32((c.r[16].w[0] + 248u));
    set32(c.r[6], ld32((c.r[6].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[7].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1690u); set32(c.r[4], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C1690u) [[unlikely]] return; }
L_003C1690:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003C1694:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C16B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 224u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C1718; } }
    set32(c.r[16], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003C171C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C16E8u); set32(c.r[4], ld32((c.r[17].w[0] + 144u)));  if (depth < kMaxDepth) unit_00A9(c, 100u, depth + 1u); else { c.pc = 0x003C4F40u; return; } if (c.pc != 0x003C16E8u) [[unlikely]] return; }
L_003C16E8:
    set32(c.r[3], ld32((c.r[17].w[0] + 224u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 224u)));  goto L_003C1710; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C170Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C170Cu) [[unlikely]] return; }
L_003C170C:
    set32(c.r[3], ld32((c.r[17].w[0] + 224u)));
    c.budget -= 1;
L_003C1710:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), 0u);
    c.budget -= 2;
L_003C1718:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003C171C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C1730:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1758u); set32(c.r[4], ld32((c.r[4].w[0] + 144u)));  if (depth < kMaxDepth) unit_00A9(c, 93u, depth + 1u); else { c.pc = 0x003C4E90u; return; } if (c.pc != 0x003C1758u) [[unlikely]] return; }
L_003C1758:
    set32(c.r[2], ld32((c.r[18].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003C17A8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 144u)));
    c.budget -= 1;
L_003C1768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1770u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 100u, depth + 1u); else { c.pc = 0x003C4F40u; return; } if (c.pc != 0x003C1770u) [[unlikely]] return; }
L_003C1770:
    set32(c.r[2], ld32((c.r[18].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 228u)));  goto L_003C1798; }
    set32(c.r[2], ld32((c.r[18].w[0] + 224u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_003C17AC; } }
L_003C1798:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 144u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1768u | kUnwind; return; } goto L_003C1768; }
L_003C17A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C17AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C17D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 228u)));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_003C1A10; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C1810:
    set32(c.r[3], ld32((c.r[21].w[0] + 224u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C19F8; } }
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C19F8; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1844u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 100u, depth + 1u); else { c.pc = 0x003C4F40u; return; } if (c.pc != 0x003C1844u) [[unlikely]] return; }
L_003C1844:
    set32(c.r[2], ld32((c.r[21].w[0] + 144u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003C1980; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003C1860:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 224u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C18B8; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C18D0; } }
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], ld32((c.r[21].w[0] + 232u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_003C18D0; } }
    c.budget -= 1;
L_003C18B8:
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[21].w[0] + 232u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 6;
L_003C18D0:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 232u)));
    set32(c.r[16], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[21].w[0] + 232u)));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C1968; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C1968; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 224u)));
    set32(c.r[4], c.r[3].w[0] + 16u);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1930u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003C1930u) [[unlikely]] return; }
L_003C1930:
    set32(c.r[2], ld32((c.r[21].w[0] + 232u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C1968; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 232u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1968u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 216u, depth + 1u); else { c.pc = 0x0018F420u; return; } if (c.pc != 0x003C1968u) [[unlikely]] return; }
L_003C1968:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1860u | kUnwind; return; } goto L_003C1860; } }
    c.budget -= 1;
L_003C1980:
    set32(c.r[2], ld32((c.r[21].w[0] + 224u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[16], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C199Cu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 124u, depth + 1u); else { c.pc = 0x003C16B0u; return; } if (c.pc != 0x003C199Cu) [[unlikely]] return; }
L_003C199C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_003C19C8; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_003C19F8; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C19BCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 118u, depth + 1u); else { c.pc = 0x003C15E0u; return; } if (c.pc != 0x003C19BCu) [[unlikely]] return; }
L_003C19BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C19F8; } }
    c.budget -= 1;
L_003C19C8:
    set32(c.r[3], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003C19F8; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C19E4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 118u, depth + 1u); else { c.pc = 0x003C15E0u; return; } if (c.pc != 0x003C19E4u) [[unlikely]] return; }
L_003C19E4:
    set32(c.r[3], ld32((c.r[21].w[0] + 224u)));
    set32(c.r[4], c.r[16].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 148u), c.r[4].w[0]);
    c.budget -= 5;
L_003C19F8:
    set32(c.r[4], ld32((c.r[21].w[0] + 228u)));
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[3].d[0] = c.r[22].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1810u | kUnwind; return; } goto L_003C1810; } }
    c.budget -= 1;
L_003C1A10:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003C1AC0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003C1A20:
    set32(c.r[3], ld32((c.r[21].w[0] + 232u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C1AA8; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 224u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C1A58; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1A54u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 124u, depth + 1u); else { c.pc = 0x003C16B0u; return; } if (c.pc != 0x003C1A54u) [[unlikely]] return; }
L_003C1A54:
    c.budget -= 1;
L_003C1A58:
    set32(c.r[2], ld32((c.r[21].w[0] + 232u)));
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C1A88; } }
    set32(c.r[6], c.r[3].w[0] + 16u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1A7Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 118u, depth + 1u); else { c.pc = 0x003C15E0u; return; } if (c.pc != 0x003C1A7Cu) [[unlikely]] return; }
L_003C1A7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C1A98; } }
    c.budget -= 1;
L_003C1A88:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1A98u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 118u, depth + 1u); else { c.pc = 0x003C15E0u; return; } if (c.pc != 0x003C1A98u) [[unlikely]] return; }
L_003C1A98:
    set32(c.r[3], ld32((c.r[21].w[0] + 232u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0]), 0u);
    c.budget -= 4;
L_003C1AA8:
    set32(c.r[3], ld32((c.r[21].w[0] + 228u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 80u);
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1A20u | kUnwind; return; } goto L_003C1A20; } }
L_003C1AC0:
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
L_003C1AF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 224u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C1B18; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1B14u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003C1B14u) [[unlikely]] return; }
L_003C1B14:
    st32((c.r[16].w[0] + 224u), 0u);
    c.budget -= 1;
L_003C1B18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C1B30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 232u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C1B58; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1B54u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003C1B54u) [[unlikely]] return; }
L_003C1B54:
    st32((c.r[16].w[0] + 232u), 0u);
    c.budget -= 1;
L_003C1B58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C1B70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_003C1D08; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C1D08; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C1D08; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);  goto L_003C1BDC; }
    c.f[20] = c.f[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 2;
L_003C1BDC:
    c.r[3].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0])));  goto L_003C1C18; }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.f[0] = ld32((c.r[18].w[0] + 244u));
    c.f[1] = ld32((c.r[3].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);  goto L_003C1C10; }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_003C1C14; } }
L_003C1C10:
    st32((c.r[18].w[0] + 244u), c.f[0]);
    c.budget -= 1;
L_003C1C14:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003C1C18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C1D08; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1C34u); set32(c.r[4], ld32((c.r[18].w[0] + 144u)));  if (depth < kMaxDepth) unit_00A9(c, 93u, depth + 1u); else { c.pc = 0x003C4E90u; return; } if (c.pc != 0x003C1C34u) [[unlikely]] return; }
L_003C1C34:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1C40u); st32((c.r[18].w[0] + 172u), c.f[20]);  if (depth < kMaxDepth) unit_00A8(c, 104u, depth + 1u); else { c.pc = 0x003C1420u; return; } if (c.pc != 0x003C1C40u) [[unlikely]] return; }
L_003C1C40:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003C1C64; }
    set32(c.r[3], ld32((c.r[18].w[0] + 236u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C1D08; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003C1C64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1C6Cu);  if (depth < kMaxDepth) unit_00A8(c, 108u, depth + 1u); else { c.pc = 0x003C14B0u; return; } if (c.pc != 0x003C1C6Cu) [[unlikely]] return; }
L_003C1C6C:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 208u)));  goto L_003C1C90; }
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C1D08; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 208u)));
    c.budget -= 1;
L_003C1C90:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 228u)));  goto L_003C1CB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1CA0u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x003C1CA0u) [[unlikely]] return; }
L_003C1CA0:
    set32(c.r[4], c.r[18].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1CACu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003C1CACu) [[unlikely]] return; }
L_003C1CAC:
    set32(c.r[3], ld32((c.r[18].w[0] + 228u)));
    c.budget -= 1;
L_003C1CB0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C1D08; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C1CBC:
    set32(c.r[3], ld32((c.r[18].w[0] + 224u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C1CF0; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1CDCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 100u, depth + 1u); else { c.pc = 0x003C4F40u; return; } if (c.pc != 0x003C1CDCu) [[unlikely]] return; }
L_003C1CDC:
    set32(c.r[2], ld32((c.r[18].w[0] + 224u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1CECu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A8(c, 11u, depth + 1u); else { c.pc = 0x003C00D0u; return; } if (c.pc != 0x003C1CECu) [[unlikely]] return; }
L_003C1CEC:
    c.budget -= 1;
L_003C1CF0:
    set32(c.r[3], ld32((c.r[18].w[0] + 228u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1CBCu | kUnwind; return; } goto L_003C1CBC; } }
    c.budget -= 1;
L_003C1D08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C1D30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 12;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003C1ED8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C1ED4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C1ED4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C1ED4; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1D9Cu); set32(c.r[4], ld32((c.r[19].w[0] + 144u)));  if (depth < kMaxDepth) unit_00A9(c, 93u, depth + 1u); else { c.pc = 0x003C4E90u; return; } if (c.pc != 0x003C1D9Cu) [[unlikely]] return; }
L_003C1D9C:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));  if (t) { goto L_003C1DBC; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 236u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C1ED4; } }
L_003C1DBC:
    c.r[3].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 208u)));  goto L_003C1DD8; }
    set32(c.r[3], ld32((c.r[19].w[0] + 240u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C1ED4; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 208u)));
    c.budget -= 1;
L_003C1DD8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 12u)));  goto L_003C1DF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1DE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x003C1DE8u) [[unlikely]] return; }
L_003C1DE8:
    set32(c.r[4], c.r[19].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1DF4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003C1DF4u) [[unlikely]] return; }
L_003C1DF4:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 1;
L_003C1DF8:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 12u)));  goto L_003C1E14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1E10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00161BB0u; return; } if (c.pc != 0x003C1E10u) [[unlikely]] return; }
L_003C1E10:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 1;
L_003C1E14:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 228u)));  goto L_003C1E3C; }
    set32(c.r[4], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C1E38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1E38u);  if (depth < kMaxDepth) unit_00A9(c, 199u, depth + 1u); else { c.pc = 0x003C6050u; return; } if (c.pc != 0x003C1E38u) [[unlikely]] return; }
L_003C1E38:
    set32(c.r[3], ld32((c.r[19].w[0] + 228u)));
    c.budget -= 1;
L_003C1E3C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003C1E90; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C1E48:
    set32(c.r[3], ld32((c.r[19].w[0] + 224u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C1E78; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1E68u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 100u, depth + 1u); else { c.pc = 0x003C4F40u; return; } if (c.pc != 0x003C1E68u) [[unlikely]] return; }
L_003C1E68:
    set32(c.r[2], ld32((c.r[19].w[0] + 224u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1E78u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A8(c, 30u, depth + 1u); else { c.pc = 0x003C0550u; return; } if (c.pc != 0x003C1E78u) [[unlikely]] return; }
L_003C1E78:
    set32(c.r[3], ld32((c.r[19].w[0] + 228u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1E48u | kUnwind; return; } goto L_003C1E48; } }
    c.budget -= 1;
L_003C1E90:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 12u)));  goto L_003C1EBC; }
    set32(c.r[4], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C1EB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1EB8u);  if (depth < kMaxDepth) unit_00A9(c, 202u, depth + 1u); else { c.pc = 0x003C6100u; return; } if (c.pc != 0x003C1EB8u) [[unlikely]] return; }
L_003C1EB8:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 1;
L_003C1EBC:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C1ED4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1ED4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 207u, depth + 1u); else { c.pc = 0x00161C50u; return; } if (c.pc != 0x003C1ED4u) [[unlikely]] return; }
L_003C1ED4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003C1ED8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C1EF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003C20B4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C20B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C20B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C20B0; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1F58u); set32(c.r[4], ld32((c.r[18].w[0] + 144u)));  if (depth < kMaxDepth) unit_00A9(c, 93u, depth + 1u); else { c.pc = 0x003C4E90u; return; } if (c.pc != 0x003C1F58u) [[unlikely]] return; }
L_003C1F58:
    set32(c.r[2], ld32((c.r[18].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C1FB0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C1F68:
    set32(c.r[2], ld32((c.r[18].w[0] + 224u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C1F98; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1F88u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 100u, depth + 1u); else { c.pc = 0x003C4F40u; return; } if (c.pc != 0x003C1F88u) [[unlikely]] return; }
L_003C1F88:
    set32(c.r[2], ld32((c.r[18].w[0] + 224u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1F98u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A8(c, 55u, depth + 1u); else { c.pc = 0x003C0B00u; return; } if (c.pc != 0x003C1F98u) [[unlikely]] return; }
L_003C1F98:
    set32(c.r[2], ld32((c.r[18].w[0] + 228u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1F68u | kUnwind; return; } goto L_003C1F68; } }
    c.budget -= 1;
L_003C1FB0:
    c.f[1] = ld32((c.r[18].w[0] + 172u));
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[18].w[0] + 164u)));  goto L_003C200C; }
    c.f[0] = ld32((c.r[18].w[0] + 248u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 248u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.f[1] = ld32((c.r[2].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C2008; } }
    c.f[0] = ld32((c.r[18].w[0] + 248u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C2008; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2000u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 112u, depth + 1u); else { c.pc = 0x003C1540u; return; } if (c.pc != 0x003C2000u) [[unlikely]] return; }
L_003C2000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C20B0; } }
L_003C2008:
    set32(c.r[2], ld32((c.r[18].w[0] + 164u)));
    c.budget -= 1;
L_003C200C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C2098; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[18].w[0] + 252u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003C2098; } }
    set32(c.r[16], c.r[17].w[0] << 2);
    c.budget -= 1;
L_003C2030:
    set32(c.r[2], ld32((c.r[18].w[0] + 252u)));
    c.f[12] = ld32((c.r[18].w[0] + 248u));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C2098; } }
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2074u); c.r[4].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C2074u) [[unlikely]] return; }
L_003C2074:
    set32(c.r[2], ld32((c.r[18].w[0] + 252u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 252u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2030u | kUnwind; return; } goto L_003C2030; } }
L_003C2098:
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C20A4u); set32(c.r[4], ld32((c.r[18].w[0] + 144u)));  if (depth < kMaxDepth) unit_00A9(c, 93u, depth + 1u); else { c.pc = 0x003C4E90u; return; } if (c.pc != 0x003C20A4u) [[unlikely]] return; }
L_003C20A4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C20B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 131u, depth + 1u); else { c.pc = 0x003C17D0u; return; } if (c.pc != 0x003C20B0u) [[unlikely]] return; }
L_003C20B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003C20B4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C20D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_003C22B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003C22BC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C22B8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003C22B8; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2158u); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A9(c, 93u, depth + 1u); else { c.pc = 0x003C4E90u; return; } if (c.pc != 0x003C2158u) [[unlikely]] return; }
L_003C2158:
    st32((c.r[20].w[0] + 144u), c.r[19].w[0]);
    st32((c.r[20].w[0] + 8u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    st32((c.r[20].w[0] + 228u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 156u), c.r[21].w[0]);
    st32((c.r[20].w[0] + 160u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[20].w[0] + 212u), c.r[2].w[0]);  if (t) { goto L_003C21A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C21A0u);  if (depth < kMaxDepth) unit_00A9(c, 323u, depth + 1u); else { c.pc = 0x003C72B0u; return; } if (c.pc != 0x003C21A0u) [[unlikely]] return; }
L_003C21A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 152u), c.r[2].w[0]);  if (t) { goto L_003C21AC; } }
L_003C21A8:
    st32((c.r[20].w[0] + 152u), c.r[17].w[0]);
    c.budget -= 1;
L_003C21AC:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { st32((c.r[20].w[0] + 148u), c.r[16].w[0]);  goto L_003C21C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C21BCu);  if (depth < kMaxDepth) unit_00A9(c, 271u, depth + 1u); else { c.pc = 0x003C6A70u; return; } if (c.pc != 0x003C21BCu) [[unlikely]] return; }
L_003C21BC:
    st32((c.r[20].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 1;
L_003C21C0:
    set32(c.r[2], ld32((c.r[20].w[0] + 228u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C21D4u); set32(c.r[5], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003C21D4u) [[unlikely]] return; }
L_003C21D4:
    st32((c.r[20].w[0] + 224u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 228u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C21F4u); set32(c.r[5], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003C21F4u) [[unlikely]] return; }
L_003C21F4:
    st32((c.r[20].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 224u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_003C2214; }
    set32(c.r[2], ld32((c.r[20].w[0] + 232u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 228u)));  goto L_003C2238; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003C2214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C221Cu);  if (depth < kMaxDepth) unit_00A8(c, 144u, depth + 1u); else { c.pc = 0x003C1AF0u; return; } if (c.pc != 0x003C221Cu) [[unlikely]] return; }
L_003C221C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2224u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 146u, depth + 1u); else { c.pc = 0x003C1B30u; return; } if (c.pc != 0x003C2224u) [[unlikely]] return; }
L_003C2224:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { goto L_003C22B8; } }
L_003C2238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003C22B0; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003C2248:
    set32(c.r[2], ld32((c.r[20].w[0] + 224u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 232u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 144u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C226Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 100u, depth + 1u); else { c.pc = 0x003C4F40u; return; } if (c.pc != 0x003C226Cu) [[unlikely]] return; }
L_003C226C:
    set32(c.r[2], ld32((c.r[20].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C2298; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2294u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 118u, depth + 1u); else { c.pc = 0x003C15E0u; return; } if (c.pc != 0x003C2294u) [[unlikely]] return; }
L_003C2294:
    c.budget -= 1;
L_003C2298:
    set32(c.r[2], ld32((c.r[20].w[0] + 228u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 80u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2248u | kUnwind; return; } goto L_003C2248; } }
L_003C22B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C22BC; } }
L_003C22B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C22BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003C22E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C2310; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003C233C; }
L_003C2310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2318u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 112u, depth + 1u); else { c.pc = 0x003C1540u; return; } if (c.pc != 0x003C2318u) [[unlikely]] return; }
L_003C2318:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2338u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 178u, depth + 1u); else { c.pc = 0x003C20D0u; return; } if (c.pc != 0x003C2338u) [[unlikely]] return; }
L_003C2338:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003C233C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C2350:
    st32((c.r[4].w[0] + 156u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 160u), 0u);  c.pc = t; return; }
L_003C2360:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 224u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C2420; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C239Cu); set32(c.r[4], ld32((c.r[20].w[0] + 144u)));  if (depth < kMaxDepth) unit_00A9(c, 93u, depth + 1u); else { c.pc = 0x003C4E90u; return; } if (c.pc != 0x003C239Cu) [[unlikely]] return; }
L_003C239C:
    set32(c.r[2], ld32((c.r[20].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003C2420; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C23AC:
    set32(c.r[4], ld32((c.r[20].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C23B8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 100u, depth + 1u); else { c.pc = 0x003C4F40u; return; } if (c.pc != 0x003C23B8u) [[unlikely]] return; }
L_003C23B8:
    set32(c.r[2], ld32((c.r[20].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_003C23D8; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_003C2408; } }
L_003C23D8:
    set32(c.r[2], ld32((c.r[20].w[0] + 224u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C2400; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 196u)));
    set32(c.r[2], 0u - 9u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 5;
L_003C2400:
    set32(c.r[17], 0u + 1u);
    c.budget -= 2;
L_003C2408:
    set32(c.r[2], ld32((c.r[20].w[0] + 228u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C23ACu | kUnwind; return; } goto L_003C23AC; } }
    c.budget -= 1;
L_003C2420:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C2450:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 224u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C2508; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C248Cu); set32(c.r[4], ld32((c.r[20].w[0] + 144u)));  if (depth < kMaxDepth) unit_00A9(c, 93u, depth + 1u); else { c.pc = 0x003C4E90u; return; } if (c.pc != 0x003C248Cu) [[unlikely]] return; }
L_003C248C:
    set32(c.r[2], ld32((c.r[20].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003C2508; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C249C:
    set32(c.r[4], ld32((c.r[20].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C24A8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 100u, depth + 1u); else { c.pc = 0x003C4F40u; return; } if (c.pc != 0x003C24A8u) [[unlikely]] return; }
L_003C24A8:
    set32(c.r[2], ld32((c.r[20].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_003C24C8; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_003C24F0; } }
L_003C24C8:
    set32(c.r[2], ld32((c.r[20].w[0] + 224u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C24E8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 196u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[3].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 3;
L_003C24E8:
    set32(c.r[17], 0u + 1u);
    c.budget -= 2;
L_003C24F0:
    set32(c.r[2], ld32((c.r[20].w[0] + 228u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C249Cu | kUnwind; return; } goto L_003C249C; } }
    c.budget -= 1;
L_003C2508:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C2530:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C2638; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C2638; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2588u); set32(c.r[4], ld32((c.r[21].w[0] + 144u)));  if (depth < kMaxDepth) unit_00A9(c, 93u, depth + 1u); else { c.pc = 0x003C4E90u; return; } if (c.pc != 0x003C2588u) [[unlikely]] return; }
L_003C2588:
    set32(c.r[2], ld32((c.r[21].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003C2638; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C2598:
    set32(c.r[4], ld32((c.r[21].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C25A4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 100u, depth + 1u); else { c.pc = 0x003C4F40u; return; } if (c.pc != 0x003C25A4u) [[unlikely]] return; }
L_003C25A4:
    set32(c.r[2], ld32((c.r[21].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_003C25C8; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_003C2620; } }
    c.budget -= 1;
L_003C25C8:
    set32(c.r[2], ld32((c.r[21].w[0] + 224u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C25F8; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C25ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 118u, depth + 1u); else { c.pc = 0x003C15E0u; return; } if (c.pc != 0x003C25ECu) [[unlikely]] return; }
L_003C25EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_003C2620; } }
    c.budget -= 1;
L_003C25F8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003C2620; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C260Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 124u, depth + 1u); else { c.pc = 0x003C16B0u; return; } if (c.pc != 0x003C260Cu) [[unlikely]] return; }
L_003C260C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C261Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 118u, depth + 1u); else { c.pc = 0x003C15E0u; return; } if (c.pc != 0x003C261Cu) [[unlikely]] return; }
L_003C261C:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_003C2620:
    set32(c.r[2], ld32((c.r[21].w[0] + 228u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2598u | kUnwind; return; } goto L_003C2598; } }
    c.budget -= 1;
L_003C2638:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003C2660:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C2730; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C2730; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C26B0u); set32(c.r[4], ld32((c.r[20].w[0] + 144u)));  if (depth < kMaxDepth) unit_00A9(c, 93u, depth + 1u); else { c.pc = 0x003C4E90u; return; } if (c.pc != 0x003C26B0u) [[unlikely]] return; }
L_003C26B0:
    set32(c.r[2], ld32((c.r[20].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003C2730; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C26C0:
    set32(c.r[4], ld32((c.r[20].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C26CCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 100u, depth + 1u); else { c.pc = 0x003C4F40u; return; } if (c.pc != 0x003C26CCu) [[unlikely]] return; }
L_003C26CC:
    set32(c.r[2], ld32((c.r[20].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_003C26F0; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_003C2718; } }
    c.budget -= 1;
L_003C26F0:
    set32(c.r[2], ld32((c.r[20].w[0] + 224u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C2718; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04000000u);
    set32(c.r[17], 0u + 1u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_003C2718:
    set32(c.r[2], ld32((c.r[20].w[0] + 228u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C26C0u | kUnwind; return; } goto L_003C26C0; } }
    c.budget -= 1;
L_003C2730:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C2760:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C2838; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C2838; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C27B0u); set32(c.r[4], ld32((c.r[20].w[0] + 144u)));  if (depth < kMaxDepth) unit_00A9(c, 93u, depth + 1u); else { c.pc = 0x003C4E90u; return; } if (c.pc != 0x003C27B0u) [[unlikely]] return; }
L_003C27B0:
    set32(c.r[2], ld32((c.r[20].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003C2838; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C27C0:
    set32(c.r[4], ld32((c.r[20].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C27CCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 100u, depth + 1u); else { c.pc = 0x003C4F40u; return; } if (c.pc != 0x003C27CCu) [[unlikely]] return; }
L_003C27CC:
    set32(c.r[2], ld32((c.r[20].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_003C27F0; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_003C2820; } }
    c.budget -= 1;
L_003C27F0:
    set32(c.r[2], ld32((c.r[20].w[0] + 224u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C2820; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFBFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[17], 0u + 1u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 7;
L_003C2820:
    set32(c.r[2], ld32((c.r[20].w[0] + 228u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C27C0u | kUnwind; return; } goto L_003C27C0; } }
    c.budget -= 1;
L_003C2838:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C2860:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C2934; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 224u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003C2938; }
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C28B0u); set32(c.r[4], ld32((c.r[20].w[0] + 144u)));  if (depth < kMaxDepth) unit_00A9(c, 93u, depth + 1u); else { c.pc = 0x003C4E90u; return; } if (c.pc != 0x003C28B0u) [[unlikely]] return; }
L_003C28B0:
    set32(c.r[2], ld32((c.r[20].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003C2928; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C28C0:
    set32(c.r[4], ld32((c.r[20].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C28CCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 100u, depth + 1u); else { c.pc = 0x003C4F40u; return; } if (c.pc != 0x003C28CCu) [[unlikely]] return; }
L_003C28CC:
    set32(c.r[2], ld32((c.r[20].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_003C28F0; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_003C2910; } }
    c.budget -= 1;
L_003C28F0:
    set32(c.r[2], ld32((c.r[20].w[0] + 224u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C2910; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C290Cu);  if (depth < kMaxDepth) unit_00A8(c, 66u, depth + 1u); else { c.pc = 0x003C0D70u; return; } if (c.pc != 0x003C290Cu) [[unlikely]] return; }
L_003C290C:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_003C2910:
    set32(c.r[2], ld32((c.r[20].w[0] + 228u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C28C0u | kUnwind; return; } goto L_003C28C0; } }
    c.budget -= 1;
L_003C2928:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2934u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 131u, depth + 1u); else { c.pc = 0x003C17D0u; return; } if (c.pc != 0x003C2934u) [[unlikely]] return; }
L_003C2934:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C2938:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C2960:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C2A80; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C2A80; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C2A80; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C29AC:
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C2A68; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_003C2A68; } }
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C2A68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C29E8u);  if (depth < kMaxDepth) unit_00A8(c, 67u, depth + 1u); else { c.pc = 0x003C0D80u; return; } if (c.pc != 0x003C29E8u) [[unlikely]] return; }
L_003C29E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 224u)));  goto L_003C29F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C2A84; } }
L_003C29F8:
    c.f[0] = 0u;
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[6].w[0] + 184u)));
    c.f[1] = ld32((c.r[3].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[5], ld32((c.r[6].w[0] + 212u)));  goto L_003C2A20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C2A84; } }
L_003C2A20:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003C2A68; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 208u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003C2A30:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_003C2A58; }
    set32(c.r[3], ld32((c.r[6].w[0] + 208u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C2A54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C2A84; } }
L_003C2A54:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_003C2A58:
    c.r[3].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2A30u | kUnwind; return; } goto L_003C2A30; } }
    c.budget -= 1;
L_003C2A68:
    set32(c.r[3], ld32((c.r[19].w[0] + 228u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C29ACu | kUnwind; return; } goto L_003C29AC; } }
    c.budget -= 1;
L_003C2A80:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C2A84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C2AA0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003C2B70; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C2B70; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2AF8u); set32(c.r[4], ld32((c.r[21].w[0] + 144u)));  if (depth < kMaxDepth) unit_00A9(c, 93u, depth + 1u); else { c.pc = 0x003C4E90u; return; } if (c.pc != 0x003C2AF8u) [[unlikely]] return; }
L_003C2AF8:
    set32(c.r[3], ld32((c.r[21].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C2B70; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C2B08:
    set32(c.r[4], ld32((c.r[21].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2B14u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 100u, depth + 1u); else { c.pc = 0x003C4F40u; return; } if (c.pc != 0x003C2B14u) [[unlikely]] return; }
L_003C2B14:
    set32(c.r[3], ld32((c.r[21].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[20].d[0] == c.r[3].d[0];  if (t) { goto L_003C2B38; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_003C2B58; } }
    c.budget -= 1;
L_003C2B38:
    set32(c.r[3], ld32((c.r[21].w[0] + 224u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C2B58; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2B58u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 84u, depth + 1u); else { c.pc = 0x003C1050u; return; } if (c.pc != 0x003C2B58u) [[unlikely]] return; }
L_003C2B58:
    set32(c.r[3], ld32((c.r[21].w[0] + 228u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2B08u | kUnwind; return; } goto L_003C2B08; } }
    c.budget -= 1;
L_003C2B70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003C2BA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 164u), c.r[5].w[0]);  c.pc = t; return; }
L_003C2BB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2BD4u); set32(c.r[4], ld32((c.r[4].w[0] + 144u)));  if (depth < kMaxDepth) unit_00A9(c, 93u, depth + 1u); else { c.pc = 0x003C4E90u; return; } if (c.pc != 0x003C2BD4u) [[unlikely]] return; }
L_003C2BD4:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C2D00; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C2D00; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C2D00; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C2C04:
    set32(c.r[2], ld32((c.r[18].w[0] + 224u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C2CE8; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C2C54; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2C38u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 100u, depth + 1u); else { c.pc = 0x003C4F40u; return; } if (c.pc != 0x003C2C38u) [[unlikely]] return; }
L_003C2C38:
    set32(c.r[2], ld32((c.r[18].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C2CE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C2D08; } }
L_003C2C54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2C5Cu);  if (depth < kMaxDepth) unit_00A8(c, 67u, depth + 1u); else { c.pc = 0x003C0D80u; return; } if (c.pc != 0x003C2C5Cu) [[unlikely]] return; }
L_003C2C5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 224u)));  goto L_003C2C74; }
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 256u), c.r[3].w[0]);  if (t) { goto L_003C2D08; } }
L_003C2C74:
    c.f[0] = 0u;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0] + 184u)));
    c.f[1] = ld32((c.r[2].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[5].w[0] + 212u)));  goto L_003C2C9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C2D08; } }
L_003C2C9C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003C2CE8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 208u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003C2CB0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_003C2CD8; }
    set32(c.r[2], ld32((c.r[5].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C2CD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C2D08; } }
L_003C2CD4:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_003C2CD8:
    c.r[2].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2CB0u | kUnwind; return; } goto L_003C2CB0; } }
    c.budget -= 1;
L_003C2CE8:
    set32(c.r[2], ld32((c.r[18].w[0] + 228u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2C04u | kUnwind; return; } goto L_003C2C04; } }
    c.budget -= 1;
L_003C2D00:
    set32(c.r[2], ld32((c.r[18].w[0] + 256u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003C2D08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C2D20:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003C2E00; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C2E00; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2D80u); set32(c.r[4], ld32((c.r[21].w[0] + 144u)));  if (depth < kMaxDepth) unit_00A9(c, 93u, depth + 1u); else { c.pc = 0x003C4E90u; return; } if (c.pc != 0x003C2D80u) [[unlikely]] return; }
L_003C2D80:
    set32(c.r[3], ld32((c.r[21].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C2E00; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C2D90:
    set32(c.r[4], ld32((c.r[21].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2D9Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 100u, depth + 1u); else { c.pc = 0x003C4F40u; return; } if (c.pc != 0x003C2D9Cu) [[unlikely]] return; }
L_003C2D9C:
    set32(c.r[3], ld32((c.r[21].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[20].d[0] == c.r[3].d[0];  if (t) { goto L_003C2DC0; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_003C2DE8; } }
    c.budget -= 1;
L_003C2DC0:
    set32(c.r[3], ld32((c.r[21].w[0] + 224u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C2DE8; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2DE4u); c.r[7].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 69u, depth + 1u); else { c.pc = 0x003C0DD0u; return; } if (c.pc != 0x003C2DE4u) [[unlikely]] return; }
L_003C2DE4:
    c.budget -= 1;
L_003C2DE8:
    set32(c.r[3], ld32((c.r[21].w[0] + 228u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2D90u | kUnwind; return; } goto L_003C2D90; } }
    c.budget -= 1;
L_003C2E00:
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
L_003C2E30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003C2E70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2E54u);  if (depth < kMaxDepth) unit_00A8(c, 127u, depth + 1u); else { c.pc = 0x003C1730u; return; } if (c.pc != 0x003C2E54u) [[unlikely]] return; }
L_003C2E54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C2E6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2E64u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 78u, depth + 1u); else { c.pc = 0x003C0F70u; return; } if (c.pc != 0x003C2E64u) [[unlikely]] return; }
L_003C2E64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003C2E74; } }
L_003C2E6C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C2E70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003C2E74:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C2E80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003C2EC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2EA4u);  if (depth < kMaxDepth) unit_00A8(c, 127u, depth + 1u); else { c.pc = 0x003C1730u; return; } if (c.pc != 0x003C2EA4u) [[unlikely]] return; }
L_003C2EA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C2EBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2EB4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 77u, depth + 1u); else { c.pc = 0x003C0F40u; return; } if (c.pc != 0x003C2EB4u) [[unlikely]] return; }
L_003C2EB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003C2EC4; } }
L_003C2EBC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C2EC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003C2EC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C2ED0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[19], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 16;
    { const bool t = c.r[19].d[0] == 0ull; c.r[20].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003C2FE0; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003C2FD8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C2F20:
    set32(c.r[2], ld32((c.r[21].w[0] + 224u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C2FC0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2F40u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 100u, depth + 1u); else { c.pc = 0x003C4F40u; return; } if (c.pc != 0x003C2F40u) [[unlikely]] return; }
L_003C2F40:
    set32(c.r[2], ld32((c.r[21].w[0] + 224u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[23].d[0] != c.r[2].d[0];  if (t) { goto L_003C2FC0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C2FC0; } }
    c.budget -= 1;
L_003C2F70:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2F7Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 101u, depth + 1u); else { c.pc = 0x003C4F80u; return; } if (c.pc != 0x003C2F7Cu) [[unlikely]] return; }
L_003C2F7C:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_003C2FA8; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 224u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2FA4u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 87u, depth + 1u); else { c.pc = 0x003C1130u; return; } if (c.pc != 0x003C2FA4u) [[unlikely]] return; }
L_003C2FA4:
    c.budget -= 1;
L_003C2FA8:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2F70u | kUnwind; return; } goto L_003C2F70; } }
L_003C2FC0:
    set32(c.r[2], ld32((c.r[21].w[0] + 228u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2F20u | kUnwind; return; } goto L_003C2F20; } }
    c.budget -= 1;
L_003C2FD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C2FE4; } }
L_003C2FE0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C2FE4:
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
L_003C3010:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[19], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 16;
    { const bool t = c.r[19].d[0] == 0ull; c.r[20].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003C3110; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003C3108; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C3064:
    set32(c.r[2], ld32((c.r[21].w[0] + 224u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C30F0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3084u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 100u, depth + 1u); else { c.pc = 0x003C4F40u; return; } if (c.pc != 0x003C3084u) [[unlikely]] return; }
L_003C3084:
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[23].d[0];  if (t) { goto L_003C30F0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C30F0; } }
L_003C30A0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C30ACu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 101u, depth + 1u); else { c.pc = 0x003C4F80u; return; } if (c.pc != 0x003C30ACu) [[unlikely]] return; }
L_003C30AC:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_003C30D8; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 224u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C30D4u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 89u, depth + 1u); else { c.pc = 0x003C11A0u; return; } if (c.pc != 0x003C30D4u) [[unlikely]] return; }
L_003C30D4:
    c.budget -= 1;
L_003C30D8:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C30A0u | kUnwind; return; } goto L_003C30A0; } }
L_003C30F0:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3064u | kUnwind; return; } goto L_003C3064; } }
L_003C3108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C3114; } }
L_003C3110:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C3114:
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
L_003C3140:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C316Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 296u, depth + 1u); else { c.pc = 0x003C35C0u; return; } if (c.pc != 0x003C316Cu) [[unlikely]] return; }
L_003C316C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 5048u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 12u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 48u), 0u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C31ACu); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 273u, depth + 1u); else { c.pc = 0x003C3300u; return; } if (c.pc != 0x003C31ACu) [[unlikely]] return; }
L_003C31AC:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[3].w[0] + 92u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C31E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C3228; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 5048u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3210u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 297u, depth + 1u); else { c.pc = 0x003C35E0u; return; } if (c.pc != 0x003C3210u) [[unlikely]] return; }
L_003C3210:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003C322C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3228u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003C3228u) [[unlikely]] return; }
L_003C3228:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C322C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C3240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003C32F0; }
    set32(c.r[16], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_003C32EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3274u);  if (depth < kMaxDepth) unit_0013(c, 391u, depth + 1u); else { c.pc = 0x0016FF50u; return; } if (c.pc != 0x003C3274u) [[unlikely]] return; }
L_003C3274:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_003C328C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C32EC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_003C328C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3294u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 393u, depth + 1u); else { c.pc = 0x0016FF80u; return; } if (c.pc != 0x003C3294u) [[unlikely]] return; }
L_003C3294:
    c.f[2] = ld32((c.r[17].w[0] + 56u));
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    c.f[12] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.f[12] = c.f[0];  goto L_003C32BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (t) { goto L_003C32C0; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_003C32BC:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_003C32C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C32C8u);  if (depth < kMaxDepth) unit_0014(c, 7u, depth + 1u); else { c.pc = 0x001700C0u; return; } if (c.pc != 0x003C32C8u) [[unlikely]] return; }
L_003C32C8:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    st32((c.r[3].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C32E0u); set32(c.r[4], c.r[3].w[0] + 96u);  if (depth < kMaxDepth) unit_001D(c, 234u, depth + 1u); else { c.pc = 0x00196630u; return; } if (c.pc != 0x003C32E0u) [[unlikely]] return; }
L_003C32E0:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C32ECu); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0014(c, 16u, depth + 1u); else { c.pc = 0x001701C0u; return; } if (c.pc != 0x003C32ECu) [[unlikely]] return; }
L_003C32EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003C32F0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C3300:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003C337C; } }
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003C3380; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3334u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 391u, depth + 1u); else { c.pc = 0x0016FF50u; return; } if (c.pc != 0x003C3334u) [[unlikely]] return; }
L_003C3334:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st32((c.r[18].w[0] + 8u), c.r[17].w[0]);  goto L_003C334C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C337C; } }
    st32((c.r[18].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 1;
L_003C334C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C335Cu); st32((c.r[18].w[0] + 12u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0014(c, 1u, depth + 1u); else { c.pc = 0x00170000u; return; } if (c.pc != 0x003C335Cu) [[unlikely]] return; }
L_003C335C:
    st32((c.r[18].w[0] + 56u), c.f[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C336Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 5u, depth + 1u); else { c.pc = 0x00170080u; return; } if (c.pc != 0x003C336Cu) [[unlikely]] return; }
L_003C336C:
    st32((c.r[18].w[0] + 60u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.budget -= 4;
L_003C337C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003C3380:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C33A0:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C33CC; } }
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.budget -= 8;
L_003C33CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C33E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003C3410; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 12u)));  goto L_003C3418; }
L_003C3410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C3460; } }
L_003C3418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3420u);  if (depth < kMaxDepth) unit_0013(c, 393u, depth + 1u); else { c.pc = 0x0016FF80u; return; } if (c.pc != 0x003C3420u) [[unlikely]] return; }
L_003C3420:
    c.f[2] = ld32((c.r[18].w[0] + 56u));
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    c.f[12] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.f[12] = c.f[0];  goto L_003C343C; }
L_003C343C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3444u); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_0014(c, 7u, depth + 1u); else { c.pc = 0x001700C0u; return; } if (c.pc != 0x003C3444u) [[unlikely]] return; }
L_003C3444:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3450u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 8u, depth + 1u); else { c.pc = 0x001700D0u; return; } if (c.pc != 0x003C3450u) [[unlikely]] return; }
L_003C3450:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C345Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 213u, depth + 1u); else { c.pc = 0x0019E620u; return; } if (c.pc != 0x003C345Cu) [[unlikely]] return; }
L_003C345C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003C3460:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C3480:
    set32(c.r[3], ld32((c.r[28].w[0] - 30188u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C34A0; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[28].w[0] - 30184u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 30188u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 30180u), 0u);
    st32((c.r[28].w[0] - 30176u), 0u);
    c.budget -= 5;
L_003C34A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C34B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30188u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C34C4; } }
    st32((c.r[28].w[0] - 30184u), 0u);
    st32((c.r[28].w[0] - 30188u), 0u);
    c.budget -= 2;
L_003C34C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C34D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30180u)));  c.pc = t; return; }
L_003C34E0:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { c.r[5].d[0] = c.r[4].d[0] + 0ull;  goto L_003C34F4; }
    set32(c.r[6], c.r[31].w[0] - 8u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_003C34F4:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30184u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00171F90u | kUnwind; return; } [[clang::musttail]] return unit_0014(c, 238u, depth); }
L_003C3500:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30184u)));
    c.budget -= 4;
    { c.r[6].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001720C0u | kUnwind; return; } [[clang::musttail]] return unit_0014(c, 246u, depth); }
L_003C3510:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30184u)));  c.pc = t; return; }
L_003C3520:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 30184u), c.r[4].w[0]);  c.pc = t; return; }
L_003C3530:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30184u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003C3554; }
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3550u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 252u, depth + 1u); else { c.pc = 0x001721D0u; return; } if (c.pc != 0x003C3550u) [[unlikely]] return; }
L_003C3550:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003C3554:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C3560:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 30176u), c.r[4].w[0]);  c.pc = t; return; }
L_003C3570:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30176u)));  c.pc = t; return; }
L_003C3580:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] - 12368u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] - 12364u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 12360u), c.r[6].w[0]);  c.pc = t; return; }
L_003C35A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 12368u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_003C35C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 5064u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30184u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 30172u), c.r[3].w[0]);  c.pc = t; return; }
L_003C35E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003C361C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 5064u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_003C3618; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3618u);  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003C3618u) [[unlikely]] return; }
L_003C3618:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003C361C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C3630:
    c.budget -= 2;
    { set32(c.r[5], c.r[31].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C34E0u | kUnwind; return; } goto L_003C34E0; }
L_003C3640:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3500u | kUnwind; return; } goto L_003C3500; }
L_003C3650:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C367Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 296u, depth + 1u); else { c.pc = 0x003C35C0u; return; } if (c.pc != 0x003C367Cu) [[unlikely]] return; }
L_003C367C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    set32(c.r[3], c.r[3].w[0] + 5088u);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 20u), 0u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[19].w[0] + 32u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 36u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 40u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 128u)));
    st32((c.r[19].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    st32((c.r[19].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[19].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[19].w[0] + 24u), 0u);
    st32((c.r[19].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    st32((c.r[19].w[0] + 44u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 36;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C3710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C3768; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[3], c.r[3].w[0] + 5088u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3750u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 297u, depth + 1u); else { c.pc = 0x003C35E0u; return; } if (c.pc != 0x003C3750u) [[unlikely]] return; }
L_003C3750:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003C376C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3768u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003C3768u) [[unlikely]] return; }
L_003C3768:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003C376C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C3780:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[5].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003C37B0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C37ACu); c.r[6].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C37ACu) [[unlikely]] return; }
L_003C37AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003C37B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C37C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C37D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.f[2] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = c.f[12];  if (t) { goto L_003C387C; } }
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  goto L_003C382C; }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_003C3880; }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_003C382C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0] + 4u)));  goto L_003C3860; }
    set32(c.r[25], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3850u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C3850u) [[unlikely]] return; }
L_003C3850:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 17ull;
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
L_003C3860:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3874u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C3874u) [[unlikely]] return; }
L_003C3874:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_003C38F8; } }
L_003C387C:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_003C3880:
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C38F4; } }
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 12u)));  goto L_003C38CC; }
    set32(c.r[25], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C38B0u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C38B0u) [[unlikely]] return; }
L_003C38B0:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], 0u - 17u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 7;
L_003C38CC:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C38F4; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C38F4u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C38F4u) [[unlikely]] return; }
L_003C38F4:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_003C38F8:
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0] + 4u)));  goto L_003C391C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003C3934; }
    set32(c.r[25], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_003C391C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3930u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C3930u) [[unlikely]] return; }
L_003C3930:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003C3934:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C3950:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C3960:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C3970:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C3980:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C3990:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C39A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    c.r[3].d[0] = c.r[6].d[0] & 16ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_003C3A14; } }
    c.r[2].d[0] = c.r[6].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0] + 4u)));  goto L_003C39F8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C39E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C39E8u) [[unlikely]] return; }
L_003C39E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
L_003C39F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3A0Cu); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C3A0Cu) [[unlikely]] return; }
L_003C3A0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_003C3A78; } }
L_003C3A14:
    c.r[3].d[0] = c.r[6].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C3A74; } }
    c.r[3].d[0] = c.r[6].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 12u)));  goto L_003C3A4C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3A3Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C3A3Cu) [[unlikely]] return; }
L_003C3A3C:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
L_003C3A4C:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C3A74; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3A74u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C3A74u) [[unlikely]] return; }
L_003C3A74:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_003C3A78:
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0] + 4u)));  goto L_003C3A9C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003C3AB4; }
    set32(c.r[25], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_003C3A9C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3AB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C3AB0u) [[unlikely]] return; }
L_003C3AB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003C3AB4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C3AD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C3AE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C3AF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C3B00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C3B10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C3B20:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_003C3B40:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[4].w[0] + 24u));  goto L_003C3B60; }
    c.f[1] = c.f[0];
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    c.budget -= 2;
L_003C3B60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  c.pc = t; return; }
L_003C3B70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003C3B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3B84u);  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003C3B84u) [[unlikely]] return; }
L_003C3B84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003C3BE4; } }
L_003C3B8C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_003C3BA4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0] + 64u));  if (t) { goto L_003C3BE0; } }
L_003C3BA4:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[4].w[0] + 36u)));  goto L_003C3BC4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.f[1] = ld32((c.r[3].w[0] + 64u));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_003C3BE0; } }
L_003C3BC4:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.f[2] = ld32((c.r[5].w[0] + 64u));
    c.f[1] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
L_003C3BE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003C3BE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C3BF0:
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 88u));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003C3C10:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 196u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003C3C40; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C3C3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C3C40; } }
L_003C3C3C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C3C40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C3C50:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[3].w[0]);  c.pc = t; return; }
L_003C3C60:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 32ull;  c.pc = t; return; }
L_003C3C70:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_003C3C7C; } }
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003C3C7C:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_003C3CC8; }
    c.f[1] = ld32((c.r[8].w[0]));
    c.f[0] = ld32((c.r[7].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[8].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[8].w[0] + 8u));
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[8].w[0] + 12u));
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 12u), c.f[0]);  if (t) { goto L_003C3D5C; } }
L_003C3CC8:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_003C3D14; }
    c.f[1] = ld32((c.r[8].w[0]));
    c.f[0] = ld32((c.r[7].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[8].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[8].w[0] + 8u));
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[8].w[0] + 12u));
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 12u), c.f[0]);  if (t) { goto L_003C3D5C; } }
L_003C3D14:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_003C3D5C; } }
    c.f[1] = ld32((c.r[8].w[0]));
    c.f[0] = ld32((c.r[7].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[8].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[8].w[0] + 8u));
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[8].w[0] + 12u));
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.budget -= 16;
L_003C3D5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C3D70:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003C3DA8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3DA0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x003C3DA0u) [[unlikely]] return; }
L_003C3DA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003C3EDC; } }
L_003C3DA8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 4u);  goto L_003C3DC8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3DC0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x003C3DC0u) [[unlikely]] return; }
L_003C3DC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3ED8; } }
L_003C3DC8:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_003C3E18; }
    set32(c.r[3], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C3ED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3DE8u);  if (depth < kMaxDepth) unit_000D(c, 364u, depth + 1u); else { c.pc = 0x001575E0u; return; } if (c.pc != 0x003C3DE8u) [[unlikely]] return; }
L_003C3DE8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3DF4u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 224u, depth + 1u); else { c.pc = 0x0018FA10u; return; } if (c.pc != 0x003C3DF4u) [[unlikely]] return; }
L_003C3DF4:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3E04u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x003C3E04u) [[unlikely]] return; }
L_003C3E04:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3E10u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x003C3E10u) [[unlikely]] return; }
L_003C3E10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3ED8; } }
L_003C3E18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3E20u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003C3E20u) [[unlikely]] return; }
L_003C3E20:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 3u);  goto L_003C3E60; }
    c.f[3] = ld32((c.r[29].w[0] + 144u));
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 144u), c.f[2]);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 152u), c.f[0]);  if (t) { goto L_003C3ECC; } }
L_003C3E60:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003C3ED0; }
    set32(c.r[3], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C3ED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3E80u);  if (depth < kMaxDepth) unit_000D(c, 364u, depth + 1u); else { c.pc = 0x001575E0u; return; } if (c.pc != 0x003C3E80u) [[unlikely]] return; }
L_003C3E80:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3E8Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 224u, depth + 1u); else { c.pc = 0x0018FA10u; return; } if (c.pc != 0x003C3E8Cu) [[unlikely]] return; }
L_003C3E8C:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3E9Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x003C3E9Cu) [[unlikely]] return; }
L_003C3E9C:
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[3] = ld32((c.r[29].w[0] + 148u));
    c.f[2] = ld32((c.r[29].w[0] + 68u));
    c.f[4] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 152u));
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 144u), c.f[4]);
    st32((c.r[29].w[0] + 148u), c.f[2]);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.budget -= 12;
L_003C3ECC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003C3ED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3ED8u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x003C3ED8u) [[unlikely]] return; }
L_003C3ED8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003C3EDC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_003C3EF0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[19].w[0] - 5u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00A9(c, 16u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3F34u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003C3F34u) [[unlikely]] return; }
L_003C3F34:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  goto L_003C3FB0; }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003C3F44:
    set32(c.r[3], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 448u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003C3F98; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[3].d[0];  if (t) { goto L_003C3FC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3F70u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 460u, depth + 1u); else { c.pc = 0x0015BE30u; return; } if (c.pc != 0x003C3F70u) [[unlikely]] return; }
L_003C3F70:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003C3FC0; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003C3FC0; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003C3FC0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C3F98:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3F44u | kUnwind; return; } goto L_003C3F44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3FC0; } }
L_003C3FB0:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[4], ld32((c.r[4].w[0] + 448u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
L_003C3FC0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  [[clang::musttail]] return unit_00A9(c, 17u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3FD0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 460u, depth + 1u); else { c.pc = 0x0015BE30u; return; } if (c.pc != 0x003C3FD0u) [[unlikely]] return; }
L_003C3FD0:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 144u);  [[clang::musttail]] return unit_00A9(c, 5u, depth); }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_00A9(c, 4u, depth); } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_00A9(c, 4u, depth); } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  [[clang::musttail]] return unit_00A9(c, 2u, depth); }
    [[clang::musttail]] return unit_00A9(c, 1u, depth);
}

}
