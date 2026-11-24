#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B7[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 43, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0,
    49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 54, 0, 0,
    55, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0,
    0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0,
    0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0,
    0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 117, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0,
    0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 137, 0, 0, 138, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151,
    0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0,
    0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180,
    0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0,
    189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0,
    0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 223, 0, 224, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0,
    0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0,
    0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0,
    254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0,
    265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0,
    271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0,
    0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0,
    289, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 295, 0, 296, 0, 0, 297,
    0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0,
    0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312,
    0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0,
    0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 318, 0, 319, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0,
    0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0,
    343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0,
    350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0,
};

void unit_00B7(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003FC000;
    case 2u: goto L_003FC014;
    case 3u: goto L_003FC0C4;
    case 4u: goto L_003FC0C8;
    case 5u: goto L_003FC0E0;
    case 6u: goto L_003FC110;
    case 7u: goto L_003FC140;
    case 8u: goto L_003FC154;
    case 9u: goto L_003FC1A0;
    case 10u: goto L_003FC1D0;
    case 11u: goto L_003FC1E8;
    case 12u: goto L_003FC200;
    case 13u: goto L_003FC228;
    case 14u: goto L_003FC244;
    case 15u: goto L_003FC260;
    case 16u: goto L_003FC270;
    case 17u: goto L_003FC290;
    case 18u: goto L_003FC2A4;
    case 19u: goto L_003FC2D0;
    case 20u: goto L_003FC350;
    case 21u: goto L_003FC3A4;
    case 22u: goto L_003FC480;
    case 23u: goto L_003FC4A8;
    case 24u: goto L_003FC4B8;
    case 25u: goto L_003FC4C0;
    case 26u: goto L_003FC4D8;
    case 27u: goto L_003FC4E8;
    case 28u: goto L_003FC4F8;
    case 29u: goto L_003FC500;
    case 30u: goto L_003FC528;
    case 31u: goto L_003FC5BC;
    case 32u: goto L_003FC5E0;
    case 33u: goto L_003FC624;
    case 34u: goto L_003FC630;
    case 35u: goto L_003FC648;
    case 36u: goto L_003FC660;
    case 37u: goto L_003FC6A4;
    case 38u: goto L_003FC6C4;
    case 39u: goto L_003FC6D0;
    case 40u: goto L_003FC6E0;
    case 41u: goto L_003FC6F0;
    case 42u: goto L_003FC710;
    case 43u: goto L_003FC718;
    case 44u: goto L_003FC720;
    case 45u: goto L_003FC738;
    case 46u: goto L_003FC754;
    case 47u: goto L_003FC770;
    case 48u: goto L_003FC778;
    case 49u: goto L_003FC780;
    case 50u: goto L_003FC788;
    case 51u: goto L_003FC7B4;
    case 52u: goto L_003FC85C;
    case 53u: goto L_003FC864;
    case 54u: goto L_003FC874;
    case 55u: goto L_003FC880;
    case 56u: goto L_003FC88C;
    case 57u: goto L_003FC8A4;
    case 58u: goto L_003FC8AC;
    case 59u: goto L_003FC8D0;
    case 60u: goto L_003FC8E0;
    case 61u: goto L_003FC8F0;
    case 62u: goto L_003FC910;
    case 63u: goto L_003FC930;
    case 64u: goto L_003FC940;
    case 65u: goto L_003FC964;
    case 66u: goto L_003FC990;
    case 67u: goto L_003FC9D0;
    case 68u: goto L_003FCA20;
    case 69u: goto L_003FCAC0;
    case 70u: goto L_003FCAE0;
    case 71u: goto L_003FCAF8;
    case 72u: goto L_003FCB0C;
    case 73u: goto L_003FCB20;
    case 74u: goto L_003FCB70;
    case 75u: goto L_003FCBB4;
    case 76u: goto L_003FCBD4;
    case 77u: goto L_003FCBF4;
    case 78u: goto L_003FCC0C;
    case 79u: goto L_003FCC30;
    case 80u: goto L_003FCC4C;
    case 81u: goto L_003FCC5C;
    case 82u: goto L_003FCC70;
    case 83u: goto L_003FCC8C;
    case 84u: goto L_003FCCA0;
    case 85u: goto L_003FCCBC;
    case 86u: goto L_003FCCD0;
    case 87u: goto L_003FCD18;
    case 88u: goto L_003FCD30;
    case 89u: goto L_003FCD40;
    case 90u: goto L_003FCD80;
    case 91u: goto L_003FCD8C;
    case 92u: goto L_003FCDA0;
    case 93u: goto L_003FCDE4;
    case 94u: goto L_003FCE00;
    case 95u: goto L_003FCE20;
    case 96u: goto L_003FCE38;
    case 97u: goto L_003FCE4C;
    case 98u: goto L_003FCE60;
    case 99u: goto L_003FCE70;
    case 100u: goto L_003FCE84;
    case 101u: goto L_003FCEC0;
    case 102u: goto L_003FCF04;
    case 103u: goto L_003FCF24;
    case 104u: goto L_003FCF44;
    case 105u: goto L_003FCF78;
    case 106u: goto L_003FCFA8;
    case 107u: goto L_003FCFB4;
    case 108u: goto L_003FCFCC;
    case 109u: goto L_003FCFF0;
    case 110u: goto L_003FD048;
    case 111u: goto L_003FD064;
    case 112u: goto L_003FD088;
    case 113u: goto L_003FD0BC;
    case 114u: goto L_003FD0D8;
    case 115u: goto L_003FD0FC;
    case 116u: goto L_003FD130;
    case 117u: goto L_003FD184;
    case 118u: goto L_003FD19C;
    case 119u: goto L_003FD1A4;
    case 120u: goto L_003FD1B8;
    case 121u: goto L_003FD1E4;
    case 122u: goto L_003FD224;
    case 123u: goto L_003FD278;
    case 124u: goto L_003FD294;
    case 125u: goto L_003FD2A0;
    case 126u: goto L_003FD2BC;
    case 127u: goto L_003FD2D0;
    case 128u: goto L_003FD2E4;
    case 129u: goto L_003FD314;
    case 130u: goto L_003FD330;
    case 131u: goto L_003FD350;
    case 132u: goto L_003FD438;
    case 133u: goto L_003FD4C0;
    case 134u: goto L_003FD514;
    case 135u: goto L_003FD540;
    case 136u: goto L_003FD570;
    case 137u: goto L_003FD584;
    case 138u: goto L_003FD590;
    case 139u: goto L_003FD59C;
    case 140u: goto L_003FD5A4;
    case 141u: goto L_003FD648;
    case 142u: goto L_003FD650;
    case 143u: goto L_003FD658;
    case 144u: goto L_003FD6F0;
    case 145u: goto L_003FD6F8;
    case 146u: goto L_003FD710;
    case 147u: goto L_003FD724;
    case 148u: goto L_003FD770;
    case 149u: goto L_003FD7B0;
    case 150u: goto L_003FD7EC;
    case 151u: goto L_003FD7FC;
    case 152u: goto L_003FD814;
    case 153u: goto L_003FD830;
    case 154u: goto L_003FD860;
    case 155u: goto L_003FD8E4;
    case 156u: goto L_003FD8EC;
    case 157u: goto L_003FD914;
    case 158u: goto L_003FD920;
    case 159u: goto L_003FD970;
    case 160u: goto L_003FD988;
    case 161u: goto L_003FD990;
    case 162u: goto L_003FD9B0;
    case 163u: goto L_003FD9DC;
    case 164u: goto L_003FDBAC;
    case 165u: goto L_003FDBD0;
    case 166u: goto L_003FDC54;
    case 167u: goto L_003FDC5C;
    case 168u: goto L_003FDC6C;
    case 169u: goto L_003FDC8C;
    case 170u: goto L_003FDC9C;
    case 171u: goto L_003FDEB8;
    case 172u: goto L_003FDEE0;
    case 173u: goto L_003FDF00;
    case 174u: goto L_003FDF0C;
    case 175u: goto L_003FDF14;
    case 176u: goto L_003FDF1C;
    case 177u: goto L_003FDF3C;
    case 178u: goto L_003FDF5C;
    case 179u: goto L_003FDFA4;
    case 180u: goto L_003FDFFC;
    case 181u: goto L_003FE018;
    case 182u: goto L_003FE040;
    case 183u: goto L_003FE054;
    case 184u: goto L_003FE080;
    case 185u: goto L_003FE0B0;
    case 186u: goto L_003FE0C8;
    case 187u: goto L_003FE0E0;
    case 188u: goto L_003FE0F0;
    case 189u: goto L_003FE100;
    case 190u: goto L_003FE224;
    case 191u: goto L_003FE258;
    case 192u: goto L_003FE270;
    case 193u: goto L_003FE324;
    case 194u: goto L_003FE330;
    case 195u: goto L_003FE344;
    case 196u: goto L_003FE370;
    case 197u: goto L_003FE3AC;
    case 198u: goto L_003FE3BC;
    case 199u: goto L_003FE3D4;
    case 200u: goto L_003FE3F0;
    case 201u: goto L_003FE450;
    case 202u: goto L_003FE4A8;
    case 203u: goto L_003FE514;
    case 204u: goto L_003FE524;
    case 205u: goto L_003FE538;
    case 206u: goto L_003FE544;
    case 207u: goto L_003FE568;
    case 208u: goto L_003FE574;
    case 209u: goto L_003FE5A0;
    case 210u: goto L_003FE5AC;
    case 211u: goto L_003FE5C8;
    case 212u: goto L_003FE5F4;
    case 213u: goto L_003FE614;
    case 214u: goto L_003FE628;
    case 215u: goto L_003FE7E4;
    case 216u: goto L_003FE7F8;
    case 217u: goto L_003FE820;
    case 218u: goto L_003FE8B8;
    case 219u: goto L_003FEA98;
    case 220u: goto L_003FEAB0;
    case 221u: goto L_003FEAD0;
    case 222u: goto L_003FEADC;
    case 223u: goto L_003FEAE4;
    case 224u: goto L_003FEAEC;
    case 225u: goto L_003FEB24;
    case 226u: goto L_003FEB44;
    case 227u: goto L_003FEB80;
    case 228u: goto L_003FEBE8;
    case 229u: goto L_003FEC04;
    case 230u: goto L_003FEC20;
    case 231u: goto L_003FEDFC;
    case 232u: goto L_003FEE80;
    case 233u: goto L_003FEE94;
    case 234u: goto L_003FEEC0;
    case 235u: goto L_003FEEF0;
    case 236u: goto L_003FEF08;
    case 237u: goto L_003FEF20;
    case 238u: goto L_003FEF40;
    case 239u: goto L_003FEF50;
    case 240u: goto L_003FF14C;
    case 241u: goto L_003FF160;
    case 242u: goto L_003FF190;
    case 243u: goto L_003FF1C0;
    case 244u: goto L_003FF1C8;
    case 245u: goto L_003FF25C;
    case 246u: goto L_003FF28C;
    case 247u: goto L_003FF2F0;
    case 248u: goto L_003FF2F8;
    case 249u: goto L_003FF310;
    case 250u: goto L_003FF328;
    case 251u: goto L_003FF344;
    case 252u: goto L_003FF360;
    case 253u: goto L_003FF370;
    case 254u: goto L_003FF380;
    case 255u: goto L_003FF390;
    case 256u: goto L_003FF3A0;
    case 257u: goto L_003FF3D0;
    case 258u: goto L_003FF3E8;
    case 259u: goto L_003FF400;
    case 260u: goto L_003FF418;
    case 261u: goto L_003FF42C;
    case 262u: goto L_003FF440;
    case 263u: goto L_003FF458;
    case 264u: goto L_003FF46C;
    case 265u: goto L_003FF480;
    case 266u: goto L_003FF498;
    case 267u: goto L_003FF4AC;
    case 268u: goto L_003FF4C0;
    case 269u: goto L_003FF4D8;
    case 270u: goto L_003FF4EC;
    case 271u: goto L_003FF500;
    case 272u: goto L_003FF518;
    case 273u: goto L_003FF52C;
    case 274u: goto L_003FF540;
    case 275u: goto L_003FF558;
    case 276u: goto L_003FF56C;
    case 277u: goto L_003FF580;
    case 278u: goto L_003FF598;
    case 279u: goto L_003FF5AC;
    case 280u: goto L_003FF5D0;
    case 281u: goto L_003FF5E4;
    case 282u: goto L_003FF620;
    case 283u: goto L_003FF664;
    case 284u: goto L_003FF684;
    case 285u: goto L_003FF6A8;
    case 286u: goto L_003FF6C0;
    case 287u: goto L_003FF6E0;
    case 288u: goto L_003FF6F0;
    case 289u: goto L_003FF700;
    case 290u: goto L_003FF714;
    case 291u: goto L_003FF720;
    case 292u: goto L_003FF734;
    case 293u: goto L_003FF748;
    case 294u: goto L_003FF75C;
    case 295u: goto L_003FF768;
    case 296u: goto L_003FF770;
    case 297u: goto L_003FF77C;
    case 298u: goto L_003FF790;
    case 299u: goto L_003FF7DC;
    case 300u: goto L_003FF808;
    case 301u: goto L_003FF834;
    case 302u: goto L_003FF84C;
    case 303u: goto L_003FF8AC;
    case 304u: goto L_003FF8E8;
    case 305u: goto L_003FF8F4;
    case 306u: goto L_003FF914;
    case 307u: goto L_003FF92C;
    case 308u: goto L_003FF94C;
    case 309u: goto L_003FF958;
    case 310u: goto L_003FF980;
    case 311u: goto L_003FF9DC;
    case 312u: goto L_003FF9FC;
    case 313u: goto L_003FFA20;
    case 314u: goto L_003FFA40;
    case 315u: goto L_003FFA5C;
    case 316u: goto L_003FFA78;
    case 317u: goto L_003FFA90;
    case 318u: goto L_003FFB04;
    case 319u: goto L_003FFB0C;
    case 320u: goto L_003FFB18;
    case 321u: goto L_003FFB2C;
    case 322u: goto L_003FFB4C;
    case 323u: goto L_003FFB68;
    case 324u: goto L_003FFB90;
    case 325u: goto L_003FFBA4;
    case 326u: goto L_003FFBD0;
    case 327u: goto L_003FFBF4;
    case 328u: goto L_003FFC20;
    case 329u: goto L_003FFC50;
    case 330u: goto L_003FFC64;
    case 331u: goto L_003FFC90;
    case 332u: goto L_003FFC98;
    case 333u: goto L_003FFCC0;
    case 334u: goto L_003FFD0C;
    case 335u: goto L_003FFD2C;
    case 336u: goto L_003FFD4C;
    case 337u: goto L_003FFD6C;
    case 338u: goto L_003FFD84;
    case 339u: goto L_003FFD94;
    case 340u: goto L_003FFDAC;
    case 341u: goto L_003FFDCC;
    case 342u: goto L_003FFDE4;
    case 343u: goto L_003FFE00;
    case 344u: goto L_003FFE10;
    case 345u: goto L_003FFE30;
    case 346u: goto L_003FFE40;
    case 347u: goto L_003FFEA8;
    case 348u: goto L_003FFEC8;
    case 349u: goto L_003FFEE8;
    case 350u: goto L_003FFF00;
    case 351u: goto L_003FFF24;
    case 352u: goto L_003FFF44;
    case 353u: goto L_003FFF70;
    case 354u: goto L_003FFFA0;
    case 355u: goto L_003FFFA8;
    case 356u: goto L_003FFFB0;
    case 357u: goto L_003FFFC8;
    case 358u: goto L_003FFFEC;
    default: bad_entry(c, 0x003FC000u); return;
    }
L_003FC000:
    st32((c.r[16].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC014u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 156u, depth + 1u); else { c.pc = 0x00158F70u; return; } if (c.pc != 0x003FC014u) [[unlikely]] return; }
L_003FC014:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + 26000u);
    c.f[2] = ld32((c.r[17].w[0] + 84u));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.f[1] = 0u;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 160u), c.f[0]);
    st32((c.r[16].w[0] + 164u), c.f[2]);
    c.f[4] = ld32((c.r[17].w[0] + 48u));
    c.f[3] = ld32((c.r[17].w[0] + 76u));
    c.f[2] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    st32((c.r[16].w[0] + 176u), c.f[0]);
    st32((c.r[16].w[0] + 180u), c.f[2]);
    st32((c.r[16].w[0] + 184u), c.f[3]);
    st32((c.r[16].w[0] + 188u), c.f[4]);
    c.f[3] = ld32((c.r[17].w[0] + 68u));
    c.f[2] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    st32((c.r[16].w[0] + 128u), c.f[0]);
    st32((c.r[16].w[0] + 132u), c.f[2]);
    st32((c.r[16].w[0] + 136u), c.f[3]);
    c.f[2] = ld32((c.r[17].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 29;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003FC0C4; } }
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);  goto L_003FC0C0; }
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 80u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 84u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.f[0]);  if (t) { goto L_003FC0C4; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 1;
L_003FC0C0:
    st32((c.r[17].w[0] + 80u), c.f[0]);
    c.budget -= 1;
L_003FC0C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003FC0C8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FC0E0:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003FC100; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[3].w[0] + 48u), c.f[0]);
    c.budget -= 5;
L_003FC100:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FC110:
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 72u), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 76u), 0u);  c.pc = t; return; }
L_003FC140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC154u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003FC154u) [[unlikely]] return; }
L_003FC154:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 12960u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003FC180; }
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), 0u);  if (t) { goto L_003FC190; } }
L_003FC180:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003FC190:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FC1A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FC1E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC1D0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003FC1D0u) [[unlikely]] return; }
L_003FC1D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FC1EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC1E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003FC1E8u) [[unlikely]] return; }
L_003FC1E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FC1EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FC200:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC228u); set32(c.r[4], 0u + 56u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003FC228u) [[unlikely]] return; }
L_003FC228:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003FC248; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC244u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 7u, depth + 1u); else { c.pc = 0x003FC140u; return; } if (c.pc != 0x003FC244u) [[unlikely]] return; }
L_003FC244:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003FC248:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FC260:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 629u);  c.pc = t; return; }
L_003FC270:
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    st32((c.r[4].w[0] + 48u), c.f[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003FC290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC2A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003FC2A4u) [[unlikely]] return; }
L_003FC2A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003FC2C4; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003FC2C4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FC2D0:
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
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003FC460; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 40u)));  goto L_003FC318; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003FC464; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_003FC318:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003FC460; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC350u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003FC350u) [[unlikely]] return; }
L_003FC350:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003FC460; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003FC460; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003FC460; } }
    set32(c.r[2], 0u + 10u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC3A4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 156u, depth + 1u); else { c.pc = 0x00158F70u; return; } if (c.pc != 0x003FC3A4u) [[unlikely]] return; }
L_003FC3A4:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + 26016u);
    c.f[2] = ld32((c.r[17].w[0] + 52u));
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    c.f[1] = 0u;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 160u), c.f[0]);
    st32((c.r[16].w[0] + 164u), c.f[2]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.f[4] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = ld32((c.r[3].w[0] + 40u));
    c.f[2] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[16].w[0] + 176u), c.f[0]);
    st32((c.r[16].w[0] + 180u), c.f[2]);
    st32((c.r[16].w[0] + 184u), c.f[3]);
    st32((c.r[16].w[0] + 188u), c.f[4]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.f[3] = ld32((c.r[3].w[0] + 28u));
    c.f[2] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[16].w[0] + 128u), c.f[0]);
    st32((c.r[16].w[0] + 132u), c.f[2]);
    st32((c.r[16].w[0] + 136u), c.f[3]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 32;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003FC460; } }
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);  goto L_003FC45C; }
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.f[0]);  if (t) { goto L_003FC460; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 1;
L_003FC45C:
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.budget -= 1;
L_003FC460:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003FC464:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FC480:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC4A8u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x003FC4A8u) [[unlikely]] return; }
L_003FC4A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 13024u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC4B8u); st32((c.r[18].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x003FC4B8u) [[unlikely]] return; }
L_003FC4B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC4C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x003FC4C0u) [[unlikely]] return; }
L_003FC4C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[5], c.r[29].w[0] + 108u);
    set32(c.r[6], c.r[29].w[0] + 104u);
    set32(c.r[19], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC4D8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 38u, depth + 1u); else { c.pc = 0x0015C3D0u; return; } if (c.pc != 0x003FC4D8u) [[unlikely]] return; }
L_003FC4D8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC4E8u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0015C5C0u; return; } if (c.pc != 0x003FC4E8u) [[unlikely]] return; }
L_003FC4E8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC4F8u); set32(c.r[6], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_000F(c, 49u, depth + 1u); else { c.pc = 0x0015C560u; return; } if (c.pc != 0x003FC4F8u) [[unlikely]] return; }
L_003FC4F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC500u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003FC500u) [[unlikely]] return; }
L_003FC500:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 52u), c.r[2].w[0]);  goto L_003FC52C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0xF2000000u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC528u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 105u, depth + 1u); else { c.pc = 0x0015CFA0u; return; } if (c.pc != 0x003FC528u) [[unlikely]] return; }
L_003FC528:
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_003FC52C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44000000u);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[18].w[0] + 64u), c.f[0]);
    c.f[4] = ld32((c.r[29].w[0] + 108u));
    c.f[3] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    c.f[3] = fp::ee::div(c.fcr31, c.f[4], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 68u), c.f[0]);
    c.f[4] = ld32((c.r[29].w[0] + 104u));
    c.f[3] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.f[3] = fp::ee::div(c.fcr31, c.f[4], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 72u), c.f[0]);
    st32((c.r[18].w[0] + 76u), 0u);
    st32((c.r[18].w[0] + 80u), 0u);
    st32((c.r[18].w[0] + 84u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[18].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 92u), c.f[0]);
    st32((c.r[18].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 108u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 112u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 104u), 0u);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC5BCu); st32((c.r[18].w[0] + 100u), 0u);  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x003FC5BCu) [[unlikely]] return; }
L_003FC5BC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003FC5E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FC648; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 13024u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FC628; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC624u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FC624u) [[unlikely]] return; }
L_003FC624:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FC628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC630u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x003FC630u) [[unlikely]] return; }
L_003FC630:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FC64C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC648u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x003FC648u) [[unlikely]] return; }
L_003FC648:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FC64C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FC660:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 6;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 4u);  goto L_003FC6B0; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003FC6AC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[4].w[0] + 16u)));  goto L_003FC698; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003FC6C8; } }
L_003FC698:
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC6A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FC6A4u) [[unlikely]] return; }
L_003FC6A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FC6C4; } }
L_003FC6AC:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_003FC6B0:
    st32((c.r[4].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC6C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FC6C4u) [[unlikely]] return; }
L_003FC6C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003FC6C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FC6D0:
    c.budget -= 2;
    {  goto L_003FC9D0; }
L_003FC6E0:
    c.budget -= 2;
    {  goto L_003FC9D0; }
L_003FC6F0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC710u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x003FC710u) [[unlikely]] return; }
L_003FC710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC718u); set32(c.r[4], ld32((c.r[18].w[0] + 108u)));  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x003FC718u) [[unlikely]] return; }
L_003FC718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC720u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00161BB0u; return; } if (c.pc != 0x003FC720u) [[unlikely]] return; }
L_003FC720:
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[19], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.r[16].d[0] = ld16((c.r[2].w[0] + 74u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC738u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003FC738u) [[unlikely]] return; }
L_003FC738:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC754u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003FC754u) [[unlikely]] return; }
L_003FC754:
    set32(c.r[3], ld32((c.r[17].w[0] + 352u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 85u));
    c.r[2].d[0] = c.r[2].d[0] & 248ull;
    st8((c.r[3].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC770u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 151u, depth + 1u); else { c.pc = 0x001615C0u; return; } if (c.pc != 0x003FC770u) [[unlikely]] return; }
L_003FC770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC778u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x003FC778u) [[unlikely]] return; }
L_003FC778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC780u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x003FC780u) [[unlikely]] return; }
L_003FC780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC788u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003FC788u) [[unlikely]] return; }
L_003FC788:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  goto L_003FC878; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 26032u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003FC000u < 16384u) { entry = entries_00B7[(t - 0x003FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003FC7B4:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FC874; } }
    c.f[6] = ld32((c.r[18].w[0] + 84u));
    set32(c.r[5], 0u + 4u);
    c.f[1] = ld32((c.r[18].w[0] + 80u));
    set32(c.r[2], 0u - 1u);
    c.f[5] = ld32((c.r[18].w[0] + 76u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[4] = ld32((c.r[18].w[0] + 64u));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    set32(c.r[7], 0u + 1u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 84u), c.f[4]);
    st32((c.r[29].w[0] + 88u), c.f[5]);
    st32((c.r[29].w[0] + 92u), c.f[1]);
    st32((c.r[29].w[0] + 96u), c.f[6]);
    c.f[3] = ld32((c.r[18].w[0] + 92u));
    c.f[2] = ld32((c.r[18].w[0] + 72u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[2]);
    st32((c.r[29].w[0] + 112u), c.f[5]);
    st32((c.r[29].w[0] + 120u), c.f[3]);
    c.f[1] = ld32((c.r[18].w[0] + 88u));
    c.f[0] = ld32((c.r[18].w[0] + 68u));
    st32((c.r[29].w[0] + 132u), c.f[4]);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 144u), c.f[6]);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 156u), c.f[2]);
    st32((c.r[29].w[0] + 168u), c.f[3]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    st32((c.r[29].w[0] + 136u), c.f[5]);
    st32((c.r[29].w[0] + 160u), c.f[5]);
    st32((c.r[29].w[0] + 140u), c.f[1]);
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC85Cu); st32((c.r[29].w[0] + 164u), c.f[1]);  if (depth < kMaxDepth) unit_000E(c, 336u, depth + 1u); else { c.pc = 0x0015AE60u; return; } if (c.pc != 0x003FC85Cu) [[unlikely]] return; }
L_003FC85C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FC874; } }
L_003FC864:
    set32(c.r[25], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC874u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FC874u) [[unlikely]] return; }
L_003FC874:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_003FC878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC880u);  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x003FC880u) [[unlikely]] return; }
L_003FC880:
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC88Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003FC88Cu) [[unlikely]] return; }
L_003FC88C:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC8A4u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 207u, depth + 1u); else { c.pc = 0x00161C50u; return; } if (c.pc != 0x003FC8A4u) [[unlikely]] return; }
L_003FC8A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC8ACu);  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x003FC8ACu) [[unlikely]] return; }
L_003FC8AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003FC8D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FC8E0:
    st32((c.r[4].w[0] + 104u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003FC8F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_003FC918; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC910u); set32(c.r[5], c.r[5].w[0] + 26064u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x003FC910u) [[unlikely]] return; }
L_003FC910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FC934; } }
L_003FC918:
    st32((c.r[4].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 56u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC930u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FC930u) [[unlikely]] return; }
L_003FC930:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003FC934:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FC940:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_003FC96C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC964u); set32(c.r[5], c.r[5].w[0] + 26064u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x003FC964u) [[unlikely]] return; }
L_003FC964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FC97C; } }
L_003FC96C:
    set32(c.r[3], 0u + 3u);
    st32((c.r[4].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 56u), 0u);
    c.budget -= 4;
L_003FC97C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FC990:
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_003FC9C4; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003FC9C0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003FC9C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FC9C4; } }
L_003FC9C0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003FC9C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FC9D0:
    set32(c.r[5], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 5u);  goto L_003FCA0C; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003FCA08; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_003FCA00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FCA10; } }
L_003FCA00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003FCA10; } }
L_003FCA08:
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_003FCA0C:
    st32((c.r[4].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 1;
L_003FCA10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FCA20:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { mmi::mult(c, 0, c.r[6].w[0], c.r[7].w[0]); c.r[2].d[0] = c.lo.d[0];  goto L_003FCA30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FCAAC; } }
L_003FCA30:
    mmi::divu(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[4], c.r[2].w[0] >> 1);  goto L_003FCA4C; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FCA64; } }
L_003FCA4C:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 6;
L_003FCA64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F7C0000u);
    c.f[1] = c.r[3].w[0];
    c.budget -= 4;
    if (c.r[7].sd[0] < 0) { set32(c.r[4], c.r[7].w[0] >> 1);  goto L_003FCA80; }
    c.f[0] = c.r[7].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FCA98; } }
L_003FCA80:
    c.r[3].d[0] = c.r[7].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
L_003FCA98:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003FCAAC; } }
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_003FCAAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FCAC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCAE0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x003FCAE0u) [[unlikely]] return; }
L_003FCAE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], 0u + 116u);
    set32(c.r[2], c.r[2].w[0] + 13104u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCAF8u); st32((c.r[16].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x003FCAF8u) [[unlikely]] return; }
L_003FCAF8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 56u), c.r[17].w[0]);  goto L_003FCB28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCB0Cu);  if (depth < kMaxDepth) unit_0024(c, 206u, depth + 1u); else { c.pc = 0x001B1730u; return; } if (c.pc != 0x003FCB0Cu) [[unlikely]] return; }
L_003FCB0C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCB20u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 22u, depth + 1u); else { c.pc = 0x003FC480u; return; } if (c.pc != 0x003FCB20u) [[unlikely]] return; }
L_003FCB20:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), c.r[17].w[0]);
    c.budget -= 2;
L_003FCB28:
    set32(c.r[2], ld32((c.r[28].w[0] - 30156u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_003FCB3C; }
    st32((c.r[28].w[0] - 30156u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 2;
L_003FCB3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FCB70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FCC0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 13104u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 56u)));  goto L_003FCBBC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCBB4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FCBB4u) [[unlikely]] return; }
L_003FCBB4:
    st32((c.r[17].w[0] + 52u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 2;
L_003FCBBC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30156u)));  goto L_003FCBDC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCBD4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FCBD4u) [[unlikely]] return; }
L_003FCBD4:
    st32((c.r[17].w[0] + 56u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30156u)));
    c.budget -= 2;
L_003FCBDC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FCBEC; }
    st32((c.r[28].w[0] - 30156u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003FCBEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCBF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x003FCBF4u) [[unlikely]] return; }
L_003FCBF4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FCC10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCC0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x003FCC0Cu) [[unlikely]] return; }
L_003FCC0C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FCC10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FCC30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 56u)));  goto L_003FCC54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCC4Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 60u, depth + 1u); else { c.pc = 0x003FC8E0u; return; } if (c.pc != 0x003FCC4Cu) [[unlikely]] return; }
L_003FCC4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003FCC60; } }
L_003FCC54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCC5Cu);  if (depth < kMaxDepth) unit_00B7(c, 60u, depth + 1u); else { c.pc = 0x003FC8E0u; return; } if (c.pc != 0x003FCC5Cu) [[unlikely]] return; }
L_003FCC5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003FCC60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FCC70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003FCC8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCC8Cu);  if (depth < kMaxDepth) unit_00B7(c, 61u, depth + 1u); else { c.pc = 0x003FC8F0u; return; } if (c.pc != 0x003FCC8Cu) [[unlikely]] return; }
L_003FCC8C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FCCA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003FCCBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCCBCu);  if (depth < kMaxDepth) unit_00B7(c, 64u, depth + 1u); else { c.pc = 0x003FC940u; return; } if (c.pc != 0x003FCCBCu) [[unlikely]] return; }
L_003FCCBC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FCCD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 7;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 100u)));  goto L_003FCCF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FCD30; } }
L_003FCCF4:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003FCD28; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003FCD30; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCD18u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FCD18u) [[unlikely]] return; }
L_003FCD18:
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FCD30; } }
L_003FCD28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCD30u);  if (depth < kMaxDepth) unit_00B7(c, 66u, depth + 1u); else { c.pc = 0x003FC990u; return; } if (c.pc != 0x003FCD30u) [[unlikely]] return; }
L_003FCD30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FCD40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FCD60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FCD90; } }
L_003FCD60:
    st32((c.r[16].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 104u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_003FCD90; }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCD80u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B7(c, 60u, depth + 1u); else { c.pc = 0x003FC8E0u; return; } if (c.pc != 0x003FCD80u) [[unlikely]] return; }
L_003FCD80:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCD8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 60u, depth + 1u); else { c.pc = 0x003FC8E0u; return; } if (c.pc != 0x003FCD8Cu) [[unlikely]] return; }
L_003FCD8C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003FCD90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FCDA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003FCDEC; }
    set32(c.r[5], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003FCDE8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FCDE8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCDE4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FCDE4u) [[unlikely]] return; }
L_003FCDE4:
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 1;
L_003FCDE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003FCDEC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FCE00:
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FCE10; } }
    st32((c.r[3].w[0] + 96u), c.f[12]);
    c.budget -= 1;
L_003FCE10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FCE20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCE38u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x003FCE38u) [[unlikely]] return; }
L_003FCE38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003FCE50; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCE4Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 69u, depth + 1u); else { c.pc = 0x003FCAC0u; return; } if (c.pc != 0x003FCE4Cu) [[unlikely]] return; }
L_003FCE4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003FCE50:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FCE60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30156u)));  c.pc = t; return; }
L_003FCE70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCE84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 22u, depth + 1u); else { c.pc = 0x003FC480u; return; } if (c.pc != 0x003FCE84u) [[unlikely]] return; }
L_003FCE84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 13168u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1676u), 0u);
    st32((c.r[16].w[0] + 1680u), 0u);
    st32((c.r[16].w[0] + 1664u), 0u);
    st32((c.r[16].w[0] + 1668u), 0u);
    st32((c.r[16].w[0] + 1672u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FCEC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FCFCC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 13168u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 1672u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 1668u)));  goto L_003FCF0C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCF04u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FCF04u) [[unlikely]] return; }
L_003FCF04:
    st32((c.r[17].w[0] + 1672u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1668u)));
    c.budget -= 2;
L_003FCF0C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 1664u)));  goto L_003FCF2C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCF24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FCF24u) [[unlikely]] return; }
L_003FCF24:
    st32((c.r[17].w[0] + 1668u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1664u)));
    c.budget -= 2;
L_003FCF2C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 1680u);  goto L_003FCF4C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCF44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FCF44u) [[unlikely]] return; }
L_003FCF44:
    st32((c.r[17].w[0] + 1664u), 0u);
    set32(c.r[2], c.r[17].w[0] + 1680u);
    c.budget -= 2;
L_003FCF4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 1676u);  goto L_003FCF7C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 1680u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FCF78; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003FCF78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCF78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x003FCF78u) [[unlikely]] return; }
L_003FCF78:
    set32(c.r[2], c.r[17].w[0] + 1676u);
    c.budget -= 1;
L_003FCF7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FCFAC; }
    set32(c.r[4], ld32((c.r[17].w[0] + 1676u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FCFA8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003FCFA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCFA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x003FCFA8u) [[unlikely]] return; }
L_003FCFA8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FCFAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCFB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 32u, depth + 1u); else { c.pc = 0x003FC5E0u; return; } if (c.pc != 0x003FCFB4u) [[unlikely]] return; }
L_003FCFB4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FCFD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCFCCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x003FCFCCu) [[unlikely]] return; }
L_003FCFCC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FCFD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FCFF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    fpu_compare(c, fp::key(c.f[13]) <= fp::key(c.f[12]));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003FD01C; } }
    c.f[13] = c.f[12];
    c.budget -= 1;
L_003FD01C:
    st32((c.r[17].w[0] + 1656u), c.f[12]);
    st32((c.r[17].w[0] + 1660u), c.f[13]);
    set32(c.r[4], ld32((c.r[17].w[0] + 1676u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FD048; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_003FD048; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD048u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x003FD048u) [[unlikely]] return; }
L_003FD048:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 1676u), 0u);  goto L_003FD098; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FD094; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD064u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x003FD064u) [[unlikely]] return; }
L_003FD064:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003FD074; } }
    c.budget -= 2;
    if (c.r[6].sd[0] > 0) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_003FD07C; }
L_003FD074:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003FD08C; } }
L_003FD07C:
    set32(c.r[4], c.r[17].w[0] + 1676u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD088u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x003FD088u) [[unlikely]] return; }
L_003FD088:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003FD08C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1676u), c.r[3].w[0]);  if (t) { goto L_003FD098; } }
L_003FD094:
    st32((c.r[17].w[0] + 1676u), 0u);
    c.budget -= 1;
L_003FD098:
    set32(c.r[4], ld32((c.r[17].w[0] + 1680u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FD0BC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_003FD0BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD0BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x003FD0BCu) [[unlikely]] return; }
L_003FD0BC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 1680u), 0u);  goto L_003FD10C; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FD108; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD0D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x003FD0D8u) [[unlikely]] return; }
L_003FD0D8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003FD0E8; } }
    c.budget -= 2;
    if (c.r[6].sd[0] > 0) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_003FD0F0; }
L_003FD0E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003FD100; } }
L_003FD0F0:
    set32(c.r[4], c.r[17].w[0] + 1680u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD0FCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x003FD0FCu) [[unlikely]] return; }
L_003FD0FC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003FD100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1680u), c.r[3].w[0]);  if (t) { goto L_003FD10C; } }
L_003FD108:
    st32((c.r[17].w[0] + 1680u), 0u);
    c.budget -= 1;
L_003FD10C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FD130:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 11;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003FD328; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 1672u)));  goto L_003FD23C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_003FD1AC; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u - 1u);  goto L_003FD188; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003FD334; } }
L_003FD184:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003FD188:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD19Cu); set32(c.r[5], c.r[5].w[0] + 26088u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x003FD19Cu) [[unlikely]] return; }
L_003FD19C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD1A4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 67u, depth + 1u); else { c.pc = 0x003FC9D0u; return; } if (c.pc != 0x003FD1A4u) [[unlikely]] return; }
L_003FD1A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FD330; } }
L_003FD1AC:
    set32(c.r[4], 0u + 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], c.r[19].w[0] + c.r[6].w[0]);
    c.budget -= 3;
L_003FD1B8:
    set32(c.r[2], c.r[6].w[0] << 2);
    st8((c.r[5].w[0] + 116u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st8((c.r[5].w[0] + 372u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[2].w[0] + 628u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[19].w[0] + c.r[6].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD1B8u | kUnwind; return; } goto L_003FD1B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD1E4u); set32(c.r[4], 0u + 360u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x003FD1E4u) [[unlikely]] return; }
L_003FD1E4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 1672u), c.r[4].w[0]);  goto L_003FD22C; }
    set32(c.r[2], ld32((c.r[19].w[0] + 1680u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], ld32((c.r[28].w[0] - 31912u)));  goto L_003FD200; }
    set32(c.r[7], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_003FD200:
    set32(c.r[2], ld32((c.r[19].w[0] + 1676u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));  goto L_003FD210; }
    set32(c.r[6], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_003FD210:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD224u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 368u, depth + 1u); else { c.pc = 0x00207EF0u; return; } if (c.pc != 0x003FD224u) [[unlikely]] return; }
L_003FD224:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[19].w[0] + 1672u), c.r[4].w[0]);
    c.budget -= 2;
L_003FD22C:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_003FD330; } }
L_003FD23C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FD330; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD184u | kUnwind; return; } goto L_003FD184; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD184u | kUnwind; return; } goto L_003FD184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD278u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003FD278u) [[unlikely]] return; }
L_003FD278:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 1664u), c.r[2].w[0]);  goto L_003FD298; }
    set32(c.r[3], ld32((c.r[19].w[0] + 1672u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD294u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 130u, depth + 1u); else { c.pc = 0x0015D3D0u; return; } if (c.pc != 0x003FD294u) [[unlikely]] return; }
L_003FD294:
    st32((c.r[19].w[0] + 1664u), c.r[2].w[0]);
    c.budget -= 1;
L_003FD298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD2A0u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003FD2A0u) [[unlikely]] return; }
L_003FD2A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 1668u), c.r[2].w[0]);  goto L_003FD2C0; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD2BCu); set32(c.r[7], c.r[19].w[0] + 628u);  if (depth < kMaxDepth) unit_0011(c, 166u, depth + 1u); else { c.pc = 0x00165390u; return; } if (c.pc != 0x003FD2BCu) [[unlikely]] return; }
L_003FD2BC:
    st32((c.r[19].w[0] + 1668u), c.r[2].w[0]);
    c.budget -= 1;
L_003FD2C0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0] + 1664u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003FD2E8; } }
L_003FD2D0:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD2E4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 17u, depth + 1u); else { c.pc = 0x00160370u; return; } if (c.pc != 0x003FD2E4u) [[unlikely]] return; }
L_003FD2E4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003FD2E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 72u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD2D0u | kUnwind; return; } goto L_003FD2D0; }
    set32(c.r[4], ld32((c.r[19].w[0] + 1672u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 56u)));  goto L_003FD31C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD314u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FD314u) [[unlikely]] return; }
L_003FD314:
    st32((c.r[19].w[0] + 1672u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 2;
L_003FD31C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
L_003FD328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD330u);  if (depth < kMaxDepth) unit_00B7(c, 67u, depth + 1u); else { c.pc = 0x003FC9D0u; return; } if (c.pc != 0x003FD330u) [[unlikely]] return; }
L_003FD330:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003FD334:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003FD350:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FD538; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003FD3A8; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[18].w[0] + 1652u), 0u);  goto L_003FD39C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_003FD544; } }
L_003FD39C:
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 3;
L_003FD3A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; c.f[4] = ld32((c.r[18].w[0] + 96u));  if (t) { goto L_003FD3C4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FD3E0; } }
L_003FD3C4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_003FD3E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[2] = ld32((c.r[2].w[0] + 27140u));
    c.f[1] = ld32((c.r[18].w[0] + 1652u));
    c.f[0] = 0u;
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[2]);
    st32((c.r[18].w[0] + 1652u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 1656u));
    c.f[0] = ld32((c.r[18].w[0] + 1652u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = ld32((c.r[18].w[0] + 1656u));  goto L_003FD41C; }
    st32((c.r[18].w[0] + 1652u), c.f[1]);
    c.f[2] = ld32((c.r[18].w[0] + 1656u));
    c.budget -= 2;
L_003FD41C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[1] = ld32((c.r[18].w[0] + 1660u));
    c.r[17].d[0] = 0ull + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[20] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
L_003FD438:
    c.f[0] = c.r[17].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[4] = ld32((c.r[18].w[0] + 1652u));
    c.f[3] = 0u;
    c.f[2] = ld32((c.r[18].w[0] + 1660u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[3] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[5]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.r[1].d[0] = c.r[16].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003FD494; } }
    set32(c.r[16], 0u + 128u);
    c.budget -= 1;
L_003FD494:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);  goto L_003FD4A4; }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);
    c.budget -= 2;
L_003FD4A4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[2].w[0] + 116u));
    set32(c.r[20], c.r[2].w[0] + 116u);
    set32(c.r[19], c.r[2].w[0] + 372u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD4C0u); set32(c.r[7], 0u + 128u);  if (depth < kMaxDepth) unit_00B7(c, 68u, depth + 1u); else { c.pc = 0x003FCA20u; return; } if (c.pc != 0x003FD4C0u) [[unlikely]] return; }
L_003FD4C0:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[17].d[0] & 8ull;
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[4], c.r[2].w[0] << 1);
    c.r[5].d[0] = ld8((c.r[19].w[0]));
    c.r[2].d[0] = c.r[17].d[0] & 16ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[2].d[0] = c.r[17].d[0] & 231ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] << 24);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 628u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD438u | kUnwind; return; } goto L_003FD438; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1668u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD514u); set32(c.r[5], c.r[18].w[0] + 628u);  if (depth < kMaxDepth) unit_0011(c, 197u, depth + 1u); else { c.pc = 0x001659B0u; return; } if (c.pc != 0x003FD514u) [[unlikely]] return; }
L_003FD514:
    c.f[1] = ld32((c.r[18].w[0] + 1652u));
    c.f[0] = ld32((c.r[18].w[0] + 1656u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FD540; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_003FD540; } }
L_003FD538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD540u);  if (depth < kMaxDepth) unit_00B7(c, 67u, depth + 1u); else { c.pc = 0x003FC9D0u; return; } if (c.pc != 0x003FD540u) [[unlikely]] return; }
L_003FD540:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003FD544:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003FD570:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD584u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 107u, depth + 1u); else { c.pc = 0x0016D590u; return; } if (c.pc != 0x003FD584u) [[unlikely]] return; }
L_003FD584:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD590u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 117u, depth + 1u); else { c.pc = 0x0016D790u; return; } if (c.pc != 0x003FD590u) [[unlikely]] return; }
L_003FD590:
    set32(c.r[4], ld32((c.r[16].w[0] + 1664u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD59Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 118u, depth + 1u); else { c.pc = 0x0016D7A0u; return; } if (c.pc != 0x003FD59Cu) [[unlikely]] return; }
L_003FD59C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD5A4u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0013(c, 125u, depth + 1u); else { c.pc = 0x0016D8E0u; return; } if (c.pc != 0x003FD5A4u) [[unlikely]] return; }
L_003FD5A4:
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[2].w[0];
    set32(c.r[5], 0u + 4u);
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    set32(c.r[3], 0u - 1u);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[1], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    c.f[4] = ld32((c.r[16].w[0] + 76u));
    st32((c.r[29].w[0] + 40u), c.f[4]);
    st32((c.r[29].w[0] + 44u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 36u), c.f[2]);
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 32u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    st32((c.r[29].w[0] + 56u), c.f[1]);
    st32((c.r[29].w[0] + 68u), 0u);
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 64u), c.f[4]);
    st32((c.r[29].w[0] + 60u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 124u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 84u), c.f[2]);
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 108u), c.f[1]);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 88u), c.f[4]);
    st32((c.r[29].w[0] + 112u), c.f[4]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD648u); st32((c.r[29].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 134u, depth + 1u); else { c.pc = 0x0016D9B0u; return; } if (c.pc != 0x003FD648u) [[unlikely]] return; }
L_003FD648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD650u); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0013(c, 120u, depth + 1u); else { c.pc = 0x0016D820u; return; } if (c.pc != 0x003FD650u) [[unlikely]] return; }
L_003FD650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD658u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0013(c, 125u, depth + 1u); else { c.pc = 0x0016D8E0u; return; } if (c.pc != 0x003FD658u) [[unlikely]] return; }
L_003FD658:
    c.f[6] = ld32((c.r[16].w[0] + 84u));
    set32(c.r[5], 0u + 4u);
    c.f[1] = ld32((c.r[16].w[0] + 80u));
    set32(c.r[2], 0u - 1u);
    c.f[5] = ld32((c.r[16].w[0] + 76u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[4] = ld32((c.r[16].w[0] + 64u));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 36u), c.f[4]);
    st32((c.r[29].w[0] + 40u), c.f[5]);
    st32((c.r[29].w[0] + 44u), c.f[1]);
    st32((c.r[29].w[0] + 48u), c.f[6]);
    c.f[3] = ld32((c.r[16].w[0] + 92u));
    c.f[2] = ld32((c.r[16].w[0] + 72u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 60u), c.f[2]);
    st32((c.r[29].w[0] + 64u), c.f[5]);
    st32((c.r[29].w[0] + 72u), c.f[3]);
    c.f[1] = ld32((c.r[16].w[0] + 88u));
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    st32((c.r[29].w[0] + 84u), c.f[4]);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 96u), c.f[6]);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 108u), c.f[2]);
    st32((c.r[29].w[0] + 120u), c.f[3]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    st32((c.r[29].w[0] + 88u), c.f[5]);
    st32((c.r[29].w[0] + 112u), c.f[5]);
    st32((c.r[29].w[0] + 92u), c.f[1]);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD6F0u); st32((c.r[29].w[0] + 116u), c.f[1]);  if (depth < kMaxDepth) unit_0013(c, 134u, depth + 1u); else { c.pc = 0x0016D9B0u; return; } if (c.pc != 0x003FD6F0u) [[unlikely]] return; }
L_003FD6F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD6F8u);  if (depth < kMaxDepth) unit_0013(c, 111u, depth + 1u); else { c.pc = 0x0016D670u; return; } if (c.pc != 0x003FD6F8u) [[unlikely]] return; }
L_003FD6F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003FD710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD724u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 22u, depth + 1u); else { c.pc = 0x003FC480u; return; } if (c.pc != 0x003FD724u) [[unlikely]] return; }
L_003FD724:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], c.r[3].w[0] + 13248u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 120u), c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD770u); c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x003FD770u) [[unlikely]] return; }
L_003FD770:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    set32(c.r[3], 0u + 1u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 124u), c.f[0]);
    st32((c.r[16].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 132u), 0u);
    st32((c.r[16].w[0] + 144u), 0u);
    st32((c.r[16].w[0] + 136u), 0u);
    st32((c.r[16].w[0] + 140u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FD7B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FD814; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 13248u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FD7F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD7ECu);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x003FD7ECu) [[unlikely]] return; }
L_003FD7EC:
    st32((c.r[17].w[0] + 140u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003FD7F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD7FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 32u, depth + 1u); else { c.pc = 0x003FC5E0u; return; } if (c.pc != 0x003FD7FCu) [[unlikely]] return; }
L_003FD7FC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FD818; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD814u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x003FD814u) [[unlikely]] return; }
L_003FD814:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FD818:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FD830:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st32((c.r[4].w[0] + 116u), c.f[12]);
    c.f[0] = c.r[3].w[0];
    st32((c.r[4].w[0] + 120u), c.f[13]);
    st32((c.r[4].w[0] + 128u), c.r[5].w[0]);
    fpu_compare(c, fp::key(c.f[14]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 124u), c.f[14]);  if (t) { goto L_003FD854; } }
    st32((c.r[4].w[0] + 124u), c.f[0]);
    c.budget -= 1;
L_003FD854:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 132u), c.r[6].w[0]);  c.pc = t; return; }
L_003FD860:
    set32(c.r[29], c.r[29].w[0] - 336u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 68u));
    c.f[3] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FD8AC; } }
    c.f[3] = fp::ee::sub(c.fcr31, c.f[1], c.f[3]);
    c.budget -= 1;
L_003FD8AC:
    c.f[2] = ld32((c.r[16].w[0] + 72u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 120u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FD8D8; } }
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 1;
L_003FD8D8:
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD8E4u); c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x003FD8E4u) [[unlikely]] return; }
L_003FD8E4:
    c.f[20] = c.f[0];
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003FD8EC:
    set32(c.r[3], c.r[17].w[0] << 16);
    set32(c.r[2], 0u + 29u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] << 3);
    c.r[19].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[18], c.r[2].w[0] + 96u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD914u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 8u, depth + 1u); else { c.pc = 0x00184140u; return; } if (c.pc != 0x003FD914u) [[unlikely]] return; }
L_003FD914:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD920u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x003FD920u) [[unlikely]] return; }
L_003FD920:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD8ECu | kUnwind; return; } goto L_003FD8EC; } }
    c.f[0] = ld32((c.r[16].w[0] + 124u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 1u);  goto L_003FD95C; }
    c.f[0] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 136u), c.r[2].w[0]);  if (t) { goto L_003FD960; } }
L_003FD95C:
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    c.budget -= 1;
L_003FD960:
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[2], 0u + 1456u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD970u); mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]); c.r[4].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x003FD970u) [[unlikely]] return; }
L_003FD970:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 140u), c.r[2].w[0]);  if (t) { goto L_003FD998; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD988u); set32(c.r[5], c.r[5].w[0] + 26112u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x003FD988u) [[unlikely]] return; }
L_003FD988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD990u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 67u, depth + 1u); else { c.pc = 0x003FC9D0u; return; } if (c.pc != 0x003FD990u) [[unlikely]] return; }
L_003FD990:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_003FDBB0; } }
L_003FD998:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u - 1u);
    c.f[1] = 0u;
    set32(c.r[4], 0u + 1456u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 255u);  if (t) { goto L_003FDB94; } }
L_003FD9B0:
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.f[2] = ld32((c.r[16].w[0] + 124u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.budget -= 11;
L_003FD9DC:
    set32(c.r[11], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[9], c.r[5].w[0] << 1);
    set32(c.r[8], c.r[9].w[0] + c.r[5].w[0]);
    set32(c.r[10], c.r[8].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[8], c.r[5].w[0] << 3);
    set32(c.r[11], c.r[11].w[0] + c.r[3].w[0]);
    c.f[6] = ld32((c.r[16].w[0] + 60u));
    set32(c.r[8], c.r[8].w[0] + c.r[29].w[0]);
    c.f[5] = ld32((c.r[16].w[0] + 116u));
    set32(c.r[11], c.r[11].w[0] + c.r[10].w[0]);
    set32(c.r[10], c.r[8].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[2] = ld32((c.r[10].w[0]));
    set32(c.r[8], c.r[9].w[0] << 1);
    c.f[5] = fp::ee::add(c.fcr31, c.f[6], c.f[5]);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[8].w[0] << 3);
    c.r[8].d[0] = c.r[5].sd[0] < 30ll ? 1ull : 0ull;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[2]);
    st32((c.r[11].w[0]), c.f[5]);
    c.f[6] = ld32((c.r[16].w[0] + 64u));
    c.f[5] = ld32((c.r[16].w[0] + 120u));
    c.f[0] = ld32((c.r[10].w[0] + 4u));
    c.f[5] = fp::ee::add(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    st32((c.r[11].w[0] + 4u), c.f[5]);
    st32((c.r[11].w[0] + 8u), 0u);
    c.f[8] = ld32((c.r[16].w[0] + 60u));
    c.f[6] = ld32((c.r[11].w[0]));
    c.f[5] = ld32((c.r[16].w[0] + 68u));
    c.f[7] = ld32((c.r[16].w[0] + 80u));
    c.f[6] = fp::ee::sub(c.fcr31, c.f[6], c.f[8]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[5], c.f[8]);
    c.f[6] = fp::ee::div(c.fcr31, c.f[6], c.f[5]);
    c.f[5] = ld32((c.r[16].w[0] + 88u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[7]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[5], c.f[7]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[6]);
    st32((c.r[11].w[0] + 12u), c.f[5]);
    c.f[8] = ld32((c.r[16].w[0] + 64u));
    c.f[6] = ld32((c.r[11].w[0] + 4u));
    c.f[5] = ld32((c.r[16].w[0] + 72u));
    c.f[7] = ld32((c.r[16].w[0] + 84u));
    c.f[6] = fp::ee::sub(c.fcr31, c.f[6], c.f[8]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[5], c.f[8]);
    c.f[6] = fp::ee::div(c.fcr31, c.f[6], c.f[5]);
    c.f[5] = ld32((c.r[16].w[0] + 92u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[7]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[5], c.f[7]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[6]);
    st32((c.r[11].w[0] + 16u), c.f[5]);
    st32((c.r[11].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[16].w[0] + 140u)));
    c.f[6] = ld32((c.r[16].w[0] + 60u));
    c.f[5] = ld32((c.r[16].w[0] + 116u));
    set32(c.r[10], c.r[10].w[0] + c.r[3].w[0]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[6], c.f[5]);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[9].w[0]), c.f[2]);
    c.f[5] = ld32((c.r[16].w[0] + 64u));
    c.f[2] = ld32((c.r[16].w[0] + 120u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[5], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    st32((c.r[9].w[0] + 4u), c.f[0]);
    st32((c.r[9].w[0] + 8u), 0u);
    c.f[6] = ld32((c.r[16].w[0] + 60u));
    c.f[2] = ld32((c.r[9].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.f[5] = ld32((c.r[16].w[0] + 80u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[6]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[6]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[5]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[2]);
    st32((c.r[9].w[0] + 12u), c.f[0]);
    c.f[6] = ld32((c.r[16].w[0] + 64u));
    c.f[2] = ld32((c.r[9].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    c.f[5] = ld32((c.r[16].w[0] + 84u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[6]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[6]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[5]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[2]);
    st32((c.r[9].w[0] + 16u), c.f[0]);
    c.budget -= 97;
    { const bool t = c.r[8].d[0] != 0ull; st32((c.r[9].w[0] + 20u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD9DCu | kUnwind; return; } goto L_003FD9DC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 1440u), c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 1444u), c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 1448u), c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 1452u), c.r[7].w[0]);
    c.budget -= 13;
L_003FDB94:
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[6].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD9B0u | kUnwind; return; } goto L_003FD9B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDBACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 67u, depth + 1u); else { c.pc = 0x003FC9D0u; return; } if (c.pc != 0x003FDBACu) [[unlikely]] return; }
L_003FDBAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003FDBB0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_003FDBD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.f[4] = ld32((c.r[4].w[0] + 96u));
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] < 0; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FDC0C; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FDC28; } }
L_003FDC0C:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_003FDC28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[17].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.r[16].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[18].w[0] + 144u));
    c.f[0] = 0u;
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[2]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 144u), c.f[0]);  if (t) { goto L_003FDE98; } }
L_003FDC54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDC5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x003FDC5Cu) [[unlikely]] return; }
L_003FDC5C:
    c.f[1] = ld32((c.r[18].w[0] + 144u));
    set32(c.r[4], ld32((c.r[18].w[0] + 128u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDC6Cu); c.f[20] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x003FDC6Cu) [[unlikely]] return; }
L_003FDC6C:
    c.f[1] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[16].w[0] + 1u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDC8Cu); c.f[20] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x003FDC8Cu) [[unlikely]] return; }
L_003FDC8C:
    c.f[1] = ld32((c.r[18].w[0] + 144u));
    set32(c.r[4], ld32((c.r[18].w[0] + 128u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDC9Cu); c.f[21] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x003FDC9Cu) [[unlikely]] return; }
L_003FDC9C:
    c.f[1] = fp::ee::div(c.fcr31, c.f[21], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[5] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FDCDC; } }
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FDCDC; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003FDCDC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003FDCF8; }
    c.f[20] = c.f[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_003FDCF8:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FDD10; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_003FDD10:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003FDD2C; }
    c.f[5] = c.f[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_003FDD2C:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[5]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);  goto L_003FDD48; }
    c.f[5] = c.f[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 2;
L_003FDD48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[3].w[0];
    c.f[2] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[20], c.f[20]);
    c.f[4] = c.r[4].w[0];
    c.f[3] = fp::ee::msub(c.fcr31, c.facc, c.f[4], c.f[20]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 19;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003FDDA4; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_003FDDBC; } }
L_003FDDA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 6;
L_003FDDBC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[4].w[0];
    c.f[2] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[5], c.f[5]);
    c.f[4] = c.r[5].w[0];
    c.f[3] = fp::ee::msub(c.fcr31, c.facc, c.f[4], c.f[5]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 19;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003FDE18; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[7], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 132u)));  if (t) { goto L_003FDE30; } }
L_003FDE18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.r[7].d[0] = c.r[7].d[0] | c.r[4].d[0];
    set32(c.r[4], ld32((c.r[18].w[0] + 132u)));
    c.budget -= 6;
L_003FDE30:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 136u)));  goto L_003FDE5C; }
    set32(c.r[5], 0u + 1456u);
    set32(c.r[4], ld32((c.r[18].w[0] + 140u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 1440u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 140u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 1444u), c.r[7].w[0]);  if (t) { goto L_003FDE94; } }
L_003FDE5C:
    set32(c.r[6], 0u + 1456u);
    set32(c.r[4], ld32((c.r[18].w[0] + 140u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] - c.r[16].w[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 1440u), c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 136u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 140u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] - c.r[16].w[0]);
    mmi::mult(c, 1, c.r[5].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 1444u), c.r[3].w[0]);
    c.budget -= 14;
L_003FDE94:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003FDE98:
    set32(c.r[4], ld32((c.r[18].w[0] + 136u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FDC54u | kUnwind; return; } goto L_003FDC54; } }
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[17].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003FDEBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDEB8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 67u, depth + 1u); else { c.pc = 0x003FC9D0u; return; } if (c.pc != 0x003FDEB8u) [[unlikely]] return; }
L_003FDEB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003FDEBC:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003FDEE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDF00u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0013(c, 107u, depth + 1u); else { c.pc = 0x0016D590u; return; } if (c.pc != 0x003FDF00u) [[unlikely]] return; }
L_003FDF00:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDF0Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 117u, depth + 1u); else { c.pc = 0x0016D790u; return; } if (c.pc != 0x003FDF0Cu) [[unlikely]] return; }
L_003FDF0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDF14u); set32(c.r[4], ld32((c.r[19].w[0] + 52u)));  if (depth < kMaxDepth) unit_0013(c, 120u, depth + 1u); else { c.pc = 0x0016D820u; return; } if (c.pc != 0x003FDF14u) [[unlikely]] return; }
L_003FDF14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003FE000; } }
L_003FDF1C:
    set32(c.r[2], ld32((c.r[19].w[0] + 140u)));
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 1448u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 1440u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDF3Cu); set32(c.r[7], 0u + 255u);  if (depth < kMaxDepth) unit_00B7(c, 68u, depth + 1u); else { c.pc = 0x003FCA20u; return; } if (c.pc != 0x003FDF3Cu) [[unlikely]] return; }
L_003FDF3C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 140u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 1452u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 1444u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDF5Cu); set32(c.r[7], 0u + 255u);  if (depth < kMaxDepth) unit_00B7(c, 68u, depth + 1u); else { c.pc = 0x003FCA20u; return; } if (c.pc != 0x003FDF5Cu) [[unlikely]] return; }
L_003FDF5C:
    set32(c.r[3], ld32((c.r[19].w[0] + 140u)));
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1440u)));
    st32((c.r[4].w[0] + 1448u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 140u)));
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1444u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[4].w[0] + 1452u), c.r[3].w[0]);  if (t) { goto L_003FDF88; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_003FE000; }
L_003FDF88:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[5], c.r[2].w[0] << 24);
    set32(c.r[6], c.r[3].w[0] << 24);
    set32(c.r[2], ld32((c.r[19].w[0] + 140u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
L_003FDFA4:
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[4], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.r[8].sd[0] < 30ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 44u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FDFA4u | kUnwind; return; } goto L_003FDFA4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 140u)));
    set32(c.r[5], 0u + 60u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDFFCu); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0013(c, 134u, depth + 1u); else { c.pc = 0x0016D9B0u; return; } if (c.pc != 0x003FDFFCu) [[unlikely]] return; }
L_003FDFFC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003FE000:
    set32(c.r[2], ld32((c.r[19].w[0] + 136u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 1456u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FDF1Cu | kUnwind; return; } goto L_003FDF1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE018u);  if (depth < kMaxDepth) unit_0013(c, 111u, depth + 1u); else { c.pc = 0x0016D670u; return; } if (c.pc != 0x003FE018u) [[unlikely]] return; }
L_003FE018:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003FE040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE054u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 22u, depth + 1u); else { c.pc = 0x003FC480u; return; } if (c.pc != 0x003FE054u) [[unlikely]] return; }
L_003FE054:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    set32(c.r[2], c.r[2].w[0] + 13328u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 124u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FE080:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FE0C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE0B0u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B7(c, 32u, depth + 1u); else { c.pc = 0x003FC5E0u; return; } if (c.pc != 0x003FE0B0u) [[unlikely]] return; }
L_003FE0B0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FE0CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE0C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x003FE0C8u) [[unlikely]] return; }
L_003FE0C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FE0CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FE0E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 124u), c.f[12]);  c.pc = t; return; }
L_003FE0F0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC9D0u | kUnwind; return; } goto L_003FC9D0; }
L_003FE100:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FE250; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003FE158; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], 0u + 255u);  goto L_003FE13C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003FE25C; } }
L_003FE13C:
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 124u));
    st32((c.r[16].w[0] + 128u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 7;
L_003FE158:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; c.f[4] = ld32((c.r[16].w[0] + 96u));  if (t) { goto L_003FE174; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FE190; } }
L_003FE174:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_003FE190:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[2] = ld32((c.r[2].w[0] + 27140u));
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.f[0] = 0u;
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[4], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 128u), c.f[1]);  if (t) { goto L_003FE1BC; } }
    st32((c.r[16].w[0] + 128u), c.f[0]);
    c.budget -= 1;
L_003FE1BC:
    c.f[3] = ld32((c.r[16].w[0] + 128u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = ld32((c.r[16].w[0] + 124u));
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = fp::ee::div(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003FE1FC; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[17], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 116u)));  if (t) { goto L_003FE214; } }
L_003FE1FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 6;
L_003FE214:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE224u); set32(c.r[7], 0u + 255u);  if (depth < kMaxDepth) unit_00B7(c, 68u, depth + 1u); else { c.pc = 0x003FCA20u; return; } if (c.pc != 0x003FE224u) [[unlikely]] return; }
L_003FE224:
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.f[0] = 0u;
    st32((c.r[16].w[0] + 116u), c.r[17].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FE258; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_003FE258; } }
L_003FE250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE258u);  if (depth < kMaxDepth) unit_00B7(c, 67u, depth + 1u); else { c.pc = 0x003FC9D0u; return; } if (c.pc != 0x003FE258u) [[unlikely]] return; }
L_003FE258:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003FE25C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FE270:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 4u);
    set32(c.r[3], ld32((c.r[4].w[0] + 120u)));
    c.f[6] = ld32((c.r[4].w[0] + 84u));
    c.f[1] = ld32((c.r[4].w[0] + 80u));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[5] = ld32((c.r[4].w[0] + 76u));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 24);
    set32(c.r[7], 0u + 1u);
    c.f[4] = ld32((c.r[4].w[0] + 64u));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.f[4]);
    st32((c.r[29].w[0] + 24u), c.f[5]);
    st32((c.r[29].w[0] + 28u), c.f[1]);
    st32((c.r[29].w[0] + 32u), c.f[6]);
    c.f[3] = ld32((c.r[4].w[0] + 92u));
    c.f[2] = ld32((c.r[4].w[0] + 72u));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    st32((c.r[29].w[0] + 44u), c.f[2]);
    st32((c.r[29].w[0] + 48u), c.f[5]);
    st32((c.r[29].w[0] + 56u), c.f[3]);
    c.f[1] = ld32((c.r[4].w[0] + 88u));
    c.f[0] = ld32((c.r[4].w[0] + 68u));
    st32((c.r[29].w[0] + 68u), c.f[4]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 80u), c.f[6]);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 92u), c.f[2]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 104u), c.f[3]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    st32((c.r[29].w[0] + 88u), c.f[0]);
    st32((c.r[29].w[0] + 72u), c.f[5]);
    st32((c.r[29].w[0] + 96u), c.f[5]);
    st32((c.r[29].w[0] + 76u), c.f[1]);
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE324u); st32((c.r[29].w[0] + 100u), c.f[1]);  if (depth < kMaxDepth) unit_000E(c, 336u, depth + 1u); else { c.pc = 0x0015AE60u; return; } if (c.pc != 0x003FE324u) [[unlikely]] return; }
L_003FE324:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003FE330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE344u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 22u, depth + 1u); else { c.pc = 0x003FC480u; return; } if (c.pc != 0x003FE344u) [[unlikely]] return; }
L_003FE344:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 13408u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 128u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FE370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FE3D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 13408u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FE3B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE3ACu);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x003FE3ACu) [[unlikely]] return; }
L_003FE3AC:
    st32((c.r[17].w[0] + 128u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003FE3B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE3BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 32u, depth + 1u); else { c.pc = 0x003FC5E0u; return; } if (c.pc != 0x003FE3BCu) [[unlikely]] return; }
L_003FE3BC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FE3D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE3D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x003FE3D4u) [[unlikely]] return; }
L_003FE3D4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FE3D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FE3F0:
    c.f[0] = c.r[6].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 120u), c.r[3].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[28].w[0] - 32668u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 136u), c.f[1]);  if (t) { goto L_003FE420; } }
    st32((c.r[4].w[0] + 136u), c.f[0]);
    c.budget -= 1;
L_003FE420:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; st32((c.r[4].w[0] + 140u), c.r[7].w[0]);  if (t) { goto L_003FE430; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 140u), c.r[3].w[0]);
    c.budget -= 2;
L_003FE430:
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[3], 0u + 360u);
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 116u), c.r[3].w[0]);  c.pc = t; return; }
L_003FE450:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[2] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[29].w[0] + 128u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    set32(c.r[2], 0u + 32u);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[4].w[0] + 60u));
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = ld32((c.r[4].w[0] + 68u));
    c.f[0] = ld32((c.r[4].w[0] + 72u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 22;
    { const bool t = c.r[3].d[0] == 0ull; c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);  if (t) { goto L_003FE4C4; } }
L_003FE4A8:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE4A8u | kUnwind; return; } goto L_003FE4A8; } }
L_003FE4C4:
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    st32((c.r[29].w[0] + 128u), c.f[4]);
    st32((c.r[29].w[0] + 136u), c.f[4]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    st32((c.r[29].w[0] + 156u), c.f[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 14));
    st32((c.r[29].w[0] + 140u), c.f[3]);
    st32((c.r[29].w[0] + 148u), c.f[3]);
    st32((c.r[29].w[0] + 144u), c.f[1]);
    c.budget -= 11;
    { const bool t = c.r[4].sd[0] >= 0; st32((c.r[29].w[0] + 152u), c.f[1]);  if (t) { goto L_003FE4F8; } }
    set32(c.r[2], c.r[4].w[0] + 16383u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.budget -= 2;
L_003FE4F8:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + 128u);
    c.f[23] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE514u); c.f[22] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x003FE514u) [[unlikely]] return; }
L_003FE514:
    c.f[1] = ld32((c.r[17].w[0] + 120u));
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE524u); c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 8u, depth + 1u); else { c.pc = 0x00184140u; return; } if (c.pc != 0x003FE524u) [[unlikely]] return; }
L_003FE524:
    c.f[1] = ld32((c.r[17].w[0] + 120u));
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE538u); c.f[21] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 8u, depth + 1u); else { c.pc = 0x00184140u; return; } if (c.pc != 0x003FE538u) [[unlikely]] return; }
L_003FE538:
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE544u); set32(c.r[4], ld32((c.r[17].w[0] + 116u)));  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x003FE544u) [[unlikely]] return; }
L_003FE544:
    c.f[12] = ld32((c.r[29].w[0] + 184u));
    st32((c.r[29].w[0] + 188u), c.f[0]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.f[12] = c.f[12] ^ fp::kSign;  goto L_003FE560; }
L_003FE560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE568u);  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x003FE568u) [[unlikely]] return; }
L_003FE568:
    c.r[5].d[0] = ld64((c.r[28].w[0] - 32752u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE574u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 34u, depth + 1u); else { c.pc = 0x00120420u; return; } if (c.pc != 0x003FE574u) [[unlikely]] return; }
L_003FE574:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[29].w[0] + 188u));  goto L_003FE584; }
    st32((c.r[29].w[0] + 184u), 0u);
    c.f[12] = ld32((c.r[29].w[0] + 188u));
    c.budget -= 2;
L_003FE584:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[12] = c.f[12] ^ fp::kSign;  goto L_003FE598; }
L_003FE598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE5A0u);  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x003FE5A0u) [[unlikely]] return; }
L_003FE5A0:
    c.r[5].d[0] = ld64((c.r[28].w[0] - 32744u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE5ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 34u, depth + 1u); else { c.pc = 0x00120420u; return; } if (c.pc != 0x003FE5ACu) [[unlikely]] return; }
L_003FE5AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 176u), c.f[22]);  goto L_003FE5BC; }
    st32((c.r[29].w[0] + 188u), 0u);
    st32((c.r[29].w[0] + 176u), c.f[22]);
    c.budget -= 2;
L_003FE5BC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 180u), c.f[23]);  if (t) { goto L_003FE5E0; } }
L_003FE5C8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[20]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[21]);
    st32((c.r[29].w[0] + 176u), c.f[1]);
    st32((c.r[29].w[0] + 180u), c.f[0]);
    c.budget -= 6;
L_003FE5E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 184u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE5F4u); set32(c.r[7], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00B7(c, 230u, depth + 1u); else { c.pc = 0x003FEC20u; return; } if (c.pc != 0x003FE5F4u) [[unlikely]] return; }
L_003FE5F4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[29].w[0] + 176u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE5C8u | kUnwind; return; } goto L_003FE5C8; }
    set32(c.r[3], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] << 3);
    st32((c.r[17].w[0] + 124u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE614u); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x003FE614u) [[unlikely]] return; }
L_003FE614:
    st32((c.r[17].w[0] + 128u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 168u), c.f[22]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 172u), c.f[23]);  if (t) { goto L_003FE7D0; } }
L_003FE628:
    c.f[0] = ld32((c.r[17].w[0] + 88u));
    c.f[6] = 0u;
    c.f[9] = ld32((c.r[29].w[0] + 64u));
    c.f[7] = fp::ee::sub(c.fcr31, c.f[0], c.f[8]);
    c.f[3] = ld32((c.r[17].w[0] + 60u));
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[11] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[9], c.f[3]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[1], c.f[3]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[11], c.f[3]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[8]);
    c.f[13] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[1]);
    c.f[3] = ld32((c.r[17].w[0] + 84u));
    c.f[5] = ld32((c.r[17].w[0] + 64u));
    c.f[2] = ld32((c.r[17].w[0] + 72u));
    c.f[1] = ld32((c.r[17].w[0] + 92u));
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[2], c.f[5]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[1], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[12], c.f[5]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[4]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[3]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[8]);
    c.f[7] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[0]);
    c.f[10] = ld32((c.r[29].w[0] + 76u));
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[10], c.f[5]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[4]);
    c.budget -= 35;
    { const bool t = c.r[16].sd[0] < 0; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);  if (t) { goto L_003FE748; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] - 1u);  goto L_003FE74C; }
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[5], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], 0u + 255u);
    st32((c.r[2].w[0]), c.f[9]);
    st32((c.r[2].w[0] + 4u), c.f[12]);
    st32((c.r[2].w[0] + 8u), c.f[6]);
    st32((c.r[2].w[0] + 12u), c.f[13]);
    st32((c.r[2].w[0] + 16u), c.f[1]);
    st32((c.r[2].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 48u), c.f[11]);
    st32((c.r[2].w[0] + 52u), c.f[10]);
    st32((c.r[2].w[0] + 56u), c.f[6]);
    st32((c.r[2].w[0] + 60u), c.f[7]);
    st32((c.r[2].w[0] + 64u), c.f[0]);
    st32((c.r[2].w[0] + 68u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 33;
L_003FE748:
    set32(c.r[4], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_003FE74C:
    c.budget -= 2;
    if (c.r[4].sd[0] < 0) { c.f[1] = ld32((c.r[29].w[0] + 168u));  goto L_003FE7B8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003FE7B4; } }
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 24u), c.f[9]);
    st32((c.r[2].w[0] + 28u), c.f[12]);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 36u), c.f[13]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 72u), c.f[11]);
    st32((c.r[2].w[0] + 76u), c.f[10]);
    st32((c.r[2].w[0] + 80u), 0u);
    st32((c.r[2].w[0] + 84u), c.f[7]);
    st32((c.r[2].w[0] + 88u), c.f[0]);
    st32((c.r[2].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 20;
L_003FE7B4:
    c.f[1] = ld32((c.r[29].w[0] + 168u));
    c.budget -= 1;
L_003FE7B8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[20]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[21]);
    st32((c.r[29].w[0] + 168u), c.f[1]);
    st32((c.r[29].w[0] + 172u), c.f[0]);
    c.budget -= 6;
L_003FE7D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 168u);
    set32(c.r[6], c.r[29].w[0] + 184u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE7E4u); set32(c.r[7], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00B7(c, 230u, depth + 1u); else { c.pc = 0x003FEC20u; return; } if (c.pc != 0x003FE7E4u) [[unlikely]] return; }
L_003FE7E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[8] = ld32((c.r[17].w[0] + 80u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE628u | kUnwind; return; } goto L_003FE628; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE7F8u); st32((c.r[17].w[0] + 132u), 0u);  if (depth < kMaxDepth) unit_00B7(c, 67u, depth + 1u); else { c.pc = 0x003FC9D0u; return; } if (c.pc != 0x003FE7F8u) [[unlikely]] return; }
L_003FE7F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003FE820:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0; c.f[8] = ld32((c.r[4].w[0] + 96u));  if (t) { goto L_003FE844; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FE860; } }
L_003FE844:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_003FE860:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[3].w[0] + 27140u));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[6] = c.r[6].w[0];
    c.r[9].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = ld32((c.r[4].w[0] + 132u));
    c.f[7] = 0u;
    c.f[5] = c.r[10].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[7], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[1]);
    c.f[4] = c.r[9].w[0];
    c.f[3] = c.r[7].w[0];
    c.f[2] = c.r[6].w[0];
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 132u), c.f[0]);  if (t) { goto L_003FEA78; } }
L_003FE8B8:
    c.f[0] = c.r[3].w[0];
    set32(c.r[9], ld32((c.r[4].w[0] + 140u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[9] = ld32((c.r[4].w[0] + 136u));
    c.f[8] = ld32((c.r[4].w[0] + 132u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[9]);
    c.budget -= 10;
    { const bool t = c.r[9].sd[0] < 0; c.f[1] = fp::ee::sub(c.fcr31, c.f[8], c.f[0]);  if (t) { goto L_003FE8EC; } }
    c.f[0] = c.r[9].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FE908; } }
L_003FE8EC:
    set32(c.r[7], c.r[9].w[0] >> 1);
    c.r[6].d[0] = c.r[9].d[0] & 1ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003FE908:
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.f[10] = fp::ee::sub(c.fcr31, c.f[6], c.f[0]);
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[9]);
    c.budget -= 13;
    { const bool t = c.r[9].sd[0] < 0; c.f[1] = fp::ee::sub(c.fcr31, c.f[8], c.f[0]);  if (t) { goto L_003FE948; } }
    c.f[0] = c.r[9].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FE964; } }
L_003FE948:
    set32(c.r[7], c.r[9].w[0] >> 1);
    c.r[6].d[0] = c.r[9].d[0] & 1ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003FE964:
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[10]) <= fp::key(c.f[7]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[8] = fp::ee::sub(c.fcr31, c.f[6], c.f[0]);  if (t) { goto L_003FE990; } }
    fpu_compare(c, fp::key(c.f[8]) <= fp::key(c.f[7]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FE990; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_003FE990:
    fpu_compare(c, fp::key(c.f[10]) < fp::key(c.f[7]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FE9A0; } }
    c.f[10] = c.f[7];
    c.budget -= 1;
L_003FE9A0:
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[10]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FE9B0; } }
    c.f[10] = c.f[6];
    c.budget -= 1;
L_003FE9B0:
    fpu_compare(c, fp::key(c.f[8]) < fp::key(c.f[7]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FE9C0; } }
    c.f[8] = c.f[7];
    c.budget -= 1;
L_003FE9C0:
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[8]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = fp::ee::mul(c.fcr31, c.f[10], c.f[10]);  goto L_003FE9D4; }
    c.f[8] = c.f[6];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[10], c.f[10]);
    c.budget -= 2;
L_003FE9D4:
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[3].w[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[7], c.f[4]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[5], c.f[10]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[9], c.r[6].w[0] << 4);  if (t) { goto L_003FEA08; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::mul(c.fcr31, c.f[8], c.f[8]);  if (t) { goto L_003FEA20; } }
L_003FEA08:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[8], c.f[8]);
    c.budget -= 6;
L_003FEA20:
    set32(c.r[6], ld32((c.r[4].w[0] + 128u)));
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[7], c.f[4]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[5], c.f[8]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[6].w[0] + 96u), c.r[7].w[0]);  if (t) { goto L_003FEA54; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[4].w[0] + 128u)));  if (t) { goto L_003FEA6C; } }
L_003FEA54:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    set32(c.r[6], ld32((c.r[4].w[0] + 128u)));
    c.budget -= 6;
L_003FEA6C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    st32((c.r[6].w[0] + 100u), c.r[7].w[0]);
    c.budget -= 3;
L_003FEA78:
    set32(c.r[7], ld32((c.r[4].w[0] + 124u)));
    c.r[6].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE8B8u | kUnwind; return; } goto L_003FE8B8; } }
    c.budget -= 2;
    if (c.r[7].d[0] != c.r[5].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003FEA9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEA98u);  if (depth < kMaxDepth) unit_00B7(c, 67u, depth + 1u); else { c.pc = 0x003FC9D0u; return; } if (c.pc != 0x003FEA98u) [[unlikely]] return; }
L_003FEA98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003FEA9C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FEAB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEAD0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0013(c, 107u, depth + 1u); else { c.pc = 0x0016D590u; return; } if (c.pc != 0x003FEAD0u) [[unlikely]] return; }
L_003FEAD0:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEADCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 117u, depth + 1u); else { c.pc = 0x0016D790u; return; } if (c.pc != 0x003FEADCu) [[unlikely]] return; }
L_003FEADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEAE4u); set32(c.r[4], ld32((c.r[19].w[0] + 52u)));  if (depth < kMaxDepth) unit_0013(c, 120u, depth + 1u); else { c.pc = 0x0016D820u; return; } if (c.pc != 0x003FEAE4u) [[unlikely]] return; }
L_003FEAE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003FEBEC; } }
L_003FEAEC:
    set32(c.r[3], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[17], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 100u)));  if (t) { goto L_003FEB10; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_003FEBEC; }
L_003FEB10:
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 104u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEB24u); set32(c.r[7], 0u + 255u);  if (depth < kMaxDepth) unit_00B7(c, 68u, depth + 1u); else { c.pc = 0x003FCA20u; return; } if (c.pc != 0x003FEB24u) [[unlikely]] return; }
L_003FEB24:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 108u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEB44u); set32(c.r[7], 0u + 255u);  if (depth < kMaxDepth) unit_00B7(c, 68u, depth + 1u); else { c.pc = 0x003FCA20u; return; } if (c.pc != 0x003FEB44u) [[unlikely]] return; }
L_003FEB44:
    set32(c.r[6], ld32((c.r[19].w[0] + 128u)));
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[8], c.r[5].w[0] << 24);
    set32(c.r[7], c.r[4].w[0] << 24);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[6].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 96u)));
    st32((c.r[5].w[0] + 104u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[5], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 100u)));
    st32((c.r[5].w[0] + 108u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[9], c.r[4].w[0] + c.r[17].w[0]);
    c.budget -= 15;
L_003FEB80:
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[6], c.r[9].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 20u)));
    c.r[4].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] << 40;
    c.r[5].d[0] = c.r[5].d[0] >> 40;
    c.r[5].d[0] = c.r[8].d[0] | c.r[5].d[0];
    st32((c.r[6].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 44u)));
    c.r[5].d[0] = c.r[5].d[0] << 40;
    c.r[5].d[0] = c.r[5].d[0] >> 40;
    c.r[5].d[0] = c.r[7].d[0] | c.r[5].d[0];
    c.budget -= 17;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[6].w[0] + 44u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FEB80u | kUnwind; return; } goto L_003FEB80; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 128u)));  goto L_003FEBD8; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FEBE8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    c.budget -= 1;
L_003FEBD8:
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEBE8u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0013(c, 134u, depth + 1u); else { c.pc = 0x0016D9B0u; return; } if (c.pc != 0x003FEBE8u) [[unlikely]] return; }
L_003FEBE8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003FEBEC:
    set32(c.r[2], ld32((c.r[19].w[0] + 124u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FEAECu | kUnwind; return; } goto L_003FEAEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEC04u);  if (depth < kMaxDepth) unit_0013(c, 111u, depth + 1u); else { c.pc = 0x0016D670u; return; } if (c.pc != 0x003FEC04u) [[unlikely]] return; }
L_003FEC04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003FEC20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[5] = c.r[2].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 60u));
    c.r[3].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = ld32((c.r[4].w[0] + 68u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[2], c.f[5]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[1], c.f[5]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[5], c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 72u));
    c.f[7] = ld32((c.r[6].w[0] + 4u));
    c.f[4] = 0u;
    fpu_compare(c, fp::key(c.f[4]) == fp::key(c.f[7]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::ee::add(c.fcr31, c.f[5], c.f[0]);  if (t) { goto L_003FECAC; } }
    c.f[6] = ld32((c.r[5].w[0] + 4u));
    c.f[5] = ld32((c.r[6].w[0]));
    c.f[4] = ld32((c.r[5].w[0]));
    c.f[6] = fp::ee::sub(c.fcr31, c.f[2], c.f[6]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[6]);
    c.f[5] = fp::ee::div(c.fcr31, c.f[5], c.f[7]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[4]));
    c.budget -= 11;
    if (!(c.fcr31 & kFpuCondition)) { c.f[7] = ld32((c.r[6].w[0]));  goto L_003FECB0; }
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FECAC; } }
    st32((c.r[7].w[0]), c.f[4]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[7].w[0] + 4u), c.f[2]);
    c.budget -= 3;
L_003FECAC:
    c.f[7] = ld32((c.r[6].w[0]));
    c.budget -= 1;
L_003FECB0:
    c.f[4] = 0u;
    fpu_compare(c, fp::key(c.f[4]) == fp::key(c.f[7]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[7] = ld32((c.r[6].w[0] + 4u));  goto L_003FED14; }
    c.f[6] = ld32((c.r[5].w[0]));
    c.f[5] = ld32((c.r[6].w[0] + 4u));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[6] = fp::ee::sub(c.fcr31, c.f[1], c.f[6]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[6]);
    c.f[5] = fp::ee::div(c.fcr31, c.f[5], c.f[7]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[4]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FED10; } }
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FED10; } }
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[4]);
    c.budget -= 5;
L_003FED10:
    c.f[7] = ld32((c.r[6].w[0] + 4u));
    c.budget -= 1;
L_003FED14:
    c.f[4] = 0u;
    fpu_compare(c, fp::key(c.f[4]) == fp::key(c.f[7]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[6] = ld32((c.r[6].w[0]));  goto L_003FED78; }
    c.f[6] = ld32((c.r[5].w[0] + 4u));
    c.f[5] = ld32((c.r[6].w[0]));
    c.f[4] = ld32((c.r[5].w[0]));
    c.f[6] = fp::ee::sub(c.fcr31, c.f[0], c.f[6]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[6]);
    c.f[5] = fp::ee::div(c.fcr31, c.f[5], c.f[7]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[4]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FED74; } }
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FED74; } }
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), c.f[4]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.budget -= 5;
L_003FED74:
    c.f[6] = ld32((c.r[6].w[0]));
    c.budget -= 1;
L_003FED78:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[6]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003FEDD8; } }
    c.f[5] = ld32((c.r[5].w[0]));
    c.f[4] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[3], c.f[5]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[5]);
    c.f[4] = fp::ee::div(c.fcr31, c.f[4], c.f[6]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FEDD8; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FEDD8; } }
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[1]);
    c.budget -= 5;
L_003FEDD8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 2u);  goto L_003FEDE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FEE68; } }
L_003FEDE8:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[1] = ld32((c.r[7].w[0]));  goto L_003FEE04; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEDFCu); set32(c.r[5], c.r[5].w[0] + 26144u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x003FEDFCu) [[unlikely]] return; }
L_003FEDFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FEE68; } }
L_003FEE04:
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = ld32((c.r[7].w[0]));  goto L_003FEE38; }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 1u);  goto L_003FEE68; }
    c.f[1] = ld32((c.r[7].w[0] + 12u));
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FEE64; } }
    c.f[2] = ld32((c.r[7].w[0]));
    c.budget -= 1;
L_003FEE38:
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    st32((c.r[29].w[0] + 24u), c.f[2]);
    st32((c.r[29].w[0] + 28u), c.f[1]);
    st32((c.r[7].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[7].w[0] + 12u));
    c.f[1] = ld32((c.r[29].w[0] + 24u));
    c.f[0] = ld32((c.r[29].w[0] + 28u));
    st32((c.r[7].w[0] + 4u), c.f[2]);
    st32((c.r[7].w[0] + 8u), c.f[1]);
    st32((c.r[7].w[0] + 12u), c.f[0]);
    c.budget -= 11;
L_003FEE64:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003FEE68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FEE80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEE94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 22u, depth + 1u); else { c.pc = 0x003FC480u; return; } if (c.pc != 0x003FEE94u) [[unlikely]] return; }
L_003FEE94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 13488u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FEEC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FEF08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13488u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEEF0u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B7(c, 32u, depth + 1u); else { c.pc = 0x003FC5E0u; return; } if (c.pc != 0x003FEEF0u) [[unlikely]] return; }
L_003FEEF0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FEF0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEF08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x003FEF08u) [[unlikely]] return; }
L_003FEF08:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FEF0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FEF20:
    st32((c.r[4].w[0] + 128u), c.f[12]);
    st32((c.r[4].w[0] + 132u), c.f[13]);
    st32((c.r[4].w[0] + 136u), c.f[14]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 144u), c.r[5].w[0]);  c.pc = t; return; }
L_003FEF40:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC9D0u | kUnwind; return; } goto L_003FC9D0; }
L_003FEF50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003FEF94; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[4].w[0] + 116u), 0u);  goto L_003FEF78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003FF150; } }
L_003FEF78:
    set32(c.r[3], 0u + 255u);
    st32((c.r[4].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 124u), 0u);
    st32((c.r[4].w[0] + 140u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 7;
L_003FEF94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; c.f[4] = ld32((c.r[4].w[0] + 96u));  if (t) { goto L_003FEFB0; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FEFCC; } }
L_003FEFB0:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_003FEFCC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.f[1] = ld32((c.r[4].w[0] + 140u));
    c.f[0] = 0u;
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[2]);
    st32((c.r[4].w[0] + 140u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 128u));
    c.f[2] = ld32((c.r[4].w[0] + 140u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 13;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[4].w[0] + 132u));  goto L_003FF0B0; }
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_003FF044; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 255u);  if (t) { goto L_003FF05C; } }
L_003FF044:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[0]);
    c.r[8].d[0] = c.r[8].d[0] | c.r[3].d[0];
    set32(c.r[7], 0u + 255u);
    c.budget -= 6;
L_003FF05C:
    st32((c.r[4].w[0] + 120u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[7].d[0]) { set32(c.r[6], c.r[8].w[0] - c.r[3].w[0]);  goto L_003FF074; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 124u), c.r[3].w[0]);  if (t) { goto L_003FF0A8; } }
L_003FF074:
    set32(c.r[5], c.r[6].w[0] << 8);
    set32(c.r[3], c.r[7].w[0] - c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    mmi::divu(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[3].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003FF098; } }
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_003FF098:
    c.budget -= 2;
    if (c.r[3].sd[0] >= 0) { st32((c.r[4].w[0] + 124u), c.r[3].w[0]);  goto L_003FF0A8; }
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 124u), c.r[3].w[0]);
    c.budget -= 2;
L_003FF0A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 116u), c.r[8].w[0]);  if (t) { goto L_003FF14C; } }
L_003FF0B0:
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[4].w[0] + 136u));  goto L_003FF0D0; }
    st32((c.r[4].w[0] + 120u), 0u);
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 124u), c.r[3].w[0]);  if (t) { goto L_003FF14C; } }
L_003FF0D0:
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FF144; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 120u), 0u);  if (t) { goto L_003FF120; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 124u), c.r[5].w[0]);  if (t) { goto L_003FF13C; } }
L_003FF120:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 124u), c.r[5].w[0]);
    c.budget -= 7;
L_003FF13C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FF14C; } }
L_003FF144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF14Cu);  if (depth < kMaxDepth) unit_00B7(c, 67u, depth + 1u); else { c.pc = 0x003FC9D0u; return; } if (c.pc != 0x003FF14Cu) [[unlikely]] return; }
L_003FF14C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003FF150:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FF160:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FF188; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003FF2FC; }
L_003FF188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF190u);  if (depth < kMaxDepth) unit_0013(c, 107u, depth + 1u); else { c.pc = 0x0016D590u; return; } if (c.pc != 0x003FF190u) [[unlikely]] return; }
L_003FF190:
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 124u)));  goto L_003FF260; }
    set32(c.r[3], ld32((c.r[16].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF1C0u); c.r[17].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0013(c, 117u, depth + 1u); else { c.pc = 0x0016D790u; return; } if (c.pc != 0x003FF1C0u) [[unlikely]] return; }
L_003FF1C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF1C8u); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0013(c, 120u, depth + 1u); else { c.pc = 0x0016D820u; return; } if (c.pc != 0x003FF1C8u) [[unlikely]] return; }
L_003FF1C8:
    c.f[6] = ld32((c.r[16].w[0] + 84u));
    set32(c.r[5], 0u + 4u);
    c.f[1] = ld32((c.r[16].w[0] + 80u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[5] = ld32((c.r[16].w[0] + 76u));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.f[4] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    st32((c.r[29].w[0] + 132u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 116u), c.f[4]);
    st32((c.r[29].w[0] + 120u), c.f[5]);
    st32((c.r[29].w[0] + 124u), c.f[1]);
    st32((c.r[29].w[0] + 128u), c.f[6]);
    c.f[3] = ld32((c.r[16].w[0] + 92u));
    c.f[2] = ld32((c.r[16].w[0] + 72u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    st32((c.r[29].w[0] + 156u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    st32((c.r[29].w[0] + 140u), c.f[2]);
    st32((c.r[29].w[0] + 144u), c.f[5]);
    st32((c.r[29].w[0] + 152u), c.f[3]);
    c.f[1] = ld32((c.r[16].w[0] + 88u));
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    st32((c.r[29].w[0] + 164u), c.f[4]);
    st32((c.r[29].w[0] + 180u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 176u), c.f[6]);
    st32((c.r[29].w[0] + 204u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 188u), c.f[2]);
    st32((c.r[29].w[0] + 200u), c.f[3]);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    st32((c.r[29].w[0] + 184u), c.f[0]);
    st32((c.r[29].w[0] + 168u), c.f[5]);
    st32((c.r[29].w[0] + 192u), c.f[5]);
    st32((c.r[29].w[0] + 172u), c.f[1]);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF25Cu); st32((c.r[29].w[0] + 196u), c.f[1]);  if (depth < kMaxDepth) unit_0013(c, 134u, depth + 1u); else { c.pc = 0x0016D9B0u; return; } if (c.pc != 0x003FF25Cu) [[unlikely]] return; }
L_003FF25C:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 1;
L_003FF260:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003FF2F0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF28Cu); c.r[17].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0013(c, 117u, depth + 1u); else { c.pc = 0x0016D790u; return; } if (c.pc != 0x003FF28Cu) [[unlikely]] return; }
L_003FF28C:
    c.f[3] = ld32((c.r[16].w[0] + 76u));
    set32(c.r[5], 0u + 4u);
    c.f[2] = ld32((c.r[16].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.f[0]);
    st32((c.r[29].w[0] + 60u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 52u), c.f[2]);
    st32((c.r[29].w[0] + 56u), c.f[3]);
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    st32((c.r[29].w[0] + 76u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 72u), c.f[3]);
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    st32((c.r[29].w[0] + 84u), c.f[2]);
    st32((c.r[29].w[0] + 92u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 88u), c.f[3]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF2F0u); st32((c.r[29].w[0] + 104u), c.f[3]);  if (depth < kMaxDepth) unit_0013(c, 136u, depth + 1u); else { c.pc = 0x0016D9E0u; return; } if (c.pc != 0x003FF2F0u) [[unlikely]] return; }
L_003FF2F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF2F8u);  if (depth < kMaxDepth) unit_0013(c, 111u, depth + 1u); else { c.pc = 0x0016D670u; return; } if (c.pc != 0x003FF2F8u) [[unlikely]] return; }
L_003FF2F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003FF2FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003FF310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 8192u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF328u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x003FF328u) [[unlikely]] return; }
L_003FF328:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + 13568u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF344u); set32(c.r[5], c.r[5].w[0] + 26176u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x003FF344u) [[unlikely]] return; }
L_003FF344:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FF360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF370u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x003FF370u) [[unlikely]] return; }
L_003FF370:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FF380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF390u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x003FF390u) [[unlikely]] return; }
L_003FF390:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FF3A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FF3E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13568u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF3D0u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x003FF3D0u) [[unlikely]] return; }
L_003FF3D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FF3EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF3E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x003FF3E8u) [[unlikely]] return; }
L_003FF3E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FF3EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FF400:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF418u); set32(c.r[4], 0u + 1448u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x003FF418u) [[unlikely]] return; }
L_003FF418:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003FF430; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF42Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 280u, depth + 1u); else { c.pc = 0x003FF5D0u; return; } if (c.pc != 0x003FF42Cu) [[unlikely]] return; }
L_003FF42C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003FF430:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FF440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF458u); set32(c.r[4], 0u + 720u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x003FF458u) [[unlikely]] return; }
L_003FF458:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003FF470; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF46Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 332u, depth + 1u); else { c.pc = 0x00407510u; return; } if (c.pc != 0x003FF46Cu) [[unlikely]] return; }
L_003FF46C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003FF470:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FF480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF498u); set32(c.r[4], 0u + 1348u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x003FF498u) [[unlikely]] return; }
L_003FF498:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003FF4B0; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF4ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 266u, depth + 1u); else { c.pc = 0x004069C0u; return; } if (c.pc != 0x003FF4ACu) [[unlikely]] return; }
L_003FF4AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003FF4B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FF4C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF4D8u); set32(c.r[4], 0u + 1872u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x003FF4D8u) [[unlikely]] return; }
L_003FF4D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003FF4F0; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF4ECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 329u, depth + 1u); else { c.pc = 0x003FFC50u; return; } if (c.pc != 0x003FF4ECu) [[unlikely]] return; }
L_003FF4EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003FF4F0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FF500:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF518u); set32(c.r[4], 0u + 816u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x003FF518u) [[unlikely]] return; }
L_003FF518:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003FF530; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF52Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 99u, depth + 1u); else { c.pc = 0x00400D10u; return; } if (c.pc != 0x003FF52Cu) [[unlikely]] return; }
L_003FF52C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003FF530:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FF540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF558u); set32(c.r[4], 0u + 156u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x003FF558u) [[unlikely]] return; }
L_003FF558:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003FF570; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF56Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 488u, depth + 1u); else { c.pc = 0x00403A90u; return; } if (c.pc != 0x003FF56Cu) [[unlikely]] return; }
L_003FF56C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003FF570:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FF580:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] + 26256u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003FF5B4; } }
L_003FF598:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[6], c.r[6].w[0] + 8u);  goto L_003FF5B4; }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF5ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FF5ACu) [[unlikely]] return; }
L_003FF5AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003FF5C8; } }
L_003FF5B4:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FF598u | kUnwind; return; } goto L_003FF598; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003FF5C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FF5D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF5E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 249u, depth + 1u); else { c.pc = 0x003FF310u; return; } if (c.pc != 0x003FF5E4u) [[unlikely]] return; }
L_003FF5E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 13648u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1432u), 0u);
    st32((c.r[16].w[0] + 1436u), 0u);
    st32((c.r[16].w[0] + 148u), 0u);
    st32((c.r[16].w[0] + 1440u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FF620:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FF6C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 13648u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 1432u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 1436u)));  goto L_003FF66C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF664u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FF664u) [[unlikely]] return; }
L_003FF664:
    st32((c.r[17].w[0] + 1432u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1436u)));
    c.budget -= 2;
L_003FF66C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FF688; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF684u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FF684u) [[unlikely]] return; }
L_003FF684:
    st32((c.r[17].w[0] + 1436u), 0u);
    c.budget -= 1;
L_003FF688:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003FF6AC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13568u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF6A8u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x003FF6A8u) [[unlikely]] return; }
L_003FF6A8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003FF6AC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FF6C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF6C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x003FF6C0u) [[unlikely]] return; }
L_003FF6C0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FF6C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FF6E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FF6F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FF700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF714u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x003FF714u) [[unlikely]] return; }
L_003FF714:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF720u); set32(c.r[4], 0u + 132u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x003FF720u) [[unlikely]] return; }
L_003FF720:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);  goto L_003FF750; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF734u);  if (depth < kMaxDepth) unit_0024(c, 206u, depth + 1u); else { c.pc = 0x001B1730u; return; } if (c.pc != 0x003FF734u) [[unlikely]] return; }
L_003FF734:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF748u); c.r[7].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00B7(c, 182u, depth + 1u); else { c.pc = 0x003FE040u; return; } if (c.pc != 0x003FF748u) [[unlikely]] return; }
L_003FF748:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.budget -= 2;
L_003FF750:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF75Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 187u, depth + 1u); else { c.pc = 0x003FE0E0u; return; } if (c.pc != 0x003FF75Cu) [[unlikely]] return; }
L_003FF75C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF768u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B7(c, 60u, depth + 1u); else { c.pc = 0x003FC8E0u; return; } if (c.pc != 0x003FF768u) [[unlikely]] return; }
L_003FF768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF770u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 61u, depth + 1u); else { c.pc = 0x003FC8F0u; return; } if (c.pc != 0x003FF770u) [[unlikely]] return; }
L_003FF770:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF77Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 89u, depth + 1u); else { c.pc = 0x003FCD40u; return; } if (c.pc != 0x003FF77Cu) [[unlikely]] return; }
L_003FF77C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FF790:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FF93C; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 56u)));  goto L_003FF7E4; }
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[5].d[0]) { st32((c.r[19].w[0] + 88u), c.r[5].w[0]);  goto L_003FF7D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_003FF95C; } }
L_003FF7D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF7DCu);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x003FF7DCu) [[unlikely]] return; }
L_003FF7DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FF958; } }
L_003FF7E4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[19].w[0] + 1440u), c.r[2].w[0]);  if (t) { goto L_003FF7F8; } }
    c.r[2].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 1440u)));  goto L_003FF80C; }
L_003FF7F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF808u); set32(c.r[5], c.r[5].w[0] + 29378u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x003FF808u) [[unlikely]] return; }
L_003FF808:
    set32(c.r[4], ld32((c.r[19].w[0] + 1440u)));
    c.budget -= 1;
L_003FF80C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + 29136u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 148u), c.r[2].w[0]);  if (t) { goto L_003FF894; } }
L_003FF834:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[16], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF84Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0029(c, 461u, depth + 1u); else { c.pc = 0x001C7650u; return; } if (c.pc != 0x003FF84Cu) [[unlikely]] return; }
L_003FF84C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] << 4);  goto L_003FF878; }
    set32(c.r[3], c.r[18].w[0] << 4);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 160u), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 152u), c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 156u), c.r[2].w[0]);  if (t) { goto L_003FF890; } }
L_003FF878:
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 160u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 152u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 6;
L_003FF890:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003FF894:
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FF834u | kUnwind; return; } goto L_003FF834; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF8ACu); set32(c.r[4], 0u + 548u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x003FF8ACu) [[unlikely]] return; }
L_003FF8AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 1436u), c.r[2].w[0]);  goto L_003FF8EC; }
    set32(c.r[9], ld32((c.r[19].w[0] + 148u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], c.r[19].w[0] + 152u);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[9].d[0]);
    st64((c.r[29].w[0] + 8u), 0ull);
    st64((c.r[29].w[0] + 16u), 0ull);
    st64((c.r[29].w[0] + 24u), 0ull);
    set32(c.r[6], ld32((c.r[28].w[0] - 31592u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF8E8u); set32(c.r[11], 0u - 1u);  if (depth < kMaxDepth) unit_00B9(c, 89u, depth + 1u); else { c.pc = 0x00404DA0u; return; } if (c.pc != 0x003FF8E8u) [[unlikely]] return; }
L_003FF8E8:
    st32((c.r[19].w[0] + 1436u), c.r[2].w[0]);
    c.budget -= 1;
L_003FF8EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF8F4u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x003FF8F4u) [[unlikely]] return; }
L_003FF8F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 1432u), c.r[2].w[0]);  goto L_003FF918; }
    set32(c.r[8], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[19].w[0] + 148u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF914u); set32(c.r[6], c.r[19].w[0] + 152u);  if (depth < kMaxDepth) unit_00BA(c, 75u, depth + 1u); else { c.pc = 0x00408960u; return; } if (c.pc != 0x003FF914u) [[unlikely]] return; }
L_003FF914:
    st32((c.r[19].w[0] + 1432u), c.r[2].w[0]);
    c.budget -= 1;
L_003FF918:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 1436u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF92Cu); c.r[6].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 435u, depth + 1u); else { c.pc = 0x001CFFF0u; return; } if (c.pc != 0x003FF92Cu) [[unlikely]] return; }
L_003FF92C:
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_003FF958; } }
L_003FF93C:
    set32(c.r[4], ld32((c.r[19].w[0] + 1432u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF94Cu); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x003FF94Cu) [[unlikely]] return; }
L_003FF94C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF958u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x003FF958u) [[unlikely]] return; }
L_003FF958:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003FF95C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003FF980:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 30u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FFA64; } }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 1432u)));  goto L_003FFA50; }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 20u);  goto L_003FFA24; }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 1436u)));  goto L_003FFA0C; }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 10u);  goto L_003FF9E0; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[16].w[0] + 1444u), 0u);  goto L_003FF9DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003FFA7C; } }
L_003FF9DC:
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_003FF9E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 1444u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 1436u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF9FCu); c.r[6].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002C(c, 5u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x003FF9FCu) [[unlikely]] return; }
L_003FF9FC:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_003FFA78; } }
L_003FFA0C:
    set32(c.r[2], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[16].w[0] + 1444u), c.r[2].w[0]);  if (t) { goto L_003FFA64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFA20u);  if (depth < kMaxDepth) unit_00B7(c, 289u, depth + 1u); else { c.pc = 0x003FF700u; return; } if (c.pc != 0x003FFA20u) [[unlikely]] return; }
L_003FFA20:
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_003FFA24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 1444u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 1432u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFA40u); c.r[6].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002C(c, 5u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x003FFA40u) [[unlikely]] return; }
L_003FFA40:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_003FFA78; } }
L_003FFA50:
    set32(c.r[2], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFA5Cu); st32((c.r[16].w[0] + 1444u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B7(c, 289u, depth + 1u); else { c.pc = 0x003FF700u; return; } if (c.pc != 0x003FFA5Cu) [[unlikely]] return; }
L_003FFA5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FF9DCu | kUnwind; return; } goto L_003FF9DC; } }
L_003FFA64:
    set32(c.r[2], 0u + 30u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFA78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x003FFA78u) [[unlikely]] return; }
L_003FFA78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003FFA7C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FFA90:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[2], c.r[4].w[0] << 1);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[2], c.r[2].w[0] + 29136u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[6], 0u + 9u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 16208u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[7].w[0] + 8u);
    mmi::div(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[22].d[0] = c.lo.d[0];
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFB04u); set32(c.r[4], c.r[4].w[0] + 29459u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x003FFB04u) [[unlikely]] return; }
L_003FFB04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003FFC08; } }
L_003FFB0C:
    set32(c.r[5], c.r[20].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFB18u); set32(c.r[4], c.r[4].w[0] + 29484u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x003FFB18u) [[unlikely]] return; }
L_003FFB18:
    set32(c.r[2], c.r[20].w[0] << 6);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[20].w[0]);
    set32(c.r[23], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[19].w[0] << 3);
    c.budget -= 5;
L_003FFB2C:
    st32((c.r[29].w[0] + 156u), 0u);
    set32(c.r[3], c.r[2].w[0] - c.r[19].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[16], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 8;
L_003FFB4C:
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[21], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFB68u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0029(c, 461u, depth + 1u); else { c.pc = 0x001C7650u; return; } if (c.pc != 0x003FFB68u) [[unlikely]] return; }
L_003FFB68:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_003FFB98; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 156u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFB90u); set32(c.r[5], c.r[5].w[0] + 29501u);  if (depth < kMaxDepth) unit_0022(c, 23u, depth + 1u); else { c.pc = 0x001A8350u; return; } if (c.pc != 0x003FFB90u) [[unlikely]] return; }
L_003FFB90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_003FFBA8; } }
L_003FFB98:
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFBA4u); set32(c.r[5], c.r[5].w[0] + 29508u);  if (depth < kMaxDepth) unit_0022(c, 23u, depth + 1u); else { c.pc = 0x001A8350u; return; } if (c.pc != 0x003FFBA4u) [[unlikely]] return; }
L_003FFBA4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003FFBA8:
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FFB4Cu | kUnwind; return; } goto L_003FFB4C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_003FFBC4; }
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_003FFBC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFBD0u); set32(c.r[4], c.r[4].w[0] + 29516u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x003FFBD0u) [[unlikely]] return; }
L_003FFBD0:
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_003FFBF8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003FFBF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFBF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x003FFBF4u) [[unlikely]] return; }
L_003FFBF4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_003FFBF8:
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FFB2Cu | kUnwind; return; } goto L_003FFB2C; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_003FFC08:
    c.r[2].d[0] = c.r[20].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FFB0Cu | kUnwind; return; } goto L_003FFB0C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFC20u); set32(c.r[4], c.r[4].w[0] + 29519u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x003FFC20u) [[unlikely]] return; }
L_003FFC20:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003FFC50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFC64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 249u, depth + 1u); else { c.pc = 0x003FF310u; return; } if (c.pc != 0x003FFC64u) [[unlikely]] return; }
L_003FFC64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[2], c.r[2].w[0] + 13728u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[16].w[0] + 168u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1408u);
    set32(c.r[6], c.r[6].w[0] - 7920u);
    set32(c.r[7], 0u + 160u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFC90u); set32(c.r[8], 0u + 8u);  if (depth < kMaxDepth) unit_0008(c, 147u, depth + 1u); else { c.pc = 0x00141CB0u; return; } if (c.pc != 0x003FFC90u) [[unlikely]] return; }
L_003FFC90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFC98u); set32(c.r[4], c.r[16].w[0] + 1456u);  if (depth < kMaxDepth) unit_003C(c, 44u, depth + 1u); else { c.pc = 0x00210980u; return; } if (c.pc != 0x003FFC98u) [[unlikely]] return; }
L_003FFC98:
    st32((c.r[16].w[0] + 152u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 148u), 0u);
    st32((c.r[16].w[0] + 156u), 0u);
    st32((c.r[16].w[0] + 164u), 0u);
    st32((c.r[16].w[0] + 160u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FFCC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FFDE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 13728u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  goto L_003FFD14; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 152u), 0u);  goto L_003FFD10; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD0Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FFD0Cu) [[unlikely]] return; }
L_003FFD0C:
    st32((c.r[17].w[0] + 152u), 0u);
    c.budget -= 1;
L_003FFD10:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 1;
L_003FFD14:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 160u)));  goto L_003FFD34; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD2Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FFD2Cu) [[unlikely]] return; }
L_003FFD2C:
    st32((c.r[17].w[0] + 148u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 2;
L_003FFD34:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 156u)));  goto L_003FFD54; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD4Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FFD4Cu) [[unlikely]] return; }
L_003FFD4C:
    st32((c.r[17].w[0] + 160u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 2;
L_003FFD54:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 164u)));  goto L_003FFD74; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD6Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FFD6Cu) [[unlikely]] return; }
L_003FFD6C:
    st32((c.r[17].w[0] + 156u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 2;
L_003FFD74:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 1456u);  goto L_003FFD8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x003FFD84u) [[unlikely]] return; }
L_003FFD84:
    st32((c.r[17].w[0] + 164u), 0u);
    set32(c.r[4], c.r[17].w[0] + 1456u);
    c.budget -= 2;
L_003FFD8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD94u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003C(c, 46u, depth + 1u); else { c.pc = 0x002109D0u; return; } if (c.pc != 0x003FFD94u) [[unlikely]] return; }
L_003FFD94:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[17].w[0] + 168u);
    set32(c.r[5], c.r[5].w[0] - 7920u);
    set32(c.r[6], 0u + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFDACu); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0008(c, 144u, depth + 1u); else { c.pc = 0x00141C40u; return; } if (c.pc != 0x003FFDACu) [[unlikely]] return; }
L_003FFDAC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003FFDD0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13568u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFDCCu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x003FFDCCu) [[unlikely]] return; }
L_003FFDCC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003FFDD0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FFDE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFDE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x003FFDE4u) [[unlikely]] return; }
L_003FFDE4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FFDE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FFE00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FFE10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003FFE34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFE30u); set32(c.r[4], c.r[4].w[0] + 1456u);  if (depth < kMaxDepth) unit_003A(c, 414u, depth + 1u); else { c.pc = 0x0020BFF0u; return; } if (c.pc != 0x003FFE30u) [[unlikely]] return; }
L_003FFE30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003FFE34:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FFE40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1808u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[17], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[17].sd[0] < 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FFED0; } }
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(36ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] << 2);  goto L_003FFED4; }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[6], c.r[5].w[0] + 38u);  goto L_003FFE88; }
    set32(c.r[6], c.r[5].w[0] + 44u);
    c.budget -= 1;
L_003FFE88:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[5], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[2].w[0] + 168u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFEA8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 67u, depth + 1u); else { c.pc = 0x00210DD0u; return; } if (c.pc != 0x003FFEA8u) [[unlikely]] return; }
L_003FFEA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 29552u);
    set32(c.r[5], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFEC8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 100u, depth + 1u); else { c.pc = 0x00211210u; return; } if (c.pc != 0x003FFEC8u) [[unlikely]] return; }
L_003FFEC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003FFEEC; } }
L_003FFED0:
    set32(c.r[2], c.r[5].w[0] << 2);
    c.budget -= 1;
L_003FFED4:
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFEE8u); set32(c.r[4], c.r[2].w[0] + 168u);  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x003FFEE8u) [[unlikely]] return; }
L_003FFEE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003FFEEC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FFF00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 9;
L_003FFF24:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003FFF3C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 1812u)));
    c.r[6].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
L_003FFF3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFF44u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 346u, depth + 1u); else { c.pc = 0x003FFE40u; return; } if (c.pc != 0x003FFF44u) [[unlikely]] return; }
L_003FFF44:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[6].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FFF24u | kUnwind; return; } goto L_003FFF24; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FFF70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 29840u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 1808u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 1832u)));
    set32(c.r[6], c.r[2].w[0] + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFFA0u); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x003FFFA0u) [[unlikely]] return; }
L_003FFFA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFFA8u); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0022(c, 37u, depth + 1u); else { c.pc = 0x001A8550u; return; } if (c.pc != 0x003FFFA8u) [[unlikely]] return; }
L_003FFFA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFFB0u); set32(c.r[4], c.r[16].w[0] + 1288u);  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x003FFFB0u) [[unlikely]] return; }
L_003FFFB0:
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_003FFFC0; }
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_003FFFC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFFC8u); set32(c.r[4], c.r[16].w[0] + 1288u);  if (depth < kMaxDepth) unit_003B(c, 314u, depth + 1u); else { c.pc = 0x0020FC40u; return; } if (c.pc != 0x003FFFC8u) [[unlikely]] return; }
L_003FFFC8:
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003FFFF0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_003FFFEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFFECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x003FFFECu) [[unlikely]] return; }
L_003FFFEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003FFFF0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
}

}
