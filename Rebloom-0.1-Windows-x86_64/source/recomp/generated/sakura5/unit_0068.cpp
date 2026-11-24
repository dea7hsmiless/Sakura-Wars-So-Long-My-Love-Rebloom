#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0068[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 8, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0,
    0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25,
    0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0,
    32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 49, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55,
    0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 64, 0, 0, 65, 0, 0, 66,
    0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0,
    0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0,
    0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0,
    0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0,
    152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0,
    0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0,
    163, 0, 164, 0, 0, 0, 165, 0, 166, 0, 167, 0, 168, 0, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0,
    176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0,
    0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0,
    0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188,
    0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0,
    0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0,
    0, 196, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    200, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206,
    0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223,
    0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0,
    0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0,
    247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0,
    0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 266, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0,
    284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0,
    0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0,
    0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    324, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    328, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0,
    0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0,
    345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0,
    348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0,
    0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0,
    0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0068(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002C0000;
    case 2u: goto L_002C0010;
    case 3u: goto L_002C0028;
    case 4u: goto L_002C002C;
    case 5u: goto L_002C0080;
    case 6u: goto L_002C008C;
    case 7u: goto L_002C00D0;
    case 8u: goto L_002C0118;
    case 9u: goto L_002C011C;
    case 10u: goto L_002C0128;
    case 11u: goto L_002C0158;
    case 12u: goto L_002C01F8;
    case 13u: goto L_002C0204;
    case 14u: goto L_002C02C0;
    case 15u: goto L_002C0300;
    case 16u: goto L_002C0320;
    case 17u: goto L_002C0380;
    case 18u: goto L_002C03C8;
    case 19u: goto L_002C0460;
    case 20u: goto L_002C0478;
    case 21u: goto L_002C04C0;
    case 22u: goto L_002C04D4;
    case 23u: goto L_002C0524;
    case 24u: goto L_002C0540;
    case 25u: goto L_002C057C;
    case 26u: goto L_002C0594;
    case 27u: goto L_002C05B0;
    case 28u: goto L_002C05CC;
    case 29u: goto L_002C05F0;
    case 30u: goto L_002C065C;
    case 31u: goto L_002C066C;
    case 32u: goto L_002C0680;
    case 33u: goto L_002C0690;
    case 34u: goto L_002C06B0;
    case 35u: goto L_002C06EC;
    case 36u: goto L_002C0700;
    case 37u: goto L_002C073C;
    case 38u: goto L_002C0750;
    case 39u: goto L_002C078C;
    case 40u: goto L_002C07A0;
    case 41u: goto L_002C07B0;
    case 42u: goto L_002C07D0;
    case 43u: goto L_002C07E0;
    case 44u: goto L_002C0814;
    case 45u: goto L_002C0820;
    case 46u: goto L_002C0830;
    case 47u: goto L_002C0864;
    case 48u: goto L_002C0870;
    case 49u: goto L_002C0878;
    case 50u: goto L_002C0890;
    case 51u: goto L_002C08A0;
    case 52u: goto L_002C094C;
    case 53u: goto L_002C0998;
    case 54u: goto L_002C09D0;
    case 55u: goto L_002C09FC;
    case 56u: goto L_002C0A08;
    case 57u: goto L_002C0A18;
    case 58u: goto L_002C0AC4;
    case 59u: goto L_002C0AE0;
    case 60u: goto L_002C0C4C;
    case 61u: goto L_002C0D60;
    case 62u: goto L_002C0E4C;
    case 63u: goto L_002C0E54;
    case 64u: goto L_002C0E64;
    case 65u: goto L_002C0E70;
    case 66u: goto L_002C0E7C;
    case 67u: goto L_002C0E8C;
    case 68u: goto L_002C0EA8;
    case 69u: goto L_002C0ECC;
    case 70u: goto L_002C0EDC;
    case 71u: goto L_002C0EF8;
    case 72u: goto L_002C0F3C;
    case 73u: goto L_002C0F4C;
    case 74u: goto L_002C0F68;
    case 75u: goto L_002C0FD0;
    case 76u: goto L_002C0FF4;
    case 77u: goto L_002C1010;
    case 78u: goto L_002C108C;
    case 79u: goto L_002C10B0;
    case 80u: goto L_002C10E8;
    case 81u: goto L_002C1130;
    case 82u: goto L_002C1160;
    case 83u: goto L_002C1190;
    case 84u: goto L_002C11D0;
    case 85u: goto L_002C1218;
    case 86u: goto L_002C1240;
    case 87u: goto L_002C1290;
    case 88u: goto L_002C12B0;
    case 89u: goto L_002C12EC;
    case 90u: goto L_002C1318;
    case 91u: goto L_002C1358;
    case 92u: goto L_002C137C;
    case 93u: goto L_002C13AC;
    case 94u: goto L_002C13B4;
    case 95u: goto L_002C13C0;
    case 96u: goto L_002C1400;
    case 97u: goto L_002C1458;
    case 98u: goto L_002C1470;
    case 99u: goto L_002C1504;
    case 100u: goto L_002C15A8;
    case 101u: goto L_002C15E0;
    case 102u: goto L_002C1610;
    case 103u: goto L_002C1650;
    case 104u: goto L_002C1678;
    case 105u: goto L_002C16AC;
    case 106u: goto L_002C16F0;
    case 107u: goto L_002C1718;
    case 108u: goto L_002C174C;
    case 109u: goto L_002C1790;
    case 110u: goto L_002C17B8;
    case 111u: goto L_002C17EC;
    case 112u: goto L_002C1830;
    case 113u: goto L_002C1870;
    case 114u: goto L_002C1908;
    case 115u: goto L_002C1938;
    case 116u: goto L_002C1964;
    case 117u: goto L_002C198C;
    case 118u: goto L_002C19C0;
    case 119u: goto L_002C19D8;
    case 120u: goto L_002C19F0;
    case 121u: goto L_002C1A00;
    case 122u: goto L_002C1A30;
    case 123u: goto L_002C1A74;
    case 124u: goto L_002C1AE4;
    case 125u: goto L_002C1AF0;
    case 126u: goto L_002C1B00;
    case 127u: goto L_002C1B60;
    case 128u: goto L_002C1BCC;
    case 129u: goto L_002C1C0C;
    case 130u: goto L_002C1C1C;
    case 131u: goto L_002C1C74;
    case 132u: goto L_002C1C84;
    case 133u: goto L_002C1C94;
    case 134u: goto L_002C1CB0;
    case 135u: goto L_002C1CF4;
    case 136u: goto L_002C1D14;
    case 137u: goto L_002C1D54;
    case 138u: goto L_002C1D64;
    case 139u: goto L_002C1D9C;
    case 140u: goto L_002C1DF4;
    case 141u: goto L_002C1E38;
    case 142u: goto L_002C1E54;
    case 143u: goto L_002C1EA4;
    case 144u: goto L_002C1EB0;
    case 145u: goto L_002C1EBC;
    case 146u: goto L_002C1EF0;
    case 147u: goto L_002C1F30;
    case 148u: goto L_002C1F38;
    case 149u: goto L_002C1F90;
    case 150u: goto L_002C2014;
    case 151u: goto L_002C2070;
    case 152u: goto L_002C2080;
    case 153u: goto L_002C2090;
    case 154u: goto L_002C20B4;
    case 155u: goto L_002C20C0;
    case 156u: goto L_002C20E8;
    case 157u: goto L_002C210C;
    case 158u: goto L_002C2120;
    case 159u: goto L_002C2130;
    case 160u: goto L_002C2150;
    case 161u: goto L_002C216C;
    case 162u: goto L_002C2174;
    case 163u: goto L_002C2180;
    case 164u: goto L_002C2188;
    case 165u: goto L_002C2198;
    case 166u: goto L_002C21A0;
    case 167u: goto L_002C21A8;
    case 168u: goto L_002C21B0;
    case 169u: goto L_002C21BC;
    case 170u: goto L_002C21D0;
    case 171u: goto L_002C21D8;
    case 172u: goto L_002C21E0;
    case 173u: goto L_002C21E8;
    case 174u: goto L_002C2200;
    case 175u: goto L_002C226C;
    case 176u: goto L_002C2280;
    case 177u: goto L_002C22C8;
    case 178u: goto L_002C22F4;
    case 179u: goto L_002C2304;
    case 180u: goto L_002C2314;
    case 181u: goto L_002C2348;
    case 182u: goto L_002C2374;
    case 183u: goto L_002C2384;
    case 184u: goto L_002C23A4;
    case 185u: goto L_002C23B4;
    case 186u: goto L_002C23C4;
    case 187u: goto L_002C23F0;
    case 188u: goto L_002C23FC;
    case 189u: goto L_002C240C;
    case 190u: goto L_002C2440;
    case 191u: goto L_002C2474;
    case 192u: goto L_002C2490;
    case 193u: goto L_002C249C;
    case 194u: goto L_002C24C0;
    case 195u: goto L_002C24F4;
    case 196u: goto L_002C2504;
    case 197u: goto L_002C2514;
    case 198u: goto L_002C2520;
    case 199u: goto L_002C2540;
    case 200u: goto L_002C2580;
    case 201u: goto L_002C258C;
    case 202u: goto L_002C2598;
    case 203u: goto L_002C25B0;
    case 204u: goto L_002C25D0;
    case 205u: goto L_002C25E0;
    case 206u: goto L_002C25FC;
    case 207u: goto L_002C2620;
    case 208u: goto L_002C264C;
    case 209u: goto L_002C2658;
    case 210u: goto L_002C26A0;
    case 211u: goto L_002C270C;
    case 212u: goto L_002C2730;
    case 213u: goto L_002C274C;
    case 214u: goto L_002C2754;
    case 215u: goto L_002C2780;
    case 216u: goto L_002C27A0;
    case 217u: goto L_002C27BC;
    case 218u: goto L_002C27CC;
    case 219u: goto L_002C27E0;
    case 220u: goto L_002C2820;
    case 221u: goto L_002C28BC;
    case 222u: goto L_002C28DC;
    case 223u: goto L_002C28FC;
    case 224u: goto L_002C2908;
    case 225u: goto L_002C296C;
    case 226u: goto L_002C2A10;
    case 227u: goto L_002C2A24;
    case 228u: goto L_002C2A38;
    case 229u: goto L_002C2A60;
    case 230u: goto L_002C2A70;
    case 231u: goto L_002C2AA8;
    case 232u: goto L_002C2AF8;
    case 233u: goto L_002C2B18;
    case 234u: goto L_002C2B40;
    case 235u: goto L_002C2B5C;
    case 236u: goto L_002C2BA0;
    case 237u: goto L_002C2BB0;
    case 238u: goto L_002C2BC8;
    case 239u: goto L_002C2C00;
    case 240u: goto L_002C2C1C;
    case 241u: goto L_002C2C60;
    case 242u: goto L_002C2C70;
    case 243u: goto L_002C2C90;
    case 244u: goto L_002C2CC0;
    case 245u: goto L_002C2CD0;
    case 246u: goto L_002C2CF0;
    case 247u: goto L_002C2D00;
    case 248u: goto L_002C2D3C;
    case 249u: goto L_002C2D60;
    case 250u: goto L_002C2D94;
    case 251u: goto L_002C2DC0;
    case 252u: goto L_002C2DF4;
    case 253u: goto L_002C2E20;
    case 254u: goto L_002C2E40;
    case 255u: goto L_002C2E50;
    case 256u: goto L_002C2E70;
    case 257u: goto L_002C2E7C;
    case 258u: goto L_002C2EB0;
    case 259u: goto L_002C2EE8;
    case 260u: goto L_002C2F08;
    case 261u: goto L_002C2F14;
    case 262u: goto L_002C2F30;
    case 263u: goto L_002C2F48;
    case 264u: goto L_002C2F58;
    case 265u: goto L_002C2F6C;
    case 266u: goto L_002C2F78;
    case 267u: goto L_002C2FA0;
    case 268u: goto L_002C2FBC;
    case 269u: goto L_002C2FD4;
    case 270u: goto L_002C2FF8;
    case 271u: goto L_002C3020;
    case 272u: goto L_002C3048;
    case 273u: goto L_002C3058;
    case 274u: goto L_002C307C;
    case 275u: goto L_002C30B0;
    case 276u: goto L_002C30E0;
    case 277u: goto L_002C30F0;
    case 278u: goto L_002C3118;
    case 279u: goto L_002C3150;
    case 280u: goto L_002C319C;
    case 281u: goto L_002C31BC;
    case 282u: goto L_002C31C8;
    case 283u: goto L_002C31E0;
    case 284u: goto L_002C3200;
    case 285u: goto L_002C3230;
    case 286u: goto L_002C3250;
    case 287u: goto L_002C32B0;
    case 288u: goto L_002C32C0;
    case 289u: goto L_002C3320;
    case 290u: goto L_002C3328;
    case 291u: goto L_002C3360;
    case 292u: goto L_002C33A4;
    case 293u: goto L_002C33CC;
    case 294u: goto L_002C33F0;
    case 295u: goto L_002C340C;
    case 296u: goto L_002C3418;
    case 297u: goto L_002C3468;
    case 298u: goto L_002C3470;
    case 299u: goto L_002C34A0;
    case 300u: goto L_002C34CC;
    case 301u: goto L_002C34E0;
    case 302u: goto L_002C3510;
    case 303u: goto L_002C3534;
    case 304u: goto L_002C353C;
    case 305u: goto L_002C355C;
    case 306u: goto L_002C35A0;
    case 307u: goto L_002C35D4;
    case 308u: goto L_002C35F0;
    case 309u: goto L_002C3610;
    case 310u: goto L_002C3634;
    case 311u: goto L_002C3650;
    case 312u: goto L_002C3670;
    case 313u: goto L_002C36B4;
    case 314u: goto L_002C36CC;
    case 315u: goto L_002C36E4;
    case 316u: goto L_002C36F8;
    case 317u: goto L_002C3720;
    case 318u: goto L_002C3780;
    case 319u: goto L_002C3790;
    case 320u: goto L_002C37CC;
    case 321u: goto L_002C37E0;
    case 322u: goto L_002C3828;
    case 323u: goto L_002C3840;
    case 324u: goto L_002C3880;
    case 325u: goto L_002C388C;
    case 326u: goto L_002C38A4;
    case 327u: goto L_002C38C0;
    case 328u: goto L_002C3900;
    case 329u: goto L_002C390C;
    case 330u: goto L_002C3924;
    case 331u: goto L_002C3940;
    case 332u: goto L_002C3950;
    case 333u: goto L_002C3960;
    case 334u: goto L_002C3970;
    case 335u: goto L_002C3984;
    case 336u: goto L_002C39C0;
    case 337u: goto L_002C39D4;
    case 338u: goto L_002C3A00;
    case 339u: goto L_002C3A80;
    case 340u: goto L_002C3AA4;
    case 341u: goto L_002C3B14;
    case 342u: goto L_002C3B28;
    case 343u: goto L_002C3B5C;
    case 344u: goto L_002C3B6C;
    case 345u: goto L_002C3B80;
    case 346u: goto L_002C3BCC;
    case 347u: goto L_002C3BE0;
    case 348u: goto L_002C3C00;
    case 349u: goto L_002C3C14;
    case 350u: goto L_002C3C50;
    case 351u: goto L_002C3C84;
    case 352u: goto L_002C3CB0;
    case 353u: goto L_002C3CCC;
    case 354u: goto L_002C3CE0;
    case 355u: goto L_002C3CF4;
    case 356u: goto L_002C3D08;
    case 357u: goto L_002C3D40;
    case 358u: goto L_002C3D64;
    case 359u: goto L_002C3DA0;
    case 360u: goto L_002C3DB4;
    case 361u: goto L_002C3DC4;
    case 362u: goto L_002C3E00;
    case 363u: goto L_002C3E14;
    case 364u: goto L_002C3E40;
    case 365u: goto L_002C3E74;
    case 366u: goto L_002C3ED0;
    case 367u: goto L_002C3F00;
    case 368u: goto L_002C3F40;
    case 369u: goto L_002C3F48;
    case 370u: goto L_002C3F64;
    case 371u: goto L_002C3F78;
    case 372u: goto L_002C3F9C;
    case 373u: goto L_002C3FC0;
    case 374u: goto L_002C3FC8;
    default: bad_entry(c, 0x002C0000u); return;
    }
L_002C0000:
    c.f[20] = c.f[12];
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0010u); st32((c.r[4].w[0] + 120u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0067(c, 349u, depth + 1u); else { c.pc = 0x002BFC80u; return; } if (c.pc != 0x002C0010u) [[unlikely]] return; }
L_002C0010:
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C002Cu); set32(c.r[19], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 5u, depth + 1u); else { c.pc = 0x002C0080u; return; } if (c.pc != 0x002C002Cu) [[unlikely]] return; }
    goto L_002C002C;
L_002C0028:
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_002C002C:
    st32((c.r[19].w[0] + 20u), c.r[16].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 2u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 24u), 0u);
    set32(c.r[2], 0u + 3u);
    st32((c.r[18].w[0] + 28u), c.f[20]);
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 28u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002C0080:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.budget -= 3;
L_002C008C:
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[19], ld32((c.r[3].w[0])));  if (t) { goto L_002C0294; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[6].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_002C0298; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C00D0u);  if (depth < kMaxDepth) unit_0068(c, 19u, depth + 1u); else { c.pc = 0x002C0460u; return; } if (c.pc != 0x002C00D0u) [[unlikely]] return; }
L_002C00D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0xFF440000u);  goto L_002C01B8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF160000u);
    c.r[3].d[0] = c.r[3].d[0] | 10524ull;
    st32((c.r[19].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 60u), c.r[3].w[0]);
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 108u)));
    c.budget -= 7;
    if (c.r[19].sd[0] > 0) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002C00FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002C017C; } }
L_002C00FC:
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] > 0; set32(c.r[20], c.r[3].w[0] + 76u);  if (t) { goto L_002C0114; } }
    c.f[1] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[20].w[0] + 92u));  if (t) { goto L_002C016C; } }
L_002C0114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C011Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 110u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002C011Cu) [[unlikely]] return; }
    goto L_002C011C;
L_002C0118:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 110u)));
    c.budget -= 1;
L_002C011C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0128u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002C0128u) [[unlikely]] return; }
L_002C0128:
    c.f[1] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C0150; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_002C0150:
    c.f[0] = 0u;
    c.budget -= 2;
L_002C0158:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C0168; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_002C0168:
    c.f[0] = ld32((c.r[20].w[0] + 92u));
    c.budget -= 1;
L_002C016C:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002C017C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C017C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0xFF4F0000u);  goto L_002C01A0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF240000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF940000u);
    c.r[4].d[0] = c.r[4].d[0] | 33237ull;
    c.r[3].d[0] = c.r[3].d[0] | 65022ull;
    st32((c.r[18].w[0] + 56u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_002C0288; } }
L_002C01A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFA0000u);
    c.r[4].d[0] = c.r[4].d[0] | 32035ull;
    c.r[3].d[0] = c.r[3].d[0] | 65441ull;
    st32((c.r[18].w[0] + 56u), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_002C0288; } }
L_002C01B8:
    c.r[3].d[0] = c.r[3].d[0] | 8744ull;
    st32((c.r[19].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 60u), c.r[3].w[0]);
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 108u)));
    c.budget -= 6;
    if (c.r[19].sd[0] > 0) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002C01D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002C0258; } }
L_002C01D8:
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] > 0; set32(c.r[20], c.r[3].w[0] + 76u);  if (t) { goto L_002C01F0; } }
    c.f[1] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[20].w[0] + 92u));  if (t) { goto L_002C0248; } }
L_002C01F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C01F8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 110u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002C01F8u) [[unlikely]] return; }
L_002C01F8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0204u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002C0204u) [[unlikely]] return; }
L_002C0204:
    c.f[1] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C022C; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_002C022C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C0244; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_002C0244:
    c.f[0] = ld32((c.r[20].w[0] + 92u));
    c.budget -= 1;
L_002C0248:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002C0258; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C0258:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0xFFA50000u);  goto L_002C0278; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF9A0000u);
    set32(c.r[3], 0u - 32018u);
    c.r[4].d[0] = c.r[4].d[0] | 16759ull;
    st32((c.r[18].w[0] + 56u), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_002C0288; } }
L_002C0278:
    set32(c.r[3], 0u - 26436u);
    c.r[4].d[0] = c.r[4].d[0] | 19550ull;
    st32((c.r[18].w[0] + 56u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 4;
L_002C0288:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 3;
L_002C0294:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002C0298:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002C02C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[5], 0u + 4u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0300u); st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0067(c, 349u, depth + 1u); else { c.pc = 0x002BFC80u; return; } if (c.pc != 0x002C0300u) [[unlikely]] return; }
L_002C0300:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0320u); set32(c.r[20], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 17u, depth + 1u); else { c.pc = 0x002C0380u; return; } if (c.pc != 0x002C0320u) [[unlikely]] return; }
L_002C0320:
    st32((c.r[20].w[0] + 20u), c.r[19].w[0]);
    set32(c.r[2], c.r[19].w[0] + 1u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] + 2u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] + 3u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 24u), 0u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0] + 28u), c.f[20]);
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002C0380:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[19], ld32((c.r[3].w[0])));  if (t) { goto L_002C043C; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[6].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002C0440; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C03C8u);  if (depth < kMaxDepth) unit_0068(c, 19u, depth + 1u); else { c.pc = 0x002C0460u; return; } if (c.pc != 0x002C03C8u) [[unlikely]] return; }
L_002C03C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0xFF350000u);  goto L_002C03FC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF1B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF4D0000u);
    c.r[5].d[0] = c.r[4].d[0] | 6974ull;
    c.r[4].d[0] = c.r[3].d[0] | 17293ull;
    st32((c.r[19].w[0] + 56u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF990000u);
    st32((c.r[19].w[0] + 60u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 34302ull;
    st32((c.r[18].w[0] + 56u), c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_002C0420; } }
L_002C03FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF750000u);
    c.r[5].d[0] = c.r[4].d[0] | 4153ull;
    c.r[4].d[0] = c.r[3].d[0] | 11132ull;
    st32((c.r[19].w[0] + 56u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFD00000u);
    st32((c.r[19].w[0] + 60u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 27610ull;
    st32((c.r[18].w[0] + 56u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 9;
L_002C0420:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFD80000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[4].d[0] | 63487ull;
    st32((c.r[17].w[0] + 56u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 7;
L_002C043C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002C0440:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C0460:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[5].w[0] + 148u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0478u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002C0478u) [[unlikely]] return; }
L_002C0478:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002C04A8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C04A4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[2], 0u + 20006u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C04A8; }
L_002C04A4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C04A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C04C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C04D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 372u, depth + 1u); else { c.pc = 0x00293560u; return; } if (c.pc != 0x002C04D4u) [[unlikely]] return; }
L_002C04D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 26640u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 26696u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16723ull;
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 22112u);
    st32((c.r[16].w[0] + 72u), 0u);
    set32(c.r[2], 0u + 26u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 480u), 0u);
    st32((c.r[16].w[0] + 484u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 488u), c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0524u); st32((c.r[16].w[0] + 492u), 0u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002C0524u) [[unlikely]] return; }
L_002C0524:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C0540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C0594; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 26640u);
    set32(c.r[2], c.r[2].w[0] + 26696u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C057Cu); st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 377u, depth + 1u); else { c.pc = 0x00293640u; return; } if (c.pc != 0x002C057Cu) [[unlikely]] return; }
L_002C057C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002C0598; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0594u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002C0594u) [[unlikely]] return; }
L_002C0594:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C0598:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C05B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C05CCu); set32(c.r[4], c.r[4].w[0] + 22160u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002C05CCu) [[unlikely]] return; }
L_002C05CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C05F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C06A0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002C06A4; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002C0688; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002C0678; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002C0654; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002C06A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C06A0; } }
L_002C0654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C065Cu);  if (depth < kMaxDepth) unit_005D(c, 19u, depth + 1u); else { c.pc = 0x00294230u; return; } if (c.pc != 0x002C065Cu) [[unlikely]] return; }
L_002C065C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C06A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C066Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 79u, depth + 1u); else { c.pc = 0x002C10B0u; return; } if (c.pc != 0x002C066Cu) [[unlikely]] return; }
L_002C066C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_002C06A0; } }
L_002C0678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0680u);  if (depth < kMaxDepth) unit_0068(c, 127u, depth + 1u); else { c.pc = 0x002C1B60u; return; } if (c.pc != 0x002C0680u) [[unlikely]] return; }
L_002C0680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C06A0; } }
L_002C0688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0690u);  if (depth < kMaxDepth) unit_005D(c, 19u, depth + 1u); else { c.pc = 0x00294230u; return; } if (c.pc != 0x002C0690u) [[unlikely]] return; }
L_002C0690:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C06A0; } }
    set32(c.r[3], 0u + 4u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 2;
L_002C06A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C06A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C06B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002C06F0; }
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002C06E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C06EC; } }
L_002C06E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C06ECu);  if (depth < kMaxDepth) unit_005C(c, 387u, depth + 1u); else { c.pc = 0x002936F0u; return; } if (c.pc != 0x002C06ECu) [[unlikely]] return; }
L_002C06EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002C06F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C0700:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002C0740; }
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002C0734; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C073C; } }
L_002C0734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C073Cu);  if (depth < kMaxDepth) unit_005C(c, 390u, depth + 1u); else { c.pc = 0x00293800u; return; } if (c.pc != 0x002C073Cu) [[unlikely]] return; }
L_002C073C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002C0740:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C0750:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002C0790; }
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002C0784; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C078C; } }
L_002C0784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C078Cu);  if (depth < kMaxDepth) unit_005C(c, 402u, depth + 1u); else { c.pc = 0x002939B0u; return; } if (c.pc != 0x002C078Cu) [[unlikely]] return; }
L_002C078C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002C0790:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C07A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C07B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002C07D0; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C07D0u); st32((c.r[4].w[0] + 480u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0068(c, 54u, depth + 1u); else { c.pc = 0x002C09D0u; return; } if (c.pc != 0x002C07D0u) [[unlikely]] return; }
L_002C07D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C07E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002C0818; }
    set32(c.r[2], 0u + 2u);
    st32((c.r[4].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0814u); st32((c.r[4].w[0] + 480u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0068(c, 54u, depth + 1u); else { c.pc = 0x002C09D0u; return; } if (c.pc != 0x002C0814u) [[unlikely]] return; }
L_002C0814:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002C0818:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C0820:
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_002C0830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C0878; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002C087C; }
    set32(c.r[5], ld32((c.r[5].w[0] + 144u)));
    st32((c.r[16].w[0] + 480u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0864u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002C0864u) [[unlikely]] return; }
L_002C0864:
    set32(c.r[5], ld32((c.r[2].w[0] + 1296u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0870u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 84u, depth + 1u); else { c.pc = 0x002C11D0u; return; } if (c.pc != 0x002C0870u) [[unlikely]] return; }
L_002C0870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0878u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 146u, depth + 1u); else { c.pc = 0x002C1EF0u; return; } if (c.pc != 0x002C0878u) [[unlikely]] return; }
L_002C0878:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C087C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C0890:
    c.budget -= 2;
    {  goto L_002C11D0; }
L_002C08A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002C09C0; }
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[6], ld32((c.r[17].w[0] + 96u)));  goto L_002C0914; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 96u)));  goto L_002C08EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C09BC; } }
L_002C08EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[3], 0u + 3u);
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0] + 292u)));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[6].w[0] + 292u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), 0u);  if (t) { goto L_002C09BC; } }
L_002C0914:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42500000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42600000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[6].w[0])));
    st32((c.r[6].w[0] + 208u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 292u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[6].w[0] + 292u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 212u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 292u), c.r[3].w[0]);  if (t) { goto L_002C099C; } }
L_002C094C:
    set32(c.r[6], c.r[16].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[3], 0u + 1u);
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[6], 0u + 24u);
    set32(c.r[7], ld32((c.r[4].w[0] + 160u)));
    st32((c.r[29].w[0] + 56u), 0u);
    set32(c.r[4], c.r[4].w[0] + 512u);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    st32((c.r[29].w[0] + 64u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 52u), 0u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0998u); st32((c.r[29].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002C0998u) [[unlikely]] return; }
L_002C0998:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002C099C:
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C094Cu | kUnwind; return; } goto L_002C094C; }
    set32(c.r[4], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[17].w[0] + 76u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 4;
L_002C09BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002C09C0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C09D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[18].w[0] + 52u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C09FCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x002C09FCu) [[unlikely]] return; }
L_002C09FC:
    st32((c.r[18].w[0] + 488u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0A08u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 13u, depth + 1u); else { c.pc = 0x00294110u; return; } if (c.pc != 0x002C0A08u) [[unlikely]] return; }
L_002C0A08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 20912u);  if (t) { goto L_002C0A3C; } }
L_002C0A18:
    set32(c.r[2], ld32((c.r[18].w[0] + 488u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002C0A3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 484u), c.r[5].w[0]);  if (t) { goto L_002C0A48; } }
L_002C0A3C:
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[5].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0A18u | kUnwind; return; } goto L_002C0A18; }
L_002C0A48:
    set32(c.r[2], ld32((c.r[18].w[0] + 484u)));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { set32(c.r[5], ld32((c.r[18].w[0] + 484u)));  goto L_002C0A5C; }
    st32((c.r[18].w[0] + 484u), 0u);
    set32(c.r[5], ld32((c.r[18].w[0] + 484u)));
    c.budget -= 2;
L_002C0A5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 20912u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[7], c.r[4].w[0] + 1u);
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_002C0AB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 140u)));  if (t) { goto L_002C0AB4; } }
L_002C0AB0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C0AB4:
    set32(c.r[6], ld32((c.r[2].w[0] + 84u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0AC4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005C(c, 404u, depth + 1u); else { c.pc = 0x00293A00u; return; } if (c.pc != 0x002C0AC4u) [[unlikely]] return; }
L_002C0AC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[3], 0u + 400u);
    set32(c.r[4], 0u + 401u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C0C10; } }
L_002C0AE0:
    set32(c.r[6], c.r[7].w[0] << 2);
    c.r[8].d[0] = c.r[7].sd[0] < 1ll ? 1ull : 0ull;
    c.r[8].d[0] = c.r[8].d[0] ^ 1ull;
    set32(c.r[9], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[10], ld32((c.r[9].w[0])));
    set32(c.r[9], ld32((c.r[10].w[0] + 292u)));
    c.r[9].d[0] = c.r[9].d[0] & c.r[5].d[0];
    c.budget -= 9;
    { const bool t = c.r[8].d[0] == 0ull; st32((c.r[10].w[0] + 292u), c.r[9].w[0]);  if (t) { goto L_002C0B10; } }
    set32(c.r[8], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002C0B10:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[8], ld32((c.r[18].w[0] + 96u)));  goto L_002C0B2C; }
    set32(c.r[8], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[8], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 284u), c.r[4].w[0]);  if (t) { goto L_002C0B38; } }
L_002C0B2C:
    set32(c.r[8], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0])));
    st32((c.r[8].w[0] + 284u), c.r[3].w[0]);
    c.budget -= 3;
L_002C0B38:
    set32(c.r[8], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[8], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[9], ld32((c.r[8].w[0])));
    set32(c.r[8], ld32((c.r[9].w[0] + 292u)));
    c.r[8].d[0] = c.r[8].d[0] | 4096ull;
    st32((c.r[9].w[0] + 292u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 9;
    if (c.r[8].d[0] != c.r[2].d[0]) { set32(c.r[8], ld32((c.r[16].w[0] + 12u)));  goto L_002C0B78; }
    set32(c.r[8], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[8], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[9], ld32((c.r[8].w[0])));
    set32(c.r[8], ld32((c.r[9].w[0] + 392u)));
    c.r[8].d[0] = c.r[8].d[0] | 4ull;
    st32((c.r[9].w[0] + 392u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 7;
L_002C0B78:
    set32(c.r[10], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[9], c.r[8].w[0] + 1u);
    set32(c.r[8], c.r[9].w[0] + c.r[10].w[0]);
    c.r[1].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { goto L_002C0BA8; } }
    set32(c.r[8], c.r[10].w[0] << 1);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    c.r[1].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[8].d[0] = 0ull < c.r[11].d[0] ? 1ull : 0ull;  goto L_002C0BAC; }
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002C0BA8:
    c.r[8].d[0] = 0ull < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002C0BAC:
    c.budget -= 2;
    if (c.r[8].d[0] != 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002C0C10; }
    set32(c.r[8], c.r[10].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[9], c.r[8].w[0] + c.r[9].w[0]);
    c.r[1].d[0] = c.r[7].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_002C0BE8; } }
    set32(c.r[8], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[1].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[8].d[0] = 0ull < c.r[10].d[0] ? 1ull : 0ull;  goto L_002C0BEC; }
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002C0BE8:
    c.r[8].d[0] = 0ull < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002C0BEC:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_002C0C0C; } }
    set32(c.r[8], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[8], ld32((c.r[6].w[0])));
    set32(c.r[6], ld32((c.r[8].w[0] + 392u)));
    c.r[6].d[0] = c.r[6].d[0] | 8ull;
    st32((c.r[8].w[0] + 392u), c.r[6].w[0]);
    c.budget -= 6;
L_002C0C0C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_002C0C10:
    set32(c.r[6], ld32((c.r[18].w[0] + 100u)));
    c.r[6].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[6].d[0] != 0ull) { set32(c.r[9], ld32((c.r[18].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0AE0u | kUnwind; return; } goto L_002C0AE0; }
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 96u)));  goto L_002C0CC8; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[6].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_002C0C44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 96u)));  if (t) { goto L_002C0E2C; } }
L_002C0C44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002C0CB0; } }
L_002C0C4C:
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002C0C7C; } }
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;  goto L_002C0C80; }
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_002C0C7C:
    c.r[2].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002C0C80:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002C0CB0; }
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 584u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 588u), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 10;
L_002C0CB0:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0C4Cu | kUnwind; return; } goto L_002C0C4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C0E28; } }
L_002C0CC8:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x42500000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x42600000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0])));
    st32((c.r[8].w[0] + 208u), c.r[7].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[7], ld32((c.r[8].w[0] + 292u)));
    c.r[7].d[0] = c.r[7].d[0] | c.r[3].d[0];
    st32((c.r[8].w[0] + 292u), c.r[7].w[0]);
    st32((c.r[8].w[0] + 212u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[8].w[0] + 292u)));
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    st32((c.r[8].w[0] + 292u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[7], ld32((c.r[6].w[0])));
    set32(c.r[6], ld32((c.r[7].w[0] + 292u)));
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    st32((c.r[7].w[0] + 292u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[7], ld32((c.r[6].w[0])));
    c.r[6].d[0] = ld16((c.r[7].w[0] + 360u));
    c.r[6].d[0] = c.r[6].d[0] | 16384ull;
    st16((c.r[7].w[0] + 360u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[7], ld32((c.r[6].w[0])));
    st32((c.r[7].w[0] + 240u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 292u)));
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    st32((c.r[7].w[0] + 292u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[7], ld32((c.r[6].w[0])));
    st32((c.r[7].w[0] + 244u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 292u)));
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.budget -= 38;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 292u), c.r[3].w[0]);  if (t) { goto L_002C0E18; } }
L_002C0D60:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[10], ld32((c.r[28].w[0] - 31600u)));
    set32(c.r[9], ld32((c.r[7].w[0])));
    set32(c.r[7], c.r[6].w[0] + 1u);
    set32(c.r[6], c.r[7].w[0] + c.r[8].w[0]);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[9].w[0] + 160u), c.r[10].w[0]);  if (t) { goto L_002C0DA8; } }
    set32(c.r[6], c.r[8].w[0] << 1);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[6].d[0] = 0ull < c.r[11].d[0] ? 1ull : 0ull;  goto L_002C0DAC; }
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002C0DA8:
    c.r[6].d[0] = 0ull < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002C0DAC:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002C0E18; }
    set32(c.r[6], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002C0DE8; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[6].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;  goto L_002C0DEC; }
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002C0DE8:
    c.r[6].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002C0DEC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002C0E14; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    st32((c.r[6].w[0] + 584u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 588u), c.r[4].w[0]);
    c.budget -= 8;
L_002C0E14:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002C0E18:
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[7], ld32((c.r[18].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0D60u | kUnwind; return; } goto L_002C0D60; }
L_002C0E28:
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 1;
L_002C0E2C:
    c.f[12] = 0u;
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.f[13] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0E4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002C0E4Cu) [[unlikely]] return; }
L_002C0E4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0E54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 194u, depth + 1u); else { c.pc = 0x0029A110u; return; } if (c.pc != 0x002C0E54u) [[unlikely]] return; }
L_002C0E54:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 480u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0E64u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002C0E64u) [[unlikely]] return; }
L_002C0E64:
    set32(c.r[5], ld32((c.r[2].w[0] + 1296u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0E70u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 84u, depth + 1u); else { c.pc = 0x002C11D0u; return; } if (c.pc != 0x002C0E70u) [[unlikely]] return; }
L_002C0E70:
    set32(c.r[21], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_002C0EB0; } }
L_002C0E7C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0E8Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C0E8Cu) [[unlikely]] return; }
L_002C0E8C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0EA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002C0EA8u) [[unlikely]] return; }
L_002C0EA8:
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_002C0EB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[20], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0E7Cu | kUnwind; return; } goto L_002C0E7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[16].w[0] + 16u)));  if (t) { goto L_002C0F00; } }
L_002C0ECC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0EDCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C0EDCu) [[unlikely]] return; }
L_002C0EDC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0EF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002C0EF8u) [[unlikely]] return; }
L_002C0EF8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 2;
L_002C0F00:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0ECCu | kUnwind; return; } goto L_002C0ECC; }
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 72u)));  goto L_002C104C; }
    set32(c.r[19], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], c.r[4].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[5].w[0] + c.r[2].w[0]);  if (t) { goto L_002C0F70; } }
L_002C0F3C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0F4Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C0F4Cu) [[unlikely]] return; }
L_002C0F4C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0F68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002C0F68u) [[unlikely]] return; }
L_002C0F68:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 2;
L_002C0F70:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[21], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0F3Cu | kUnwind; return; } goto L_002C0F3C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 19040u));
    c.r[19].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[2].w[0] + 19044u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 19048u));
    st32((c.r[29].w[0] + 116u), c.f[2]);
    c.f[0] = ld32((c.r[2].w[0] + 19052u));
    st32((c.r[29].w[0] + 120u), c.f[1]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 124u), c.f[0]);  if (t) { goto L_002C1018; } }
L_002C0FD0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C1048; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0FF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C0FF4u) [[unlikely]] return; }
L_002C0FF4:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[21].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1010u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002C1010u) [[unlikely]] return; }
L_002C1010:
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_002C1018:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0FD0u | kUnwind; return; } goto L_002C0FD0; }
L_002C1048:
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 1;
L_002C104C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], 0u + 1u);  goto L_002C1074; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st32((c.r[18].w[0] + 76u), c.r[2].w[0]);  goto L_002C106C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002C1084; } }
L_002C106C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 84u), 0u);  if (t) { goto L_002C1080; } }
L_002C1074:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 3;
L_002C1080:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002C1084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C108Cu);  if (depth < kMaxDepth) unit_0068(c, 146u, depth + 1u); else { c.pc = 0x002C1EF0u; return; } if (c.pc != 0x002C108Cu) [[unlikely]] return; }
L_002C108C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002C10B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 9;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_002C1134; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002C1148; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C1144; } }
L_002C10E8:
    set32(c.r[6], c.r[16].w[0] << 2);
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[6], 0u + 24u);
    set32(c.r[7], ld32((c.r[4].w[0] + 160u)));
    st32((c.r[29].w[0] + 56u), 0u);
    set32(c.r[4], c.r[4].w[0] + 512u);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    st32((c.r[29].w[0] + 64u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 52u), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1130u); st32((c.r[29].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002C1130u) [[unlikely]] return; }
L_002C1130:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002C1134:
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C10E8u | kUnwind; return; } goto L_002C10E8; }
L_002C1144:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002C1148:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C1160:
    set32(c.r[4], ld32((c.r[4].w[0] + 484u)));
    c.budget -= 3;
    if (c.r[4].sd[0] >= 0) { set32(c.r[2], c.r[4].w[0] << 4);  goto L_002C1174; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002C11C0; } }
L_002C1174:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 20912u);
    set32(c.r[4], c.r[4].w[0] << 3);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_002C11B0; } }
L_002C1190:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 96u)));
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { set32(c.r[2], 0u - 1u);  goto L_002C11C0; }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_002C11B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C11C0; } }
L_002C11B0:
    c.r[3].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1190u | kUnwind; return; } goto L_002C1190; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002C11C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C11D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 484u)));
    c.budget -= 14;
    { const bool t = c.r[4].sd[0] < 0; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C13D0; } }
    set32(c.r[3], c.r[4].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 20912u);
    c.budget -= 4;
L_002C1218:
    set32(c.r[4], c.r[3].w[0] << 3);
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 3168u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002C125C; } }
L_002C1240:
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002C125C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C126C; } }
L_002C125C:
    c.r[2].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 3172u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1240u | kUnwind; return; } goto L_002C1240; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C126C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C1278; }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_002C1278:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_002C12A0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1290u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002C1160u; return; } if (c.pc != 0x002C1290u) [[unlikely]] return; }
L_002C1290:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002C129C; } }
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002C129C:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_002C12A0:
    set32(c.r[21], 0u + 1u);
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[2].w[0] + 1u);  if (t) { goto L_002C1338; } }
L_002C12B0:
    c.budget -= 2;
    if (c.r[20].d[0] != c.r[22].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 96u)));  goto L_002C12F4; }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[19], c.r[21].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 340u)));
    c.budget -= 8;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 96u)));  goto L_002C131C; }
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C12ECu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002C12ECu) [[unlikely]] return; }
L_002C12EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C1318; } }
L_002C12F4:
    set32(c.r[19], c.r[21].w[0] << 2);
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1318u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002C1318u) [[unlikely]] return; }
L_002C1318:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_002C131C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 360u));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st16((c.r[3].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
L_002C1338:
    c.r[2].d[0] = c.r[21].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C12B0u | kUnwind; return; } goto L_002C12B0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[20], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[20].w[0] + c.r[2].w[0]);  if (t) { goto L_002C1398; } }
L_002C1358:
    set32(c.r[18], c.r[20].w[0] << 2);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C137Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002C137Cu) [[unlikely]] return; }
L_002C137C:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 360u));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st16((c.r[3].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
L_002C1398:
    c.r[2].d[0] = c.r[20].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1358u | kUnwind; return; } goto L_002C1358; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C13ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 96u, depth + 1u); else { c.pc = 0x002C1400u; return; } if (c.pc != 0x002C13ACu) [[unlikely]] return; }
L_002C13AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C13B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 98u, depth + 1u); else { c.pc = 0x002C1470u; return; } if (c.pc != 0x002C13B4u) [[unlikely]] return; }
L_002C13B4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C13C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 113u, depth + 1u); else { c.pc = 0x002C1870u; return; } if (c.pc != 0x002C13C0u) [[unlikely]] return; }
L_002C13C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_002C13D0:
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
L_002C1400:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 488u)));
    c.budget -= 6;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002C145C; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 584u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C1458; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 340u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002C1458; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 19u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1458u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002C1458u) [[unlikely]] return; }
L_002C1458:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002C145C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C1470:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 6u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 488u)));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C1848; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[6].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_002C184C; }
    set32(c.r[8], ld32((c.r[18].w[0] + 484u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 20912u);
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[7], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[16], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[9], c.r[3].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] << 1);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1504u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 122u, depth + 1u); else { c.pc = 0x002C1A30u; return; } if (c.pc != 0x002C1504u) [[unlikely]] return; }
L_002C1504:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], ld32((c.r[16].w[0] + 20u)));  goto L_002C15B8; }
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.f[12] = 0u;
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 28u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], c.r[5].w[0] + 1u);
    set32(c.r[7], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[5], c.r[2].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[8], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[5], 0u + 22u);
    set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 400u);
    st32((c.r[17].w[0] + 284u), c.r[2].w[0]);
    c.f[13] = c.f[12];
    set32(c.r[2], ld32((c.r[17].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st32((c.r[17].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[8], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[8].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[8].w[0] + 292u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[8].w[0] + 208u));
    st32((c.r[17].w[0] + 208u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 292u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[8].w[0] + 212u));
    st32((c.r[17].w[0] + 212u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C15A8u); st32((c.r[17].w[0] + 292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002C15A8u) [[unlikely]] return; }
L_002C15A8:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 360u));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st16((c.r[17].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[7], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 4;
L_002C15B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[6], 0u + 5u);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[17], c.r[3].w[0] + c.r[7].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C15E0u); set32(c.r[16], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0068(c, 122u, depth + 1u); else { c.pc = 0x002C1A30u; return; } if (c.pc != 0x002C15E0u) [[unlikely]] return; }
L_002C15E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002C166C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[20], c.r[17].w[0] << 2);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 17u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1610u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002C1610u) [[unlikely]] return; }
L_002C1610:
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    c.f[12] = 0u;
    set32(c.r[19], c.r[16].w[0] << 2);
    set32(c.r[5], 0u + 15u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 360u));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st16((c.r[3].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1650u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002C1650u) [[unlikely]] return; }
L_002C1650:
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 360u));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st16((c.r[3].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
L_002C166C:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1678u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0068(c, 122u, depth + 1u); else { c.pc = 0x002C1A30u; return; } if (c.pc != 0x002C1678u) [[unlikely]] return; }
L_002C1678:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002C170C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[3], c.r[17].w[0] + 1u);
    set32(c.r[20], c.r[3].w[0] << 2);
    set32(c.r[5], 0u + 17u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C16ACu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002C16ACu) [[unlikely]] return; }
L_002C16AC:
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[19], c.r[2].w[0] << 2);
    set32(c.r[5], 0u + 15u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 360u));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st16((c.r[3].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C16F0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002C16F0u) [[unlikely]] return; }
L_002C16F0:
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 360u));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st16((c.r[3].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
L_002C170C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1718u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0068(c, 122u, depth + 1u); else { c.pc = 0x002C1A30u; return; } if (c.pc != 0x002C1718u) [[unlikely]] return; }
L_002C1718:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002C17AC; }
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[3], c.r[17].w[0] + 2u);
    set32(c.r[20], c.r[3].w[0] << 2);
    set32(c.r[5], 0u + 17u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C174Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002C174Cu) [[unlikely]] return; }
L_002C174C:
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], c.r[16].w[0] + 2u);
    set32(c.r[19], c.r[2].w[0] << 2);
    set32(c.r[5], 0u + 15u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 360u));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st16((c.r[3].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1790u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002C1790u) [[unlikely]] return; }
L_002C1790:
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 360u));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st16((c.r[3].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
L_002C17AC:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C17B8u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0068(c, 122u, depth + 1u); else { c.pc = 0x002C1A30u; return; } if (c.pc != 0x002C17B8u) [[unlikely]] return; }
L_002C17B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1848; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[3], c.r[17].w[0] + 3u);
    set32(c.r[17], c.r[3].w[0] << 2);
    set32(c.r[5], 0u + 17u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C17ECu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002C17ECu) [[unlikely]] return; }
L_002C17EC:
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], c.r[16].w[0] + 3u);
    set32(c.r[16], c.r[2].w[0] << 2);
    set32(c.r[5], 0u + 15u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 360u));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st16((c.r[3].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1830u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002C1830u) [[unlikely]] return; }
L_002C1830:
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 360u));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st16((c.r[4].w[0] + 360u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002C1848:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002C184C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002C1870:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[3], 0u + 18u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 488u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[22].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C1A00; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 484u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 20912u);
    set32(c.r[20], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 24;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002C196C; } }
L_002C1908:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 96u)));  goto L_002C1940; }
    set32(c.r[2], ld32((c.r[21].w[0] + 96u)));
    set32(c.r[3], c.r[20].w[0] << 2);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1938u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002C1938u) [[unlikely]] return; }
L_002C1938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_002C1968; } }
L_002C1940:
    set32(c.r[3], c.r[20].w[0] << 2);
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1964u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002C1964u) [[unlikely]] return; }
L_002C1964:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002C1968:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002C196C:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1908u | kUnwind; return; } goto L_002C1908; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C198Cu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002C1160u; return; } if (c.pc != 0x002C198Cu) [[unlikely]] return; }
L_002C198C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].sd[0] < 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_002C1A04; }
    set32(c.r[2], ld32((c.r[18].w[0] + 340u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[5].d[0]) { c.r[2].d[0] = ld16((c.r[18].w[0] + 360u));  goto L_002C19C4; }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C19C0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002C19C0u) [[unlikely]] return; }
L_002C19C0:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 360u));
    c.budget -= 1;
L_002C19C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C19D8u); st16((c.r[18].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_005E(c, 185u, depth + 1u); else { c.pc = 0x00299EB0u; return; } if (c.pc != 0x002C19D8u) [[unlikely]] return; }
L_002C19D8:
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C19F0u); set32(c.r[5], c.r[2].w[0] + c.r[19].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C19F0u) [[unlikely]] return; }
L_002C19F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1A00u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002C1A00u) [[unlikely]] return; }
L_002C1A00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_002C1A04:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002C1A30:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 6u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 488u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002C1A6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C1B38; } }
L_002C1A6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002C1B28; } }
L_002C1A74:
    set32(c.r[3], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 22208u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[20].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_002C1A9C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[19].d[0]) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_002C1AB0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_002C1A9C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[20].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002C1B28; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[19].d[0];  if (t) { goto L_002C1B24; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_002C1AB0:
    set32(c.r[2], 0u + 3004u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002C1AD8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 576u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1AD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C1B38; } }
L_002C1AD4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002C1AD8:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1AE4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 354u, depth + 1u); else { c.pc = 0x002A3550u; return; } if (c.pc != 0x002C1AE4u) [[unlikely]] return; }
L_002C1AE4:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002C1B18; } }
L_002C1AF0:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1B00u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x002C1B00u) [[unlikely]] return; }
L_002C1B00:
    set32(c.r[2], ld32((c.r[2].w[0] + 1296u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002C1B18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C1B38; } }
L_002C1B18:
    c.r[2].d[0] = c.r[17].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1AF0u | kUnwind; return; } goto L_002C1AF0; }
L_002C1B24:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002C1B28:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1A74u | kUnwind; return; } goto L_002C1A74; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C1B38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002C1B60:
    set32(c.r[29], c.r[29].w[0] - 176u);
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
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 16;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_002C1EC0; }
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C1EBC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 464u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C1EBC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 480u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1BCCu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002C1BCCu) [[unlikely]] return; }
L_002C1BCC:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 116u)));  if (t) { goto L_002C1EBC; } }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], 0u + 1u);  goto L_002C1BF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C1EBC; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002C1BF0:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[17].w[0] + 16u)));  goto L_002C1C00; }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 2;
L_002C1C00:
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1C0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C1C0Cu) [[unlikely]] return; }
L_002C1C0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_002C1E74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1C1Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 36u, depth + 1u); else { c.pc = 0x002C84D0u; return; } if (c.pc != 0x002C1C1Cu) [[unlikely]] return; }
L_002C1C1C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002C1EBC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 492u)));
    c.budget -= 3;
    if (c.r[19].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 484u)));  goto L_002C1C48; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C1EBC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 1;
L_002C1C48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 20912u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[5].w[0] << 4);
    st32((c.r[16].w[0] + 492u), c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 132u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1C74u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0068(c, 122u, depth + 1u); else { c.pc = 0x002C1A30u; return; } if (c.pc != 0x002C1C74u) [[unlikely]] return; }
L_002C1C74:
    set32(c.r[5], ld32((c.r[19].w[0] + 128u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1C84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002C1160u; return; } if (c.pc != 0x002C1C84u) [[unlikely]] return; }
L_002C1C84:
    set32(c.r[5], ld32((c.r[19].w[0] + 132u)));
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1C94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002C1160u; return; } if (c.pc != 0x002C1C94u) [[unlikely]] return; }
L_002C1C94:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[21], 0u + 1u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);  if (t) { goto L_002C1D34; } }
L_002C1CB0:
    c.budget -= 2;
    if (c.r[20].d[0] == c.r[30].d[0]) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_002C1D30; }
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[22], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 340u)));
    set32(c.r[2], c.r[2].w[0] - 20u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C1CFC; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1CF4u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002C1CF4u) [[unlikely]] return; }
L_002C1CF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 96u)));  if (t) { goto L_002C1D18; } }
L_002C1CFC:
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1D14u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002C1D14u) [[unlikely]] return; }
L_002C1D14:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 1;
L_002C1D18:
    set32(c.r[3], c.r[3].w[0] + c.r[22].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 360u));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st16((c.r[4].w[0] + 360u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 6;
L_002C1D30:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002C1D34:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.r[3].d[0] = c.r[21].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1CB0u | kUnwind; return; } goto L_002C1CB0; } }
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[23].w[0] << 2);  if (t) { goto L_002C1E58; } }
    set32(c.r[6], ld32((c.r[19].w[0] + 128u)));
    c.budget -= 1;
L_002C1D54:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[19].w[0] + 132u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1D64u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 149u, depth + 1u); else { c.pc = 0x002C1F90u; return; } if (c.pc != 0x002C1D64u) [[unlikely]] return; }
L_002C1D64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1DA4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.f[12] = 0u;
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1D9Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002C1D9Cu) [[unlikely]] return; }
L_002C1D9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_002C1E58; } }
L_002C1DA4:
    c.budget -= 2;
    if (c.r[23].sd[0] < 0) { set32(c.r[3], ld32((c.r[18].w[0] + 12u)));  goto L_002C1E04; }
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_002C1DC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 16u);  if (t) { goto L_002C1DDC; } }
L_002C1DC8:
    set32(c.r[3], ld32((c.r[20].w[0] + 340u)));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C1DDC; } }
    set32(c.r[5], 0u + 21u);
    c.budget -= 1;
L_002C1DDC:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1DF4u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002C1DF4u) [[unlikely]] return; }
L_002C1DF4:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 360u));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st16((c.r[20].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 4;
L_002C1E04:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[5], 0u + 4u);  if (t) { goto L_002C1E24; } }
    set32(c.r[5], 0u + 14u);
    c.budget -= 1;
L_002C1E24:
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1E38u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002C1E38u) [[unlikely]] return; }
L_002C1E38:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 22304u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1E54u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002C1E54u) [[unlikely]] return; }
L_002C1E54:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002C1E58:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[3].d[0] = c.r[21].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], ld32((c.r[19].w[0] + 128u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1D54u | kUnwind; return; } goto L_002C1D54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C1EBC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002C1E74:
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C1EBC; } }
    st32((c.r[16].w[0] + 492u), 0u);
    set32(c.r[2], 0u - 3u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 480u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1EA4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002C1EA4u) [[unlikely]] return; }
L_002C1EA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1EB0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 46u, depth + 1u); else { c.pc = 0x002C0830u; return; } if (c.pc != 0x002C1EB0u) [[unlikely]] return; }
L_002C1EB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1EBCu); set32(c.r[4], c.r[4].w[0] + 22352u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002C1EBCu) [[unlikely]] return; }
L_002C1EBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_002C1EC0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002C1EF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_002C1F68; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002C1F24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002C1F78; } }
L_002C1F24:
    set32(c.r[5], ld32((c.r[16].w[0] + 480u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1F30u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002C1F30u) [[unlikely]] return; }
L_002C1F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1F38u); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002C1F38u) [[unlikely]] return; }
L_002C1F38:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_002C1F58; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002C1F74; } }
L_002C1F58:
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002C1F74; } }
L_002C1F68:
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_002C1F74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C1F78:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C1F90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 20912u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], ld32((c.r[4].w[0] + 484u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[8].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[8], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 16;
    if (c.r[3].d[0] != c.r[6].d[0]) { set32(c.r[2], c.r[5].w[0] + c.r[8].w[0]);  goto L_002C1FE0; }
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[7].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 488u)));  goto L_002C1FF8; }
    set32(c.r[2], c.r[5].w[0] + c.r[8].w[0]);
    c.budget -= 1;
L_002C1FE0:
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[6].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C205C; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_002C2058; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 488u)));
    c.budget -= 1;
L_002C1FF8:
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002C205C; }
    set32(c.r[5], ld32((c.r[4].w[0] + 480u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2014u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002C2014u) [[unlikely]] return; }
L_002C2014:
    c.f[1] = ld32((c.r[2].w[0] + 196u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 1u);  goto L_002C203C; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002C204C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C205C; } }
L_002C203C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002C204C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C205C; } }
L_002C204C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C205C; } }
L_002C2058:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C205C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C2070:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0540u | kUnwind; return; } goto L_002C0540; }
L_002C2080:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C07A0u | kUnwind; return; } goto L_002C07A0; }
L_002C2090:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C20B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x002C20B4u) [[unlikely]] return; }
L_002C20B4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C20C0u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x002C20C0u) [[unlikely]] return; }
L_002C20C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 26720u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 26776u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 84u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C20E8u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 216u, depth + 1u); else { c.pc = 0x0020DFF0u; return; } if (c.pc != 0x002C20E8u) [[unlikely]] return; }
L_002C20E8:
    st32((c.r[16].w[0] + 72u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 80u), 0u);
    c.f[12] = 0u;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C210Cu); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_003A(c, 189u, depth + 1u); else { c.pc = 0x00209A60u; return; } if (c.pc != 0x002C210Cu) [[unlikely]] return; }
L_002C210C:
    st32((c.r[16].w[0] + 76u), c.f[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2120u); set32(c.r[4], c.r[16].w[0] + 84u);  if (depth < kMaxDepth) unit_003C(c, 67u, depth + 1u); else { c.pc = 0x00210DD0u; return; } if (c.pc != 0x002C2120u) [[unlikely]] return; }
L_002C2120:
    set32(c.r[5], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2130u); set32(c.r[4], c.r[16].w[0] + 84u);  if (depth < kMaxDepth) unit_003C(c, 100u, depth + 1u); else { c.pc = 0x00211210u; return; } if (c.pc != 0x002C2130u) [[unlikely]] return; }
L_002C2130:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C2150:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C216Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x002C216Cu) [[unlikely]] return; }
L_002C216C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2174u);  if (depth < kMaxDepth) unit_0024(c, 202u, depth + 1u); else { c.pc = 0x001B16D0u; return; } if (c.pc != 0x002C2174u) [[unlikely]] return; }
L_002C2174:
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2180u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00161BB0u; return; } if (c.pc != 0x002C2180u) [[unlikely]] return; }
L_002C2180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2188u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002C2188u) [[unlikely]] return; }
L_002C2188:
    set32(c.r[4], ld32((c.r[17].w[0] + 352u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2198u); set32(c.r[6], 0u + 2048u);  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x002C2198u) [[unlikely]] return; }
L_002C2198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C21A0u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x002C21A0u) [[unlikely]] return; }
L_002C21A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C21A8u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x002C21A8u) [[unlikely]] return; }
L_002C21A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C21B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002C21B0u) [[unlikely]] return; }
L_002C21B0:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C21BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002C21BCu) [[unlikely]] return; }
L_002C21BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[4], c.r[18].w[0] + 84u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C21D0u); st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_003B(c, 248u, depth + 1u); else { c.pc = 0x0020E740u; return; } if (c.pc != 0x002C21D0u) [[unlikely]] return; }
L_002C21D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C21D8u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x002C21D8u) [[unlikely]] return; }
L_002C21D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C21E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 207u, depth + 1u); else { c.pc = 0x00161C50u; return; } if (c.pc != 0x002C21E0u) [[unlikely]] return; }
L_002C21E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C21E8u);  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x002C21E8u) [[unlikely]] return; }
L_002C21E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C2200:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[4].w[0] + 76u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002C2270; }
    set32(c.r[6], ld32((c.r[28].w[0] - 30344u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[6].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[6].w[0] + 80u));  goto L_002C2240; }
L_002C2240:
    c.f[0] = ld32((c.r[4].w[0] + 80u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 80u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 76u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C226C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C226Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C226Cu) [[unlikely]] return; }
L_002C226C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002C2270:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C2280:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], c.r[19].w[0] + 16u);
    set32(c.r[21], c.r[19].w[0] + 32u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C22C8u); set32(c.r[20], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002C22C8u) [[unlikely]] return; }
L_002C22C8:
    c.f[3] = ld32((c.r[29].w[0] + 164u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 168u));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 172u));
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[21].w[0]), c.f[0]);
    st32((c.r[21].w[0] + 4u), c.f[3]);
    st32((c.r[21].w[0] + 8u), c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C22F4u); st32((c.r[21].w[0] + 12u), c.f[1]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002C22F4u) [[unlikely]] return; }
L_002C22F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2304u); set32(c.r[5], c.r[5].w[0] + 11056u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x002C2304u) [[unlikely]] return; }
L_002C2304:
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2314u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002C2314u) [[unlikely]] return; }
L_002C2314:
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    set32(c.r[5], c.r[5].w[0] + 11056u);
    st32((c.r[29].w[0] + 184u), c.f[0]);
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    st32((c.r[29].w[0] + 176u), c.f[2]);
    st32((c.r[29].w[0] + 180u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2348u); st32((c.r[29].w[0] + 188u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002C2348u) [[unlikely]] return; }
L_002C2348:
    c.f[3] = ld32((c.r[29].w[0] + 148u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 152u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 156u));
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[3]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2374u); st32((c.r[16].w[0] + 12u), c.f[1]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002C2374u) [[unlikely]] return; }
L_002C2374:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2384u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x002C2384u) [[unlikely]] return; }
L_002C2384:
    st32((c.r[20].w[0] + 8u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[20].w[0]), 0u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C23A4u); st32((c.r[20].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x002C23A4u) [[unlikely]] return; }
L_002C23A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C23B4u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x002C23B4u) [[unlikely]] return; }
L_002C23B4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C23C4u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x002C23C4u) [[unlikely]] return; }
L_002C23C4:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = c.f[20] ^ fp::kSign;
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 196u), c.f[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = c.f[21] ^ fp::kSign;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C23F0u); st32((c.r[29].w[0] + 200u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 224u, depth + 1u); else { c.pc = 0x0018FA10u; return; } if (c.pc != 0x002C23F0u) [[unlikely]] return; }
L_002C23F0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C23FCu); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002C23FCu) [[unlikely]] return; }
L_002C23FC:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C240Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 243u, depth + 1u); else { c.pc = 0x0018FE00u; return; } if (c.pc != 0x002C240Cu) [[unlikely]] return; }
L_002C240C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002C2440:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 352u)));
    c.f[20] = c.f[12];
    c.f[0] = ld32((c.r[3].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C24A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2474u);  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002C2474u) [[unlikely]] return; }
L_002C2474:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 68u), c.f[20]);
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2490u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001D(c, 235u, depth + 1u); else { c.pc = 0x00196640u; return; } if (c.pc != 0x002C2490u) [[unlikely]] return; }
L_002C2490:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C249Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002C249Cu) [[unlikely]] return; }
L_002C249C:
    set32(c.r[3], ld32((c.r[17].w[0] + 352u)));
    st32((c.r[3].w[0] + 60u), c.r[16].w[0]);
    c.budget -= 2;
L_002C24A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C24C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C24F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 4u, depth + 1u); else { c.pc = 0x001900A0u; return; } if (c.pc != 0x002C24F4u) [[unlikely]] return; }
L_002C24F4:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2504u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001C(c, 4u, depth + 1u); else { c.pc = 0x001900A0u; return; } if (c.pc != 0x002C2504u) [[unlikely]] return; }
L_002C2504:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2514u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_001C(c, 4u, depth + 1u); else { c.pc = 0x001900A0u; return; } if (c.pc != 0x002C2514u) [[unlikely]] return; }
L_002C2514:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2520u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002C2520u) [[unlikely]] return; }
L_002C2520:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C2540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C25B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 26720u);
    set32(c.r[2], c.r[2].w[0] + 26776u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 84u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2580u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003B(c, 219u, depth + 1u); else { c.pc = 0x0020E110u; return; } if (c.pc != 0x002C2580u) [[unlikely]] return; }
L_002C2580:
    set32(c.r[4], c.r[17].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C258Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002C258Cu) [[unlikely]] return; }
L_002C258C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2598u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002C2598u) [[unlikely]] return; }
L_002C2598:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002C25B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C25B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002C25B0u) [[unlikely]] return; }
L_002C25B0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C25B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C25D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2540u | kUnwind; return; } goto L_002C2540; }
L_002C25E0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C2618; }
    c.budget -= 2;
    if (c.r[4].sd[0] >= 0) { c.r[6].d[0] = 0ull + 0ull;  goto L_002C25FC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C2618; } }
L_002C25FC:
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[3].sd[0] < 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C2618; }
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C25FCu | kUnwind; return; } goto L_002C25FC; }
L_002C2618:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C2620:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C264Cu); c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x002C264Cu) [[unlikely]] return; }
L_002C264C:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2658u); set32(c.r[4], c.r[18].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x002C2658u) [[unlikely]] return; }
L_002C2658:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 26880u);
    set32(c.r[3], c.r[3].w[0] + 26936u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44530000u);
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 18259ull;
    set32(c.r[4], 0u - 1u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[18].w[0] + 72u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 80u), 0u);
    st32((c.r[18].w[0] + 84u), 0u);
    st32((c.r[18].w[0] + 76u), c.r[17].w[0]);
    st32((c.r[28].w[0] - 31596u), c.r[2].w[0]);
    c.budget -= 18;
L_002C26A0:
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[5].w[0] + 88u), 0u);
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[5].w[0] + 92u), 0u);
    st32((c.r[5].w[0] + 96u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 104u), 0u);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[5].w[0] + 108u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C26A0u | kUnwind; return; } goto L_002C26A0; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  goto L_002C26EC; }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 4;
L_002C26EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C270Cu); set32(c.r[4], c.r[4].w[0] + 22688u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002C270Cu) [[unlikely]] return; }
L_002C270C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C2730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C274Cu); set32(c.r[4], c.r[4].w[0] + 22736u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002C274Cu) [[unlikely]] return; }
L_002C274C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2754u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 215u, depth + 1u); else { c.pc = 0x002C2780u; return; } if (c.pc != 0x002C2754u) [[unlikely]] return; }
L_002C2754:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C2780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C27A0u); set32(c.r[4], c.r[4].w[0] + 22768u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002C27A0u) [[unlikely]] return; }
L_002C27A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002C27C4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C27BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C27BCu) [[unlikely]] return; }
L_002C27BC:
    st32((c.r[16].w[0] + 84u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002C27C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C27CCu);  if (depth < kMaxDepth) unit_0068(c, 262u, depth + 1u); else { c.pc = 0x002C2F30u; return; } if (c.pc != 0x002C27CCu) [[unlikely]] return; }
L_002C27CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_002C27E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C27E0u);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x001B8190u; return; } if (c.pc != 0x002C27E0u) [[unlikely]] return; }
L_002C27E0:
    st32((c.r[16].w[0] + 80u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 2;
L_002C27E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 72u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C2820:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002C2A4C; }
    set32(c.r[4], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_002C2968; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[18].w[0] + 84u)));  goto L_002C2878; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C2A48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C2A48; } }
L_002C2878:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 4u)));  goto L_002C2888; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 72u), 0u);  if (t) { goto L_002C2A48; } }
L_002C2888:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C2A48; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 84u)));
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 80u)));  goto L_002C28C4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C28BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C28BCu) [[unlikely]] return; }
L_002C28BC:
    st32((c.r[18].w[0] + 84u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 2;
L_002C28C4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 76u)));  goto L_002C28F0; }
    set32(c.r[5], ld32((c.r[18].w[0] + 76u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C28DCu); set32(c.r[4], c.r[4].w[0] + 22816u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002C28DCu) [[unlikely]] return; }
L_002C28DC:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002C2A48; } }
L_002C28F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C28FCu); set32(c.r[4], c.r[4].w[0] + 22864u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002C28FCu) [[unlikely]] return; }
L_002C28FC:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 3;
L_002C2908:
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[18].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0] + 88u), 0u);
    c.r[3].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[6].w[0] + 92u), 0u);
    st32((c.r[6].w[0] + 96u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 100u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 104u), 0u);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[6].w[0] + 108u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2908u | kUnwind; return; } goto L_002C2908; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 72u), c.r[3].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 11;
L_002C2968:
    set32(c.r[4], c.r[17].w[0] << 1);
    c.budget -= 1;
L_002C296C:
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[16], c.r[4].w[0] + 88u);
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 8;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_002C29A4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C29A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002C29A4; } }
L_002C29A0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002C29A4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002C2A3C; }
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_002C2A14; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[2] = ld32((c.r[5].w[0] + 80u));  goto L_002C29E8; }
L_002C29E8:
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 12u), c.f[1]);  if (t) { goto L_002C2A10; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2A10u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 279u, depth + 1u); else { c.pc = 0x002C3150u; return; } if (c.pc != 0x002C2A10u) [[unlikely]] return; }
L_002C2A10:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002C2A14:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C2A38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2A24u);  if (depth < kMaxDepth) unit_0026(c, 26u, depth + 1u); else { c.pc = 0x001B81E0u; return; } if (c.pc != 0x002C2A24u) [[unlikely]] return; }
L_002C2A24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C2A38; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2A38u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 286u, depth + 1u); else { c.pc = 0x002C3250u; return; } if (c.pc != 0x002C2A38u) [[unlikely]] return; }
L_002C2A38:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002C2A3C:
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C296Cu | kUnwind; return; } goto L_002C296C; }
L_002C2A48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002C2A4C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C2A60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C2A70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 85u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C2A94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002C2B2C; } }
L_002C2A94:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C2B28; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[16].w[0] << 1);
    c.budget -= 2;
L_002C2AA8:
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[4].w[0] + 88u);
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 8;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_002C2AE0; }
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C2ADC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002C2AE0; } }
L_002C2ADC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002C2AE0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002C2B1C; }
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2AF8u); set32(c.r[5], c.r[5].w[0] + 22528u);  if (depth < kMaxDepth) unit_0068(c, 205u, depth + 1u); else { c.pc = 0x002C25E0u; return; } if (c.pc != 0x002C2AF8u) [[unlikely]] return; }
L_002C2AF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C2B18; } }
    set32(c.r[5], ld32((c.r[7].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2B18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 275u, depth + 1u); else { c.pc = 0x002C30B0u; return; } if (c.pc != 0x002C2B18u) [[unlikely]] return; }
L_002C2B18:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002C2B1C:
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2AA8u | kUnwind; return; } goto L_002C2AA8; }
L_002C2B28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002C2B2C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C2B40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2B5Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 215u, depth + 1u); else { c.pc = 0x002C2780u; return; } if (c.pc != 0x002C2B5Cu) [[unlikely]] return; }
L_002C2B5C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  goto L_002C2B88; }
    st32((c.r[16].w[0] + 72u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002C2BE4; } }
L_002C2B88:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 88u);  goto L_002C2BA8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2BA0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C2BA0u) [[unlikely]] return; }
L_002C2BA0:
    st32((c.r[16].w[0] + 84u), 0u);
    set32(c.r[4], 0u + 88u);
    c.budget -= 2;
L_002C2BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2BB0u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002C2BB0u) [[unlikely]] return; }
L_002C2BB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  goto L_002C2BCC; }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2BC8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 98u, depth + 1u); else { c.pc = 0x003BCDE0u; return; } if (c.pc != 0x002C2BC8u) [[unlikely]] return; }
L_002C2BC8:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 1;
L_002C2BCC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
L_002C2BE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C2C00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2C1Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 215u, depth + 1u); else { c.pc = 0x002C2780u; return; } if (c.pc != 0x002C2C1Cu) [[unlikely]] return; }
L_002C2C1C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  goto L_002C2C48; }
    st32((c.r[16].w[0] + 72u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002C2CAC; } }
L_002C2C48:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 88u);  goto L_002C2C68; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2C60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C2C60u) [[unlikely]] return; }
L_002C2C60:
    st32((c.r[16].w[0] + 84u), 0u);
    set32(c.r[4], 0u + 88u);
    c.budget -= 2;
L_002C2C68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2C70u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002C2C70u) [[unlikely]] return; }
L_002C2C70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  goto L_002C2C94; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2C90u); set32(c.r[6], c.r[6].w[0] + 22920u);  if (depth < kMaxDepth) unit_00A7(c, 94u, depth + 1u); else { c.pc = 0x003BCD70u; return; } if (c.pc != 0x002C2C90u) [[unlikely]] return; }
L_002C2C90:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 1;
L_002C2C94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
L_002C2CAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C2CC0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];  c.pc = t; return; }
L_002C2CD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C2CF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2CF0u);  if (depth < kMaxDepth) unit_0068(c, 244u, depth + 1u); else { c.pc = 0x002C2CC0u; return; } if (c.pc != 0x002C2CF0u) [[unlikely]] return; }
L_002C2CF0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C2D00:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2D3Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0068(c, 245u, depth + 1u); else { c.pc = 0x002C2CD0u; return; } if (c.pc != 0x002C2D3Cu) [[unlikely]] return; }
L_002C2D3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C2D4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002C2DF8; } }
L_002C2D4C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002C2D60; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2D60u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 253u, depth + 1u); else { c.pc = 0x002C2E20u; return; } if (c.pc != 0x002C2D60u) [[unlikely]] return; }
L_002C2D60:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C2D7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002C2DF8; } }
L_002C2D7C:
    c.budget -= 2;
    if (c.r[17].sd[0] < 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002C2D8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C2D9C; } }
L_002C2D8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2D94u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 291u, depth + 1u); else { c.pc = 0x002C3360u; return; } if (c.pc != 0x002C2D94u) [[unlikely]] return; }
L_002C2D94:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_002C2D9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 120u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 124u), c.f[20]);
    st32((c.r[29].w[0] + 128u), c.r[19].w[0]);
    st32((c.r[29].w[0] + 132u), c.r[17].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2DC0u); st32((c.r[29].w[0] + 116u), 0u);  if (depth < kMaxDepth) unit_0068(c, 283u, depth + 1u); else { c.pc = 0x002C31E0u; return; } if (c.pc != 0x002C2DC0u) [[unlikely]] return; }
L_002C2DC0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.f[1] = ld32((c.r[29].w[0] + 124u));  goto L_002C2DD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_002C2DFC; } }
L_002C2DD8:
    c.f[0] = ld32((c.r[28].w[0] - 32692u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002C2DF8; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2DF4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 279u, depth + 1u); else { c.pc = 0x002C3150u; return; } if (c.pc != 0x002C2DF4u) [[unlikely]] return; }
L_002C2DF4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C2DF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002C2DFC:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002C2E20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2E40u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0068(c, 245u, depth + 1u); else { c.pc = 0x002C2CD0u; return; } if (c.pc != 0x002C2E40u) [[unlikely]] return; }
L_002C2E40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002C2E90; }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 1);
    c.budget -= 2;
L_002C2E50:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[17].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002C2E80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2E70u); set32(c.r[4], ld32((c.r[4].w[0] + 92u)));  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x001B81D0u; return; } if (c.pc != 0x002C2E70u) [[unlikely]] return; }
L_002C2E70:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2E7Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 286u, depth + 1u); else { c.pc = 0x002C3250u; return; } if (c.pc != 0x002C2E7Cu) [[unlikely]] return; }
L_002C2E7C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002C2E80:
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2E50u | kUnwind; return; } goto L_002C2E50; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002C2E90:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C2EB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] < 0; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C2F14; } }
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C2EE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002C2F18; } }
L_002C2EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2EE8u);  if (depth < kMaxDepth) unit_0068(c, 245u, depth + 1u); else { c.pc = 0x002C2CD0u; return; } if (c.pc != 0x002C2EE8u) [[unlikely]] return; }
L_002C2EE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C2F14; } }
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2F08u); set32(c.r[4], ld32((c.r[2].w[0] + 92u)));  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x001B81D0u; return; } if (c.pc != 0x002C2F08u) [[unlikely]] return; }
L_002C2F08:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2F14u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 286u, depth + 1u); else { c.pc = 0x002C3250u; return; } if (c.pc != 0x002C2F14u) [[unlikely]] return; }
L_002C2F14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002C2F18:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C2F30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2F48u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 245u, depth + 1u); else { c.pc = 0x002C2CD0u; return; } if (c.pc != 0x002C2F48u) [[unlikely]] return; }
L_002C2F48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002C2F8C; }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 1);
    c.budget -= 2;
L_002C2F58:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2F6Cu); set32(c.r[4], ld32((c.r[2].w[0] + 92u)));  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x001B81D0u; return; } if (c.pc != 0x002C2F6Cu) [[unlikely]] return; }
L_002C2F6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2F78u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 286u, depth + 1u); else { c.pc = 0x002C3250u; return; } if (c.pc != 0x002C2F78u) [[unlikely]] return; }
L_002C2F78:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2F58u | kUnwind; return; } goto L_002C2F58; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002C2F8C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C2FA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2FBCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 245u, depth + 1u); else { c.pc = 0x002C2CD0u; return; } if (c.pc != 0x002C2FBCu) [[unlikely]] return; }
L_002C2FBC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_002C2FCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C3000; } }
L_002C2FCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2FD4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 289u, depth + 1u); else { c.pc = 0x002C3320u; return; } if (c.pc != 0x002C2FD4u) [[unlikely]] return; }
L_002C2FD4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], c.r[2].w[0] << 1);  goto L_002C2FE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C3000; } }
L_002C2FE4:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2FF8u); set32(c.r[4], ld32((c.r[2].w[0] + 92u)));  if (depth < kMaxDepth) unit_0026(c, 26u, depth + 1u); else { c.pc = 0x001B81E0u; return; } if (c.pc != 0x002C2FF8u) [[unlikely]] return; }
L_002C2FF8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 2;
L_002C3000:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C3020:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3048u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0068(c, 245u, depth + 1u); else { c.pc = 0x002C2CD0u; return; } if (c.pc != 0x002C3048u) [[unlikely]] return; }
L_002C3048:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002C3090; }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 1);
    c.budget -= 2;
L_002C3058:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[17].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002C3080; }
    set32(c.r[4], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C307Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0026(c, 28u, depth + 1u); else { c.pc = 0x001B8200u; return; } if (c.pc != 0x002C307Cu) [[unlikely]] return; }
L_002C307C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002C3080:
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3058u | kUnwind; return; } goto L_002C3058; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002C3090:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C30B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C30E0u); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_0068(c, 245u, depth + 1u); else { c.pc = 0x002C2CD0u; return; } if (c.pc != 0x002C30E0u) [[unlikely]] return; }
L_002C30E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002C312C; }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 1);
    c.budget -= 2;
L_002C30F0:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[17].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002C311C; }
    set32(c.r[4], ld32((c.r[4].w[0] + 92u)));
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3118u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0026(c, 29u, depth + 1u); else { c.pc = 0x001B8210u; return; } if (c.pc != 0x002C3118u) [[unlikely]] return; }
L_002C3118:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002C311C:
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C30F0u | kUnwind; return; } goto L_002C30F0; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002C312C:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C3150:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 31596u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C31C8; } }
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 104u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C319Cu); set32(c.r[18], c.r[2].w[0] + 88u);  if (depth < kMaxDepth) unit_0026(c, 24u, depth + 1u); else { c.pc = 0x001B81B0u; return; } if (c.pc != 0x002C319Cu) [[unlikely]] return; }
L_002C319C:
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 6;
    if (c.r[4].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002C31CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C31BCu);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x001B81D0u; return; } if (c.pc != 0x002C31BCu) [[unlikely]] return; }
L_002C31BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C31C8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 286u, depth + 1u); else { c.pc = 0x002C3250u; return; } if (c.pc != 0x002C31C8u) [[unlikely]] return; }
L_002C31C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002C31CC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C31E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3200u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0068(c, 287u, depth + 1u); else { c.pc = 0x002C32B0u; return; } if (c.pc != 0x002C3200u) [[unlikely]] return; }
L_002C3200:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].sd[0] >= 0) { set32(c.r[2], c.r[16].w[0] << 1);  goto L_002C3214; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002C3234; } }
L_002C3214:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[6], 0u + 24u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3230u); set32(c.r[4], c.r[2].w[0] + 88u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002C3230u) [[unlikely]] return; }
L_002C3230:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002C3234:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C3250:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002C329C; } }
    c.r[3].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[5].w[0] << 1);  goto L_002C3270; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C329C; } }
    set32(c.r[3], c.r[5].w[0] << 1);
    c.budget -= 1;
L_002C3270:
    set32(c.r[6], 0u - 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 108u), 0u);
    c.budget -= 11;
L_002C329C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C32B0:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002C3300; } }
L_002C32C0:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 96u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[6].d[0]) { c.r[3].d[0] = c.r[5].d[0] + 0ull;  goto L_002C32F0; }
    set32(c.r[3], ld32((c.r[7].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C32EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002C32F0; } }
L_002C32EC:
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_002C32F0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_002C3300; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3310; } }
L_002C3300:
    c.r[3].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C32C0u | kUnwind; return; } goto L_002C32C0; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002C3310:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C3320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C3348; } }
L_002C3328:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 96u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_002C3348; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3358; } }
L_002C3348:
    c.r[3].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3328u | kUnwind; return; } goto L_002C3328; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002C3358:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C3360:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002C3388; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 22400u);  if (t) { goto L_002C339C; } }
L_002C3388:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C339C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[5].w[0] + 22624u);
    c.budget -= 2;
L_002C339C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C33A4u);  if (depth < kMaxDepth) unit_0068(c, 205u, depth + 1u); else { c.pc = 0x002C25E0u; return; } if (c.pc != 0x002C33A4u) [[unlikely]] return; }
L_002C33A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[7].w[0] + 76u)));  goto L_002C33B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_002C33D8; } }
L_002C33B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002C33C4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[5].w[0] + 22528u);
    c.budget -= 2;
L_002C33C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C33CCu);  if (depth < kMaxDepth) unit_0068(c, 205u, depth + 1u); else { c.pc = 0x002C25E0u; return; } if (c.pc != 0x002C33CCu) [[unlikely]] return; }
L_002C33CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C33D8; }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_002C33D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C33F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C340Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x002C340Cu) [[unlikely]] return; }
L_002C340C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3418u); set32(c.r[4], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x002C3418u) [[unlikely]] return; }
L_002C3418:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 26800u);
    set32(c.r[3], c.r[3].w[0] + 26856u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D440000u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21331ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 19056u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] + 19060u));
    st32((c.r[29].w[0] + 48u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 19064u));
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 56u), c.f[0]);  if (t) { goto L_002C34B4; } }
L_002C3468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3470u); set32(c.r[4], 0u + 280u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002C3470u) [[unlikely]] return; }
L_002C3470:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  goto L_002C34A4; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C3484; } }
    set32(c.r[6], c.r[17].w[0] + 52u);
    c.budget -= 1;
L_002C3484:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[29].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C34A0u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 207u, depth + 1u); else { c.pc = 0x002C2620u; return; } if (c.pc != 0x002C34A0u) [[unlikely]] return; }
L_002C34A0:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 1;
L_002C34A4:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[3].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_002C34D4; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002C34B4:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3468u | kUnwind; return; } goto L_002C3468; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C34CCu); set32(c.r[4], c.r[4].w[0] + 22944u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002C34CCu) [[unlikely]] return; }
L_002C34CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C34F4; } }
L_002C34D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C34E0u); set32(c.r[4], c.r[4].w[0] + 22976u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002C34E0u) [[unlikely]] return; }
L_002C34E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_002C34F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C3510:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3534u); set32(c.r[4], c.r[4].w[0] + 23024u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002C3534u) [[unlikely]] return; }
L_002C3534:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 2;
L_002C353C:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 72u);  if (t) { goto L_002C3560; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C355Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C355Cu) [[unlikely]] return; }
L_002C355C:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_002C3560:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C353Cu | kUnwind; return; } goto L_002C353C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C35A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C35CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C35F8; } }
L_002C35CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C35D4u);  if (depth < kMaxDepth) unit_0068(c, 312u, depth + 1u); else { c.pc = 0x002C3670u; return; } if (c.pc != 0x002C35D4u) [[unlikely]] return; }
L_002C35D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C35F8; }
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C35F0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 234u, depth + 1u); else { c.pc = 0x002C2B40u; return; } if (c.pc != 0x002C35F0u) [[unlikely]] return; }
L_002C35F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C35F8; } }
L_002C35F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C3610:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3634u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 312u, depth + 1u); else { c.pc = 0x002C3670u; return; } if (c.pc != 0x002C3634u) [[unlikely]] return; }
L_002C3634:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C3650; }
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3650u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 239u, depth + 1u); else { c.pc = 0x002C2C00u; return; } if (c.pc != 0x002C3650u) [[unlikely]] return; }
L_002C3650:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C3670:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C36C4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  goto L_002C36AC; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002C36D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C36EC; } }
L_002C36AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C36B4u);  if (depth < kMaxDepth) unit_0068(c, 245u, depth + 1u); else { c.pc = 0x002C2CD0u; return; } if (c.pc != 0x002C36B4u) [[unlikely]] return; }
L_002C36B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C36D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C36EC; } }
L_002C36C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C36CCu); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_0068(c, 245u, depth + 1u); else { c.pc = 0x002C2CD0u; return; } if (c.pc != 0x002C36CCu) [[unlikely]] return; }
L_002C36CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C36EC; } }
L_002C36D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C36E4u); set32(c.r[4], c.r[4].w[0] + 23056u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002C36E4u) [[unlikely]] return; }
L_002C36E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C370C; } }
L_002C36EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C36F8u); set32(c.r[4], c.r[4].w[0] + 23104u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002C36F8u) [[unlikely]] return; }
L_002C36F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_002C370C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C3720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[11].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002C3748; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0] + 152u)));  if (t) { goto L_002C374C; } }
L_002C3748:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C374C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C375C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002C3780; } }
L_002C375C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C376C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 2;
L_002C376C:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.r[5].d[0] = c.r[11].d[0] + 0ull;
    c.r[6].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3780u); c.r[7].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x002C3780u) [[unlikely]] return; }
L_002C3780:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C3790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002C37AC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 1;
L_002C37AC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002C37D0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C37C4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 2;
L_002C37C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C37CCu); set32(c.r[4], ld32((c.r[2].w[0] + 72u)));  if (depth < kMaxDepth) unit_0068(c, 253u, depth + 1u); else { c.pc = 0x002C2E20u; return; } if (c.pc != 0x002C37CCu) [[unlikely]] return; }
L_002C37CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002C37D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C37E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C37FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0] + 152u)));  if (t) { goto L_002C3800; } }
L_002C37FC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C3800:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3810; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C3828; } }
L_002C3810:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C3820; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 2;
L_002C3820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3828u); set32(c.r[4], ld32((c.r[2].w[0] + 72u)));  if (depth < kMaxDepth) unit_0068(c, 267u, depth + 1u); else { c.pc = 0x002C2FA0u; return; } if (c.pc != 0x002C3828u) [[unlikely]] return; }
L_002C3828:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C3840:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C38A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 26800u);
    set32(c.r[2], c.r[2].w[0] + 26856u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3880u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002C3880u) [[unlikely]] return; }
L_002C3880:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C388Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002C388Cu) [[unlikely]] return; }
L_002C388C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002C38A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C38A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002C38A4u) [[unlikely]] return; }
L_002C38A4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C38A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C38C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C3924; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 26880u);
    set32(c.r[2], c.r[2].w[0] + 26936u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3900u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002C3900u) [[unlikely]] return; }
L_002C3900:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C390Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002C390Cu) [[unlikely]] return; }
L_002C390C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002C3928; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3924u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002C3924u) [[unlikely]] return; }
L_002C3924:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C3928:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C3940:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C38C0u | kUnwind; return; } goto L_002C38C0; }
L_002C3950:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2A70u | kUnwind; return; } goto L_002C2A70; }
L_002C3960:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3840u | kUnwind; return; } goto L_002C3840; }
L_002C3970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3984u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x002C3984u) [[unlikely]] return; }
L_002C3984:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 27024u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 324u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C39C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C39D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 357u, depth + 1u); else { c.pc = 0x002C3D40u; return; } if (c.pc != 0x002C39D4u) [[unlikely]] return; }
L_002C39D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C3A00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002C3B70; }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 324u)));  goto L_002C3B54; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 324u)));  goto L_002C3B0C; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[6].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 324u)));  goto L_002C3A5C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C3B6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3B6C; } }
L_002C3A5C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[16].w[0] + 60u));  goto L_002C3AAC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C3A88; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3A80u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 529u, depth + 1u); else { c.pc = 0x001B7F40u; return; } if (c.pc != 0x002C3A80u) [[unlikely]] return; }
L_002C3A80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 324u), c.r[2].w[0]);  if (t) { goto L_002C3AA8; } }
L_002C3A88:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_002C3AA8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[16].w[0] + 68u);
    set32(c.r[4], c.r[4].w[0] + 23152u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3AA4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 528u, depth + 1u); else { c.pc = 0x001B7F20u; return; } if (c.pc != 0x002C3AA4u) [[unlikely]] return; }
L_002C3AA4:
    st32((c.r[16].w[0] + 324u), c.r[2].w[0]);
    c.budget -= 1;
L_002C3AA8:
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.budget -= 1;
L_002C3AAC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[16].w[0] + 324u)));  goto L_002C3AF4; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_002C3AE4; }
L_002C3AE4:
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.f[0]);  if (t) { goto L_002C3B6C; } }
L_002C3AF4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C3B6C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 324u)));
    c.budget -= 4;
L_002C3B0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3B14u);  if (depth < kMaxDepth) unit_0025(c, 532u, depth + 1u); else { c.pc = 0x001B7F90u; return; } if (c.pc != 0x002C3B14u) [[unlikely]] return; }
L_002C3B14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3B6C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3B28u); set32(c.r[4], ld32((c.r[16].w[0] + 324u)));  if (depth < kMaxDepth) unit_0025(c, 531u, depth + 1u); else { c.pc = 0x001B7F70u; return; } if (c.pc != 0x002C3B28u) [[unlikely]] return; }
L_002C3B28:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 324u)));
    c.budget -= 11;
L_002C3B54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3B5Cu);  if (depth < kMaxDepth) unit_0025(c, 533u, depth + 1u); else { c.pc = 0x001B7FA0u; return; } if (c.pc != 0x002C3B5Cu) [[unlikely]] return; }
L_002C3B5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3B6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3B6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 357u, depth + 1u); else { c.pc = 0x002C3D40u; return; } if (c.pc != 0x002C3B6Cu) [[unlikely]] return; }
L_002C3B6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C3B70:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C3B80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[18].sd[0] >= 0; c.f[20] = c.f[12];  if (t) { goto L_002C3BC4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002C3C28; } }
L_002C3BC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3BCCu);  if (depth < kMaxDepth) unit_0068(c, 357u, depth + 1u); else { c.pc = 0x002C3D40u; return; } if (c.pc != 0x002C3BCCu) [[unlikely]] return; }
L_002C3BCC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3BE0u); st32((c.r[16].w[0] + 328u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0025(c, 529u, depth + 1u); else { c.pc = 0x001B7F40u; return; } if (c.pc != 0x002C3BE0u) [[unlikely]] return; }
L_002C3BE0:
    st32((c.r[16].w[0] + 324u), c.r[2].w[0]);
    c.f[12] = c.f[20];
    st32((c.r[16].w[0] + 60u), c.f[20]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 64u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3C00u); st32((c.r[16].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x002C3C00u) [[unlikely]] return; }
L_002C3C00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3C14u); set32(c.r[4], c.r[4].w[0] + 23184u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002C3C14u) [[unlikely]] return; }
L_002C3C14:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 324u)));
    c.budget -= 5;
L_002C3C28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C3C50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_002C3C90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3C84u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 151u, depth + 1u); else { c.pc = 0x00181DA0u; return; } if (c.pc != 0x002C3C84u) [[unlikely]] return; }
L_002C3C84:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002C3CA8; }
L_002C3C90:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002C3D1C; } }
L_002C3CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3CB0u);  if (depth < kMaxDepth) unit_0068(c, 357u, depth + 1u); else { c.pc = 0x002C3D40u; return; } if (c.pc != 0x002C3CB0u) [[unlikely]] return; }
L_002C3CB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 23152u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3CCCu); st32((c.r[16].w[0] + 328u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0025(c, 528u, depth + 1u); else { c.pc = 0x001B7F20u; return; } if (c.pc != 0x002C3CCCu) [[unlikely]] return; }
L_002C3CCC:
    st32((c.r[16].w[0] + 324u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 68u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3CE0u); st32((c.r[16].w[0] + 60u), c.f[20]);  if (depth < kMaxDepth) unit_0018(c, 152u, depth + 1u); else { c.pc = 0x00181DB0u; return; } if (c.pc != 0x002C3CE0u) [[unlikely]] return; }
L_002C3CE0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3CF4u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x002C3CF4u) [[unlikely]] return; }
L_002C3CF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 23232u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3D08u); set32(c.r[5], c.r[16].w[0] + 68u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002C3D08u) [[unlikely]] return; }
L_002C3D08:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 324u)));
    c.budget -= 5;
L_002C3D1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C3D40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 324u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 324u), 0u);  goto L_002C3D68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3D64u);  if (depth < kMaxDepth) unit_0025(c, 530u, depth + 1u); else { c.pc = 0x001B7F60u; return; } if (c.pc != 0x002C3D64u) [[unlikely]] return; }
L_002C3D64:
    st32((c.r[16].w[0] + 324u), 0u);
    c.budget -= 1;
L_002C3D68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C3DA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3DB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x002C3DB4u) [[unlikely]] return; }
L_002C3DB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 26960u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 4;
L_002C3DC4:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 52u), 0u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3DC4u | kUnwind; return; } goto L_002C3DC4; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C3E00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3E14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 25u, depth + 1u); else { c.pc = 0x002C42F0u; return; } if (c.pc != 0x002C3E14u) [[unlikely]] return; }
L_002C3E14:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C3E40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002C3EE8; }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 2;
L_002C3E74:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 52u);  if (t) { goto L_002C3ED4; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);  goto L_002C3EAC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C3EB8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_002C3EAC:
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002C3ED8; }
L_002C3EB8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C3ED4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3ED0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C3ED0u) [[unlikely]] return; }
L_002C3ED0:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_002C3ED4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002C3ED8:
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3E74u | kUnwind; return; } goto L_002C3E74; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002C3EE8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C3F00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[17].sd[0] >= 0; c.f[20] = c.f[12];  if (t) { goto L_002C3F38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0069(c, 6u, depth); } }
L_002C3F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3F40u);  if (depth < kMaxDepth) unit_0069(c, 18u, depth + 1u); else { c.pc = 0x002C41C0u; return; } if (c.pc != 0x002C3F40u) [[unlikely]] return; }
L_002C3F40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002C3FA4; } }
L_002C3F48:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[2].w[0] + 52u);
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_002C3FA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3F64u); set32(c.r[4], 0u + 332u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002C3F64u) [[unlikely]] return; }
L_002C3F64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0]), c.r[2].w[0]);  goto L_002C3F7C; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3F78u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 334u, depth + 1u); else { c.pc = 0x002C3970u; return; } if (c.pc != 0x002C3F78u) [[unlikely]] return; }
L_002C3F78:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002C3F7C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_002C3F8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0069(c, 6u, depth); } }
L_002C3F8C:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3F9Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 345u, depth + 1u); else { c.pc = 0x002C3B80u; return; } if (c.pc != 0x002C3F9Cu) [[unlikely]] return; }
L_002C3F9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { [[clang::musttail]] return unit_0069(c, 7u, depth); } }
L_002C3FA4:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3F48u | kUnwind; return; } goto L_002C3F48; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3FC0u); set32(c.r[4], c.r[4].w[0] + 23280u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002C3FC0u) [[unlikely]] return; }
L_002C3FC0:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 2;
L_002C3FC8:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  [[clang::musttail]] return unit_0069(c, 5u, depth); }
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[6], c.r[4].w[0] + 68u);  [[clang::musttail]] return unit_0069(c, 3u, depth); }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], ld32((c.r[4].w[0] + 64u)));  goto L_002C3FF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0069(c, 4u, depth); } }
L_002C3FF8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 2;
    [[clang::musttail]] return unit_0069(c, 1u, depth);
}

}
