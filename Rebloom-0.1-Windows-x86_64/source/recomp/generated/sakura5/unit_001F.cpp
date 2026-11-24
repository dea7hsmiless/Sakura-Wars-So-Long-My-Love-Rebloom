#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_001F[4096] = {
    1, 2, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0,
    8, 0, 0, 0, 0, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0,
    0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0,
    0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0,
    0, 0, 0, 37, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0,
    43, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0,
    0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0,
    0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0,
    128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0,
    0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0,
    164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0,
    0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0,
    0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0,
    0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 208, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0,
    0, 217, 0, 0, 218, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0,
    0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 291, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0,
    0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_001F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0019C000;
    case 2u: goto L_0019C004;
    case 3u: goto L_0019C00C;
    case 4u: goto L_0019C014;
    case 5u: goto L_0019C02C;
    case 6u: goto L_0019C048;
    case 7u: goto L_0019C078;
    case 8u: goto L_0019C080;
    case 9u: goto L_0019C094;
    case 10u: goto L_0019C098;
    case 11u: goto L_0019C0C0;
    case 12u: goto L_0019C2D4;
    case 13u: goto L_0019C400;
    case 14u: goto L_0019C418;
    case 15u: goto L_0019C434;
    case 16u: goto L_0019C52C;
    case 17u: goto L_0019C5D0;
    case 18u: goto L_0019C5F0;
    case 19u: goto L_0019C610;
    case 20u: goto L_0019C6C0;
    case 21u: goto L_0019C71C;
    case 22u: goto L_0019C750;
    case 23u: goto L_0019C768;
    case 24u: goto L_0019C78C;
    case 25u: goto L_0019C7A4;
    case 26u: goto L_0019C7F4;
    case 27u: goto L_0019C80C;
    case 28u: goto L_0019C824;
    case 29u: goto L_0019C840;
    case 30u: goto L_0019C85C;
    case 31u: goto L_0019C898;
    case 32u: goto L_0019C8A0;
    case 33u: goto L_0019C8B0;
    case 34u: goto L_0019C8C8;
    case 35u: goto L_0019C8DC;
    case 36u: goto L_0019C8F4;
    case 37u: goto L_0019C90C;
    case 38u: goto L_0019C914;
    case 39u: goto L_0019C924;
    case 40u: goto L_0019C93C;
    case 41u: goto L_0019C950;
    case 42u: goto L_0019C968;
    case 43u: goto L_0019C980;
    case 44u: goto L_0019C988;
    case 45u: goto L_0019C998;
    case 46u: goto L_0019C9B0;
    case 47u: goto L_0019C9B8;
    case 48u: goto L_0019C9D0;
    case 49u: goto L_0019C9D8;
    case 50u: goto L_0019CA30;
    case 51u: goto L_0019CA40;
    case 52u: goto L_0019CB00;
    case 53u: goto L_0019CB40;
    case 54u: goto L_0019CB60;
    case 55u: goto L_0019CB78;
    case 56u: goto L_0019CB9C;
    case 57u: goto L_0019CBC0;
    case 58u: goto L_0019CBE4;
    case 59u: goto L_0019CC38;
    case 60u: goto L_0019CC60;
    case 61u: goto L_0019CC80;
    case 62u: goto L_0019CC8C;
    case 63u: goto L_0019CC9C;
    case 64u: goto L_0019CCAC;
    case 65u: goto L_0019CCB8;
    case 66u: goto L_0019CCE0;
    case 67u: goto L_0019CD08;
    case 68u: goto L_0019CD30;
    case 69u: goto L_0019CD74;
    case 70u: goto L_0019CD90;
    case 71u: goto L_0019CDAC;
    case 72u: goto L_0019CDBC;
    case 73u: goto L_0019CE30;
    case 74u: goto L_0019CE54;
    case 75u: goto L_0019CEE0;
    case 76u: goto L_0019CF04;
    case 77u: goto L_0019CFB0;
    case 78u: goto L_0019D040;
    case 79u: goto L_0019D0D0;
    case 80u: goto L_0019D110;
    case 81u: goto L_0019D130;
    case 82u: goto L_0019D150;
    case 83u: goto L_0019D1B0;
    case 84u: goto L_0019D1D0;
    case 85u: goto L_0019D220;
    case 86u: goto L_0019D288;
    case 87u: goto L_0019D2A4;
    case 88u: goto L_0019D2DC;
    case 89u: goto L_0019D310;
    case 90u: goto L_0019D32C;
    case 91u: goto L_0019D33C;
    case 92u: goto L_0019D360;
    case 93u: goto L_0019D384;
    case 94u: goto L_0019D38C;
    case 95u: goto L_0019D3AC;
    case 96u: goto L_0019D3D0;
    case 97u: goto L_0019D3E8;
    case 98u: goto L_0019D410;
    case 99u: goto L_0019D420;
    case 100u: goto L_0019D430;
    case 101u: goto L_0019D440;
    case 102u: goto L_0019D450;
    case 103u: goto L_0019D490;
    case 104u: goto L_0019D4A0;
    case 105u: goto L_0019D4B0;
    case 106u: goto L_0019D4C0;
    case 107u: goto L_0019D4D0;
    case 108u: goto L_0019D510;
    case 109u: goto L_0019D530;
    case 110u: goto L_0019D540;
    case 111u: goto L_0019D550;
    case 112u: goto L_0019D578;
    case 113u: goto L_0019D598;
    case 114u: goto L_0019D5C4;
    case 115u: goto L_0019D5E0;
    case 116u: goto L_0019D600;
    case 117u: goto L_0019D610;
    case 118u: goto L_0019D650;
    case 119u: goto L_0019D680;
    case 120u: goto L_0019D690;
    case 121u: goto L_0019D6A8;
    case 122u: goto L_0019D720;
    case 123u: goto L_0019D730;
    case 124u: goto L_0019D740;
    case 125u: goto L_0019D750;
    case 126u: goto L_0019D760;
    case 127u: goto L_0019D770;
    case 128u: goto L_0019D780;
    case 129u: goto L_0019D790;
    case 130u: goto L_0019D7A0;
    case 131u: goto L_0019D7E8;
    case 132u: goto L_0019D808;
    case 133u: goto L_0019D830;
    case 134u: goto L_0019D854;
    case 135u: goto L_0019D870;
    case 136u: goto L_0019D880;
    case 137u: goto L_0019D8C0;
    case 138u: goto L_0019D8F0;
    case 139u: goto L_0019D900;
    case 140u: goto L_0019D920;
    case 141u: goto L_0019D940;
    case 142u: goto L_0019D960;
    case 143u: goto L_0019D988;
    case 144u: goto L_0019D9B0;
    case 145u: goto L_0019D9C4;
    case 146u: goto L_0019DA30;
    case 147u: goto L_0019DA44;
    case 148u: goto L_0019DAC0;
    case 149u: goto L_0019DAD0;
    case 150u: goto L_0019DAE0;
    case 151u: goto L_0019DB14;
    case 152u: goto L_0019DB80;
    case 153u: goto L_0019DBC0;
    case 154u: goto L_0019DC70;
    case 155u: goto L_0019DCC8;
    case 156u: goto L_0019DCF0;
    case 157u: goto L_0019DD1C;
    case 158u: goto L_0019DD30;
    case 159u: goto L_0019DD84;
    case 160u: goto L_0019DDA0;
    case 161u: goto L_0019DDD0;
    case 162u: goto L_0019DDE0;
    case 163u: goto L_0019DDE8;
    case 164u: goto L_0019DE00;
    case 165u: goto L_0019DE88;
    case 166u: goto L_0019DE94;
    case 167u: goto L_0019DEA0;
    case 168u: goto L_0019DEAC;
    case 169u: goto L_0019DED0;
    case 170u: goto L_0019DEE0;
    case 171u: goto L_0019DEF8;
    case 172u: goto L_0019DF80;
    case 173u: goto L_0019DF8C;
    case 174u: goto L_0019DF98;
    case 175u: goto L_0019DFA4;
    case 176u: goto L_0019DFC8;
    case 177u: goto L_0019DFD8;
    case 178u: goto L_0019DFF0;
    case 179u: goto L_0019E078;
    case 180u: goto L_0019E084;
    case 181u: goto L_0019E0A8;
    case 182u: goto L_0019E0B8;
    case 183u: goto L_0019E0D0;
    case 184u: goto L_0019E160;
    case 185u: goto L_0019E16C;
    case 186u: goto L_0019E230;
    case 187u: goto L_0019E264;
    case 188u: goto L_0019E2B0;
    case 189u: goto L_0019E2D0;
    case 190u: goto L_0019E2E4;
    case 191u: goto L_0019E2F8;
    case 192u: goto L_0019E310;
    case 193u: goto L_0019E340;
    case 194u: goto L_0019E35C;
    case 195u: goto L_0019E368;
    case 196u: goto L_0019E380;
    case 197u: goto L_0019E3E0;
    case 198u: goto L_0019E3F0;
    case 199u: goto L_0019E430;
    case 200u: goto L_0019E470;
    case 201u: goto L_0019E4C0;
    case 202u: goto L_0019E4CC;
    case 203u: goto L_0019E4D4;
    case 204u: goto L_0019E4F4;
    case 205u: goto L_0019E510;
    case 206u: goto L_0019E52C;
    case 207u: goto L_0019E54C;
    case 208u: goto L_0019E584;
    case 209u: goto L_0019E598;
    case 210u: goto L_0019E5A4;
    case 211u: goto L_0019E5B4;
    case 212u: goto L_0019E5D0;
    case 213u: goto L_0019E620;
    case 214u: goto L_0019E698;
    case 215u: goto L_0019E6B0;
    case 216u: goto L_0019E778;
    case 217u: goto L_0019E784;
    case 218u: goto L_0019E790;
    case 219u: goto L_0019E79C;
    case 220u: goto L_0019E7A4;
    case 221u: goto L_0019E818;
    case 222u: goto L_0019E854;
    case 223u: goto L_0019E898;
    case 224u: goto L_0019E8D8;
    case 225u: goto L_0019E90C;
    case 226u: goto L_0019EDA8;
    case 227u: goto L_0019EDF0;
    case 228u: goto L_0019EEBC;
    case 229u: goto L_0019EEC8;
    case 230u: goto L_0019EED4;
    case 231u: goto L_0019EEE0;
    case 232u: goto L_0019EEE8;
    case 233u: goto L_0019EF5C;
    case 234u: goto L_0019EF9C;
    case 235u: goto L_0019EFE0;
    case 236u: goto L_0019F020;
    case 237u: goto L_0019F054;
    case 238u: goto L_0019F4F4;
    case 239u: goto L_0019F540;
    case 240u: goto L_0019F5C0;
    case 241u: goto L_0019F5DC;
    case 242u: goto L_0019F5F8;
    case 243u: goto L_0019F610;
    case 244u: goto L_0019F62C;
    case 245u: goto L_0019F64C;
    case 246u: goto L_0019F654;
    case 247u: goto L_0019F65C;
    case 248u: goto L_0019F664;
    case 249u: goto L_0019F6A0;
    case 250u: goto L_0019F724;
    case 251u: goto L_0019F740;
    case 252u: goto L_0019F75C;
    case 253u: goto L_0019F774;
    case 254u: goto L_0019F790;
    case 255u: goto L_0019F7B4;
    case 256u: goto L_0019F7BC;
    case 257u: goto L_0019F7C4;
    case 258u: goto L_0019F7CC;
    case 259u: goto L_0019F810;
    case 260u: goto L_0019F864;
    case 261u: goto L_0019F880;
    case 262u: goto L_0019F8B0;
    case 263u: goto L_0019F8E0;
    case 264u: goto L_0019F910;
    case 265u: goto L_0019F950;
    case 266u: goto L_0019F970;
    case 267u: goto L_0019F9C0;
    case 268u: goto L_0019F9E0;
    case 269u: goto L_0019FA30;
    case 270u: goto L_0019FA50;
    case 271u: goto L_0019FA60;
    case 272u: goto L_0019FA78;
    case 273u: goto L_0019FA94;
    case 274u: goto L_0019FAA0;
    case 275u: goto L_0019FAB4;
    case 276u: goto L_0019FAC8;
    case 277u: goto L_0019FAE0;
    case 278u: goto L_0019FAF0;
    case 279u: goto L_0019FB64;
    case 280u: goto L_0019FBD8;
    case 281u: goto L_0019FC60;
    case 282u: goto L_0019FCB4;
    case 283u: goto L_0019FD28;
    case 284u: goto L_0019FD44;
    case 285u: goto L_0019FD6C;
    case 286u: goto L_0019FE00;
    case 287u: goto L_0019FEA4;
    case 288u: goto L_0019FEC4;
    case 289u: goto L_0019FEE0;
    case 290u: goto L_0019FEEC;
    case 291u: goto L_0019FEF4;
    case 292u: goto L_0019FF6C;
    case 293u: goto L_0019FF74;
    case 294u: goto L_0019FF8C;
    case 295u: goto L_0019FFAC;
    default: bad_entry(c, 0x0019C000u); return;
    }
L_0019C000:
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_0019C004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C00Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 13u, depth + 1u); else { c.pc = 0x0019C400u; return; } if (c.pc != 0x0019C00Cu) [[unlikely]] return; }
L_0019C00C:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; st32((c.r[21].w[0] + 12u), 0u);  if (t) { goto L_0019C060; } }
L_0019C014:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C02Cu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 11u, depth + 1u); else { c.pc = 0x0019C0C0u; return; } if (c.pc != 0x0019C02Cu) [[unlikely]] return; }
L_0019C02C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20800u)));
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019C050; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C048u);  if (depth < kMaxDepth) unit_001F(c, 20u, depth + 1u); else { c.pc = 0x0019C6C0u; return; } if (c.pc != 0x0019C048u) [[unlikely]] return; }
L_0019C048:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_0019C050:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019C014u | kUnwind; return; } goto L_0019C014; } }
    c.budget -= 1;
L_0019C060:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 20800u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0019C084; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C078u);  if (depth < kMaxDepth) unit_001F(c, 51u, depth + 1u); else { c.pc = 0x0019CA40u; return; } if (c.pc != 0x0019C078u) [[unlikely]] return; }
L_0019C078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C080u);  if (depth < kMaxDepth) unit_001F(c, 20u, depth + 1u); else { c.pc = 0x0019C6C0u; return; } if (c.pc != 0x0019C080u) [[unlikely]] return; }
L_0019C080:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_0019C084:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0019C094; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C094u);  if (depth < kMaxDepth) unit_001F(c, 29u, depth + 1u); else { c.pc = 0x0019C840u; return; } if (c.pc != 0x0019C094u) [[unlikely]] return; }
L_0019C094:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0019C098:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0019C0C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = c.f[12];
    set32(c.r[3], c.f[20]);
    c.f[2] = ld32((c.r[4].w[0] + 80u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 19;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0019C3E4; }
    c.f[3] = ld32((c.r[19].w[0] + 76u));
    c.f[20] = fp::ee::sub(c.fcr31, c.f[20], c.f[3]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0019C3E0; } }
    c.f[1] = fp::ee::div(c.fcr31, c.f[20], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_0019C154; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[17], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 32u)));  if (t) { goto L_0019C16C; } }
L_0019C154:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.r[17].d[0] = c.r[17].d[0] | c.r[3].d[0];
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 6;
L_0019C16C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[18].w[0] + 20u));  goto L_0019C1DC; }
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0019C23C; } }
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0019C23C; } }
    c.budget -= 2;
    if (c.r[17].sd[0] < 0) { set32(c.r[4], c.r[17].w[0] >> 1);  goto L_0019C1AC; }
    c.f[0] = c.r[17].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0019C1C4; } }
L_0019C1AC:
    c.r[3].d[0] = c.r[17].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
L_0019C1C4:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0019C23C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019C3E0; } }
L_0019C1DC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0019C23C; } }
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0019C23C; } }
    c.budget -= 2;
    if (c.r[17].sd[0] < 0) { set32(c.r[4], c.r[17].w[0] >> 1);  goto L_0019C214; }
    c.f[0] = c.r[17].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0019C22C; } }
L_0019C214:
    c.r[3].d[0] = c.r[17].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
L_0019C22C:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019C3E0; } }
L_0019C23C:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[20], c.f[1]);
    c.f[20] = fp::ee::div(c.fcr31, c.f[20], c.f[2]);
    c.f[20] = fp::cvt_w_s(c.f[20]);
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[2]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019C270; } }
    c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[2]);
    c.budget -= 1;
L_0019C270:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[9], ld32((c.r[3].w[0] + 20804u)));
    set32(c.r[8], c.r[8].w[0] + 24u);
    set32(c.r[4], ld32((c.r[19].w[0] + 64u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], ld32((c.r[3].w[0] + 20800u)));
    set32(c.r[3], c.r[9].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[8].w[0])));
    set32(c.r[8], c.r[3].w[0] << 4);
    c.r[3].d[0] = c.r[4].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != c.r[17].d[0]; set32(c.r[16], c.r[5].w[0] + c.r[8].w[0]);  if (t) { goto L_0019C2C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.f[1] = ld32((c.r[19].w[0]));  goto L_0019C2E4; }
L_0019C2C4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C2D4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 52u, depth + 1u); else { c.pc = 0x0019CB00u; return; } if (c.pc != 0x0019C2D4u) [[unlikely]] return; }
L_0019C2D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[17].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 64u), c.r[3].w[0]);  if (t) { goto L_0019C310; } }
L_0019C2E4:
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.budget -= 11;
L_0019C310:
    ld128((c.r[19].w[0]) & ~15u, c.r[5]);
    st128((c.r[16].w[0]) & ~15u, c.r[5]);
    ld128((c.r[19].w[0] + 16u) & ~15u, c.r[5]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.r[5]);
    ld128((c.r[19].w[0] + 32u) & ~15u, c.r[5]);
    st128((c.r[16].w[0] + 32u) & ~15u, c.r[5]);
    ld128((c.r[19].w[0] + 48u) & ~15u, c.r[5]);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[5]);
    c.f[0] = ld32((c.r[19].w[0] + 92u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 152u)));
    c.budget -= 14;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0019C364; }
    c.f[1] = ld32((c.r[19].w[0] + 80u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[20]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), c.f[0]);  if (t) { goto L_0019C368; } }
L_0019C364:
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 1;
L_0019C368:
    c.f[0] = ld32((c.r[19].w[0] + 80u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 84u));
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 64u), c.f[20]);
    c.f[0] = ld32((c.r[19].w[0] + 88u));
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 256u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 11;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[19].w[0] + 80u));  goto L_0019C39C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0019C3C0; } }
L_0019C39C:
    c.f[0] = ld32((c.r[18].w[0] + 260u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], 0u + 2u);  goto L_0019C3BC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0019C3C0; } }
L_0019C3BC:
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 1;
L_0019C3C0:
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[18].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 20800u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 20800u), c.r[4].w[0]);
    c.budget -= 8;
L_0019C3E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0019C3E4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0019C400:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C418u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 320u, depth + 1u); else { c.pc = 0x00197280u; return; } if (c.pc != 0x0019C418u) [[unlikely]] return; }
L_0019C418:
    set32(c.r[3], ld32((c.r[16].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 1312u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C434u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_001D(c, 324u, depth + 1u); else { c.pc = 0x00197310u; return; } if (c.pc != 0x0019C434u) [[unlikely]] return; }
L_0019C434:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 20820u), 0u);
    set32(c.r[6], 0u + 11u);
    st32((c.r[2].w[0] + 20824u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 20800u), 0u);
    st32((c.r[2].w[0] + 20804u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[7].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    ld128((c.r[2].w[0] + 1328u) & ~15u, c.r[9]);
    st32((c.r[4].w[0] + 20816u), c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[8].d[0] & c.r[7].d[0];
    set32(c.r[10], ld32((c.r[3].w[0] + 16u)));
    st32((c.r[5].w[0] + 20812u), c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    ld128((c.r[4].w[0] + 1344u) & ~15u, c.r[7]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[10].w[0]) & ~15u, c.r[9]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[8], ld32((c.r[3].w[0] + 32u)));
    c.f[0] = 0u;
    st128((c.r[10].w[0] + 16u) & ~15u, c.r[7]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    ld128((c.r[2].w[0] + 1360u) & ~15u, c.r[7]);
    ld128((c.r[6].w[0] + 1376u) & ~15u, c.r[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[8].w[0]) & ~15u, c.r[7]);
    ld128((c.r[4].w[0] + 1392u) & ~15u, c.r[4]);
    st128((c.r[8].w[0] + 16u) & ~15u, c.r[6]);
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    ld128((c.r[2].w[0] + 1408u) & ~15u, c.r[2]);
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[16].w[0] + 168u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 48;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[9], 0u + 1u);  if (t) { goto L_0019C4F8; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019C4F8:
    c.f[1] = ld32((c.r[16].w[0] + 148u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0019C514; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019C514:
    vu::set_vi(c.vu0, 8u, c.r[9].w[0]);
    vu::set_vi(c.vu0, 10u, c.r[2].w[0]);
    ld128((c.r[16].w[0] + 288u) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0019C548; } }
L_0019C52C:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019C52Cu | kUnwind; return; } goto L_0019C52C; } }
L_0019C548:
    c.f[1] = ld32((c.r[16].w[0] + 264u));
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    c.f[0] = ld32((c.r[16].w[0] + 268u));
    set32(c.r[17], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 52u), c.f[0]);  if (t) { goto L_0019C570; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0019C58C; } }
L_0019C570:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_0019C58C:
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 256u));
    st32((c.r[29].w[0] + 60u), c.f[0]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[5]);
    c.f[3] = ld32((c.r[16].w[0] + 280u));
    c.f[2] = ld32((c.r[16].w[0] + 148u));
    c.f[1] = ld32((c.r[16].w[0] + 168u));
    c.f[0] = ld32((c.r[16].w[0] + 260u));
    st32((c.r[29].w[0] + 48u), c.f[3]);
    st32((c.r[29].w[0] + 52u), c.f[2]);
    st32((c.r[29].w[0] + 56u), c.f[1]);
    st32((c.r[29].w[0] + 60u), c.f[0]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[6]);
    c.f[0] = ld32((c.r[16].w[0] + 276u));
    set32(c.r[4], ld32((c.r[16].w[0] + 272u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C5D0u); st32((c.r[29].w[0] + 48u), c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 83u, depth + 1u); else { c.pc = 0x00185150u; return; } if (c.pc != 0x0019C5D0u) [[unlikely]] return; }
L_0019C5D0:
    st32((c.r[29].w[0] + 52u), c.f[0]);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 60u), 0u);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[7]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C5F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 19u, depth + 1u); else { c.pc = 0x0019C610u; return; } if (c.pc != 0x0019C5F0u) [[unlikely]] return; }
L_0019C5F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0019C610:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[3] = ld32((c.r[4].w[0] + 192u));
    set32(c.r[5], c.r[5].w[0] + 20736u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[2].w[0] + 1504u);
    c.f[2] = ld32((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[1] = ld32((c.r[4].w[0] + 200u));
    c.f[0] = ld32((c.r[4].w[0] + 204u));
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 208u));
    c.f[2] = ld32((c.r[4].w[0] + 212u));
    c.f[1] = ld32((c.r[4].w[0] + 216u));
    c.f[0] = ld32((c.r[4].w[0] + 220u));
    st32((c.r[3].w[0] + 16u), c.f[3]);
    st32((c.r[3].w[0] + 20u), c.f[2]);
    st32((c.r[3].w[0] + 24u), c.f[1]);
    st32((c.r[3].w[0] + 28u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 224u));
    c.f[2] = ld32((c.r[4].w[0] + 228u));
    c.f[1] = ld32((c.r[4].w[0] + 232u));
    c.f[0] = ld32((c.r[4].w[0] + 236u));
    st32((c.r[3].w[0] + 32u), c.f[3]);
    st32((c.r[3].w[0] + 36u), c.f[2]);
    st32((c.r[3].w[0] + 40u), c.f[1]);
    st32((c.r[3].w[0] + 44u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 240u));
    c.f[2] = ld32((c.r[4].w[0] + 244u));
    c.f[1] = ld32((c.r[4].w[0] + 248u));
    c.f[0] = ld32((c.r[4].w[0] + 252u));
    st32((c.r[3].w[0] + 48u), c.f[3]);
    st32((c.r[3].w[0] + 52u), c.f[2]);
    st32((c.r[3].w[0] + 56u), c.f[1]);
    st32((c.r[3].w[0] + 60u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 42;
    { set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00197420u | kUnwind; return; } [[clang::musttail]] return unit_001D(c, 330u, depth); }
L_0019C6C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 20804u)));
    set32(c.r[6], c.r[6].w[0] + 1888u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[7], ld32((c.r[2].w[0] + 20820u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 1904u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 20804u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 20800u), 0u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C71Cu); st32((c.r[4].w[0] + 20820u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_001D(c, 320u, depth + 1u); else { c.pc = 0x00197280u; return; } if (c.pc != 0x0019C71Cu) [[unlikely]] return; }
L_0019C71C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], ld32((c.r[3].w[0] + 20824u)));
    c.budget -= 5;
    if (c.r[5].d[0] == c.r[4].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);  goto L_0019C780; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);  goto L_0019C744; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019C7B8; } }
L_0019C744:
    set32(c.r[5], 0u + 101u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C750u); c.r[4].d[0] = c.r[2].d[0] | 928ull;  if (depth < kMaxDepth) unit_001F(c, 48u, depth + 1u); else { c.pc = 0x0019C9D0u; return; } if (c.pc != 0x0019C750u) [[unlikely]] return; }
L_0019C750:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20812u)));
    c.r[5].d[0] = c.r[3].d[0] | 928ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C768u); set32(c.r[6], 0u + 44u);  if (depth < kMaxDepth) unit_001D(c, 333u, depth + 1u); else { c.pc = 0x001974A0u; return; } if (c.pc != 0x0019C768u) [[unlikely]] return; }
L_0019C768:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 20812u)));
    set32(c.r[4], c.r[4].w[0] + 704u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 20812u), c.r[4].w[0]);  if (t) { goto L_0019C7B8; } }
L_0019C780:
    set32(c.r[5], 0u + 201u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C78Cu); c.r[4].d[0] = c.r[2].d[0] | 2560ull;  if (depth < kMaxDepth) unit_001F(c, 48u, depth + 1u); else { c.pc = 0x0019C9D0u; return; } if (c.pc != 0x0019C78Cu) [[unlikely]] return; }
L_0019C78C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20812u)));
    c.r[5].d[0] = c.r[3].d[0] | 2560ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C7A4u); set32(c.r[6], 0u + 44u);  if (depth < kMaxDepth) unit_001D(c, 333u, depth + 1u); else { c.pc = 0x001974A0u; return; } if (c.pc != 0x0019C7A4u) [[unlikely]] return; }
L_0019C7A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 20812u)));
    set32(c.r[4], c.r[4].w[0] + 704u);
    st32((c.r[3].w[0] + 20812u), c.r[4].w[0]);
    c.budget -= 5;
L_0019C7B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], ld32((c.r[3].w[0] + 20820u)));
    c.budget -= 5;
    if (c.r[5].d[0] == c.r[4].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);  goto L_0019C81C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);  goto L_0019C804; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);  goto L_0019C7EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0019C834; } }
L_0019C7EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C7F4u);  if (depth < kMaxDepth) unit_001D(c, 327u, depth + 1u); else { c.pc = 0x00197390u; return; } if (c.pc != 0x0019C7F4u) [[unlikely]] return; }
L_0019C7F4:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 20824u), c.r[4].w[0]);  if (t) { goto L_0019C830; } }
L_0019C804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C80Cu);  if (depth < kMaxDepth) unit_001D(c, 327u, depth + 1u); else { c.pc = 0x00197390u; return; } if (c.pc != 0x0019C80Cu) [[unlikely]] return; }
L_0019C80C:
    set32(c.r[4], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 20824u), c.r[4].w[0]);  if (t) { goto L_0019C830; } }
L_0019C81C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C824u); c.r[4].d[0] = c.r[2].d[0] | 1632ull;  if (depth < kMaxDepth) unit_001D(c, 327u, depth + 1u); else { c.pc = 0x00197390u; return; } if (c.pc != 0x0019C824u) [[unlikely]] return; }
L_0019C824:
    set32(c.r[4], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 20824u), c.r[4].w[0]);
    c.budget -= 3;
L_0019C830:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0019C834:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019C840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[2].w[0] + 20816u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C85Cu); set32(c.r[16], c.r[2].w[0] << 6);  if (depth < kMaxDepth) unit_001D(c, 320u, depth + 1u); else { c.pc = 0x00197280u; return; } if (c.pc != 0x0019C85Cu) [[unlikely]] return; }
L_0019C85C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20824u)));
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);  goto L_0019C944; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);  goto L_0019C8D0; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0019C890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019C9B0; } }
L_0019C890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C898u);  if (depth < kMaxDepth) unit_001F(c, 50u, depth + 1u); else { c.pc = 0x0019CA30u; return; } if (c.pc != 0x0019C898u) [[unlikely]] return; }
L_0019C898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C8A0u);  if (depth < kMaxDepth) unit_001D(c, 320u, depth + 1u); else { c.pc = 0x00197280u; return; } if (c.pc != 0x0019C8A0u) [[unlikely]] return; }
L_0019C8A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[5], 0u + 101u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C8B0u); c.r[4].d[0] = c.r[2].d[0] | 928ull;  if (depth < kMaxDepth) unit_001F(c, 48u, depth + 1u); else { c.pc = 0x0019C9D0u; return; } if (c.pc != 0x0019C8B0u) [[unlikely]] return; }
L_0019C8B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[6], c.r[16].w[0] >> 4);
    set32(c.r[4], ld32((c.r[2].w[0] + 20812u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C8C8u); c.r[5].d[0] = c.r[2].d[0] | 928ull;  if (depth < kMaxDepth) unit_001D(c, 333u, depth + 1u); else { c.pc = 0x001974A0u; return; } if (c.pc != 0x0019C8C8u) [[unlikely]] return; }
L_0019C8C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019C9B0; } }
L_0019C8D0:
    set32(c.r[5], 0u + 101u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C8DCu); c.r[4].d[0] = c.r[2].d[0] | 928ull;  if (depth < kMaxDepth) unit_001F(c, 48u, depth + 1u); else { c.pc = 0x0019C9D0u; return; } if (c.pc != 0x0019C8DCu) [[unlikely]] return; }
L_0019C8DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20812u)));
    c.r[5].d[0] = c.r[3].d[0] | 928ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C8F4u); set32(c.r[6], 0u + 44u);  if (depth < kMaxDepth) unit_001D(c, 333u, depth + 1u); else { c.pc = 0x001974A0u; return; } if (c.pc != 0x0019C8F4u) [[unlikely]] return; }
L_0019C8F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20812u)));
    set32(c.r[3], c.r[3].w[0] + 704u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C90Cu); st32((c.r[2].w[0] + 20812u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001F(c, 50u, depth + 1u); else { c.pc = 0x0019CA30u; return; } if (c.pc != 0x0019C90Cu) [[unlikely]] return; }
L_0019C90C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C914u);  if (depth < kMaxDepth) unit_001D(c, 320u, depth + 1u); else { c.pc = 0x00197280u; return; } if (c.pc != 0x0019C914u) [[unlikely]] return; }
L_0019C914:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[5], 0u + 201u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C924u); c.r[4].d[0] = c.r[2].d[0] | 2560ull;  if (depth < kMaxDepth) unit_001F(c, 48u, depth + 1u); else { c.pc = 0x0019C9D0u; return; } if (c.pc != 0x0019C924u) [[unlikely]] return; }
L_0019C924:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[6], c.r[16].w[0] >> 4);
    set32(c.r[4], ld32((c.r[2].w[0] + 20812u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C93Cu); c.r[5].d[0] = c.r[2].d[0] | 2560ull;  if (depth < kMaxDepth) unit_001D(c, 333u, depth + 1u); else { c.pc = 0x001974A0u; return; } if (c.pc != 0x0019C93Cu) [[unlikely]] return; }
L_0019C93C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019C9B0; } }
L_0019C944:
    set32(c.r[5], 0u + 201u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C950u); c.r[4].d[0] = c.r[2].d[0] | 2560ull;  if (depth < kMaxDepth) unit_001F(c, 48u, depth + 1u); else { c.pc = 0x0019C9D0u; return; } if (c.pc != 0x0019C950u) [[unlikely]] return; }
L_0019C950:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20812u)));
    c.r[5].d[0] = c.r[3].d[0] | 2560ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C968u); set32(c.r[6], 0u + 44u);  if (depth < kMaxDepth) unit_001D(c, 333u, depth + 1u); else { c.pc = 0x001974A0u; return; } if (c.pc != 0x0019C968u) [[unlikely]] return; }
L_0019C968:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20812u)));
    set32(c.r[3], c.r[3].w[0] + 704u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C980u); st32((c.r[2].w[0] + 20812u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001F(c, 50u, depth + 1u); else { c.pc = 0x0019CA30u; return; } if (c.pc != 0x0019C980u) [[unlikely]] return; }
L_0019C980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C988u);  if (depth < kMaxDepth) unit_001D(c, 320u, depth + 1u); else { c.pc = 0x00197280u; return; } if (c.pc != 0x0019C988u) [[unlikely]] return; }
L_0019C988:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[5], 0u + 101u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C998u); c.r[4].d[0] = c.r[2].d[0] | 928ull;  if (depth < kMaxDepth) unit_001F(c, 48u, depth + 1u); else { c.pc = 0x0019C9D0u; return; } if (c.pc != 0x0019C998u) [[unlikely]] return; }
L_0019C998:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[6], c.r[16].w[0] >> 4);
    set32(c.r[4], ld32((c.r[2].w[0] + 20812u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C9B0u); c.r[5].d[0] = c.r[2].d[0] | 928ull;  if (depth < kMaxDepth) unit_001D(c, 333u, depth + 1u); else { c.pc = 0x001974A0u; return; } if (c.pc != 0x0019C9B0u) [[unlikely]] return; }
L_0019C9B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C9B8u);  if (depth < kMaxDepth) unit_001D(c, 317u, depth + 1u); else { c.pc = 0x00197220u; return; } if (c.pc != 0x0019C9B8u) [[unlikely]] return; }
L_0019C9B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019C9D0:
    set32(c.r[3], 0u + 11u);
    vu::set_vi(c.vu0, 1u, c.r[5].w[0]);
    c.budget -= 2;
L_0019C9D8:
    lqc2_vu(c, 15u, 16u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    lqc2_vu(c, 15u, 17u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    lqc2_vu(c, 15u, 18u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    lqc2_vu(c, 15u, 19u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    c.r[5] = c.vu0.vf[16];
    c.r[6] = c.vu0.vf[17];
    c.r[7] = c.vu0.vf[18];
    c.r[8] = c.vu0.vf[19];
    st128((c.r[4].w[0]) & ~15u, c.r[5]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[6]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[7]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[8]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 15;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[4], c.r[4].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019C9D8u | kUnwind; return; } goto L_0019C9D8; } }
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019CA30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] + 1920u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00197420u | kUnwind; return; } [[clang::musttail]] return unit_001D(c, 330u, depth); }
L_0019CA40:
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[6], ld32((c.r[3].w[0] + 20804u)));
    set32(c.r[10], c.r[10].w[0] + 16u);
    c.r[8].d[0] = c.r[8].d[0] | 65535ull;
    set32(c.r[3], c.r[5].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[7], c.r[3].w[0] >> 4);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x30000000u);
    set32(c.r[5], c.r[5].w[0] + 20u);
    c.r[11].d[0] = c.r[7].d[0] | c.r[3].d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] << 16);
    set32(c.r[9], ld32((c.r[3].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[9].w[0]), c.r[4].w[0]);
    set32(c.r[9], ld32((c.r[3].w[0] + 20804u)));
    set32(c.r[9], c.r[9].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0])));
    st32((c.r[9].w[0]), c.r[11].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 20804u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[10].w[0] + c.r[6].w[0]);
    set32(c.r[9], ld32((c.r[6].w[0])));
    set32(c.r[6], ld32((c.r[9].w[0] + 12u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[8].d[0];
    st32((c.r[9].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 20804u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[10].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0] + 12u)));
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    st32((c.r[6].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 45;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 20816u), c.r[4].w[0]);  c.pc = t; return; }
L_0019CB00:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 36u)));
    c.budget -= 16;
L_0019CB40:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]); c.r[16].d[0] = c.lo.d[0];  if (t) { goto L_0019CB88; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0019CB58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 8u), 0u);  if (t) { goto L_0019CBFC; } }
L_0019CB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CB60u);  if (depth < kMaxDepth) unit_001F(c, 78u, depth + 1u); else { c.pc = 0x0019D040u; return; } if (c.pc != 0x0019CB60u) [[unlikely]] return; }
L_0019CB60:
    c.f[1] = ld32((c.r[19].w[0] + 68u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CB78u); st32((c.r[19].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_001F(c, 77u, depth + 1u); else { c.pc = 0x0019CFB0u; return; } if (c.pc != 0x0019CB78u) [[unlikely]] return; }
L_0019CB78:
    c.f[1] = ld32((c.r[19].w[0] + 68u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 8u), c.f[0]);  if (t) { goto L_0019CC04; } }
L_0019CB88:
    c.f[21] = ld32((c.r[18].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CB9Cu); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0019CB9Cu) [[unlikely]] return; }
L_0019CB9C:
    c.f[1] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[21]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[21] = ld32((c.r[18].w[0] + 52u));
    c.f[20] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CBC0u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0019CBC0u) [[unlikely]] return; }
L_0019CBC0:
    c.f[1] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[21]);
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[21] = ld32((c.r[18].w[0] + 56u));
    c.f[20] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CBE4u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0019CBE4u) [[unlikely]] return; }
L_0019CBE4:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[21]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 8u), c.f[0]);  if (t) { goto L_0019CC04; } }
L_0019CBFC:
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[19].w[0]), 0u);
    c.budget -= 2;
L_0019CC04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[18].w[0] + 96u));  goto L_0019CCD0; }
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019CCCC; } }
    c.f[0] = ld32((c.r[18].w[0] + 116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CC38u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0019CC38u) [[unlikely]] return; }
L_0019CC38:
    c.f[4] = ld32((c.r[18].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = ld32((c.r[18].w[0] + 116u));
    c.f[1] = ld32((c.r[18].w[0] + 124u));
    c.f[2] = c.r[2].w[0];
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[12] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CC60u); c.f[21] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0019CC60u) [[unlikely]] return; }
L_0019CC60:
    c.f[2] = ld32((c.r[18].w[0] + 120u));
    c.f[1] = ld32((c.r[18].w[0] + 124u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[20], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CC80u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 78u, depth + 1u); else { c.pc = 0x0019D040u; return; } if (c.pc != 0x0019CC80u) [[unlikely]] return; }
L_0019CC80:
    c.f[20] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CC8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 78u, depth + 1u); else { c.pc = 0x0019D040u; return; } if (c.pc != 0x0019CC8Cu) [[unlikely]] return; }
L_0019CC8C:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CC9Cu); st32((c.r[19].w[0] + 16u), c.f[0]);  if (depth < kMaxDepth) unit_001F(c, 77u, depth + 1u); else { c.pc = 0x0019CFB0u; return; } if (c.pc != 0x0019CC9Cu) [[unlikely]] return; }
L_0019CC9C:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CCACu); st32((c.r[19].w[0] + 20u), c.f[0]);  if (depth < kMaxDepth) unit_001F(c, 78u, depth + 1u); else { c.pc = 0x0019D040u; return; } if (c.pc != 0x0019CCACu) [[unlikely]] return; }
L_0019CCAC:
    c.f[20] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CCB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 77u, depth + 1u); else { c.pc = 0x0019CFB0u; return; } if (c.pc != 0x0019CCB8u) [[unlikely]] return; }
L_0019CCB8:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 24u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_0019CD4C; } }
L_0019CCCC:
    c.f[0] = ld32((c.r[18].w[0] + 96u));
    c.budget -= 1;
L_0019CCD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CCE0u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0019CCE0u) [[unlikely]] return; }
L_0019CCE0:
    c.f[3] = ld32((c.r[18].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = ld32((c.r[18].w[0] + 96u));
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 100u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CD08u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0019CD08u) [[unlikely]] return; }
L_0019CD08:
    c.f[3] = ld32((c.r[18].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = ld32((c.r[18].w[0] + 100u));
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[19].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CD30u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0019CD30u) [[unlikely]] return; }
L_0019CD30:
    c.f[2] = ld32((c.r[18].w[0] + 88u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[18].w[0] + 104u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 24u), c.f[0]);
    st32((c.r[19].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 7;
L_0019CD4C:
    ld128((c.r[18].w[0] + 128u) & ~15u, c.r[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    ld128((c.r[3].w[0] + 1968u) & ~15u, c.r[3]);
    st128((c.r[19].w[0] + 32u) & ~15u, c.r[4]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; st128((c.r[19].w[0] + 48u) & ~15u, c.r[3]);  if (t) { goto L_0019CDBC; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CD74u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 75u, depth + 1u); else { c.pc = 0x0019CEE0u; return; } if (c.pc != 0x0019CD74u) [[unlikely]] return; }
L_0019CD74:
    set32(c.r[2], ld32((c.r[18].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 160u)));  goto L_0019CD94; }
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CD90u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 73u, depth + 1u); else { c.pc = 0x0019CE30u; return; } if (c.pc != 0x0019CD90u) [[unlikely]] return; }
L_0019CD90:
    set32(c.r[2], ld32((c.r[18].w[0] + 160u)));
    c.budget -= 1;
L_0019CD94:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] + 48u);  goto L_0019CDB0; }
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CDACu); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 73u, depth + 1u); else { c.pc = 0x0019CE30u; return; } if (c.pc != 0x0019CDACu) [[unlikely]] return; }
L_0019CDAC:
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 1;
L_0019CDB0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CDBCu); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 73u, depth + 1u); else { c.pc = 0x0019CE30u; return; } if (c.pc != 0x0019CDBCu) [[unlikely]] return; }
L_0019CDBC:
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.f[2] = ld32((c.r[18].w[0] + 144u));
    c.f[3] = 0u;
    c.f[1] = ld32((c.r[19].w[0] + 16u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    st32((c.r[19].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[18].w[0] + 144u));
    c.f[1] = ld32((c.r[19].w[0] + 20u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    st32((c.r[19].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[2] = ld32((c.r[18].w[0] + 144u));
    c.f[1] = ld32((c.r[19].w[0] + 24u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    st32((c.r[19].w[0] + 40u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0019CE30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CE54u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0019CE54u) [[unlikely]] return; }
L_0019CE54:
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[3] = ld32((c.r[29].w[0] + 48u));
    c.f[2] = ld32((c.r[16].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[5] = ld32((c.r[16].w[0] + 32u));
    c.f[4] = ld32((c.r[29].w[0] + 56u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[5]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[3] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[29].w[0] + 48u));
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[5] = ld32((c.r[16].w[0] + 36u));
    c.f[4] = ld32((c.r[29].w[0] + 56u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[5]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = ld32((c.r[29].w[0] + 48u));
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[5] = ld32((c.r[16].w[0] + 40u));
    c.f[4] = ld32((c.r[29].w[0] + 56u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[5]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0019CEE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CF04u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0019CF04u) [[unlikely]] return; }
L_0019CF04:
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[4] = ld32((c.r[29].w[0] + 48u));
    c.f[3] = ld32((c.r[16].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[6] = ld32((c.r[16].w[0] + 32u));
    c.f[5] = ld32((c.r[29].w[0] + 56u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[3]);
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[6]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[4] = ld32((c.r[16].w[0] + 4u));
    c.f[3] = ld32((c.r[29].w[0] + 48u));
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[6] = ld32((c.r[16].w[0] + 36u));
    c.f[5] = ld32((c.r[29].w[0] + 56u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[4]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[6]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[4] = ld32((c.r[16].w[0] + 8u));
    c.f[3] = ld32((c.r[29].w[0] + 48u));
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[6] = ld32((c.r[16].w[0] + 40u));
    c.f[5] = ld32((c.r[29].w[0] + 56u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[4]);
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[6]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 41;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0019CFB0:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = c.r[4].d[0] & 49152ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 2000u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 2004u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31920u)));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[4].w[0]));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[5] = ld32((c.r[2].w[0] + 12u));
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[7] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[6] = fp::ee::mul(c.fcr31, c.f[1], c.f[7]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[6], c.f[0]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[7], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[7]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[6]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.budget -= 34;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[4]);  c.pc = t; return; }
L_0019D040:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = c.r[4].d[0] & 49152ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 2048u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 2052u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31916u)));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[4].w[0]));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[5] = ld32((c.r[2].w[0] + 12u));
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[7] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[6] = fp::ee::mul(c.fcr31, c.f[1], c.f[7]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[6], c.f[0]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[7], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[7]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[6]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.budget -= 34;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[4]);  c.pc = t; return; }
L_0019D0D0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0019D108; } }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.f[3] = ld32((c.r[5].w[0]));  goto L_0019D0EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019D108; } }
    c.f[3] = ld32((c.r[5].w[0]));
    c.budget -= 1;
L_0019D0EC:
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 288u), c.f[3]);
    st32((c.r[4].w[0] + 292u), c.f[2]);
    st32((c.r[4].w[0] + 296u), c.f[1]);
    st32((c.r[4].w[0] + 300u), c.f[0]);
    c.budget -= 7;
L_0019D108:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019D110:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0019D11C; } }
    st32((c.r[4].w[0] + 32u), 0u);
    c.budget -= 1;
L_0019D11C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019D130:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0019D13C; } }
    st32((c.r[4].w[0] + 144u), c.f[12]);
    c.budget -= 1;
L_0019D13C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019D150:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0019D1A0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 2080u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 272u), c.r[3].w[0]);  if (t) { goto L_0019D19C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[12]);
    c.budget -= 7;
L_0019D19C:
    st32((c.r[4].w[0] + 276u), c.f[0]);
    c.budget -= 1;
L_0019D1A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019D1B0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0019D1BC; } }
    st32((c.r[4].w[0] + 268u), c.f[12]);
    c.budget -= 1;
L_0019D1BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019D1D0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0019D210; } }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.f[3] = ld32((c.r[5].w[0]));  goto L_0019D1EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019D210; } }
    c.f[3] = ld32((c.r[5].w[0]));
    c.budget -= 1;
L_0019D1EC:
    set32(c.r[3], 0u + 1u);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 224u), c.f[3]);
    st32((c.r[4].w[0] + 228u), c.f[2]);
    st32((c.r[4].w[0] + 232u), c.f[1]);
    st32((c.r[4].w[0] + 236u), c.f[0]);
    st32((c.r[4].w[0] + 304u), c.r[3].w[0]);
    c.budget -= 9;
L_0019D210:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019D220:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8u)));  goto L_0019D270; }
    set32(c.r[6], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[3], 0u + 8u);
    c.r[4].d[0] = c.r[6].d[0] & 15ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0019D26C; } }
    c.r[4].d[0] = c.r[6].d[0] | 34816ull;
    st32((c.r[18].w[0] + 40u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 4;
L_0019D26C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_0019D270:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[16], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[17], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[19], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0019D2F0; } }
L_0019D288:
    st32((c.r[18].w[0] + 36u), c.r[19].w[0]);
    set32(c.r[2], 0u + 8u);
    st32((c.r[18].w[0] + 40u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D2A4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0019D2A4u) [[unlikely]] return; }
L_0019D2A4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st16((c.r[18].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 14u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st16((c.r[18].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 64u);  if (t) { goto L_0019D2E0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D2DCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 342u, depth + 1u); else { c.pc = 0x0018BE00u; return; } if (c.pc != 0x0019D2DCu) [[unlikely]] return; }
L_0019D2DC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0019D2E0:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019D288u | kUnwind; return; } goto L_0019D288; } }
    c.budget -= 1;
L_0019D2F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0019D310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019D334; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D32Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0019D32Cu) [[unlikely]] return; }
L_0019D32C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), 0u);  if (t) { goto L_0019D340; } }
L_0019D334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D33Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0018(c, 191u, depth + 1u); else { c.pc = 0x001825D0u; return; } if (c.pc != 0x0019D33Cu) [[unlikely]] return; }
L_0019D33C:
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 1;
L_0019D340:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019D360:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D384u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0018(c, 191u, depth + 1u); else { c.pc = 0x001825D0u; return; } if (c.pc != 0x0019D384u) [[unlikely]] return; }
L_0019D384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D38Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 212u, depth + 1u); else { c.pc = 0x00182960u; return; } if (c.pc != 0x0019D38Cu) [[unlikely]] return; }
L_0019D38C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x48530000u);
    c.r[3].d[0] = c.r[3].d[0] | 17234ull;
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], 0u + 3u);  goto L_0019D3E0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[18], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D3ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 212u, depth + 1u); else { c.pc = 0x00182960u; return; } if (c.pc != 0x0019D3ACu) [[unlikely]] return; }
L_0019D3AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4B460000u);
    c.r[3].d[0] = c.r[3].d[0] | 21315ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0019D3DC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D3D0u); set32(c.r[5], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0019D3D0u) [[unlikely]] return; }
L_0019D3D0:
    st32((c.r[17].w[0] + 32u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0019D3EC; } }
L_0019D3DC:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_0019D3E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D3E8u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_001A(c, 300u, depth + 1u); else { c.pc = 0x0018B750u; return; } if (c.pc != 0x0019D3E8u) [[unlikely]] return; }
L_0019D3E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019D3EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0019D410:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019D420:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0019D430:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.f[12]);  c.pc = t; return; }
L_0019D440:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[12]);  c.pc = t; return; }
L_0019D450:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[3].w[0] + 17924u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[13]);
    st32((c.r[4].w[0] + 12u), c.f[1]);
    c.f[0] = ld32((c.r[3].w[0] + 17928u));
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.f[0]);  c.pc = t; return; }
L_0019D490:
    st32((c.r[4].w[0] + 20u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.f[13]);  c.pc = t; return; }
L_0019D4A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.f[12]);  c.pc = t; return; }
L_0019D4B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 4u));  c.pc = t; return; }
L_0019D4C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 8u));  c.pc = t; return; }
L_0019D4D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[3].w[0] + 17924u));
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    c.f[2] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 16u));
    c.f[1] = ld32((c.r[3].w[0] + 17928u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.f[0]);  c.pc = t; return; }
L_0019D510:
    c.f[0] = ld32((c.r[6].w[0] + 20u));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.f[0]);  c.pc = t; return; }
L_0019D530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0]));  c.pc = t; return; }
L_0019D540:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), 0u);  c.pc = t; return; }
L_0019D550:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D578u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 212u, depth + 1u); else { c.pc = 0x00182960u; return; } if (c.pc != 0x0019D578u) [[unlikely]] return; }
L_0019D578:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x48530000u);
    c.r[3].d[0] = c.r[3].d[0] | 17229ull;
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], 0u + 3u);  goto L_0019D5D8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D598u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 212u, depth + 1u); else { c.pc = 0x00182960u; return; } if (c.pc != 0x0019D598u) [[unlikely]] return; }
L_0019D598:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4B460000u);
    c.r[3].d[0] = c.r[3].d[0] | 21325ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0019D5D4; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_0019D5C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D5C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 202u, depth + 1u); else { c.pc = 0x001827E0u; return; } if (c.pc != 0x0019D5C4u) [[unlikely]] return; }
L_0019D5C4:
    st32((c.r[18].w[0]), c.r[19].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[17].w[0]);  if (t) { goto L_0019D5E4; } }
L_0019D5D4:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_0019D5D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D5E0u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_001A(c, 300u, depth + 1u); else { c.pc = 0x0018B750u; return; } if (c.pc != 0x0019D5E0u) [[unlikely]] return; }
L_0019D5E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019D5E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0019D600:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), 0u);  c.pc = t; return; }
L_0019D610:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = c.r[5].d[0] << 32;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[18], c.r[16].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] - c.r[2].d[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D650u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 207u, depth + 1u); else { c.pc = 0x001828A0u; return; } if (c.pc != 0x0019D650u) [[unlikely]] return; }
L_0019D650:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0019D680:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 4;
    { set32(c.r[5], ld32((c.r[2].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0018B520u | kUnwind; return; } [[clang::musttail]] return unit_001A(c, 290u, depth); }
L_0019D690:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 20848u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D6A8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0018(c, 191u, depth + 1u); else { c.pc = 0x001825D0u; return; } if (c.pc != 0x0019D6A8u) [[unlikely]] return; }
L_0019D6A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[28].w[0] - 31012u), 0u);
    st32((c.r[3].w[0] + 20848u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 20852u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x37270000u);
    c.r[4].d[0] = c.r[3].d[0] | 50604ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 20864u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 20876u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 20860u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[4].d[0] = c.r[3].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 20856u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 20868u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 20832u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 20836u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 20840u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 20844u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019D720:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 31012u), 0u);  c.pc = t; return; }
L_0019D730:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 20848u), c.r[4].w[0]);  c.pc = t; return; }
L_0019D740:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 20848u)));  c.pc = t; return; }
L_0019D750:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 20852u), c.r[4].w[0]);  c.pc = t; return; }
L_0019D760:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 20852u)));  c.pc = t; return; }
L_0019D770:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 20876u), c.f[12]);  c.pc = t; return; }
L_0019D780:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 20868u), c.r[4].w[0]);  c.pc = t; return; }
L_0019D790:
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_0019D7A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D7E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 212u, depth + 1u); else { c.pc = 0x00182960u; return; } if (c.pc != 0x0019D7E8u) [[unlikely]] return; }
L_0019D7E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x48530000u);
    c.r[3].d[0] = c.r[3].d[0] | 20562ull;
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], 0u + 3u);  goto L_0019D84C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D808u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 212u, depth + 1u); else { c.pc = 0x00182960u; return; } if (c.pc != 0x0019D808u) [[unlikely]] return; }
L_0019D808:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4B530000u);
    c.r[3].d[0] = c.r[3].d[0] | 20562ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0019D848; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 8u)));  goto L_0019D834; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D830u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 202u, depth + 1u); else { c.pc = 0x001827E0u; return; } if (c.pc != 0x0019D830u) [[unlikely]] return; }
L_0019D830:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_0019D834:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[17].w[0]);  if (t) { goto L_0019D858; } }
L_0019D848:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_0019D84C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D854u); set32(c.r[5], 0u + 65u);  if (depth < kMaxDepth) unit_001A(c, 300u, depth + 1u); else { c.pc = 0x0018B750u; return; } if (c.pc != 0x0019D854u) [[unlikely]] return; }
L_0019D854:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019D858:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0019D870:
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_0019D880:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = c.r[5].d[0] << 32;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[18], c.r[16].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] - c.r[2].d[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D8C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 207u, depth + 1u); else { c.pc = 0x001828A0u; return; } if (c.pc != 0x0019D8C0u) [[unlikely]] return; }
L_0019D8C0:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0019D8F0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 24u)));  c.pc = t; return; }
L_0019D900:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[2].w[0] + 12u));  c.pc = t; return; }
L_0019D920:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[2].w[0] + 16u));  c.pc = t; return; }
L_0019D940:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 8u)));  c.pc = t; return; }
L_0019D960:
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0019D9A8; } }
L_0019D988:
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[6].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0019D99C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0019D9A8; } }
L_0019D99C:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019D988u | kUnwind; return; } goto L_0019D988; } }
L_0019D9A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019D9B0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0019D9F0; } }
L_0019D9C4:
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019D9E0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0019D9E0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019D9C4u | kUnwind; return; } goto L_0019D9C4; } }
    c.budget -= 1;
L_0019D9F0:
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[4].w[0] << 6);
    set32(c.r[4], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[2].w[0] + 15u);
    set32(c.r[4], c.r[4].w[0] + 15u);
    set32(c.r[2], c.r[5].w[0] + 15u);
    set32(c.r[5], 0u - 16u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    set32(c.r[4], c.r[4].w[0] + 48u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_0019DA30:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[5], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0019DA70; } }
L_0019DA44:
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[1].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019DA60; } }
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0019DA60:
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019DA44u | kUnwind; return; } goto L_0019DA44; } }
    c.budget -= 1;
L_0019DA70:
    set32(c.r[3], c.r[4].w[0] + 32u);
    set32(c.r[5], c.r[3].w[0] + 15u);
    set32(c.r[3], 0u - 16u);
    c.r[6].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] << 2);
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[7].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0]), c.r[7].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_0019DAC0:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  c.pc = t; return; }
L_0019DAD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[5].w[0]);  c.pc = t; return; }
L_0019DAE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[9].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[8], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull; c.f[21] = c.f[12];  if (t) { goto L_0019DB50; } }
    c.r[6].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[2], c.r[9].w[0] + c.r[8].w[0]);
    c.budget -= 2;
L_0019DB14:
    set32(c.r[3], c.r[2].w[0] >> 1);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019DB38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0019DB40; } }
L_0019DB38:
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0019DB40:
    set32(c.r[2], c.r[8].w[0] - c.r[9].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[9].w[0] + c.r[8].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0019DB14u | kUnwind; return; } goto L_0019DB14; }
L_0019DB50:
    set32(c.r[2], c.r[9].w[0] << 1);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[8].d[0] = c.r[9].d[0] + 0ull;  goto L_0019DB6C; }
L_0019DB6C:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[8].w[0] << 4);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DB80u); c.r[4].d[0] = ld16((c.r[16].w[0] + 2u));  if (depth < kMaxDepth) unit_0019(c, 84u, depth + 1u); else { c.pc = 0x00185160u; return; } if (c.pc != 0x0019DB80u) [[unlikely]] return; }
L_0019DB80:
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[20] = c.f[0];  if (t) { goto L_0019DBAC; } }
    c.f[2] = fp::ee::sub(c.fcr31, c.f[21], c.f[20]);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = 0u;
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);  if (t) { goto L_0019DC50; } }
L_0019DBAC:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[0] = ld32((c.r[16].w[0] + 4u));  goto L_0019DC50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DBC0u); c.r[4].d[0] = ld16((c.r[16].w[0] + 18u));  if (depth < kMaxDepth) unit_0019(c, 84u, depth + 1u); else { c.pc = 0x00185160u; return; } if (c.pc != 0x0019DBC0u) [[unlikely]] return; }
L_0019DBC0:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[21], c.f[20]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.f[4] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);
    c.f[10] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    c.f[2] = c.r[5].w[0];
    c.f[9] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.f[2] = 0u;
    c.f[7] = fp::ee::sub(c.fcr31, c.f[10], c.f[3]);
    c.f[5] = c.r[4].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[10]);
    c.f[3] = fp::ee::msub(c.fcr31, c.facc, c.f[5], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[9]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[5], c.f[10]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[9]);
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[10]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[3] = ld32((c.r[16].w[0] + 4u));
    c.f[6] = ld32((c.r[16].w[0] + 8u));
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.f[8] = ld32((c.r[16].w[0] + 12u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[4]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[7]);
    c.budget -= 36;
L_0019DC50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019DC70:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[29].w[0] + 220u);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    set32(c.r[5], c.r[29].w[0] + 208u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DCC8u); st32((c.r[29].w[0] + 208u), c.f[12]);  if (depth < kMaxDepth) unit_0019(c, 78u, depth + 1u); else { c.pc = 0x001850C0u; return; } if (c.pc != 0x0019DCC8u) [[unlikely]] return; }
L_0019DCC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[30], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[23], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 44u)));
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 10;
    { const bool t = c.r[23].sd[0] <= 0; st32((c.r[29].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_0019E1F0; } }
L_0019DCF0:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[20], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[3].d[0] = c.r[20].d[0] & 240ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DD1Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0019DD1Cu) [[unlikely]] return; }
L_0019DD1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.r[22].d[0] = c.r[20].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[22].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0019E1C0; } }
L_0019DD30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[22].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019E1B0; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019DD60; } }
    c.f[23] = ld32((c.r[29].w[0] + 208u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[29].w[0] + 220u)));  if (t) { goto L_0019DDA8; } }
    c.budget -= 1;
L_0019DD60:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], c.r[29].w[0] + 212u);
    set32(c.r[5], c.r[29].w[0] + 216u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] - 2u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DD84u); st32((c.r[29].w[0] + 216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0019(c, 80u, depth + 1u); else { c.pc = 0x001850F0u; return; } if (c.pc != 0x0019DD84u) [[unlikely]] return; }
L_0019DD84:
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    c.f[13] = ld32((c.r[29].w[0] + 212u));
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[20].d[0] = c.hi.d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DDA0u); c.f[12] = ld32((c.r[29].w[0] + 208u));  if (depth < kMaxDepth) unit_0005(c, 136u, depth + 1u); else { c.pc = 0x001372A8u; return; } if (c.pc != 0x0019DDA0u) [[unlikely]] return; }
L_0019DDA0:
    c.f[23] = c.f[0];
    c.budget -= 2;
L_0019DDA8:
    c.r[1].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(15ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019E1A8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[21].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 2112u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0019C000u < 16384u) { entry = entries_001F[(t - 0x0019C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0019DDD0:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = c.f[23];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DDE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 150u, depth + 1u); else { c.pc = 0x0019DAE0u; return; } if (c.pc != 0x0019DDE0u) [[unlikely]] return; }
L_0019DDE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_0019E1A8; } }
L_0019DDE8:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0019DE40; } }
    c.r[8].d[0] = c.r[20].d[0] & 65535ull;
    c.budget -= 1;
L_0019DE00:
    set32(c.r[6], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[6].w[0] >> 1);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld16((c.r[6].w[0]));
    c.r[6].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0019DE28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0019DE30; } }
L_0019DE28:
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 2;
L_0019DE30:
    set32(c.r[6], c.r[4].w[0] - c.r[5].w[0]);
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019DE00u | kUnwind; return; } goto L_0019DE00; } }
L_0019DE40:
    set32(c.r[6], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[7].d[0] = c.r[20].d[0] & 65535ull;
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_0019DE5C; }
L_0019DE5C:
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[20], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[20].w[0]));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019DE80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 4u)));  if (t) { goto L_0019DED8; } }
L_0019DE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DE88u); c.r[4].d[0] = ld16((c.r[20].w[0] + 2u));  if (depth < kMaxDepth) unit_0019(c, 84u, depth + 1u); else { c.pc = 0x00185160u; return; } if (c.pc != 0x0019DE88u) [[unlikely]] return; }
L_0019DE88:
    c.r[4].d[0] = ld16((c.r[20].w[0] + 18u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DE94u); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 84u, depth + 1u); else { c.pc = 0x00185160u; return; } if (c.pc != 0x0019DE94u) [[unlikely]] return; }
L_0019DE94:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DEA0u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 84u, depth + 1u); else { c.pc = 0x00185160u; return; } if (c.pc != 0x0019DEA0u) [[unlikely]] return; }
L_0019DEA0:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DEACu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 84u, depth + 1u); else { c.pc = 0x00185160u; return; } if (c.pc != 0x0019DEACu) [[unlikely]] return; }
L_0019DEAC:
    c.f[2] = fp::ee::sub(c.fcr31, c.f[23], c.f[22]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[21], c.f[22]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DED0u); c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 82u, depth + 1u); else { c.pc = 0x00185130u; return; } if (c.pc != 0x0019DED0u) [[unlikely]] return; }
L_0019DED0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0019DED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0019E1A8; } }
L_0019DEE0:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0019DF38; } }
    c.r[8].d[0] = c.r[20].d[0] & 65535ull;
    c.budget -= 1;
L_0019DEF8:
    set32(c.r[6], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[6].w[0] >> 1);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld16((c.r[6].w[0]));
    c.r[6].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0019DF20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0019DF28; } }
L_0019DF20:
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 2;
L_0019DF28:
    set32(c.r[6], c.r[4].w[0] - c.r[5].w[0]);
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019DEF8u | kUnwind; return; } goto L_0019DEF8; } }
L_0019DF38:
    set32(c.r[6], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[7].d[0] = c.r[20].d[0] & 65535ull;
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_0019DF54; }
L_0019DF54:
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[20], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[20].w[0]));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019DF78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 4u)));  if (t) { goto L_0019DFD0; } }
L_0019DF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DF80u); c.r[4].d[0] = ld16((c.r[20].w[0] + 2u));  if (depth < kMaxDepth) unit_0019(c, 84u, depth + 1u); else { c.pc = 0x00185160u; return; } if (c.pc != 0x0019DF80u) [[unlikely]] return; }
L_0019DF80:
    c.r[4].d[0] = ld16((c.r[20].w[0] + 18u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DF8Cu); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 84u, depth + 1u); else { c.pc = 0x00185160u; return; } if (c.pc != 0x0019DF8Cu) [[unlikely]] return; }
L_0019DF8C:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DF98u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 83u, depth + 1u); else { c.pc = 0x00185150u; return; } if (c.pc != 0x0019DF98u) [[unlikely]] return; }
L_0019DF98:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DFA4u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 83u, depth + 1u); else { c.pc = 0x00185150u; return; } if (c.pc != 0x0019DFA4u) [[unlikely]] return; }
L_0019DFA4:
    c.f[2] = fp::ee::sub(c.fcr31, c.f[23], c.f[22]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[21], c.f[22]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DFC8u); c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 81u, depth + 1u); else { c.pc = 0x00185120u; return; } if (c.pc != 0x0019DFC8u) [[unlikely]] return; }
L_0019DFC8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0019DFD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0019E1A8; } }
L_0019DFD8:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0019E030; } }
    c.r[8].d[0] = c.r[20].d[0] & 65535ull;
    c.budget -= 1;
L_0019DFF0:
    set32(c.r[6], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[6].w[0] >> 1);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld16((c.r[6].w[0]));
    c.r[6].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0019E018; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0019E020; } }
L_0019E018:
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 2;
L_0019E020:
    set32(c.r[6], c.r[4].w[0] - c.r[5].w[0]);
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019DFF0u | kUnwind; return; } goto L_0019DFF0; } }
L_0019E030:
    set32(c.r[6], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[7].d[0] = c.r[20].d[0] & 65535ull;
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_0019E04C; }
L_0019E04C:
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[20], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[20].w[0]));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019E070; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 4u)));  if (t) { goto L_0019E0B0; } }
L_0019E070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E078u); c.r[4].d[0] = ld16((c.r[20].w[0] + 2u));  if (depth < kMaxDepth) unit_0019(c, 84u, depth + 1u); else { c.pc = 0x00185160u; return; } if (c.pc != 0x0019E078u) [[unlikely]] return; }
L_0019E078:
    c.r[4].d[0] = ld16((c.r[20].w[0] + 18u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E084u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 84u, depth + 1u); else { c.pc = 0x00185160u; return; } if (c.pc != 0x0019E084u) [[unlikely]] return; }
L_0019E084:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[23], c.f[20]);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.f[12] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E0A8u);  if (depth < kMaxDepth) unit_001D(c, 235u, depth + 1u); else { c.pc = 0x00196640u; return; } if (c.pc != 0x0019E0A8u) [[unlikely]] return; }
L_0019E0A8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0019E0B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0019E1A8; } }
L_0019E0B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0019E110; } }
    c.r[8].d[0] = c.r[20].d[0] & 65535ull;
    c.budget -= 1;
L_0019E0D0:
    set32(c.r[6], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[6].w[0] >> 1);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld16((c.r[6].w[0]));
    c.r[6].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0019E0F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0019E100; } }
L_0019E0F8:
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 2;
L_0019E100:
    set32(c.r[6], c.r[4].w[0] - c.r[5].w[0]);
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019E0D0u | kUnwind; return; } goto L_0019E0D0; } }
L_0019E110:
    set32(c.r[6], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[7].d[0] = c.r[20].d[0] & 65535ull;
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_0019E12C; }
L_0019E12C:
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[20], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    st16((c.r[19].w[0] + 30u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[20].w[0]));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0019E190; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E160u); c.r[4].d[0] = ld16((c.r[20].w[0] + 2u));  if (depth < kMaxDepth) unit_0019(c, 84u, depth + 1u); else { c.pc = 0x00185160u; return; } if (c.pc != 0x0019E160u) [[unlikely]] return; }
L_0019E160:
    c.r[4].d[0] = ld16((c.r[20].w[0] + 18u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E16Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 84u, depth + 1u); else { c.pc = 0x00185160u; return; } if (c.pc != 0x0019E16Cu) [[unlikely]] return; }
L_0019E16C:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[23], c.f[20]);
    set32(c.r[4], 0u + 1u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 60u), c.f[0]);  if (t) { goto L_0019E198; } }
    c.budget -= 1;
L_0019E190:
    st32((c.r[19].w[0] + 60u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0019E198:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_0019E1A8:
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 2;
L_0019E1B0:
    set32(c.r[22], c.r[22].w[0] << 1);
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[22].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019DD30u | kUnwind; return; } goto L_0019DD30; } }
L_0019E1C0:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[23], c.r[23].w[0] - 1u);
    set32(c.r[30], c.r[30].w[0] + 64u);
    set32(c.r[19], c.r[19].w[0] + 64u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 11;
    { const bool t = c.r[23].sd[0] > 0; st32((c.r[29].w[0] + 192u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019DCF0u | kUnwind; return; } goto L_0019DCF0; } }
    c.budget -= 1;
L_0019E1F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0019E230:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[12]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E264u); set32(c.r[5], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_0019(c, 9u, depth + 1u); else { c.pc = 0x001841F0u; return; } if (c.pc != 0x0019E264u) [[unlikely]] return; }
L_0019E264:
    set32(c.r[8], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 40u)));
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.vu0.vf[4] = c.r[8];
    c.vu0.vf[5] = c.r[9];
    vu::mulabc4<0>(c.vu0, 15u, 1u, c.vu0.vf[4].w[0]);
    vu::maddbc4<0>(c.vu0, 15u, 7u, 2u, c.vu0.vf[5].w[0]);
    vu::mulabc4<0>(c.vu0, 15u, 1u, c.vu0.vf[5].w[0]);
    vu::msubbc4<1>(c.vu0, 15u, 6u, 2u, c.vu0.vf[4].w[0]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[7]);
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[6]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019E2B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 2288u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E2D0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0019E2D0u) [[unlikely]] return; }
L_0019E2D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] + 2288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E2E4u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0019E2E4u) [[unlikely]] return; }
L_0019E2E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[16].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] + 2288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E2F8u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0019E2F8u) [[unlikely]] return; }
L_0019E2F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019E310:
    set32(c.r[8], c.f[12]);
    set32(c.r[9], c.f[13]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.vu0.vf[4] = c.r[8];
    c.vu0.vf[5] = c.r[9];
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    vu::mulabc4<0>(c.vu0, 15u, 1u, c.vu0.vf[4].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 2u, c.vu0.vf[5].w[0]);
    vu::maddbc4<1>(c.vu0, 15u, 6u, 3u, c.vu0.vf[0].w[3]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[6]);  c.pc = t; return; }
L_0019E340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E35Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_001F(c, 186u, depth + 1u); else { c.pc = 0x0019E230u; return; } if (c.pc != 0x0019E35Cu) [[unlikely]] return; }
L_0019E35C:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E368u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001F(c, 186u, depth + 1u); else { c.pc = 0x0019E230u; return; } if (c.pc != 0x0019E368u) [[unlikely]] return; }
L_0019E368:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019E380:
    set32(c.r[8], c.f[12]);
    set32(c.r[9], c.f[13]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.vu0.vf[4] = c.r[8];
    c.vu0.vf[5] = c.r[9];
    vu::mulbc4<0>(c.vu0, 15u, 1u, 1u, c.vu0.vf[4].w[0]);
    vu::mulbc4<1>(c.vu0, 15u, 2u, 2u, c.vu0.vf[5].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    set32(c.r[8], c.f[12]);
    set32(c.r[9], c.f[13]);
    ld128((c.r[4].w[0] + 96u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[4].w[0] + 112u) & ~15u, c.vu0.vf[2]);
    c.vu0.vf[4] = c.r[8];
    c.vu0.vf[5] = c.r[9];
    vu::mulbc4<0>(c.vu0, 15u, 1u, 1u, c.vu0.vf[4].w[0]);
    vu::mulbc4<1>(c.vu0, 15u, 2u, 2u, c.vu0.vf[5].w[0]);
    st128((c.r[4].w[0] + 96u) & ~15u, c.vu0.vf[1]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0] + 112u) & ~15u, c.vu0.vf[2]);  c.pc = t; return; }
L_0019E3E0:
    st32((c.r[4].w[0] + 36u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), 0u);  c.pc = t; return; }
L_0019E3F0:
    c.f[0] = ld32((c.r[4].w[0] + 96u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 100u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 68u), c.r[3].w[0]);  c.pc = t; return; }
L_0019E430:
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 68u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 100u), 0u);
    st32((c.r[4].w[0] + 112u), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 116u), c.r[3].w[0]);  c.pc = t; return; }
L_0019E470:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 17;
    { const bool t = c.r[17].sd[0] <= 0; c.r[16].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0019E4CC; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E4C0u); st32((c.r[21].w[0] + 148u), 0u);  if (depth < kMaxDepth) unit_001D(c, 236u, depth + 1u); else { c.pc = 0x00196690u; return; } if (c.pc != 0x0019E4C0u) [[unlikely]] return; }
L_0019E4C0:
    st32((c.r[21].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E4CCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 188u, depth + 1u); else { c.pc = 0x0019E2B0u; return; } if (c.pc != 0x0019E4CCu) [[unlikely]] return; }
L_0019E4CC:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_0019E5F8; } }
L_0019E4D4:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 10u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E4F4u); set32(c.r[5], c.r[21].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0019E4F4u) [[unlikely]] return; }
L_0019E4F4:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019E510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E510u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 197u, depth + 1u); else { c.pc = 0x0019E3E0u; return; } if (c.pc != 0x0019E510u) [[unlikely]] return; }
L_0019E510:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019E530; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E52Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 198u, depth + 1u); else { c.pc = 0x0019E3F0u; return; } if (c.pc != 0x0019E52Cu) [[unlikely]] return; }
L_0019E52C:
    c.budget -= 1;
L_0019E530:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019E550; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E54Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 199u, depth + 1u); else { c.pc = 0x0019E430u; return; } if (c.pc != 0x0019E54Cu) [[unlikely]] return; }
L_0019E54C:
    c.budget -= 1;
L_0019E550:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019E568; } }
    st32((c.r[16].w[0] + 148u), 0u);
    c.budget -= 1;
L_0019E568:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019E588; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E584u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 236u, depth + 1u); else { c.pc = 0x00196690u; return; } if (c.pc != 0x0019E584u) [[unlikely]] return; }
L_0019E584:
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 1;
L_0019E588:
    c.f[12] = ld32((c.r[20].w[0]));
    c.f[13] = ld32((c.r[20].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E598u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 192u, depth + 1u); else { c.pc = 0x0019E310u; return; } if (c.pc != 0x0019E598u) [[unlikely]] return; }
L_0019E598:
    c.f[12] = ld32((c.r[20].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E5A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 193u, depth + 1u); else { c.pc = 0x0019E340u; return; } if (c.pc != 0x0019E5A4u) [[unlikely]] return; }
L_0019E5A4:
    c.f[12] = ld32((c.r[20].w[0] + 12u));
    c.f[13] = ld32((c.r[20].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E5B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 196u, depth + 1u); else { c.pc = 0x0019E380u; return; } if (c.pc != 0x0019E5B4u) [[unlikely]] return; }
L_0019E5B4:
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E5D0u); set32(c.r[4], ld32((c.r[16].w[0] + 144u)));  if (depth < kMaxDepth) unit_001D(c, 237u, depth + 1u); else { c.pc = 0x001966C0u; return; } if (c.pc != 0x0019E5D0u) [[unlikely]] return; }
L_0019E5D0:
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] - 1u);
    st32((c.r[16].w[0] + 156u), c.r[19].w[0]);
    set32(c.r[18], c.r[18].w[0] + 4u);
    st32((c.r[16].w[0] + 152u), c.r[20].w[0]);
    set32(c.r[19], c.r[19].w[0] + 32u);
    set32(c.r[16], c.r[16].w[0] + 160u);
    c.budget -= 9;
    { const bool t = c.r[17].sd[0] > 0; set32(c.r[20], c.r[20].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019E4D4u | kUnwind; return; } goto L_0019E4D4; } }
    c.budget -= 1;
L_0019E5F8:
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
L_0019E620:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[29].w[0] + 20u), c.f[0]);
    st32((c.r[29].w[0] + 24u), 0u);
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    st32((c.r[29].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    st32((c.r[29].w[0] + 40u), 0u);
    c.f[0] = ld32((c.r[5].w[0] + 36u));
    st32((c.r[29].w[0] + 44u), c.f[0]);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 60u), 0u);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    st32((c.r[29].w[0] + 72u), 0u);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[29].w[0] + 76u), c.f[0]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E698u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 253u, depth + 1u); else { c.pc = 0x0018FFC0u; return; } if (c.pc != 0x0019E698u) [[unlikely]] return; }
L_0019E698:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0019E6B0:
    set32(c.r[29], c.r[29].w[0] - 352u);
    set32(c.r[2], 0u - 128u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 336u), c.f[12]);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 312u), c.f[12]);
    st32((c.r[29].w[0] + 252u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 288u), c.f[12]);
    st32((c.r[29].w[0] + 248u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 264u), c.f[12]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 26;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_0019E720; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[5].w[0] + 12u)));  if (t) { goto L_0019E724; } }
L_0019E720:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019E724:
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (t) { goto L_0019E738; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], ld32((c.r[5].w[0] + 16u)));  if (t) { goto L_0019E73C; } }
L_0019E738:
    set32(c.r[22], 0u + 3u);
    c.budget -= 1;
L_0019E73C:
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (t) { goto L_0019E750; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[23], ld32((c.r[5].w[0] + 20u)));  if (t) { goto L_0019E754; } }
L_0019E750:
    set32(c.r[23], 0u + 1u);
    c.budget -= 1;
L_0019E754:
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_0019E768; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], ld32((c.r[5].w[0] + 24u)));  if (t) { goto L_0019E76C; } }
L_0019E768:
    set32(c.r[30], 0u + 3u);
    c.budget -= 1;
L_0019E76C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E778u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 309u, depth + 1u); else { c.pc = 0x0018B880u; return; } if (c.pc != 0x0019E778u) [[unlikely]] return; }
L_0019E778:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E784u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 310u, depth + 1u); else { c.pc = 0x0018B8A0u; return; } if (c.pc != 0x0019E784u) [[unlikely]] return; }
L_0019E784:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E790u); c.r[5].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 312u, depth + 1u); else { c.pc = 0x0018B8E0u; return; } if (c.pc != 0x0019E790u) [[unlikely]] return; }
L_0019E790:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E79Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 311u, depth + 1u); else { c.pc = 0x0018B8C0u; return; } if (c.pc != 0x0019E79Cu) [[unlikely]] return; }
L_0019E79C:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_0019EDB8; } }
L_0019E7A4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019EDA8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[3].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019EDA8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 28u));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0019E818; } }
    st32((c.r[29].w[0] + 224u), c.r[5].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E818u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 5u, depth + 1u); else { c.pc = 0x0018C070u; return; } if (c.pc != 0x0019E818u) [[unlikely]] return; }
L_0019E818:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019E858; } }
    c.r[3].d[0] = c.r[16].d[0] & 24576ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] >> 13);
    set32(c.r[2], c.r[2].w[0] + 2336u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[23].d[0];  if (t) { goto L_0019E858; } }
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E854u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 309u, depth + 1u); else { c.pc = 0x0018B880u; return; } if (c.pc != 0x0019E854u) [[unlikely]] return; }
L_0019E854:
    c.budget -= 1;
L_0019E858:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019E898; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].d[0] = c.r[16].d[0] & c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] + 2352u);
    set32(c.r[3], c.r[3].w[0] >> 16);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[22].d[0];  if (t) { goto L_0019E898; } }
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E898u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 310u, depth + 1u); else { c.pc = 0x0018B8A0u; return; } if (c.pc != 0x0019E898u) [[unlikely]] return; }
L_0019E898:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019E8D8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].d[0] = c.r[16].d[0] & c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] + 2384u);
    set32(c.r[3], c.r[3].w[0] >> 21);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[30].d[0];  if (t) { goto L_0019E8D8; } }
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E8D8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 312u, depth + 1u); else { c.pc = 0x0018B8E0u; return; } if (c.pc != 0x0019E8D8u) [[unlikely]] return; }
L_0019E8D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019E910; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], 0u + 1u);  goto L_0019E8F8; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019E8F8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[18].d[0];  if (t) { goto L_0019E910; } }
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E90Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 311u, depth + 1u); else { c.pc = 0x0018B8C0u; return; } if (c.pc != 0x0019E90Cu) [[unlikely]] return; }
L_0019E90C:
    c.budget -= 1;
L_0019E910:
    set32(c.r[5], ld32((c.r[17].w[0] + 156u)));
    c.f[0] = 0u;
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 28u)));
    set32(c.r[3], 0u - c.r[4].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[11] = fp::cvt_s_w(c.f[1]);
    st32((c.r[29].w[0] + 280u), c.f[11]);
    st32((c.r[29].w[0] + 256u), c.f[11]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 24u)));
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 328u), c.f[1]);
    st32((c.r[29].w[0] + 304u), c.f[1]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 30u)));
    set32(c.r[3], 0u - c.r[4].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[6] = fp::cvt_s_w(c.f[2]);
    c.f[2] = c.r[4].w[0];
    st32((c.r[29].w[0] + 308u), c.f[6]);
    st32((c.r[29].w[0] + 260u), c.f[6]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 26u)));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 332u), c.f[3]);
    st32((c.r[29].w[0] + 284u), c.f[3]);
    c.f[2] = ld32((c.r[17].w[0] + 16u));
    c.f[10] = ld32((c.r[17].w[0]));
    c.f[8] = ld32((c.r[17].w[0] + 32u));
    c.f[9] = fp::ee::mul(c.fcr31, c.f[2], c.f[6]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[9]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[11]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[8], c.f[2]);
    st32((c.r[29].w[0] + 256u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    c.f[7] = ld32((c.r[17].w[0] + 4u));
    c.f[5] = ld32((c.r[17].w[0] + 36u));
    c.f[6] = fp::ee::mul(c.fcr31, c.f[2], c.f[6]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[6]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[11]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[5], c.f[2]);
    st32((c.r[29].w[0] + 260u), c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[11]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[8], c.f[2]);
    st32((c.r[29].w[0] + 280u), c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[11]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[5], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[9]);
    st32((c.r[29].w[0] + 284u), c.f[2]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[8], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[6]);
    st32((c.r[29].w[0] + 304u), c.f[2]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[5], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 308u), c.f[2]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[8], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[5], c.f[1]);
    st32((c.r[29].w[0] + 328u), c.f[2]);
    st32((c.r[29].w[0] + 332u), c.f[1]);
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 20u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 28u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 85;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 4u)));  if (t) { goto L_0019EA98; } }
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 292u), c.f[0]);
    st32((c.r[29].w[0] + 268u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[29].w[0] + 340u), c.f[0]);
    st32((c.r[29].w[0] + 316u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[29].w[0] + 320u), c.f[0]);
    st32((c.r[29].w[0] + 272u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[29].w[0] + 344u), c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 296u), c.f[0]);  if (t) { goto L_0019EB20; } }
L_0019EA98:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 30u));
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[3] = ld32((c.r[4].w[0] + 60u));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);
    st32((c.r[29].w[0] + 292u), c.f[1]);
    st32((c.r[29].w[0] + 268u), c.f[1]);
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);
    st32((c.r[29].w[0] + 340u), c.f[1]);
    st32((c.r[29].w[0] + 316u), c.f[1]);
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);
    st32((c.r[29].w[0] + 320u), c.f[1]);
    st32((c.r[29].w[0] + 272u), c.f[1]);
    c.f[2] = ld32((c.r[3].w[0] + 12u));
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 344u), c.f[0]);
    st32((c.r[29].w[0] + 296u), c.f[0]);
    c.budget -= 34;
L_0019EB20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EB50; } }
    c.f[3] = ld32((c.r[29].w[0] + 268u));
    c.f[2] = ld32((c.r[29].w[0] + 316u));
    c.f[1] = ld32((c.r[29].w[0] + 292u));
    c.f[0] = ld32((c.r[29].w[0] + 340u));
    st32((c.r[29].w[0] + 268u), c.f[2]);
    st32((c.r[29].w[0] + 316u), c.f[3]);
    st32((c.r[29].w[0] + 292u), c.f[0]);
    st32((c.r[29].w[0] + 340u), c.f[1]);
    c.budget -= 8;
L_0019EB50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EB80; } }
    c.f[3] = ld32((c.r[29].w[0] + 272u));
    c.f[2] = ld32((c.r[29].w[0] + 296u));
    c.f[1] = ld32((c.r[29].w[0] + 320u));
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    st32((c.r[29].w[0] + 272u), c.f[2]);
    st32((c.r[29].w[0] + 296u), c.f[3]);
    st32((c.r[29].w[0] + 320u), c.f[0]);
    st32((c.r[29].w[0] + 344u), c.f[1]);
    c.budget -= 8;
L_0019EB80:
    set32(c.r[2], ld32((c.r[17].w[0] + 144u)));
    set32(c.r[10], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[6], 0u + 4u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 256u);
    set32(c.r[8], c.r[2].w[0] >> 24);
    set32(c.r[3], c.r[2].w[0] >> 16);
    set32(c.r[12], ld32((c.r[10].w[0] + 32u)));
    c.r[9].d[0] = c.r[8].d[0] & 255ull;
    c.r[8].d[0] = c.r[3].d[0] & 255ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[11], c.r[12].w[0] >> 24);
    set32(c.r[3], c.r[12].w[0] >> 16);
    c.r[11].d[0] = c.r[11].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    mmi::mult(c, 0, c.r[9].w[0], c.r[11].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[8].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[13], c.r[3].w[0] + 255u);
    set32(c.r[13], c.r[13].w[0] >> 8);
    set32(c.r[3], c.r[2].w[0] >> 8);
    c.r[13].d[0] = c.r[13].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[11], c.r[11].w[0] + 255u);
    set32(c.r[14], c.r[13].w[0] << 16);
    set32(c.r[13], c.r[11].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[11], c.r[12].w[0] >> 8);
    c.r[15].d[0] = c.r[13].d[0] & 255ull;
    c.r[13].d[0] = c.r[11].d[0] & 255ull;
    c.r[12].d[0] = c.r[12].d[0] & 255ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[13].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[2].w[0], c.r[12].w[0]);
    c.r[12].d[0] = c.lo.d[1];
    set32(c.r[11], c.r[15].w[0] << 24);
    set32(c.r[12], c.r[12].w[0] + 255u);
    set32(c.r[12], c.r[12].w[0] >> 8);
    c.r[11].d[0] = c.r[11].d[0] | c.r[14].d[0];
    c.r[12].d[0] = c.r[12].d[0] & 255ull;
    set32(c.r[13], c.r[13].w[0] + 255u);
    set32(c.r[13], c.r[13].w[0] >> 8);
    c.r[13].d[0] = c.r[13].d[0] & 255ull;
    set32(c.r[13], c.r[13].w[0] << 8);
    c.r[11].d[0] = c.r[13].d[0] | c.r[11].d[0];
    c.r[11].d[0] = c.r[12].d[0] | c.r[11].d[0];
    st32((c.r[29].w[0] + 276u), c.r[11].w[0]);
    set32(c.r[13], ld32((c.r[10].w[0] + 36u)));
    set32(c.r[12], c.r[13].w[0] >> 24);
    set32(c.r[11], c.r[13].w[0] >> 16);
    c.r[12].d[0] = c.r[12].d[0] & 255ull;
    c.r[11].d[0] = c.r[11].d[0] & 255ull;
    mmi::mult(c, 0, c.r[9].w[0], c.r[12].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[8].w[0], c.r[11].w[0]);
    c.r[11].d[0] = c.lo.d[1];
    set32(c.r[14], c.r[11].w[0] + 255u);
    set32(c.r[11], c.r[13].w[0] >> 8);
    set32(c.r[14], c.r[14].w[0] >> 8);
    c.r[11].d[0] = c.r[11].d[0] & 255ull;
    c.r[14].d[0] = c.r[14].d[0] & 255ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    set32(c.r[12], c.r[12].w[0] + 255u);
    c.r[13].d[0] = c.r[13].d[0] & 255ull;
    set32(c.r[15], c.r[12].w[0] >> 8);
    mmi::mult(c, 1, c.r[2].w[0], c.r[13].w[0]);
    c.r[12].d[0] = c.lo.d[1];
    set32(c.r[14], c.r[14].w[0] << 16);
    c.r[13].d[0] = c.r[15].d[0] & 255ull;
    set32(c.r[12], c.r[12].w[0] + 255u);
    set32(c.r[11], c.r[11].w[0] + 255u);
    set32(c.r[15], c.r[13].w[0] << 24);
    set32(c.r[13], c.r[12].w[0] >> 8);
    set32(c.r[11], c.r[11].w[0] >> 8);
    c.r[11].d[0] = c.r[11].d[0] & 255ull;
    c.r[12].d[0] = c.r[15].d[0] | c.r[14].d[0];
    set32(c.r[11], c.r[11].w[0] << 8);
    c.r[13].d[0] = c.r[13].d[0] & 255ull;
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    c.r[11].d[0] = c.r[13].d[0] | c.r[11].d[0];
    st32((c.r[29].w[0] + 300u), c.r[11].w[0]);
    set32(c.r[13], ld32((c.r[10].w[0] + 40u)));
    set32(c.r[12], c.r[13].w[0] >> 24);
    set32(c.r[11], c.r[13].w[0] >> 16);
    c.r[12].d[0] = c.r[12].d[0] & 255ull;
    c.r[11].d[0] = c.r[11].d[0] & 255ull;
    mmi::mult(c, 0, c.r[9].w[0], c.r[12].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[8].w[0], c.r[11].w[0]);
    c.r[11].d[0] = c.lo.d[1];
    set32(c.r[14], c.r[11].w[0] + 255u);
    set32(c.r[11], c.r[13].w[0] >> 8);
    set32(c.r[14], c.r[14].w[0] >> 8);
    c.r[11].d[0] = c.r[11].d[0] & 255ull;
    c.r[14].d[0] = c.r[14].d[0] & 255ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    set32(c.r[12], c.r[12].w[0] + 255u);
    c.r[13].d[0] = c.r[13].d[0] & 255ull;
    set32(c.r[15], c.r[12].w[0] >> 8);
    mmi::mult(c, 1, c.r[2].w[0], c.r[13].w[0]);
    c.r[12].d[0] = c.lo.d[1];
    set32(c.r[14], c.r[14].w[0] << 16);
    c.r[13].d[0] = c.r[15].d[0] & 255ull;
    set32(c.r[12], c.r[12].w[0] + 255u);
    set32(c.r[11], c.r[11].w[0] + 255u);
    set32(c.r[15], c.r[13].w[0] << 24);
    set32(c.r[13], c.r[12].w[0] >> 8);
    set32(c.r[11], c.r[11].w[0] >> 8);
    c.r[11].d[0] = c.r[11].d[0] & 255ull;
    c.r[12].d[0] = c.r[15].d[0] | c.r[14].d[0];
    set32(c.r[11], c.r[11].w[0] << 8);
    c.r[13].d[0] = c.r[13].d[0] & 255ull;
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    c.r[11].d[0] = c.r[13].d[0] | c.r[11].d[0];
    st32((c.r[29].w[0] + 324u), c.r[11].w[0]);
    set32(c.r[10], ld32((c.r[10].w[0] + 44u)));
    set32(c.r[12], c.r[10].w[0] >> 24);
    set32(c.r[11], c.r[10].w[0] >> 16);
    c.r[12].d[0] = c.r[12].d[0] & 255ull;
    c.r[11].d[0] = c.r[11].d[0] & 255ull;
    mmi::mult(c, 0, c.r[9].w[0], c.r[12].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[8].w[0], c.r[11].w[0]);
    c.r[8].d[0] = c.lo.d[1];
    set32(c.r[11], c.r[8].w[0] + 255u);
    set32(c.r[8], c.r[10].w[0] >> 8);
    set32(c.r[12], c.r[11].w[0] >> 8);
    set32(c.r[9], c.r[9].w[0] + 255u);
    c.r[11].d[0] = c.r[8].d[0] & 255ull;
    set32(c.r[9], c.r[9].w[0] >> 8);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[8].d[0] = c.r[10].d[0] & 255ull;
    mmi::mult(c, 1, c.r[2].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    c.r[12].d[0] = c.r[12].d[0] & 255ull;
    c.r[9].d[0] = c.r[9].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 255u);
    set32(c.r[2], c.r[2].w[0] >> 8);
    set32(c.r[8], c.r[12].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] + 255u);
    set32(c.r[9], c.r[9].w[0] << 24);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 138;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EDA8u); st32((c.r[29].w[0] + 348u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 6u, depth + 1u); else { c.pc = 0x0018C1F0u; return; } if (c.pc != 0x0019EDA8u) [[unlikely]] return; }
L_0019EDA8:
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] > 0; set32(c.r[20], c.r[20].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019E7A4u | kUnwind; return; } goto L_0019E7A4; } }
    c.budget -= 1;
L_0019EDB8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_0019EDF0:
    set32(c.r[29], c.r[29].w[0] - 352u);
    set32(c.r[2], 0u - 128u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 336u), c.f[12]);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 312u), c.f[12]);
    st32((c.r[29].w[0] + 252u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 288u), c.f[12]);
    st32((c.r[29].w[0] + 248u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 264u), c.f[12]);
    st32((c.r[29].w[0] + 240u), c.r[10].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 27;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_0019EE64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[5].w[0] + 12u)));  if (t) { goto L_0019EE68; } }
L_0019EE64:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019EE68:
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (t) { goto L_0019EE7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], ld32((c.r[5].w[0] + 16u)));  if (t) { goto L_0019EE80; } }
L_0019EE7C:
    set32(c.r[22], 0u + 3u);
    c.budget -= 1;
L_0019EE80:
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (t) { goto L_0019EE94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[23], ld32((c.r[5].w[0] + 20u)));  if (t) { goto L_0019EE98; } }
L_0019EE94:
    set32(c.r[23], 0u + 1u);
    c.budget -= 1;
L_0019EE98:
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_0019EEAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], ld32((c.r[5].w[0] + 24u)));  if (t) { goto L_0019EEB0; } }
L_0019EEAC:
    set32(c.r[30], 0u + 3u);
    c.budget -= 1;
L_0019EEB0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EEBCu); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 309u, depth + 1u); else { c.pc = 0x0018B880u; return; } if (c.pc != 0x0019EEBCu) [[unlikely]] return; }
L_0019EEBC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EEC8u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 310u, depth + 1u); else { c.pc = 0x0018B8A0u; return; } if (c.pc != 0x0019EEC8u) [[unlikely]] return; }
L_0019EEC8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EED4u); c.r[5].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 312u, depth + 1u); else { c.pc = 0x0018B8E0u; return; } if (c.pc != 0x0019EED4u) [[unlikely]] return; }
L_0019EED4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EEE0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 311u, depth + 1u); else { c.pc = 0x0018B8C0u; return; } if (c.pc != 0x0019EEE0u) [[unlikely]] return; }
L_0019EEE0:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_0019F508; } }
L_0019EEE8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019F4F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[3].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019F4F8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 28u));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0019EF60; } }
    st32((c.r[29].w[0] + 224u), c.r[5].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EF5Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 5u, depth + 1u); else { c.pc = 0x0018C070u; return; } if (c.pc != 0x0019EF5Cu) [[unlikely]] return; }
L_0019EF5C:
    c.budget -= 1;
L_0019EF60:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019EFA0; } }
    c.r[3].d[0] = c.r[16].d[0] & 24576ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] >> 13);
    set32(c.r[2], c.r[2].w[0] + 2336u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[23].d[0];  if (t) { goto L_0019EFA0; } }
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EF9Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 309u, depth + 1u); else { c.pc = 0x0018B880u; return; } if (c.pc != 0x0019EF9Cu) [[unlikely]] return; }
L_0019EF9C:
    c.budget -= 1;
L_0019EFA0:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019EFE0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].d[0] = c.r[16].d[0] & c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] + 2352u);
    set32(c.r[3], c.r[3].w[0] >> 16);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[22].d[0];  if (t) { goto L_0019EFE0; } }
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EFE0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 310u, depth + 1u); else { c.pc = 0x0018B8A0u; return; } if (c.pc != 0x0019EFE0u) [[unlikely]] return; }
L_0019EFE0:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019F020; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].d[0] = c.r[16].d[0] & c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] + 2384u);
    set32(c.r[3], c.r[3].w[0] >> 21);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[30].d[0];  if (t) { goto L_0019F020; } }
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F020u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 312u, depth + 1u); else { c.pc = 0x0018B8E0u; return; } if (c.pc != 0x0019F020u) [[unlikely]] return; }
L_0019F020:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019F058; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], 0u + 1u);  goto L_0019F040; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019F040:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[18].d[0];  if (t) { goto L_0019F058; } }
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F054u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 311u, depth + 1u); else { c.pc = 0x0018B8C0u; return; } if (c.pc != 0x0019F054u) [[unlikely]] return; }
L_0019F054:
    c.budget -= 1;
L_0019F058:
    set32(c.r[5], ld32((c.r[17].w[0] + 156u)));
    c.f[0] = 0u;
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 28u)));
    set32(c.r[3], 0u - c.r[4].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[11] = fp::cvt_s_w(c.f[1]);
    st32((c.r[29].w[0] + 280u), c.f[11]);
    st32((c.r[29].w[0] + 256u), c.f[11]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 24u)));
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 328u), c.f[1]);
    st32((c.r[29].w[0] + 304u), c.f[1]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 30u)));
    set32(c.r[3], 0u - c.r[4].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[6] = fp::cvt_s_w(c.f[2]);
    c.f[2] = c.r[4].w[0];
    st32((c.r[29].w[0] + 308u), c.f[6]);
    st32((c.r[29].w[0] + 260u), c.f[6]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 26u)));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 332u), c.f[3]);
    st32((c.r[29].w[0] + 284u), c.f[3]);
    c.f[2] = ld32((c.r[17].w[0] + 16u));
    c.f[10] = ld32((c.r[17].w[0]));
    c.f[8] = ld32((c.r[17].w[0] + 32u));
    c.f[9] = fp::ee::mul(c.fcr31, c.f[2], c.f[6]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[9]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[11]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[8], c.f[2]);
    st32((c.r[29].w[0] + 256u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    c.f[7] = ld32((c.r[17].w[0] + 4u));
    c.f[5] = ld32((c.r[17].w[0] + 36u));
    c.f[6] = fp::ee::mul(c.fcr31, c.f[2], c.f[6]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[6]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[11]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[5], c.f[2]);
    st32((c.r[29].w[0] + 260u), c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[11]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[8], c.f[2]);
    st32((c.r[29].w[0] + 280u), c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[11]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[5], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[9]);
    st32((c.r[29].w[0] + 284u), c.f[2]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[8], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[6]);
    st32((c.r[29].w[0] + 304u), c.f[2]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[5], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 308u), c.f[2]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[8], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[5], c.f[1]);
    st32((c.r[29].w[0] + 328u), c.f[2]);
    st32((c.r[29].w[0] + 332u), c.f[1]);
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 20u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 28u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 85;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 4u)));  if (t) { goto L_0019F1E0; } }
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 292u), c.f[0]);
    st32((c.r[29].w[0] + 268u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[29].w[0] + 340u), c.f[0]);
    st32((c.r[29].w[0] + 316u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[29].w[0] + 320u), c.f[0]);
    st32((c.r[29].w[0] + 272u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[29].w[0] + 344u), c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 296u), c.f[0]);  if (t) { goto L_0019F268; } }
L_0019F1E0:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 30u));
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[3] = ld32((c.r[4].w[0] + 60u));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);
    st32((c.r[29].w[0] + 292u), c.f[1]);
    st32((c.r[29].w[0] + 268u), c.f[1]);
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);
    st32((c.r[29].w[0] + 340u), c.f[1]);
    st32((c.r[29].w[0] + 316u), c.f[1]);
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);
    st32((c.r[29].w[0] + 320u), c.f[1]);
    st32((c.r[29].w[0] + 272u), c.f[1]);
    c.f[2] = ld32((c.r[3].w[0] + 12u));
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 344u), c.f[0]);
    st32((c.r[29].w[0] + 296u), c.f[0]);
    c.budget -= 34;
L_0019F268:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F298; } }
    c.f[3] = ld32((c.r[29].w[0] + 268u));
    c.f[2] = ld32((c.r[29].w[0] + 316u));
    c.f[1] = ld32((c.r[29].w[0] + 292u));
    c.f[0] = ld32((c.r[29].w[0] + 340u));
    st32((c.r[29].w[0] + 268u), c.f[2]);
    st32((c.r[29].w[0] + 316u), c.f[3]);
    st32((c.r[29].w[0] + 292u), c.f[0]);
    st32((c.r[29].w[0] + 340u), c.f[1]);
    c.budget -= 8;
L_0019F298:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F2C8; } }
    c.f[3] = ld32((c.r[29].w[0] + 272u));
    c.f[2] = ld32((c.r[29].w[0] + 296u));
    c.f[1] = ld32((c.r[29].w[0] + 320u));
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    st32((c.r[29].w[0] + 272u), c.f[2]);
    st32((c.r[29].w[0] + 296u), c.f[3]);
    st32((c.r[29].w[0] + 320u), c.f[0]);
    st32((c.r[29].w[0] + 344u), c.f[1]);
    c.budget -= 8;
L_0019F2C8:
    set32(c.r[11], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 144u)));
    set32(c.r[6], 0u + 4u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 256u);
    set32(c.r[12], ld32((c.r[11].w[0] + 32u)));
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[8], c.r[2].w[0] >> 24);
    set32(c.r[3], c.r[2].w[0] >> 16);
    c.r[10].d[0] = c.r[8].d[0] & 255ull;
    c.r[9].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[8], c.r[12].w[0] >> 24);
    set32(c.r[3], c.r[12].w[0] >> 16);
    c.r[8].d[0] = c.r[8].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    mmi::mult(c, 0, c.r[10].w[0], c.r[8].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[9].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[13], c.r[3].w[0] + 255u);
    set32(c.r[13], c.r[13].w[0] >> 8);
    set32(c.r[3], c.r[2].w[0] >> 8);
    c.r[13].d[0] = c.r[13].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[8], c.r[8].w[0] + 255u);
    set32(c.r[14], c.r[13].w[0] << 16);
    set32(c.r[13], c.r[8].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[15].d[0] = c.r[13].d[0] & 255ull;
    set32(c.r[8], c.r[12].w[0] >> 8);
    c.r[13].d[0] = c.r[8].d[0] & 255ull;
    set32(c.r[15], c.r[15].w[0] << 24);
    c.r[8].d[0] = c.r[12].d[0] & 255ull;
    c.r[12].d[0] = c.r[15].d[0] | c.r[14].d[0];
    mmi::mult(c, 1, c.r[2].w[0], c.r[8].w[0]);
    c.r[8].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[3].w[0], c.r[13].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    set32(c.r[8], c.r[8].w[0] + 255u);
    set32(c.r[14], c.r[14].w[0] + 255u);
    set32(c.r[13], c.r[8].w[0] >> 8);
    set32(c.r[14], c.r[14].w[0] >> 8);
    c.r[13].d[0] = c.r[13].d[0] & 255ull;
    c.r[14].d[0] = c.r[14].d[0] & 255ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[14], c.r[14].w[0] << 8);
    c.r[12].d[0] = c.r[14].d[0] | c.r[12].d[0];
    c.r[12].d[0] = c.r[13].d[0] | c.r[12].d[0];
    st32((c.r[29].w[0] + 276u), c.r[12].w[0]);
    set32(c.r[14], ld32((c.r[11].w[0] + 36u)));
    set32(c.r[13], c.r[14].w[0] >> 24);
    set32(c.r[12], c.r[14].w[0] >> 16);
    c.r[13].d[0] = c.r[13].d[0] & 255ull;
    c.r[12].d[0] = c.r[12].d[0] & 255ull;
    mmi::mult(c, 0, c.r[10].w[0], c.r[13].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[9].w[0], c.r[12].w[0]);
    c.r[12].d[0] = c.lo.d[1];
    set32(c.r[15], c.r[12].w[0] + 255u);
    set32(c.r[12], c.r[14].w[0] >> 8);
    set32(c.r[15], c.r[15].w[0] >> 8);
    c.r[12].d[0] = c.r[12].d[0] & 255ull;
    c.r[15].d[0] = c.r[15].d[0] & 255ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    set32(c.r[13], c.r[13].w[0] + 255u);
    c.r[14].d[0] = c.r[14].d[0] & 255ull;
    set32(c.r[16], c.r[13].w[0] >> 8);
    mmi::mult(c, 1, c.r[2].w[0], c.r[14].w[0]);
    c.r[13].d[0] = c.lo.d[1];
    set32(c.r[15], c.r[15].w[0] << 16);
    c.r[14].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[13], c.r[13].w[0] + 255u);
    set32(c.r[12], c.r[12].w[0] + 255u);
    set32(c.r[16], c.r[14].w[0] << 24);
    set32(c.r[12], c.r[12].w[0] >> 8);
    set32(c.r[14], c.r[13].w[0] >> 8);
    c.r[12].d[0] = c.r[12].d[0] & 255ull;
    c.r[13].d[0] = c.r[16].d[0] | c.r[15].d[0];
    set32(c.r[12], c.r[12].w[0] << 8);
    c.r[14].d[0] = c.r[14].d[0] & 255ull;
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    c.r[12].d[0] = c.r[14].d[0] | c.r[12].d[0];
    st32((c.r[29].w[0] + 300u), c.r[12].w[0]);
    set32(c.r[14], ld32((c.r[11].w[0] + 40u)));
    set32(c.r[13], c.r[14].w[0] >> 24);
    set32(c.r[12], c.r[14].w[0] >> 16);
    c.r[13].d[0] = c.r[13].d[0] & 255ull;
    c.r[12].d[0] = c.r[12].d[0] & 255ull;
    mmi::mult(c, 0, c.r[10].w[0], c.r[13].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[9].w[0], c.r[12].w[0]);
    c.r[12].d[0] = c.lo.d[1];
    set32(c.r[15], c.r[12].w[0] + 255u);
    set32(c.r[12], c.r[14].w[0] >> 8);
    set32(c.r[15], c.r[15].w[0] >> 8);
    c.r[12].d[0] = c.r[12].d[0] & 255ull;
    c.r[15].d[0] = c.r[15].d[0] & 255ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    set32(c.r[13], c.r[13].w[0] + 255u);
    c.r[14].d[0] = c.r[14].d[0] & 255ull;
    set32(c.r[16], c.r[13].w[0] >> 8);
    mmi::mult(c, 1, c.r[2].w[0], c.r[14].w[0]);
    c.r[13].d[0] = c.lo.d[1];
    set32(c.r[15], c.r[15].w[0] << 16);
    c.r[14].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[13], c.r[13].w[0] + 255u);
    set32(c.r[12], c.r[12].w[0] + 255u);
    set32(c.r[16], c.r[14].w[0] << 24);
    set32(c.r[12], c.r[12].w[0] >> 8);
    set32(c.r[14], c.r[13].w[0] >> 8);
    c.r[12].d[0] = c.r[12].d[0] & 255ull;
    c.r[13].d[0] = c.r[16].d[0] | c.r[15].d[0];
    set32(c.r[12], c.r[12].w[0] << 8);
    c.r[14].d[0] = c.r[14].d[0] & 255ull;
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    c.r[12].d[0] = c.r[14].d[0] | c.r[12].d[0];
    st32((c.r[29].w[0] + 324u), c.r[12].w[0]);
    set32(c.r[11], ld32((c.r[11].w[0] + 44u)));
    set32(c.r[13], c.r[11].w[0] >> 24);
    set32(c.r[12], c.r[11].w[0] >> 16);
    c.r[13].d[0] = c.r[13].d[0] & 255ull;
    c.r[12].d[0] = c.r[12].d[0] & 255ull;
    mmi::mult(c, 0, c.r[10].w[0], c.r[13].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[9].w[0], c.r[12].w[0]);
    c.r[9].d[0] = c.lo.d[1];
    set32(c.r[12], c.r[9].w[0] + 255u);
    set32(c.r[9], c.r[11].w[0] >> 8);
    set32(c.r[13], c.r[12].w[0] >> 8);
    set32(c.r[10], c.r[10].w[0] + 255u);
    c.r[12].d[0] = c.r[9].d[0] & 255ull;
    set32(c.r[10], c.r[10].w[0] >> 8);
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[9].d[0] = c.r[11].d[0] & 255ull;
    mmi::mult(c, 1, c.r[2].w[0], c.r[9].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    c.r[13].d[0] = c.r[13].d[0] & 255ull;
    c.r[10].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 255u);
    set32(c.r[2], c.r[2].w[0] >> 8);
    set32(c.r[9], c.r[13].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] + 255u);
    set32(c.r[10], c.r[10].w[0] << 24);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 139;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F4F4u); st32((c.r[29].w[0] + 348u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 15u, depth + 1u); else { c.pc = 0x0018C760u; return; } if (c.pc != 0x0019F4F4u) [[unlikely]] return; }
L_0019F4F4:
    c.budget -= 1;
L_0019F4F8:
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] > 0; set32(c.r[20], c.r[20].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019EEE8u | kUnwind; return; } goto L_0019EEE8; } }
    c.budget -= 1;
L_0019F508:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_0019F540:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[6], c.r[6].w[0] << 5);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    set32(c.r[2], 0u - 16u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.f[21] = c.f[12];
    c.f[20] = c.f[13];
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[18], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[20], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[21], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[21].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F5C0u); set32(c.r[4], c.r[2].w[0] >> 4);  if (depth < kMaxDepth) unit_001F(c, 266u, depth + 1u); else { c.pc = 0x0019F970u; return; } if (c.pc != 0x0019F5C0u) [[unlikely]] return; }
L_0019F5C0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + 15u);
    set32(c.r[2], 0u - 16u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F5DCu); set32(c.r[4], c.r[2].w[0] >> 4);  if (depth < kMaxDepth) unit_001F(c, 266u, depth + 1u); else { c.pc = 0x0019F970u; return; } if (c.pc != 0x0019F5DCu) [[unlikely]] return; }
L_0019F5DC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[21].w[0] << 6);
    set32(c.r[3], c.r[2].w[0] + 15u);
    set32(c.r[2], 0u - 16u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F5F8u); set32(c.r[4], c.r[2].w[0] >> 4);  if (depth < kMaxDepth) unit_001F(c, 266u, depth + 1u); else { c.pc = 0x0019F970u; return; } if (c.pc != 0x0019F5F8u) [[unlikely]] return; }
L_0019F5F8:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F610u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 154u, depth + 1u); else { c.pc = 0x0019DC70u; return; } if (c.pc != 0x0019F610u) [[unlikely]] return; }
L_0019F610:
    set32(c.r[6], ld32((c.r[20].w[0] + 32u)));
    c.r[9].d[0] = c.r[30].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F62Cu); c.r[8].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 200u, depth + 1u); else { c.pc = 0x0019E470u; return; } if (c.pc != 0x0019F62Cu) [[unlikely]] return; }
L_0019F62C:
    set32(c.r[8], ld32((c.r[20].w[0] + 40u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F64Cu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 215u, depth + 1u); else { c.pc = 0x0019E6B0u; return; } if (c.pc != 0x0019F64Cu) [[unlikely]] return; }
L_0019F64C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F654u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 267u, depth + 1u); else { c.pc = 0x0019F9C0u; return; } if (c.pc != 0x0019F654u) [[unlikely]] return; }
L_0019F654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F65Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 267u, depth + 1u); else { c.pc = 0x0019F9C0u; return; } if (c.pc != 0x0019F65Cu) [[unlikely]] return; }
L_0019F65C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F664u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 267u, depth + 1u); else { c.pc = 0x0019F9C0u; return; } if (c.pc != 0x0019F664u) [[unlikely]] return; }
L_0019F664:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0019F6A0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    set32(c.r[6], c.r[6].w[0] << 5);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    set32(c.r[2], 0u - 16u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0] + 176u), c.r[8].w[0]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.f[21] = c.f[12];
    c.f[20] = c.f[13];
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[18], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[20], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[21], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[21].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F724u); set32(c.r[4], c.r[2].w[0] >> 4);  if (depth < kMaxDepth) unit_001F(c, 266u, depth + 1u); else { c.pc = 0x0019F970u; return; } if (c.pc != 0x0019F724u) [[unlikely]] return; }
L_0019F724:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + 15u);
    set32(c.r[2], 0u - 16u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F740u); set32(c.r[4], c.r[2].w[0] >> 4);  if (depth < kMaxDepth) unit_001F(c, 266u, depth + 1u); else { c.pc = 0x0019F970u; return; } if (c.pc != 0x0019F740u) [[unlikely]] return; }
L_0019F740:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[21].w[0] << 6);
    set32(c.r[3], c.r[2].w[0] + 15u);
    set32(c.r[2], 0u - 16u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F75Cu); set32(c.r[4], c.r[2].w[0] >> 4);  if (depth < kMaxDepth) unit_001F(c, 266u, depth + 1u); else { c.pc = 0x0019F970u; return; } if (c.pc != 0x0019F75Cu) [[unlikely]] return; }
L_0019F75C:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F774u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 154u, depth + 1u); else { c.pc = 0x0019DC70u; return; } if (c.pc != 0x0019F774u) [[unlikely]] return; }
L_0019F774:
    set32(c.r[6], ld32((c.r[20].w[0] + 32u)));
    c.r[9].d[0] = c.r[30].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F790u); c.r[8].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 200u, depth + 1u); else { c.pc = 0x0019E470u; return; } if (c.pc != 0x0019F790u) [[unlikely]] return; }
L_0019F790:
    set32(c.r[8], ld32((c.r[20].w[0] + 40u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[29].w[0] + 176u)));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F7B4u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 227u, depth + 1u); else { c.pc = 0x0019EDF0u; return; } if (c.pc != 0x0019F7B4u) [[unlikely]] return; }
L_0019F7B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F7BCu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 267u, depth + 1u); else { c.pc = 0x0019F9C0u; return; } if (c.pc != 0x0019F7BCu) [[unlikely]] return; }
L_0019F7BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F7C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 267u, depth + 1u); else { c.pc = 0x0019F9C0u; return; } if (c.pc != 0x0019F7C4u) [[unlikely]] return; }
L_0019F7C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F7CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 267u, depth + 1u); else { c.pc = 0x0019F9C0u; return; } if (c.pc != 0x0019F7CCu) [[unlikely]] return; }
L_0019F7CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0019F810:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], c.r[17].w[0] << 5);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[20], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F864u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_001F(c, 154u, depth + 1u); else { c.pc = 0x0019DC70u; return; } if (c.pc != 0x0019F864u) [[unlikely]] return; }
L_0019F864:
    set32(c.r[6], ld32((c.r[19].w[0] + 32u)));
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F880u); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 200u, depth + 1u); else { c.pc = 0x0019E470u; return; } if (c.pc != 0x0019F880u) [[unlikely]] return; }
L_0019F880:
    st32((c.r[18].w[0] + 20u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 24u), c.f[20]);
    st32((c.r[18].w[0] + 4u), c.r[20].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0019F8B0:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[7], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[9], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 11;
    { set32(c.r[6], ld32((c.r[6].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0019E6B0u | kUnwind; return; } goto L_0019E6B0; }
L_0019F8E0:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[10].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[7], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[9], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 12;
    { set32(c.r[6], ld32((c.r[6].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0019EDF0u | kUnwind; return; } goto L_0019EDF0; }
L_0019F910:
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[4].w[0] + 63u);
    set32(c.r[4], 0u - 64u);
    c.r[6].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[5].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 20880u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 20884u), c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] - c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 20888u), c.r[4].w[0]);  c.pc = t; return; }
L_0019F950:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 20880u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 20884u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 20888u), 0u);  c.pc = t; return; }
L_0019F970:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[8], c.r[4].w[0] + 1u);
    set32(c.r[6], ld32((c.r[2].w[0] + 20884u)));
    set32(c.r[7], c.r[8].w[0] << 4);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] + 20880u);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 20884u), c.r[6].w[0]);
    st32((c.r[6].w[0]), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 20884u)));
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 20884u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 16u);  c.pc = t; return; }
L_0019F9C0:
    set32(c.r[5], ld32((c.r[4].w[0] - 12u)));
    set32(c.r[4], ld32((c.r[4].w[0] - 16u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_0019F9E0:
    set32(c.r[29], c.r[29].w[0] - 208u);
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
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[20], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[30], ld32((c.r[4].w[0])));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    st32((c.r[29].w[0] + 192u), c.r[5].w[0]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (t) { goto L_0019FC18; } }
L_0019FA30:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0019FC10; } }
    set32(c.r[23], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[22], ld32((c.r[20].w[0] + 12u)));  if (t) { goto L_0019FC08; } }
L_0019FA50:
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[22].w[0] + 4u)));  if (t) { goto L_0019FA80; } }
    c.budget -= 1;
L_0019FA60:
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 2u));
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FA78u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0020(c, 20u, depth + 1u); else { c.pc = 0x001A03F0u; return; } if (c.pc != 0x0019FA78u) [[unlikely]] return; }
L_0019FA78:
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 2;
L_0019FA80:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019FA60u | kUnwind; return; } goto L_0019FA60; } }
    set32(c.r[21], ld32((c.r[22].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FA94u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 23u, depth + 1u); else { c.pc = 0x001A0470u; return; } if (c.pc != 0x0019FA94u) [[unlikely]] return; }
L_0019FA94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019FBF0; } }
    c.budget -= 1;
L_0019FAA0:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FAB4u); set32(c.r[21], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_001D(c, 320u, depth + 1u); else { c.pc = 0x00197280u; return; } if (c.pc != 0x0019FAB4u) [[unlikely]] return; }
L_0019FAB4:
    set32(c.r[2], ld32((c.r[28].w[0] - 31000u)));
    vu::set_vi(c.vu0, 13u, c.r[2].w[0]);
    vcallms(c, 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FAC8u);  if (depth < kMaxDepth) unit_0020(c, 22u, depth + 1u); else { c.pc = 0x001A0440u; return; } if (c.pc != 0x0019FAC8u) [[unlikely]] return; }
L_0019FAC8:
    c.r[2].d[0] = ld16((c.r[21].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019FAE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FAE0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 23u, depth + 1u); else { c.pc = 0x001A0470u; return; } if (c.pc != 0x0019FAE0u) [[unlikely]] return; }
L_0019FAE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[19].d[0] = c.r[2].d[0] | 256ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0019FAF0:
    set32(c.r[16], c.vu0.vi[8]);
    c.r[2].d[0] = c.r[16].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019FB90; } }
    set32(c.r[17], 0u + 1u);
    lqc2_vu(c, 15u, 1u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    lqc2_vu(c, 15u, 2u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    lqc2_vu(c, 15u, 3u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    lqc2_vu(c, 15u, 4u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    lqc2_vu(c, 15u, 5u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    lqc2_vu(c, 15u, 6u, c.vu0.vi[7]); vu::set_vi(c.vu0, 7u, c.vu0.vi[7] + 1u);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[1]);
    st128((c.r[19].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    st128((c.r[19].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    st128((c.r[19].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[19].w[0] + 64u) & ~15u, c.vu0.vf[5]);
    st128((c.r[19].w[0] + 80u) & ~15u, c.vu0.vf[6]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20868u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019FB48; } }
    vu::move4(c.vu0, 8u, 27u, 3u);
    c.budget -= 1;
L_0019FB48:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[19].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31012u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019FB68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FB64u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 25u, depth + 1u); else { c.pc = 0x001A05A0u; return; } if (c.pc != 0x0019FB64u) [[unlikely]] return; }
L_0019FB64:
    c.budget -= 1;
L_0019FB68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20848u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 96u);  if (t) { goto L_0019FBA0; } }
    c.r[2].d[0] = c.r[16].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019FB90; } }
    vcallms(c, 16u);
    c.budget -= 2;
L_0019FB90:
    c.r[2].d[0] = c.r[16].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019FAF0u | kUnwind; return; } goto L_0019FAF0; } }
    c.budget -= 1;
L_0019FBA0:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_0019FBF0; } }
    c.r[1].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0019FBD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[3], c.r[18].w[0] - 1u);
    c.r[4].d[0] = c.r[2].d[0] | 256ull;
    set32(c.r[6], 0u + 6u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FBD8u); set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0019FBD8u) [[unlikely]] return; }
L_0019FBD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20848u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019FBF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0019FC24; } }
L_0019FBF0:
    c.r[2].d[0] = ld16((c.r[21].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019FAA0u | kUnwind; return; } goto L_0019FAA0; } }
    set32(c.r[22], c.r[22].w[0] + 12u);
    set32(c.r[23], c.r[23].w[0] - 1u);
    c.budget -= 2;
L_0019FC08:
    c.budget -= 2;
    { const bool t = c.r[23].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019FA50u | kUnwind; return; } goto L_0019FA50; } }
L_0019FC10:
    set32(c.r[20], c.r[20].w[0] + 16u);
    set32(c.r[30], c.r[30].w[0] - 1u);
    c.budget -= 2;
L_0019FC18:
    c.budget -= 2;
    if (c.r[30].sd[0] > 0) { set32(c.r[3], ld32((c.r[20].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0019FA30u | kUnwind; return; } goto L_0019FA30; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0019FC24:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0019FC60:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[22].d[0] = c.r[19].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[30].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[23], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[29].w[0] + 176u), c.r[8].w[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 160u), 0u);  if (t) { goto L_0019FDB8; } }
L_0019FCB4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[22], c.r[22].w[0] + 64u);  goto L_0019FDA8; }
    c.r[2].d[0] = ld16((c.r[23].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019FDA4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0019FDA4; } }
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    set32(c.r[2], c.f[0]);
    ld128((c.r[22].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    c.vu0.vf[5] = c.r[2];
    vcallms(c, 32u);
    set32(c.r[2], c.vu0.vi[1]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019FDA4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019FD58; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 64u)));  if (t) { goto L_0019FD50; } }
    c.budget -= 1;
L_0019FD28:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FD44u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x0019FD44u) [[unlikely]] return; }
L_0019FD44:
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 3;
L_0019FD50:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019FD28u | kUnwind; return; } goto L_0019FD28; } }
L_0019FD58:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FD6Cu); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 268u, depth + 1u); else { c.pc = 0x0019F9E0u; return; } if (c.pc != 0x0019FD6Cu) [[unlikely]] return; }
L_0019FD6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019FDA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    c.r[4].d[0] = c.r[2].d[0] | 256ull;
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 20848u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019FDA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 160u)));  if (t) { goto L_0019FDC4; } }
L_0019FDA4:
    set32(c.r[22], c.r[22].w[0] + 64u);
    c.budget -= 1;
L_0019FDA8:
    set32(c.r[18], c.r[18].w[0] + 96u);
    set32(c.r[23], c.r[23].w[0] + 2u);
    set32(c.r[30], c.r[30].w[0] - 1u);
    c.budget -= 4;
L_0019FDB8:
    c.budget -= 2;
    if (c.r[30].sd[0] > 0) { set32(c.r[2], ld32((c.r[18].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0019FCB4u | kUnwind; return; } goto L_0019FCB4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 1;
L_0019FDC4:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0019FE00:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[3], 0u - 64u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[2].d[0] | 3328ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    set32(c.r[4], 0u + 13056u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[17], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] >> 7);
    c.r[1].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 29;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[30], c.r[29].w[0] + 0u);  if (t) { goto L_0019FE8C; } }
    set32(c.r[3], c.r[4].w[0] << 7);
    set32(c.r[2], 0u - 16u);
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[2].w[0]);
    set32(c.r[19], c.r[29].w[0]);
    c.budget -= 6;
L_0019FE8C:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[4].w[0] << 6);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[18], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FEA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 54u, depth + 1u); else { c.pc = 0x00188C60u; return; } if (c.pc != 0x0019FEA4u) [[unlikely]] return; }
L_0019FEA4:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FEC4u); set32(c.r[9], c.r[9].w[0] + 20112u);  if (depth < kMaxDepth) unit_001A(c, 64u, depth + 1u); else { c.pc = 0x00188F60u; return; } if (c.pc != 0x0019FEC4u) [[unlikely]] return; }
L_0019FEC4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019FEE0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FEE0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 45u, depth + 1u); else { c.pc = 0x00188A30u; return; } if (c.pc != 0x0019FEE0u) [[unlikely]] return; }
L_0019FEE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FEECu); set32(c.r[4], c.r[4].w[0] - 15120u);  if (depth < kMaxDepth) unit_001D(c, 324u, depth + 1u); else { c.pc = 0x00197310u; return; } if (c.pc != 0x0019FEECu) [[unlikely]] return; }
L_0019FEEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FEF4u);  if (depth < kMaxDepth) unit_001D(c, 320u, depth + 1u); else { c.pc = 0x00197280u; return; } if (c.pc != 0x0019FEF4u) [[unlikely]] return; }
L_0019FEF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20852u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[21].w[0])));  if (t) { goto L_0019FF0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 128u);  if (t) { goto L_0019FF10; } }
L_0019FF0C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019FF10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[6], c.f[0]);
    ld128((c.r[20].w[0]) & ~15u, c.vu0.vf[25]);
    ld128((c.r[20].w[0] + 16u) & ~15u, c.vu0.vf[26]);
    vu::set_vi(c.vu0, 12u, c.r[3].w[0]);
    c.vu0.vf[27] = c.r[6];
    vu::set_vi(c.vu0, 1u, c.vu0.vi[0] + 8);
    vu::sub4<1>(c.vu0, 15u, 24u, 26u, 25u);
    for (int k = 0; k < 4; ++k) if (vu::lane(1u, k)) { const std::uint32_t v = c.vu0.vi[0]; __builtin_memcpy(vu0_data() + vu0_addr(c.vu0.vi[1]) + 4u * k, &v, 4); }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 20848u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    vu::set_vi(c.vu0, 1u, c.vu0.vi[0] + c.vu0.vi[0]);
    sqc2_vu(c, 15u, 4u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    sqc2_vu(c, 15u, 5u, c.vu0.vi[1]); vu::set_vi(c.vu0, 1u, c.vu0.vi[1] + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[5].d[0] = c.r[4].d[0] | 128ull;
    set32(c.r[6], 0u + 64u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FF6Cu); set32(c.r[7], 0u + 128u);  if (depth < kMaxDepth) unit_0020(c, 21u, depth + 1u); else { c.pc = 0x001A0420u; return; } if (c.pc != 0x0019FF6Cu) [[unlikely]] return; }
L_0019FF6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FF74u);  if (depth < kMaxDepth) unit_001D(c, 320u, depth + 1u); else { c.pc = 0x00197280u; return; } if (c.pc != 0x0019FF74u) [[unlikely]] return; }
L_0019FF74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FF8Cu); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 281u, depth + 1u); else { c.pc = 0x0019FC60u; return; } if (c.pc != 0x0019FF8Cu) [[unlikely]] return; }
L_0019FF8C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0019FFC8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], c.r[4].w[0] + 20896u);
    c.r[5].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FFACu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0019FFACu) [[unlikely]] return; }
L_0019FFAC:
    vu::set_vi(c.vu0, 1u, c.vu0.vi[0] + 8);
    { std::uint16_t v; __builtin_memcpy(&v, vu0_data() + vu0_addr(c.vu0.vi[1]) + 4u * 3u, 2); vu::set_vi(c.vu0, 1u, v); }
    set32(c.r[3], c.vu0.vi[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 20928u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 20896u);
    c.budget -= 7;
L_0019FFC8:
    set32(c.r[29], c.r[30].w[0] + 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
}

}
