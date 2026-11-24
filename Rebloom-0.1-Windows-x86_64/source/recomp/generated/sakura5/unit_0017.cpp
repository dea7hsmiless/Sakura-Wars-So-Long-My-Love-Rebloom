#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0017[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5,
    0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0,
    0, 37, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 46,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0,
    0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0,
    70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83,
    0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0,
    0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106,
    0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0,
    0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0,
    0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0,
    0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0,
    0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0,
    156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171,
    0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0,
    176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0,
    0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0,
    196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0,
    0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0,
    0, 211, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0,
    226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234,
    0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0,
    264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 275, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0,
    0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0,
    305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313,
    0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0,
    320, 0, 0, 0, 321, 0, 322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0,
    328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0,
    0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 337, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0,
    341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0,
    0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 351, 0, 352, 0, 0, 0, 353,
    0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0,
    0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0,
    0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0,
    367, 0, 0, 0, 368, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0017(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0017C000;
    case 2u: goto L_0017C01C;
    case 3u: goto L_0017C03C;
    case 4u: goto L_0017C05C;
    case 5u: goto L_0017C07C;
    case 6u: goto L_0017C094;
    case 7u: goto L_0017C0A0;
    case 8u: goto L_0017C0B0;
    case 9u: goto L_0017C0C0;
    case 10u: goto L_0017C13C;
    case 11u: goto L_0017C164;
    case 12u: goto L_0017C190;
    case 13u: goto L_0017C1B0;
    case 14u: goto L_0017C1D0;
    case 15u: goto L_0017C1F0;
    case 16u: goto L_0017C210;
    case 17u: goto L_0017C230;
    case 18u: goto L_0017C23C;
    case 19u: goto L_0017C250;
    case 20u: goto L_0017C28C;
    case 21u: goto L_0017C2C0;
    case 22u: goto L_0017C2F4;
    case 23u: goto L_0017C324;
    case 24u: goto L_0017C354;
    case 25u: goto L_0017C380;
    case 26u: goto L_0017C3A0;
    case 27u: goto L_0017C3B4;
    case 28u: goto L_0017C3F0;
    case 29u: goto L_0017C420;
    case 30u: goto L_0017C430;
    case 31u: goto L_0017C460;
    case 32u: goto L_0017C490;
    case 33u: goto L_0017C4B4;
    case 34u: goto L_0017C4D4;
    case 35u: goto L_0017C4E4;
    case 36u: goto L_0017C4F4;
    case 37u: goto L_0017C504;
    case 38u: goto L_0017C50C;
    case 39u: goto L_0017C520;
    case 40u: goto L_0017C578;
    case 41u: goto L_0017C5B0;
    case 42u: goto L_0017C5C0;
    case 43u: goto L_0017C5D0;
    case 44u: goto L_0017C5E0;
    case 45u: goto L_0017C5E8;
    case 46u: goto L_0017C5FC;
    case 47u: goto L_0017C628;
    case 48u: goto L_0017C634;
    case 49u: goto L_0017C680;
    case 50u: goto L_0017C690;
    case 51u: goto L_0017C6D0;
    case 52u: goto L_0017C710;
    case 53u: goto L_0017C780;
    case 54u: goto L_0017C78C;
    case 55u: goto L_0017C7B8;
    case 56u: goto L_0017C830;
    case 57u: goto L_0017C888;
    case 58u: goto L_0017C918;
    case 59u: goto L_0017C9C0;
    case 60u: goto L_0017C9F8;
    case 61u: goto L_0017CA04;
    case 62u: goto L_0017CA14;
    case 63u: goto L_0017CA24;
    case 64u: goto L_0017CA30;
    case 65u: goto L_0017CA50;
    case 66u: goto L_0017CAE0;
    case 67u: goto L_0017CB10;
    case 68u: goto L_0017CB54;
    case 69u: goto L_0017CB74;
    case 70u: goto L_0017CB80;
    case 71u: goto L_0017CB90;
    case 72u: goto L_0017CC60;
    case 73u: goto L_0017CCA8;
    case 74u: goto L_0017CCB4;
    case 75u: goto L_0017CCC0;
    case 76u: goto L_0017CCCC;
    case 77u: goto L_0017CCD8;
    case 78u: goto L_0017CD30;
    case 79u: goto L_0017CD40;
    case 80u: goto L_0017CD50;
    case 81u: goto L_0017CD5C;
    case 82u: goto L_0017CD6C;
    case 83u: goto L_0017CD7C;
    case 84u: goto L_0017CD8C;
    case 85u: goto L_0017CE30;
    case 86u: goto L_0017CE48;
    case 87u: goto L_0017CE94;
    case 88u: goto L_0017CED8;
    case 89u: goto L_0017CEE8;
    case 90u: goto L_0017CF04;
    case 91u: goto L_0017CF50;
    case 92u: goto L_0017CF60;
    case 93u: goto L_0017CF70;
    case 94u: goto L_0017CFB4;
    case 95u: goto L_0017CFC4;
    case 96u: goto L_0017CFD4;
    case 97u: goto L_0017D000;
    case 98u: goto L_0017D010;
    case 99u: goto L_0017D040;
    case 100u: goto L_0017D050;
    case 101u: goto L_0017D064;
    case 102u: goto L_0017D0A0;
    case 103u: goto L_0017D0F0;
    case 104u: goto L_0017D0FC;
    case 105u: goto L_0017D128;
    case 106u: goto L_0017D17C;
    case 107u: goto L_0017D19C;
    case 108u: goto L_0017D1EC;
    case 109u: goto L_0017D1F8;
    case 110u: goto L_0017D224;
    case 111u: goto L_0017D278;
    case 112u: goto L_0017D298;
    case 113u: goto L_0017D2C8;
    case 114u: goto L_0017D2D8;
    case 115u: goto L_0017D2FC;
    case 116u: goto L_0017D32C;
    case 117u: goto L_0017D33C;
    case 118u: goto L_0017D354;
    case 119u: goto L_0017D3A4;
    case 120u: goto L_0017D3B0;
    case 121u: goto L_0017D3DC;
    case 122u: goto L_0017D430;
    case 123u: goto L_0017D450;
    case 124u: goto L_0017D480;
    case 125u: goto L_0017D490;
    case 126u: goto L_0017D4B4;
    case 127u: goto L_0017D4E0;
    case 128u: goto L_0017D4F0;
    case 129u: goto L_0017D510;
    case 130u: goto L_0017D560;
    case 131u: goto L_0017D56C;
    case 132u: goto L_0017D598;
    case 133u: goto L_0017D5EC;
    case 134u: goto L_0017D60C;
    case 135u: goto L_0017D63C;
    case 136u: goto L_0017D64C;
    case 137u: goto L_0017D664;
    case 138u: goto L_0017D694;
    case 139u: goto L_0017D6A4;
    case 140u: goto L_0017D6BC;
    case 141u: goto L_0017D70C;
    case 142u: goto L_0017D718;
    case 143u: goto L_0017D744;
    case 144u: goto L_0017D798;
    case 145u: goto L_0017D7B8;
    case 146u: goto L_0017D7E8;
    case 147u: goto L_0017D7F8;
    case 148u: goto L_0017D810;
    case 149u: goto L_0017D828;
    case 150u: goto L_0017D878;
    case 151u: goto L_0017D884;
    case 152u: goto L_0017D8B0;
    case 153u: goto L_0017D904;
    case 154u: goto L_0017D924;
    case 155u: goto L_0017D974;
    case 156u: goto L_0017D980;
    case 157u: goto L_0017D9AC;
    case 158u: goto L_0017DA00;
    case 159u: goto L_0017DA20;
    case 160u: goto L_0017DA50;
    case 161u: goto L_0017DA60;
    case 162u: goto L_0017DA78;
    case 163u: goto L_0017DAA8;
    case 164u: goto L_0017DAB8;
    case 165u: goto L_0017DAD0;
    case 166u: goto L_0017DB20;
    case 167u: goto L_0017DB2C;
    case 168u: goto L_0017DB58;
    case 169u: goto L_0017DBAC;
    case 170u: goto L_0017DBCC;
    case 171u: goto L_0017DBFC;
    case 172u: goto L_0017DC0C;
    case 173u: goto L_0017DC24;
    case 174u: goto L_0017DC58;
    case 175u: goto L_0017DC6C;
    case 176u: goto L_0017DC80;
    case 177u: goto L_0017DCC0;
    case 178u: goto L_0017DCE8;
    case 179u: goto L_0017DCF8;
    case 180u: goto L_0017DD08;
    case 181u: goto L_0017DD20;
    case 182u: goto L_0017DD90;
    case 183u: goto L_0017DE50;
    case 184u: goto L_0017DEC8;
    case 185u: goto L_0017DED4;
    case 186u: goto L_0017DF00;
    case 187u: goto L_0017E020;
    case 188u: goto L_0017E04C;
    case 189u: goto L_0017E060;
    case 190u: goto L_0017E094;
    case 191u: goto L_0017E0C0;
    case 192u: goto L_0017E0DC;
    case 193u: goto L_0017E0EC;
    case 194u: goto L_0017E100;
    case 195u: goto L_0017E170;
    case 196u: goto L_0017E180;
    case 197u: goto L_0017E190;
    case 198u: goto L_0017E1C4;
    case 199u: goto L_0017E230;
    case 200u: goto L_0017E26C;
    case 201u: goto L_0017E570;
    case 202u: goto L_0017E5C4;
    case 203u: goto L_0017E5D4;
    case 204u: goto L_0017E5E4;
    case 205u: goto L_0017E5F4;
    case 206u: goto L_0017E604;
    case 207u: goto L_0017E644;
    case 208u: goto L_0017E654;
    case 209u: goto L_0017E664;
    case 210u: goto L_0017E674;
    case 211u: goto L_0017E684;
    case 212u: goto L_0017E694;
    case 213u: goto L_0017E69C;
    case 214u: goto L_0017E6B0;
    case 215u: goto L_0017E6D0;
    case 216u: goto L_0017E6F0;
    case 217u: goto L_0017E724;
    case 218u: goto L_0017E800;
    case 219u: goto L_0017E864;
    case 220u: goto L_0017E874;
    case 221u: goto L_0017E8DC;
    case 222u: goto L_0017E8E8;
    case 223u: goto L_0017E914;
    case 224u: goto L_0017EA5C;
    case 225u: goto L_0017EA68;
    case 226u: goto L_0017EA80;
    case 227u: goto L_0017EAB4;
    case 228u: goto L_0017EAC0;
    case 229u: goto L_0017EAD8;
    case 230u: goto L_0017EAEC;
    case 231u: goto L_0017EB24;
    case 232u: goto L_0017EB5C;
    case 233u: goto L_0017EBF0;
    case 234u: goto L_0017EBFC;
    case 235u: goto L_0017EC14;
    case 236u: goto L_0017EC44;
    case 237u: goto L_0017EC50;
    case 238u: goto L_0017EC68;
    case 239u: goto L_0017EC7C;
    case 240u: goto L_0017ECC8;
    case 241u: goto L_0017ECD8;
    case 242u: goto L_0017ED24;
    case 243u: goto L_0017ED44;
    case 244u: goto L_0017ED90;
    case 245u: goto L_0017EDE0;
    case 246u: goto L_0017EE50;
    case 247u: goto L_0017EEA8;
    case 248u: goto L_0017EEB4;
    case 249u: goto L_0017EEC0;
    case 250u: goto L_0017EECC;
    case 251u: goto L_0017EED8;
    case 252u: goto L_0017EEE4;
    case 253u: goto L_0017F08C;
    case 254u: goto L_0017F098;
    case 255u: goto L_0017F0A4;
    case 256u: goto L_0017F160;
    case 257u: goto L_0017F190;
    case 258u: goto L_0017F1AC;
    case 259u: goto L_0017F210;
    case 260u: goto L_0017F23C;
    case 261u: goto L_0017F2B0;
    case 262u: goto L_0017F2DC;
    case 263u: goto L_0017F2E8;
    case 264u: goto L_0017F300;
    case 265u: goto L_0017F320;
    case 266u: goto L_0017F344;
    case 267u: goto L_0017F358;
    case 268u: goto L_0017F370;
    case 269u: goto L_0017F3B0;
    case 270u: goto L_0017F3DC;
    case 271u: goto L_0017F408;
    case 272u: goto L_0017F410;
    case 273u: goto L_0017F428;
    case 274u: goto L_0017F438;
    case 275u: goto L_0017F440;
    case 276u: goto L_0017F448;
    case 277u: goto L_0017F460;
    case 278u: goto L_0017F478;
    case 279u: goto L_0017F4A4;
    case 280u: goto L_0017F4B0;
    case 281u: goto L_0017F4C0;
    case 282u: goto L_0017F4D0;
    case 283u: goto L_0017F4E8;
    case 284u: goto L_0017F4F4;
    case 285u: goto L_0017F520;
    case 286u: goto L_0017F530;
    case 287u: goto L_0017F55C;
    case 288u: goto L_0017F588;
    case 289u: goto L_0017F5B4;
    case 290u: goto L_0017F5CC;
    case 291u: goto L_0017F5F0;
    case 292u: goto L_0017F61C;
    case 293u: goto L_0017F648;
    case 294u: goto L_0017F66C;
    case 295u: goto L_0017F684;
    case 296u: goto L_0017F6B0;
    case 297u: goto L_0017F6DC;
    case 298u: goto L_0017F710;
    case 299u: goto L_0017F734;
    case 300u: goto L_0017F74C;
    case 301u: goto L_0017F760;
    case 302u: goto L_0017F7A8;
    case 303u: goto L_0017F7D4;
    case 304u: goto L_0017F7F0;
    case 305u: goto L_0017F800;
    case 306u: goto L_0017F834;
    case 307u: goto L_0017F860;
    case 308u: goto L_0017F890;
    case 309u: goto L_0017F8E4;
    case 310u: goto L_0017F8F8;
    case 311u: goto L_0017F940;
    case 312u: goto L_0017F968;
    case 313u: goto L_0017F97C;
    case 314u: goto L_0017F9A0;
    case 315u: goto L_0017F9CC;
    case 316u: goto L_0017F9F8;
    case 317u: goto L_0017FA44;
    case 318u: goto L_0017FA54;
    case 319u: goto L_0017FA64;
    case 320u: goto L_0017FA80;
    case 321u: goto L_0017FA90;
    case 322u: goto L_0017FA98;
    case 323u: goto L_0017FAA8;
    case 324u: goto L_0017FAB8;
    case 325u: goto L_0017FAD0;
    case 326u: goto L_0017FAE0;
    case 327u: goto L_0017FAF0;
    case 328u: goto L_0017FB00;
    case 329u: goto L_0017FB34;
    case 330u: goto L_0017FB68;
    case 331u: goto L_0017FB8C;
    case 332u: goto L_0017FBA4;
    case 333u: goto L_0017FBB8;
    case 334u: goto L_0017FC00;
    case 335u: goto L_0017FC1C;
    case 336u: goto L_0017FC2C;
    case 337u: goto L_0017FC34;
    case 338u: goto L_0017FC44;
    case 339u: goto L_0017FC54;
    case 340u: goto L_0017FC70;
    case 341u: goto L_0017FC80;
    case 342u: goto L_0017FCCC;
    case 343u: goto L_0017FCE4;
    case 344u: goto L_0017FCF8;
    case 345u: goto L_0017FD0C;
    case 346u: goto L_0017FD1C;
    case 347u: goto L_0017FD2C;
    case 348u: goto L_0017FDA0;
    case 349u: goto L_0017FDC0;
    case 350u: goto L_0017FDDC;
    case 351u: goto L_0017FDE4;
    case 352u: goto L_0017FDEC;
    case 353u: goto L_0017FDFC;
    case 354u: goto L_0017FE04;
    case 355u: goto L_0017FE78;
    case 356u: goto L_0017FE8C;
    case 357u: goto L_0017FEA4;
    case 358u: goto L_0017FEAC;
    case 359u: goto L_0017FEC8;
    case 360u: goto L_0017FEF0;
    case 361u: goto L_0017FF0C;
    case 362u: goto L_0017FF14;
    case 363u: goto L_0017FF28;
    case 364u: goto L_0017FF40;
    case 365u: goto L_0017FF48;
    case 366u: goto L_0017FF64;
    case 367u: goto L_0017FF80;
    case 368u: goto L_0017FF90;
    case 369u: goto L_0017FFA0;
    case 370u: goto L_0017FFA8;
    case 371u: goto L_0017FFC0;
    case 372u: goto L_0017FFD0;
    case 373u: goto L_0017FFE0;
    default: bad_entry(c, 0x0017C000u); return;
    }
L_0017C000:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_0017C020; }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], c.r[21].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C01Cu); set32(c.r[7], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_0017(c, 245u, depth + 1u); else { c.pc = 0x0017EDE0u; return; } if (c.pc != 0x0017C01Cu) [[unlikely]] return; }
L_0017C01C:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0017C020:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0017C040; }
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[21].w[0] + 32u);
    set32(c.r[6], c.r[21].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C03Cu); set32(c.r[7], c.r[21].w[0] + 48u);  if (depth < kMaxDepth) unit_0017(c, 245u, depth + 1u); else { c.pc = 0x0017EDE0u; return; } if (c.pc != 0x0017C03Cu) [[unlikely]] return; }
L_0017C03C:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0017C040:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 5u);  goto L_0017C060; }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], c.r[21].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C05Cu); set32(c.r[7], c.r[21].w[0] + 64u);  if (depth < kMaxDepth) unit_0017(c, 245u, depth + 1u); else { c.pc = 0x0017EDE0u; return; } if (c.pc != 0x0017C05Cu) [[unlikely]] return; }
L_0017C05C:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_0017C060:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[22], c.r[16].w[0] << 4);  goto L_0017C080; }
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[21].w[0] + 16u);
    set32(c.r[6], c.r[21].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C07Cu); set32(c.r[7], c.r[21].w[0] + 32u);  if (depth < kMaxDepth) unit_0017(c, 245u, depth + 1u); else { c.pc = 0x0017EDE0u; return; } if (c.pc != 0x0017C07Cu) [[unlikely]] return; }
L_0017C07C:
    set32(c.r[22], c.r[16].w[0] << 4);
    c.budget -= 1;
L_0017C080:
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[22].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[2].w[0] + 240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C094u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0017DCC0u; return; } if (c.pc != 0x0017C094u) [[unlikely]] return; }
L_0017C094:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C0A0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0017C0A0u) [[unlikely]] return; }
L_0017C0A0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C0B0u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0017C0B0u) [[unlikely]] return; }
L_0017C0B0:
    set32(c.r[2], c.r[22].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C0C0u); set32(c.r[5], c.r[2].w[0] + 240u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0017C0C0u) [[unlikely]] return; }
L_0017C0C0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[29].w[0] + 160u));  goto L_0017C0EC; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0017C250; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017C28C; } }
L_0017C0EC:
    set32(c.r[2], c.r[22].w[0] + c.r[29].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    set32(c.r[2], c.r[2].w[0] + 240u);
    c.f[2] = ld32((c.r[2].w[0]));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 208u), c.f[1]);
    set32(c.r[5], c.r[29].w[0] + 208u);
    st32((c.r[29].w[0] + 212u), c.f[0]);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[3] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[29].w[0] + 224u), c.f[2]);
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st32((c.r[29].w[0] + 216u), c.f[3]);
    set32(c.r[17], c.r[2].w[0] + 336u);
    st32((c.r[29].w[0] + 228u), c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C13Cu); st32((c.r[29].w[0] + 232u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 56u, depth + 1u); else { c.pc = 0x0017C830u; return; } if (c.pc != 0x0017C13Cu) [[unlikely]] return; }
L_0017C13C:
    c.f[1] = ld32((c.r[20].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0]), c.f[0]);  if (t) { goto L_0017C154; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017C28C; } }
L_0017C154:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C164u); set32(c.r[19], c.r[19].w[0] + 1u);  if (depth < kMaxDepth) unit_0017(c, 194u, depth + 1u); else { c.pc = 0x0017E100u; return; } if (c.pc != 0x0017C164u) [[unlikely]] return; }
L_0017C164:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017C174; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017C28C; } }
L_0017C174:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0017C194; }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], c.r[21].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C190u); set32(c.r[7], c.r[21].w[0] + 32u);  if (depth < kMaxDepth) unit_0017(c, 245u, depth + 1u); else { c.pc = 0x0017EDE0u; return; } if (c.pc != 0x0017C190u) [[unlikely]] return; }
L_0017C190:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0017C194:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0017C1B4; }
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[21].w[0] + 64u);
    set32(c.r[6], c.r[21].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C1B0u); set32(c.r[7], c.r[21].w[0] + 112u);  if (depth < kMaxDepth) unit_0017(c, 245u, depth + 1u); else { c.pc = 0x0017EDE0u; return; } if (c.pc != 0x0017C1B0u) [[unlikely]] return; }
L_0017C1B0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0017C1B4:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_0017C1D4; }
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[21].w[0] + 16u);
    set32(c.r[6], c.r[21].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C1D0u); set32(c.r[7], c.r[21].w[0] + 64u);  if (depth < kMaxDepth) unit_0017(c, 245u, depth + 1u); else { c.pc = 0x0017EDE0u; return; } if (c.pc != 0x0017C1D0u) [[unlikely]] return; }
L_0017C1D0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0017C1D4:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0017C1F4; }
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[21].w[0] + 48u);
    set32(c.r[6], c.r[21].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C1F0u); set32(c.r[7], c.r[21].w[0] + 96u);  if (depth < kMaxDepth) unit_0017(c, 245u, depth + 1u); else { c.pc = 0x0017EDE0u; return; } if (c.pc != 0x0017C1F0u) [[unlikely]] return; }
L_0017C1F0:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0017C1F4:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 5u);  goto L_0017C214; }
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[21].w[0] + 48u);
    set32(c.r[6], c.r[21].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C210u); set32(c.r[7], c.r[21].w[0] + 112u);  if (depth < kMaxDepth) unit_0017(c, 245u, depth + 1u); else { c.pc = 0x0017EDE0u; return; } if (c.pc != 0x0017C210u) [[unlikely]] return; }
L_0017C210:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_0017C214:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_0017C234; }
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[21].w[0] + 32u);
    set32(c.r[6], c.r[21].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C230u); set32(c.r[7], c.r[21].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 245u, depth + 1u); else { c.pc = 0x0017EDE0u; return; } if (c.pc != 0x0017C230u) [[unlikely]] return; }
L_0017C230:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_0017C234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C23Cu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0017(c, 194u, depth + 1u); else { c.pc = 0x0017E100u; return; } if (c.pc != 0x0017C23Cu) [[unlikely]] return; }
L_0017C23C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017C24C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017C28C; } }
L_0017C24C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0017C250:
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017BFC0u | kUnwind; return; } [[clang::musttail]] return unit_0016(c, 297u, depth); } }
    c.f[0] = ld32((c.r[20].w[0] + 16u));
    c.f[3] = ld32((c.r[29].w[0] + 340u));
    c.f[1] = ld32((c.r[29].w[0] + 336u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[2] = ld32((c.r[29].w[0] + 344u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0017C28C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0017C28C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_0017C2C0:
    set32(c.r[29], c.r[29].w[0] - 592u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - 4496u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 6u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.budget -= 13;
L_0017C2F4:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017C2F4u | kUnwind; return; } goto L_0017C2F4; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[29].w[0] + 400u);
    set32(c.r[6], c.r[6].w[0] - 4448u);
    set32(c.r[4], 0u + 6u);
    c.budget -= 4;
L_0017C324:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017C324u | kUnwind; return; } goto L_0017C324; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    set32(c.r[6], c.r[6].w[0] - 4400u);
    set32(c.r[4], 0u + 6u);
    c.budget -= 4;
L_0017C354:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017C354u | kUnwind; return; } goto L_0017C354; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C380u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x0017C380u) [[unlikely]] return; }
L_0017C380:
    c.f[1] = ld32((c.r[28].w[0] - 32592u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[16].w[0]));  goto L_0017C3BC; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C3A0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0017C3A0u) [[unlikely]] return; }
L_0017C3A0:
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C3B4u); st32((c.r[29].w[0] + 112u), c.f[0]);  if (depth < kMaxDepth) unit_0016(c, 294u, depth + 1u); else { c.pc = 0x0017BF40u; return; } if (c.pc != 0x0017C3B4u) [[unlikely]] return; }
L_0017C3B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0017C664; } }
L_0017C3BC:
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 496u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[29].w[0] + 500u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[29].w[0] + 504u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[29].w[0] + 512u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[29].w[0] + 516u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 520u), c.f[0]);  if (t) { goto L_0017C44C; } }
L_0017C3F0:
    set32(c.r[4], c.r[29].w[0] + 528u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 448u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 400u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[2], ld32((c.r[2].w[0] + 352u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C420u); set32(c.r[7], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 245u, depth + 1u); else { c.pc = 0x0017EDE0u; return; } if (c.pc != 0x0017C420u) [[unlikely]] return; }
L_0017C420:
    set32(c.r[4], c.r[29].w[0] + 496u);
    set32(c.r[5], c.r[29].w[0] + 528u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C430u); set32(c.r[6], c.r[29].w[0] + 588u);  if (depth < kMaxDepth) unit_0017(c, 201u, depth + 1u); else { c.pc = 0x0017E570u; return; } if (c.pc != 0x0017C430u) [[unlikely]] return; }
L_0017C430:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[29].w[0] + 588u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0017C44C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017C660; } }
L_0017C44C:
    c.r[2].d[0] = c.r[18].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0017C3F0u | kUnwind; return; } goto L_0017C3F0; }
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 2;
L_0017C460:
    set32(c.r[4], c.r[29].w[0] + 528u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 448u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 400u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[2], ld32((c.r[2].w[0] + 352u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C490u); set32(c.r[7], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 245u, depth + 1u); else { c.pc = 0x0017EDE0u; return; } if (c.pc != 0x0017C490u) [[unlikely]] return; }
L_0017C490:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 1));  if (t) { goto L_0017C4A0; } }
    set32(c.r[2], c.r[18].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0017C4A0:
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[5], c.r[29].w[0] + 528u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C4B4u); set32(c.r[4], c.r[2].w[0] + 256u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0017DCC0u; return; } if (c.pc != 0x0017C4B4u) [[unlikely]] return; }
L_0017C4B4:
    set32(c.r[18], c.r[18].w[0] + 2u);
    c.r[2].d[0] = c.r[18].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0017C460u | kUnwind; return; } goto L_0017C460; }
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C4D4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0017C4D4u) [[unlikely]] return; }
L_0017C4D4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C4E4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0017C4E4u) [[unlikely]] return; }
L_0017C4E4:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C4F4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0017C4F4u) [[unlikely]] return; }
L_0017C4F4:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C504u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0017C504u) [[unlikely]] return; }
L_0017C504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0017C594; } }
L_0017C50C:
    set32(c.r[2], c.r[20].w[0] + c.r[29].w[0]);
    set32(c.r[19], c.r[2].w[0] + 256u);
    set32(c.r[5], c.r[2].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C520u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0017C520u) [[unlikely]] return; }
L_0017C520:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0017C570; }
    set32(c.r[3], c.r[20].w[0] + c.r[29].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[3], c.r[3].w[0] + 256u);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 15;
L_0017C570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C578u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0017C578u) [[unlikely]] return; }
L_0017C578:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0017C594; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017C660; } }
L_0017C594:
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[20], c.r[18].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0017C50Cu | kUnwind; return; } goto L_0017C50C; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C5B0u); set32(c.r[6], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0017C5B0u) [[unlikely]] return; }
L_0017C5B0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[17].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C5C0u); set32(c.r[6], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0017C5C0u) [[unlikely]] return; }
L_0017C5C0:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[17].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C5D0u); set32(c.r[6], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0017C5D0u) [[unlikely]] return; }
L_0017C5D0:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C5E0u); set32(c.r[6], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0017C5E0u) [[unlikely]] return; }
L_0017C5E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 3u);  if (t) { goto L_0017C650; } }
L_0017C5E8:
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[18], c.r[2].w[0] + 256u);
    set32(c.r[5], c.r[2].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C5FCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0017C5FCu) [[unlikely]] return; }
L_0017C5FC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0017C62C; }
    set32(c.r[3], c.r[16].w[0] + c.r[29].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[3].w[0] + 256u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C628u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0017C628u) [[unlikely]] return; }
L_0017C628:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0017C62C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C634u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0017C634u) [[unlikely]] return; }
L_0017C634:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0017C650; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017C660; } }
L_0017C650:
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[17].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0017C5E8u | kUnwind; return; } goto L_0017C5E8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0017C660:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0017C664:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_0017C680:
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 3;
    { set32(c.r[5], c.r[5].w[0] + 16u);  goto L_0017EE50; }
L_0017C690:
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[3] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.budget -= 13;
    { c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);  [[clang::musttail]] return unit_0019(c, 5u, depth); }
L_0017C6D0:
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[3] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);  c.pc = t; return; }
L_0017C710:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    st32((c.r[29].w[0] + 84u), c.f[2]);
    st32((c.r[29].w[0] + 88u), c.f[3]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C780u); c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0017C780u) [[unlikely]] return; }
L_0017C780:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C78Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0017C78Cu) [[unlikely]] return; }
L_0017C78C:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.f[20] = c.f[0];
    c.f[12] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32236u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[1];  goto L_0017C7B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C7B8u);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x0017C7B8u) [[unlikely]] return; }
L_0017C7B8:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.f[5] = ld32((c.r[17].w[0] + 8u));  goto L_0017C7C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0017C814; } }
L_0017C7C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[6] = ld32((c.r[29].w[0] + 72u));
    c.f[4] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[20]);
    c.f[3] = ld32((c.r[29].w[0] + 68u));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[20]);
    st32((c.r[16].w[0]), c.f[1]);
    st32((c.r[16].w[0] + 4u), c.f[3]);
    st32((c.r[16].w[0] + 8u), c.f[5]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 19;
L_0017C814:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0017C830:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), c.f[26]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[2] = ld32((c.r[5].w[0] + 20u));
    c.f[1] = ld32((c.r[5].w[0] + 16u));
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C888u); c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x0017C888u) [[unlikely]] return; }
L_0017C888:
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.f[11] = ld32((c.r[17].w[0] + 20u));
    c.f[10] = ld32((c.r[17].w[0] + 16u));
    c.f[22] = fp::ee::div(c.fcr31, c.f[12], c.f[0]);
    c.f[23] = fp::ee::div(c.fcr31, c.f[11], c.f[0]);
    c.f[24] = fp::ee::div(c.fcr31, c.f[10], c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[6] = ld32((c.r[18].w[0]));
    c.f[5] = ld32((c.r[17].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[3]);
    c.f[9] = ld32((c.r[18].w[0] + 8u));
    c.f[8] = ld32((c.r[17].w[0] + 8u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[23], c.f[0]);
    c.f[7] = fp::ee::sub(c.fcr31, c.f[9], c.f[8]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[24], c.f[4]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[7]);
    c.f[2] = 0u;
    c.budget -= 21;
    { const bool t = c.r[16].d[0] == 0ull; c.f[25] = c.f[0] & fp::kAbs;  if (t) { goto L_0017C984; } }
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[9]);
    c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[25]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[23], c.f[25]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[11], c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    c.f[26] = fp::ee::madd(c.fcr31, c.facc, c.f[24], c.f[25]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[26], c.f[5]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[21], c.f[8]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C918u); c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[12], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0017C918u) [[unlikely]] return; }
L_0017C918:
    c.f[1] = ld32((c.r[28].w[0] - 32592u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[4] = ld32((c.r[18].w[0] + 8u));  goto L_0017C940; }
    st32((c.r[16].w[0]), c.f[26]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 4u), c.f[20]);
    st32((c.r[16].w[0] + 8u), c.f[21]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0017C984; } }
L_0017C940:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = 0u;
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.f[5] = c.f[22] ^ fp::kSign;
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[25]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[2] = c.f[23] ^ fp::kSign;
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[25]);
    c.f[1] = c.f[24] ^ fp::kSign;
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[25]);
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[4]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 17;
L_0017C984:
    c.f[0] = c.f[25];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0017C9C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C9F8u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0017C9F8u) [[unlikely]] return; }
L_0017C9F8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CA04u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0017CA04u) [[unlikely]] return; }
L_0017CA04:
    c.f[22] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CA14u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0017CA14u) [[unlikely]] return; }
L_0017CA14:
    c.f[21] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CA24u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0017CA24u) [[unlikely]] return; }
L_0017CA24:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CA30u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0017CA30u) [[unlikely]] return; }
L_0017CA30:
    c.f[1] = ld32((c.r[28].w[0] - 32592u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017CA58; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CA50u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 56u, depth + 1u); else { c.pc = 0x0017C830u; return; } if (c.pc != 0x0017CA50u) [[unlikely]] return; }
L_0017CA50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0017CABC; } }
L_0017CA58:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0017CAB4; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[22], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[6] = fp::ee::div(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[4] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[6]);
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[3] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[6]);
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[6]);
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[5]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 21;
L_0017CAB4:
    c.f[0] = 0u;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 2;
L_0017CABC:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0017CAE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 16u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CB10u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0017(c, 246u, depth + 1u); else { c.pc = 0x0017EE50u; return; } if (c.pc != 0x0017CB10u) [[unlikely]] return; }
L_0017CB10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017CB5C; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0017CB48; }
    st32((c.r[16].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
L_0017CB48:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CB54u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 56u, depth + 1u); else { c.pc = 0x0017C830u; return; } if (c.pc != 0x0017CB54u) [[unlikely]] return; }
L_0017CB54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0017CC40; } }
L_0017CB5C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0017CC38; } }
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CB74u); set32(c.r[6], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x0017CB74u) [[unlikely]] return; }
L_0017CB74:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CB80u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0017CB80u) [[unlikely]] return; }
L_0017CB80:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CB90u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0017CB90u) [[unlikely]] return; }
L_0017CB90:
    c.f[14] = ld32((c.r[18].w[0] + 20u));
    c.f[10] = ld32((c.r[17].w[0] + 24u));
    c.f[15] = ld32((c.r[18].w[0] + 16u));
    c.f[11] = ld32((c.r[17].w[0] + 20u));
    c.f[13] = ld32((c.r[18].w[0] + 24u));
    c.f[12] = ld32((c.r[17].w[0] + 16u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[14], c.f[10]);
    c.f[9] = ld32((c.r[16].w[0] + 16u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[15], c.f[11]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[13], c.f[12]);
    c.f[7] = ld32((c.r[16].w[0] + 24u));
    c.facc = fp::ee::mul(c.fcr31, c.f[9], c.f[1]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[13], c.f[11]);
    c.f[8] = ld32((c.r[16].w[0] + 20u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[2]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[14], c.f[12]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[3]);
    c.facc = fp::ee::msub(c.fcr31, c.facc, c.f[9], c.f[4]);
    c.f[6] = fp::ee::mul(c.fcr31, c.f[15], c.f[10]);
    c.facc = fp::ee::msub(c.fcr31, c.facc, c.f[7], c.f[5]);
    c.f[3] = fp::ee::msub(c.fcr31, c.facc, c.f[8], c.f[6]);
    c.facc = fp::ee::mul(c.fcr31, c.f[11], c.f[7]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[8], c.f[10]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[1], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[14], c.f[7]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[8], c.f[13]);
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[12], c.f[7]);
    c.f[2] = fp::ee::msub(c.fcr31, c.facc, c.f[9], c.f[10]);
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[16].w[0]), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[15], c.f[7]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[9], c.f[13]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[3]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[2]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 42;
L_0017CC38:
    c.f[0] = 0u;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 2;
L_0017CC40:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0017CC60:
    set32(c.r[29], c.r[29].w[0] - 528u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    set32(c.r[4], c.r[29].w[0] + 432u);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CCA8u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0017CCA8u) [[unlikely]] return; }
L_0017CCA8:
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CCB4u); set32(c.r[4], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0017CCB4u) [[unlikely]] return; }
L_0017CCB4:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CCC0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0017CCC0u) [[unlikely]] return; }
L_0017CCC0:
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CCCCu); set32(c.r[4], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0017CCCCu) [[unlikely]] return; }
L_0017CCCC:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CCD8u); set32(c.r[5], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0017CCD8u) [[unlikely]] return; }
L_0017CCD8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 512u);  goto L_0017CD34; }
    c.f[1] = ld32((c.r[29].w[0] + 400u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = ld32((c.r[29].w[0] + 416u));
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.f[3] = ld32((c.r[29].w[0] + 404u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 420u));
    c.f[4] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 408u));
    c.f[0] = ld32((c.r[29].w[0] + 424u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 400u), c.f[4]);
    st32((c.r[29].w[0] + 404u), c.f[2]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CD30u); st32((c.r[29].w[0] + 408u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0017CD30u) [[unlikely]] return; }
L_0017CD30:
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 1;
L_0017CD34:
    set32(c.r[5], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CD40u); set32(c.r[6], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0017CD40u) [[unlikely]] return; }
L_0017CD40:
    set32(c.r[4], c.r[29].w[0] + 496u);
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CD50u); set32(c.r[6], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0017CD50u) [[unlikely]] return; }
L_0017CD50:
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CD5Cu); set32(c.r[5], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0017CD5Cu) [[unlikely]] return; }
L_0017CD5C:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.f[24] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CD6Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0017CD6Cu) [[unlikely]] return; }
L_0017CD6C:
    c.f[23] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CD7Cu); set32(c.r[5], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0017CD7Cu) [[unlikely]] return; }
L_0017CD7C:
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.f[21] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CD8Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0017CD8Cu) [[unlikely]] return; }
L_0017CD8C:
    c.f[22] = c.f[0];
    c.f[0] = ld32((c.r[28].w[0] - 32592u));
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017CE78; } }
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0017CE3C; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0017CDD4; } }
    c.f[0] = ld32((c.r[29].w[0] + 432u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 436u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 444u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.budget -= 8;
L_0017CDD4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.f[1] = ld32((c.r[29].w[0] + 432u));  goto L_0017CE00; }
    c.f[0] = ld32((c.r[29].w[0] + 400u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 404u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 408u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 412u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 432u));
    c.budget -= 9;
L_0017CE00:
    c.f[0] = ld32((c.r[29].w[0] + 400u));
    c.f[3] = ld32((c.r[29].w[0] + 436u));
    c.f[2] = ld32((c.r[29].w[0] + 404u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 440u));
    c.f[0] = ld32((c.r[29].w[0] + 408u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CE30u); c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x0017CE30u) [[unlikely]] return; }
L_0017CE30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0017DC88; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0017CE3C:
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CE48u); set32(c.r[6], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_0017(c, 183u, depth + 1u); else { c.pc = 0x0017DE50u; return; } if (c.pc != 0x0017CE48u) [[unlikely]] return; }
L_0017CE48:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0017DC84; } }
    c.f[1] = ld32((c.r[29].w[0] + 432u));
    st32((c.r[17].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 436u));
    st32((c.r[17].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 440u));
    st32((c.r[17].w[0] + 8u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 444u));
    st32((c.r[17].w[0] + 12u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DC84; } }
L_0017CE78:
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.facc = fp::ee::mul(c.fcr31, c.f[23], c.f[22]);  goto L_0017CEC8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CE94u); set32(c.r[6], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_0017(c, 183u, depth + 1u); else { c.pc = 0x0017DE50u; return; } if (c.pc != 0x0017CE94u) [[unlikely]] return; }
L_0017CE94:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0017DC84; } }
    c.f[1] = ld32((c.r[29].w[0] + 400u));
    st32((c.r[16].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 404u));
    st32((c.r[16].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 408u));
    st32((c.r[16].w[0] + 8u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 412u));
    st32((c.r[16].w[0] + 12u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DC84; } }
    c.facc = fp::ee::mul(c.fcr31, c.f[23], c.f[22]);
    c.budget -= 1;
L_0017CEC8:
    set32(c.r[4], c.r[29].w[0] + 448u);
    set32(c.r[5], c.r[29].w[0] + 416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CED8u); c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[21], c.f[21]);  if (depth < kMaxDepth) unit_0017(c, 246u, depth + 1u); else { c.pc = 0x0017EE50u; return; } if (c.pc != 0x0017CED8u) [[unlikely]] return; }
L_0017CED8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 512u);  goto L_0017CEFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CEE8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0017CEE8u) [[unlikely]] return; }
L_0017CEE8:
    c.f[1] = ld32((c.r[28].w[0] - 32592u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 496u);  goto L_0017D05C; }
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 1;
L_0017CEFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CF04u); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0017CF04u) [[unlikely]] return; }
L_0017CF04:
    c.f[12] = fp::ee::div(c.fcr31, c.f[0], c.f[23]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[24], c.f[22]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017CF78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017CF78; } }
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CF50u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0017CF50u) [[unlikely]] return; }
L_0017CF50:
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CF60u); set32(c.r[6], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0017CF60u) [[unlikely]] return; }
L_0017CF60:
    set32(c.r[4], c.r[29].w[0] + 464u);
    set32(c.r[5], c.r[29].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CF70u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0017CF70u) [[unlikely]] return; }
L_0017CF70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 480u));  if (t) { goto L_0017DC28; } }
L_0017CF78:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017CFDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017CFDC; } }
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.f[12] = c.f[1];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CFB4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0017CFB4u) [[unlikely]] return; }
L_0017CFB4:
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CFC4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0017CFC4u) [[unlikely]] return; }
L_0017CFC4:
    set32(c.r[4], c.r[29].w[0] + 464u);
    set32(c.r[5], c.r[29].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CFD4u); set32(c.r[6], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0017CFD4u) [[unlikely]] return; }
L_0017CFD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DC24; } }
L_0017CFDC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0017D01C; }
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D000u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0017D000u) [[unlikely]] return; }
L_0017D000:
    set32(c.r[4], c.r[29].w[0] + 464u);
    set32(c.r[5], c.r[29].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D010u); set32(c.r[6], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0017D010u) [[unlikely]] return; }
L_0017D010:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DC24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0017D01C:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017DC24; } }
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D040u); set32(c.r[6], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0017D040u) [[unlikely]] return; }
L_0017D040:
    set32(c.r[4], c.r[29].w[0] + 464u);
    set32(c.r[5], c.r[29].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D050u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0017D050u) [[unlikely]] return; }
L_0017D050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DC24; } }
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 1;
L_0017D05C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D064u); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0017D064u) [[unlikely]] return; }
L_0017D064:
    c.facc = fp::ee::mul(c.fcr31, c.f[24], c.f[21]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[22]);
    c.f[12] = fp::ee::div(c.fcr31, c.f[1], c.f[20]);
    c.facc = fp::ee::mul(c.fcr31, c.f[24], c.f[23]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[21]);
    c.f[20] = fp::ee::div(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 12;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0017D4C0; }
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D0A0u); set32(c.r[5], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0017D0A0u) [[unlikely]] return; }
L_0017D0A0:
    c.f[1] = ld32((c.r[29].w[0] + 480u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[29].w[0] + 400u));
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[29].w[0] + 484u));
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.f[2] = ld32((c.r[29].w[0] + 404u));
    set32(c.r[5], c.r[29].w[0] + 416u);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 488u));
    c.f[0] = ld32((c.r[29].w[0] + 408u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    st32((c.r[29].w[0] + 352u), c.f[4]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 356u), c.f[2]);
    st32((c.r[29].w[0] + 360u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D0F0u); c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0017D0F0u) [[unlikely]] return; }
L_0017D0F0:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D0FCu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0017D0FCu) [[unlikely]] return; }
L_0017D0FC:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.f[20] = c.f[0];
    c.f[12] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32236u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[29].w[0] + 400u));  goto L_0017D12C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D128u);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x0017D128u) [[unlikely]] return; }
L_0017D128:
    c.f[0] = ld32((c.r[29].w[0] + 400u));
    c.budget -= 1;
L_0017D12C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = 0u;
    st32((c.r[29].w[0] + 476u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 336u));
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 400u);
    c.f[0] = ld32((c.r[29].w[0] + 404u));
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);
    c.f[2] = ld32((c.r[29].w[0] + 340u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 408u));
    c.f[1] = ld32((c.r[29].w[0] + 344u));
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[20]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);
    st32((c.r[29].w[0] + 464u), c.f[4]);
    st32((c.r[29].w[0] + 468u), c.f[2]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D17Cu); st32((c.r[29].w[0] + 472u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 182u, depth + 1u); else { c.pc = 0x0017DD90u; return; } if (c.pc != 0x0017D17Cu) [[unlikely]] return; }
L_0017D17C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0017D308; }
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D19Cu); set32(c.r[5], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0017D19Cu) [[unlikely]] return; }
L_0017D19C:
    c.f[1] = ld32((c.r[29].w[0] + 464u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[29].w[0] + 432u));
    st32((c.r[29].w[0] + 332u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[29].w[0] + 468u));
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.f[2] = ld32((c.r[29].w[0] + 436u));
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 472u));
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    st32((c.r[29].w[0] + 320u), c.f[4]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 324u), c.f[2]);
    st32((c.r[29].w[0] + 328u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D1ECu); c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0017D1ECu) [[unlikely]] return; }
L_0017D1EC:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D1F8u); set32(c.r[5], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0017D1F8u) [[unlikely]] return; }
L_0017D1F8:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.f[20] = c.f[0];
    c.f[12] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32236u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[29].w[0] + 432u));  goto L_0017D228; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D224u);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x0017D224u) [[unlikely]] return; }
L_0017D224:
    c.f[0] = ld32((c.r[29].w[0] + 432u));
    c.budget -= 1;
L_0017D228:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = 0u;
    st32((c.r[29].w[0] + 492u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 304u));
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.f[0] = ld32((c.r[29].w[0] + 436u));
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);
    c.f[2] = ld32((c.r[29].w[0] + 308u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    c.f[1] = ld32((c.r[29].w[0] + 312u));
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[20]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);
    st32((c.r[29].w[0] + 480u), c.f[4]);
    st32((c.r[29].w[0] + 484u), c.f[2]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D278u); st32((c.r[29].w[0] + 488u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 182u, depth + 1u); else { c.pc = 0x0017DD90u; return; } if (c.pc != 0x0017D278u) [[unlikely]] return; }
L_0017D278:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0017D2A4; }
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D298u); set32(c.r[5], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0017D298u) [[unlikely]] return; }
L_0017D298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DC24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0017D2A4:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017D2E0; } }
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D2C8u); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0017D2C8u) [[unlikely]] return; }
L_0017D2C8:
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D2D8u); set32(c.r[6], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0017D2D8u) [[unlikely]] return; }
L_0017D2D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DC24; } }
L_0017D2E0:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017DC24; } }
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D2FCu); set32(c.r[6], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0017D2FCu) [[unlikely]] return; }
L_0017D2FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DC24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0017D308:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 464u);  goto L_0017D348; }
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D32Cu); set32(c.r[5], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0017D32Cu) [[unlikely]] return; }
L_0017D32C:
    set32(c.r[4], c.r[29].w[0] + 464u);
    set32(c.r[5], c.r[29].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D33Cu); set32(c.r[6], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0017D33Cu) [[unlikely]] return; }
L_0017D33C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DC24; } }
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 1;
L_0017D348:
    set32(c.r[5], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D354u); set32(c.r[6], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0017D354u) [[unlikely]] return; }
L_0017D354:
    c.f[1] = ld32((c.r[29].w[0] + 464u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[29].w[0] + 432u));
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[29].w[0] + 468u));
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.f[2] = ld32((c.r[29].w[0] + 436u));
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 472u));
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    st32((c.r[29].w[0] + 288u), c.f[4]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 292u), c.f[2]);
    st32((c.r[29].w[0] + 296u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D3A4u); c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0017D3A4u) [[unlikely]] return; }
L_0017D3A4:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D3B0u); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0017D3B0u) [[unlikely]] return; }
L_0017D3B0:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.f[20] = c.f[0];
    c.f[12] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32236u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[29].w[0] + 432u));  goto L_0017D3E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D3DCu);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x0017D3DCu) [[unlikely]] return; }
L_0017D3DC:
    c.f[0] = ld32((c.r[29].w[0] + 432u));
    c.budget -= 1;
L_0017D3E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = 0u;
    st32((c.r[29].w[0] + 492u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 272u));
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.f[0] = ld32((c.r[29].w[0] + 436u));
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);
    c.f[2] = ld32((c.r[29].w[0] + 276u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    c.f[1] = ld32((c.r[29].w[0] + 280u));
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[20]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);
    st32((c.r[29].w[0] + 480u), c.f[4]);
    st32((c.r[29].w[0] + 484u), c.f[2]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D430u); st32((c.r[29].w[0] + 488u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 182u, depth + 1u); else { c.pc = 0x0017DD90u; return; } if (c.pc != 0x0017D430u) [[unlikely]] return; }
L_0017D430:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0017D45C; }
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D450u); set32(c.r[5], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0017D450u) [[unlikely]] return; }
L_0017D450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DC24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0017D45C:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017D498; } }
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D480u); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0017D480u) [[unlikely]] return; }
L_0017D480:
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D490u); set32(c.r[6], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0017D490u) [[unlikely]] return; }
L_0017D490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DC24; } }
L_0017D498:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017DC24; } }
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D4B4u); set32(c.r[6], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0017D4B4u) [[unlikely]] return; }
L_0017D4B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DC24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0017D4C0:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 480u);  goto L_0017D81C; }
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D4E0u); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0017D4E0u) [[unlikely]] return; }
L_0017D4E0:
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D4F0u); set32(c.r[6], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0017D4F0u) [[unlikely]] return; }
L_0017D4F0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0017D670; }
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D510u); set32(c.r[5], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0017D510u) [[unlikely]] return; }
L_0017D510:
    c.f[1] = ld32((c.r[29].w[0] + 464u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[29].w[0] + 432u));
    st32((c.r[29].w[0] + 268u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[29].w[0] + 468u));
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.f[2] = ld32((c.r[29].w[0] + 436u));
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 472u));
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    st32((c.r[29].w[0] + 256u), c.f[4]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 260u), c.f[2]);
    st32((c.r[29].w[0] + 264u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D560u); c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0017D560u) [[unlikely]] return; }
L_0017D560:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D56Cu); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0017D56Cu) [[unlikely]] return; }
L_0017D56C:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.f[20] = c.f[0];
    c.f[12] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32236u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[29].w[0] + 432u));  goto L_0017D59C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D598u);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x0017D598u) [[unlikely]] return; }
L_0017D598:
    c.f[0] = ld32((c.r[29].w[0] + 432u));
    c.budget -= 1;
L_0017D59C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = 0u;
    st32((c.r[29].w[0] + 492u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.f[0] = ld32((c.r[29].w[0] + 436u));
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);
    c.f[2] = ld32((c.r[29].w[0] + 244u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    c.f[1] = ld32((c.r[29].w[0] + 248u));
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[20]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);
    st32((c.r[29].w[0] + 480u), c.f[4]);
    st32((c.r[29].w[0] + 484u), c.f[2]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D5ECu); st32((c.r[29].w[0] + 488u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 182u, depth + 1u); else { c.pc = 0x0017DD90u; return; } if (c.pc != 0x0017D5ECu) [[unlikely]] return; }
L_0017D5EC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0017D618; }
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D60Cu); set32(c.r[5], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0017D60Cu) [[unlikely]] return; }
L_0017D60C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DC24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0017D618:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 480u);  goto L_0017D658; }
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D63Cu); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0017D63Cu) [[unlikely]] return; }
L_0017D63C:
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D64Cu); set32(c.r[6], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0017D64Cu) [[unlikely]] return; }
L_0017D64C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DC24; } }
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 1;
L_0017D658:
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D664u); set32(c.r[6], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0017D664u) [[unlikely]] return; }
L_0017D664:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DC24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0017D670:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 464u);  goto L_0017D6B0; }
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D694u); set32(c.r[5], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0017D694u) [[unlikely]] return; }
L_0017D694:
    set32(c.r[4], c.r[29].w[0] + 464u);
    set32(c.r[5], c.r[29].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D6A4u); set32(c.r[6], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0017D6A4u) [[unlikely]] return; }
L_0017D6A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DC24; } }
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 1;
L_0017D6B0:
    set32(c.r[5], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D6BCu); set32(c.r[6], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0017D6BCu) [[unlikely]] return; }
L_0017D6BC:
    c.f[1] = ld32((c.r[29].w[0] + 464u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[29].w[0] + 432u));
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[29].w[0] + 468u));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.f[2] = ld32((c.r[29].w[0] + 436u));
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 472u));
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    st32((c.r[29].w[0] + 224u), c.f[4]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 228u), c.f[2]);
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D70Cu); c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0017D70Cu) [[unlikely]] return; }
L_0017D70C:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D718u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0017D718u) [[unlikely]] return; }
L_0017D718:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.f[20] = c.f[0];
    c.f[12] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32236u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[29].w[0] + 432u));  goto L_0017D748; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D744u);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x0017D744u) [[unlikely]] return; }
L_0017D744:
    c.f[0] = ld32((c.r[29].w[0] + 432u));
    c.budget -= 1;
L_0017D748:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = 0u;
    st32((c.r[29].w[0] + 492u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.f[0] = ld32((c.r[29].w[0] + 436u));
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);
    c.f[2] = ld32((c.r[29].w[0] + 212u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    c.f[1] = ld32((c.r[29].w[0] + 216u));
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[20]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);
    st32((c.r[29].w[0] + 480u), c.f[4]);
    st32((c.r[29].w[0] + 484u), c.f[2]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D798u); st32((c.r[29].w[0] + 488u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 182u, depth + 1u); else { c.pc = 0x0017DD90u; return; } if (c.pc != 0x0017D798u) [[unlikely]] return; }
L_0017D798:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0017D7C4; }
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D7B8u); set32(c.r[5], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0017D7B8u) [[unlikely]] return; }
L_0017D7B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DC24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0017D7C4:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 480u);  goto L_0017D804; }
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D7E8u); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0017D7E8u) [[unlikely]] return; }
L_0017D7E8:
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D7F8u); set32(c.r[6], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0017D7F8u) [[unlikely]] return; }
L_0017D7F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DC24; } }
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 1;
L_0017D804:
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D810u); set32(c.r[6], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0017D810u) [[unlikely]] return; }
L_0017D810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DC24; } }
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 1;
L_0017D81C:
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D828u); set32(c.r[6], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0017D828u) [[unlikely]] return; }
L_0017D828:
    c.f[1] = ld32((c.r[29].w[0] + 480u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[29].w[0] + 400u));
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[29].w[0] + 484u));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[2] = ld32((c.r[29].w[0] + 404u));
    set32(c.r[5], c.r[29].w[0] + 416u);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 488u));
    c.f[0] = ld32((c.r[29].w[0] + 408u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    st32((c.r[29].w[0] + 192u), c.f[4]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 196u), c.f[2]);
    st32((c.r[29].w[0] + 200u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D878u); c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0017D878u) [[unlikely]] return; }
L_0017D878:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D884u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0017D884u) [[unlikely]] return; }
L_0017D884:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.f[20] = c.f[0];
    c.f[12] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32236u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[29].w[0] + 400u));  goto L_0017D8B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D8B0u);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x0017D8B0u) [[unlikely]] return; }
L_0017D8B0:
    c.f[0] = ld32((c.r[29].w[0] + 400u));
    c.budget -= 1;
L_0017D8B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = 0u;
    st32((c.r[29].w[0] + 476u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 400u);
    c.f[0] = ld32((c.r[29].w[0] + 404u));
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);
    c.f[2] = ld32((c.r[29].w[0] + 180u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 408u));
    c.f[1] = ld32((c.r[29].w[0] + 184u));
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[20]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);
    st32((c.r[29].w[0] + 464u), c.f[4]);
    st32((c.r[29].w[0] + 468u), c.f[2]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D904u); st32((c.r[29].w[0] + 472u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 182u, depth + 1u); else { c.pc = 0x0017DD90u; return; } if (c.pc != 0x0017D904u) [[unlikely]] return; }
L_0017D904:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0017DA84; }
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D924u); set32(c.r[5], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0017D924u) [[unlikely]] return; }
L_0017D924:
    c.f[1] = ld32((c.r[29].w[0] + 464u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[29].w[0] + 432u));
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[29].w[0] + 468u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[2] = ld32((c.r[29].w[0] + 436u));
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 472u));
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    st32((c.r[29].w[0] + 160u), c.f[4]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 164u), c.f[2]);
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D974u); c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0017D974u) [[unlikely]] return; }
L_0017D974:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D980u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0017D980u) [[unlikely]] return; }
L_0017D980:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.f[20] = c.f[0];
    c.f[12] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32236u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[29].w[0] + 432u));  goto L_0017D9B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D9ACu);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x0017D9ACu) [[unlikely]] return; }
L_0017D9AC:
    c.f[0] = ld32((c.r[29].w[0] + 432u));
    c.budget -= 1;
L_0017D9B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = 0u;
    st32((c.r[29].w[0] + 492u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.f[0] = ld32((c.r[29].w[0] + 436u));
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);
    c.f[2] = ld32((c.r[29].w[0] + 148u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    c.f[1] = ld32((c.r[29].w[0] + 152u));
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[20]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);
    st32((c.r[29].w[0] + 480u), c.f[4]);
    st32((c.r[29].w[0] + 484u), c.f[2]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DA00u); st32((c.r[29].w[0] + 488u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 182u, depth + 1u); else { c.pc = 0x0017DD90u; return; } if (c.pc != 0x0017DA00u) [[unlikely]] return; }
L_0017DA00:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0017DA2C; }
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DA20u); set32(c.r[5], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0017DA20u) [[unlikely]] return; }
L_0017DA20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DC24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0017DA2C:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 480u);  goto L_0017DA6C; }
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DA50u); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0017DA50u) [[unlikely]] return; }
L_0017DA50:
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DA60u); set32(c.r[6], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0017DA60u) [[unlikely]] return; }
L_0017DA60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DC24; } }
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 1;
L_0017DA6C:
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DA78u); set32(c.r[6], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0017DA78u) [[unlikely]] return; }
L_0017DA78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DC24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0017DA84:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 464u);  goto L_0017DAC4; }
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DAA8u); set32(c.r[5], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0017DAA8u) [[unlikely]] return; }
L_0017DAA8:
    set32(c.r[4], c.r[29].w[0] + 464u);
    set32(c.r[5], c.r[29].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DAB8u); set32(c.r[6], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0017DAB8u) [[unlikely]] return; }
L_0017DAB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DC24; } }
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 1;
L_0017DAC4:
    set32(c.r[5], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DAD0u); set32(c.r[6], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0017DAD0u) [[unlikely]] return; }
L_0017DAD0:
    c.f[1] = ld32((c.r[29].w[0] + 464u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[29].w[0] + 432u));
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[29].w[0] + 468u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[2] = ld32((c.r[29].w[0] + 436u));
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 472u));
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    st32((c.r[29].w[0] + 128u), c.f[4]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 132u), c.f[2]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DB20u); c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0017DB20u) [[unlikely]] return; }
L_0017DB20:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DB2Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0017DB2Cu) [[unlikely]] return; }
L_0017DB2C:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.f[20] = c.f[0];
    c.f[12] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32236u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[29].w[0] + 432u));  goto L_0017DB5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DB58u);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x0017DB58u) [[unlikely]] return; }
L_0017DB58:
    c.f[0] = ld32((c.r[29].w[0] + 432u));
    c.budget -= 1;
L_0017DB5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = 0u;
    st32((c.r[29].w[0] + 492u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.f[0] = ld32((c.r[29].w[0] + 436u));
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);
    c.f[2] = ld32((c.r[29].w[0] + 116u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    c.f[1] = ld32((c.r[29].w[0] + 120u));
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[20]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);
    st32((c.r[29].w[0] + 480u), c.f[4]);
    st32((c.r[29].w[0] + 484u), c.f[2]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DBACu); st32((c.r[29].w[0] + 488u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 182u, depth + 1u); else { c.pc = 0x0017DD90u; return; } if (c.pc != 0x0017DBACu) [[unlikely]] return; }
L_0017DBAC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0017DBD8; }
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DBCCu); set32(c.r[5], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0017DBCCu) [[unlikely]] return; }
L_0017DBCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DC24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0017DBD8:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 480u);  goto L_0017DC18; }
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DBFCu); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0017DBFCu) [[unlikely]] return; }
L_0017DBFC:
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DC0Cu); set32(c.r[6], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0017DC0Cu) [[unlikely]] return; }
L_0017DC0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DC24; } }
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 1;
L_0017DC18:
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DC24u); set32(c.r[6], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0017DC24u) [[unlikely]] return; }
L_0017DC24:
    c.f[1] = ld32((c.r[29].w[0] + 480u));
    c.budget -= 1;
L_0017DC28:
    c.f[0] = ld32((c.r[29].w[0] + 464u));
    c.f[3] = ld32((c.r[29].w[0] + 484u));
    c.f[2] = ld32((c.r[29].w[0] + 468u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 488u));
    c.f[0] = ld32((c.r[29].w[0] + 472u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DC58u); c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x0017DC58u) [[unlikely]] return; }
L_0017DC58:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.f[20] = c.f[0];  if (t) { goto L_0017DC6C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DC6Cu); set32(c.r[5], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0017DC6Cu) [[unlikely]] return; }
L_0017DC6C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.f[0] = c.f[20];  goto L_0017DC84; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DC80u); set32(c.r[5], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0017DC80u) [[unlikely]] return; }
L_0017DC80:
    c.f[0] = c.f[20];
    c.budget -= 1;
L_0017DC84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0017DC88:
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 528u);  c.pc = t; return; }
L_0017DCC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DCE8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0017DCE8u) [[unlikely]] return; }
L_0017DCE8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DCF8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0017DCF8u) [[unlikely]] return; }
L_0017DCF8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DD08u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x0017DD08u) [[unlikely]] return; }
L_0017DD08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0017DD20:
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[5] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[8] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[1], c.f[5]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.f[7] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[2], c.f[7]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[1], c.f[7]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[6], c.f[1]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[4], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[3]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[8], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[8], c.f[2]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[6], c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_0017DD90:
    c.f[2] = ld32((c.r[5].w[0] + 16u));
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    c.f[1] = c.f[2] & fp::kAbs;
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = ld32((c.r[5].w[0] + 20u));  goto L_0017DDE4; }
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017DDE0; } }
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DE44; } }
L_0017DDE0:
    c.f[2] = ld32((c.r[5].w[0] + 20u));
    c.budget -= 1;
L_0017DDE4:
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    c.f[1] = c.f[2] & fp::kAbs;
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = ld32((c.r[4].w[0] + 8u));  goto L_0017DE34; }
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017DE30; } }
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DE44; } }
L_0017DE30:
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.budget -= 1;
L_0017DE34:
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 4;
L_0017DE44:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017DE50:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[6].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[3]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DEC8u); c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0017DEC8u) [[unlikely]] return; }
L_0017DEC8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DED4u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0017DED4u) [[unlikely]] return; }
L_0017DED4:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.f[20] = c.f[0];
    c.f[12] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32236u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[4] = ld32((c.r[16].w[0] + 8u));  goto L_0017DF04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DF00u);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x0017DF00u) [[unlikely]] return; }
L_0017DF00:
    c.f[4] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 1;
L_0017DF04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = ld32((c.r[29].w[0] + 88u));
    c.f[3] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[20]);
    c.f[4] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 84u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[20]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    st32((c.r[29].w[0] + 120u), c.f[5]);
    st32((c.r[29].w[0] + 112u), c.f[3]);
    c.f[2] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[1] = c.f[2] & fp::kAbs;
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 25;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = ld32((c.r[16].w[0] + 20u));  goto L_0017DF9C; }
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017DF98; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DFFC; } }
L_0017DF98:
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 1;
L_0017DF9C:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[1] = c.f[2] & fp::kAbs;
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = ld32((c.r[16].w[0] + 8u));  goto L_0017DFEC; }
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017DFE8; } }
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DFFC; } }
L_0017DFE8:
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 1;
L_0017DFEC:
    c.f[1] = ld32((c.r[29].w[0] + 120u));
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 4;
L_0017DFFC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0017E028; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E020u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0017E020u) [[unlikely]] return; }
L_0017E020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E04C; } }
L_0017E028:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017E04C; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E04Cu); set32(c.r[6], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0017E04Cu) [[unlikely]] return; }
L_0017E04C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.f[3] = ld32((c.r[17].w[0] + 4u));  goto L_0017E064; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E060u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0017E060u) [[unlikely]] return; }
L_0017E060:
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    c.budget -= 1;
L_0017E064:
    c.f[2] = ld32((c.r[29].w[0] + 116u));
    c.f[5] = ld32((c.r[17].w[0]));
    c.f[4] = ld32((c.r[29].w[0] + 112u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E094u); c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x0017E094u) [[unlikely]] return; }
L_0017E094:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0017E0C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E0DCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0017E0DCu) [[unlikely]] return; }
L_0017E0DC:
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E0ECu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0017E0ECu) [[unlikely]] return; }
L_0017E0EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017E100:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[19].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = ld32((c.r[29].w[0] + 208u));
    c.f[21] = ld32((c.r[29].w[0] + 212u));
    c.f[22] = ld32((c.r[29].w[0] + 216u));
    c.f[23] = ld32((c.r[29].w[0] + 224u));
    c.f[24] = ld32((c.r[29].w[0] + 228u));
    c.f[25] = ld32((c.r[29].w[0] + 232u));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E170u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0017E170u) [[unlikely]] return; }
L_0017E170:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E180u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0017E180u) [[unlikely]] return; }
L_0017E180:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E190u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x0017E190u) [[unlikely]] return; }
L_0017E190:
    c.f[1] = ld32((c.r[29].w[0] + 192u));
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    c.f[1] = c.f[1] & fp::kAbs;
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[29].w[0] + 196u));  goto L_0017E200; }
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017E1FC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0017E1C4:
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    st32((c.r[3].w[0] + 176u), c.f[1]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 160u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E1C4u | kUnwind; return; } goto L_0017E1C4; } }
    c.f[4] = ld32((c.r[20].w[0] + 8u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[5] = ld32((c.r[20].w[0] + 4u));  if (t) { goto L_0017E2A0; } }
L_0017E1FC:
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    c.budget -= 1;
L_0017E200:
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    c.f[1] = c.f[1] & fp::kAbs;
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[5].d[0] = 0ull + 0ull;  goto L_0017E26C; }
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017E268; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0017E230:
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[1] = ld32((c.r[4].w[0]));
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    st32((c.r[3].w[0] + 176u), c.f[1]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 160u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E230u | kUnwind; return; } goto L_0017E230; } }
    c.f[4] = ld32((c.r[20].w[0] + 8u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[5] = ld32((c.r[20].w[0]));  if (t) { goto L_0017E2A0; } }
L_0017E268:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0017E26C:
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[1] = ld32((c.r[4].w[0]));
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.r[2].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    st32((c.r[3].w[0] + 176u), c.f[1]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 160u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E26Cu | kUnwind; return; } goto L_0017E26C; } }
    c.f[5] = ld32((c.r[20].w[0]));
    c.f[4] = ld32((c.r[20].w[0] + 4u));
    c.budget -= 2;
L_0017E2A0:
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[9] = ld32((c.r[29].w[0] + 176u));
    c.f[11] = ld32((c.r[29].w[0] + 164u));
    c.f[8] = ld32((c.r[29].w[0] + 160u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[9], c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[8], c.f[11]);
    c.f[10] = ld32((c.r[29].w[0] + 168u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[7] = c.r[2].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[10], c.f[3]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[7]);
    c.f[3] = fp::ee::div(c.fcr31, c.f[3], c.f[7]);
    c.f[6] = 0u;
    c.f[7] = fp::ee::sub(c.fcr31, c.f[1], c.f[9]);
    fpu_compare(c, fp::key(c.f[6]) == fp::key(c.f[7]));
    c.budget -= 20;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[18], 0u + 1u);  goto L_0017E308; }
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[8]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[11], c.f[8]);
    c.f[23] = fp::ee::div(c.fcr31, c.f[6], c.f[7]);
    c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[23], c.f[9]);
    c.budget -= 6;
L_0017E308:
    c.f[7] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[6] = 0u;
    fpu_compare(c, fp::key(c.f[6]) == fp::key(c.f[7]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[17], 0u + 1u);  goto L_0017E338; }
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[11]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[10], c.f[11]);
    c.f[24] = fp::ee::div(c.fcr31, c.f[6], c.f[7]);
    c.f[21] = fp::ee::msub(c.fcr31, c.facc, c.f[24], c.f[1]);
    c.budget -= 6;
L_0017E338:
    c.f[7] = ld32((c.r[29].w[0] + 176u));
    c.f[6] = 0u;
    c.f[7] = fp::ee::sub(c.fcr31, c.f[7], c.f[0]);
    fpu_compare(c, fp::key(c.f[6]) == fp::key(c.f[7]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[16], 0u + 1u);  goto L_0017E370; }
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[10]);
    c.f[6] = ld32((c.r[29].w[0] + 160u));
    c.f[6] = fp::ee::sub(c.fcr31, c.f[6], c.f[10]);
    c.f[25] = fp::ee::div(c.fcr31, c.f[6], c.f[7]);
    c.f[22] = fp::ee::msub(c.fcr31, c.facc, c.f[25], c.f[0]);
    c.budget -= 7;
L_0017E370:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0017E3BC; } }
    c.f[6] = ld32((c.r[29].w[0] + 176u));
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[5]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[6] = ld32((c.r[29].w[0] + 176u));  goto L_0017E398; }
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[2]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_0017E538; }
    c.f[6] = ld32((c.r[29].w[0] + 176u));
    c.budget -= 1;
L_0017E398:
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[5]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017E40C; } }
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017E40C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E538; } }
L_0017E3BC:
    c.f[6] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[20]);
    c.f[7] = fp::ee::madd(c.fcr31, c.facc, c.f[23], c.f[2]);
    fpu_compare(c, fp::key(c.f[7]) < fp::key(c.f[3]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[20]);  goto L_0017E3F4; }
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[20]);
    c.f[6] = fp::ee::madd(c.fcr31, c.facc, c.f[23], c.f[5]);
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017E40C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017E538; } }
L_0017E3F4:
    c.f[6] = fp::ee::madd(c.fcr31, c.facc, c.f[23], c.f[5]);
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017E40C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017E538; } }
L_0017E40C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0017E450; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[5]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017E42C; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_0017E538; }
L_0017E42C:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[5]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017E4A0; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017E4A0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E538; } }
L_0017E450:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.f[6] = fp::ee::madd(c.fcr31, c.facc, c.f[24], c.f[2]);
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[3]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);  goto L_0017E488; }
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[24], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017E4A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017E538; } }
L_0017E488:
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[24], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017E4A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017E538; } }
L_0017E4A0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0017E4E4; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[5]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017E4C0; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_0017E538; }
L_0017E4C0:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[5]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 1u);  goto L_0017E538; }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017E534; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E538; } }
L_0017E4E4:
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[22]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[25], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[3]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[22]);  goto L_0017E51C; }
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[22]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[25], c.f[5]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017E534; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017E538; } }
L_0017E51C:
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[25], c.f[5]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017E534; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017E538; } }
L_0017E534:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0017E538:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
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
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0017E570:
    set32(c.r[29], c.r[29].w[0] - 640u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[29].w[0] + 608u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = 0u;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E5C4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0017E5C4u) [[unlikely]] return; }
L_0017E5C4:
    set32(c.r[4], c.r[29].w[0] + 624u);
    set32(c.r[5], c.r[20].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E5D4u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0017E5D4u) [[unlikely]] return; }
L_0017E5D4:
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E5E4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0017E5E4u) [[unlikely]] return; }
L_0017E5E4:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E5F4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0017E5F4u) [[unlikely]] return; }
L_0017E5F4:
    set32(c.r[4], c.r[29].w[0] + 592u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E604u); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x0017E604u) [[unlikely]] return; }
L_0017E604:
    c.f[3] = ld32((c.r[19].w[0]));
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.f[2] = ld32((c.r[29].w[0] + 592u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 596u));
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 464u), c.f[3]);
    c.f[3] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 600u));
    st32((c.r[29].w[0] + 468u), c.f[3]);
    c.f[3] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[29].w[0] + 472u), c.f[3]);
    st32((c.r[29].w[0] + 480u), c.f[2]);
    st32((c.r[29].w[0] + 484u), c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E644u); st32((c.r[29].w[0] + 488u), c.f[0]);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0017E644u) [[unlikely]] return; }
L_0017E644:
    set32(c.r[4], c.r[29].w[0] + 512u);
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E654u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0017E654u) [[unlikely]] return; }
L_0017E654:
    set32(c.r[4], c.r[29].w[0] + 528u);
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E664u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0017E664u) [[unlikely]] return; }
L_0017E664:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E674u); set32(c.r[6], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0017E674u) [[unlikely]] return; }
L_0017E674:
    set32(c.r[4], c.r[29].w[0] + 560u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E684u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0017E684u) [[unlikely]] return; }
L_0017E684:
    set32(c.r[4], c.r[29].w[0] + 576u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E694u); set32(c.r[6], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0017E694u) [[unlikely]] return; }
L_0017E694:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 5);
    c.budget -= 2;
L_0017E69C:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[2].w[0] + 496u);
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E6B0u); set32(c.r[21], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0017E6B0u) [[unlikely]] return; }
L_0017E6B0:
    c.f[1] = ld32((c.r[28].w[0] - 32592u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[12] = ld32((c.r[16].w[0] + 20u));  goto L_0017E6C8; }
    st32((c.r[21].w[0]), 0u);
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 2;
L_0017E6C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E6D0u); set32(c.r[21], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0017E6D0u) [[unlikely]] return; }
L_0017E6D0:
    c.f[1] = ld32((c.r[28].w[0] - 32592u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[12] = ld32((c.r[16].w[0] + 24u));  goto L_0017E6E8; }
    st32((c.r[21].w[0]), 0u);
    c.f[12] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 2;
L_0017E6E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E6F0u); set32(c.r[21], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0017E6F0u) [[unlikely]] return; }
L_0017E6F0:
    c.f[1] = ld32((c.r[28].w[0] - 32592u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0017E708; }
    st32((c.r[21].w[0]), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_0017E708:
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 5);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E69Cu | kUnwind; return; } goto L_0017E69C; }
    set32(c.r[4], c.r[29].w[0] + 608u);
    set32(c.r[5], c.r[29].w[0] + 464u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E724u); set32(c.r[6], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_0017(c, 59u, depth + 1u); else { c.pc = 0x0017C9C0u; return; } if (c.pc != 0x0017E724u) [[unlikely]] return; }
L_0017E724:
    c.f[1] = ld32((c.r[28].w[0] - 32592u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017EBA8; } }
    c.f[2] = ld32((c.r[29].w[0] + 624u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = ld32((c.r[29].w[0] + 628u));  goto L_0017E76C; }
    c.f[1] = ld32((c.r[29].w[0] + 432u));
    c.f[0] = ld32((c.r[29].w[0] + 608u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[20] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E7B4; } }
L_0017E76C:
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = ld32((c.r[29].w[0] + 632u));  goto L_0017E798; }
    c.f[1] = ld32((c.r[29].w[0] + 436u));
    c.f[0] = ld32((c.r[29].w[0] + 612u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[20] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E7B4; } }
L_0017E798:
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[28].w[0] - 32592u));  goto L_0017E7B8; }
    c.f[1] = ld32((c.r[29].w[0] + 440u));
    c.f[0] = ld32((c.r[29].w[0] + 616u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[20] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 4;
L_0017E7B4:
    c.f[0] = ld32((c.r[28].w[0] - 32592u));
    c.budget -= 1;
L_0017E7B8:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017E7C8; } }
    c.f[20] = 0u;
    c.budget -= 1;
L_0017E7C8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[20].w[0]));  goto L_0017E824; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017E820; } }
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E800u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 194u, depth + 1u); else { c.pc = 0x0017E100u; return; } if (c.pc != 0x0017E800u) [[unlikely]] return; }
L_0017E800:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[30], 0u + 1u);  goto L_0017E854; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0017EDA8; }
    st32((c.r[18].w[0]), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017EDA8; } }
L_0017E820:
    c.f[0] = ld32((c.r[20].w[0]));
    c.budget -= 1;
L_0017E824:
    set32(c.r[30], 0u + 2u);
    st32((c.r[29].w[0] + 432u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    st32((c.r[29].w[0] + 436u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    st32((c.r[29].w[0] + 440u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 16u));
    st32((c.r[29].w[0] + 448u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 20u));
    st32((c.r[29].w[0] + 452u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 24u));
    st32((c.r[29].w[0] + 456u), c.f[0]);
    c.budget -= 12;
L_0017E854:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0017EDA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0017EB94; } }
L_0017E864:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[21], c.r[2].w[0] + 432u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 4;
L_0017E874:
    set32(c.r[23], c.r[17].w[0] << 5);
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[21].w[0] + 4u));
    set32(c.r[2], c.r[23].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[16], c.r[2].w[0] + 496u);
    set32(c.r[5], c.r[2].w[0] + 512u);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[2], c.r[16].w[0] + 4u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.f[3] = ld32((c.r[21].w[0]));
    c.f[2] = ld32((c.r[16].w[0]));
    set32(c.r[2], c.r[16].w[0] + 8u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 228u), c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.f[1] = ld32((c.r[21].w[0] + 8u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    st32((c.r[29].w[0] + 224u), c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E8DCu); c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0017E8DCu) [[unlikely]] return; }
L_0017E8DC:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E8E8u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0017E8E8u) [[unlikely]] return; }
L_0017E8E8:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[20]);
    c.f[21] = c.f[0];
    c.f[12] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32236u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[1];  goto L_0017E914; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E914u);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x0017E914u) [[unlikely]] return; }
L_0017E914:
    set32(c.r[2], c.r[23].w[0] + c.r[29].w[0]);
    c.f[6] = ld32((c.r[2].w[0] + 496u));
    c.f[5] = 0u;
    c.f[7] = ld32((c.r[29].w[0] + 208u));
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[6]);
    c.f[4] = ld32((c.r[29].w[0] + 212u));
    c.f[6] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[21]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 216u));
    st32((c.r[29].w[0] + 416u), c.f[6]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[3]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[21]);
    st32((c.r[29].w[0] + 420u), c.f[3]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[21]);
    st32((c.r[29].w[0] + 428u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[2].w[0] + 384u);
    fpu_compare(c, fp::key(c.f[5]) == fp::key(c.f[2]));
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 28;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 424u), c.f[1]);  if (t) { goto L_0017E994; } }
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0]));  if (t) { goto L_0017E9C8; } }
L_0017E994:
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[5]) == fp::key(c.f[2]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], c.r[17].w[0] << 4);  goto L_0017E9B8; }
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[6] = c.f[3];  if (t) { goto L_0017E9C8; } }
L_0017E9B8:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = ld32((c.r[16].w[0] + 24u));
    c.f[6] = c.f[1];
    c.budget -= 4;
L_0017E9C8:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[6], c.f[0]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_0017EA08; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0017EA10; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_0017EA08:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_0017EA10:
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E874u | kUnwind; return; } goto L_0017E874; }
    c.f[3] = ld32((c.r[20].w[0]));
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.f[2] = ld32((c.r[29].w[0] + 592u));
    set32(c.r[5], c.r[29].w[0] + 464u);
    c.f[1] = ld32((c.r[29].w[0] + 596u));
    set32(c.r[6], c.r[29].w[0] + 416u);
    st32((c.r[29].w[0] + 352u), c.f[3]);
    c.f[3] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 600u));
    st32((c.r[29].w[0] + 356u), c.f[3]);
    c.f[3] = ld32((c.r[20].w[0] + 8u));
    st32((c.r[29].w[0] + 360u), c.f[3]);
    st32((c.r[29].w[0] + 368u), c.f[2]);
    st32((c.r[29].w[0] + 372u), c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EA5Cu); st32((c.r[29].w[0] + 376u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 59u, depth + 1u); else { c.pc = 0x0017C9C0u; return; } if (c.pc != 0x0017EA5Cu) [[unlikely]] return; }
L_0017EA5C:
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EA68u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 194u, depth + 1u); else { c.pc = 0x0017E100u; return; } if (c.pc != 0x0017EA68u) [[unlikely]] return; }
L_0017EA68:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_0017EA88; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 464u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EA80u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 56u, depth + 1u); else { c.pc = 0x0017C830u; return; } if (c.pc != 0x0017EA80u) [[unlikely]] return; }
L_0017EA80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 396u), c.f[0]);  if (t) { goto L_0017EA8C; } }
L_0017EA88:
    st32((c.r[29].w[0] + 396u), c.r[2].w[0]);
    c.budget -= 1;
L_0017EA8C:
    c.f[0] = ld32((c.r[20].w[0] + 16u));
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[5], c.r[29].w[0] + 464u);
    set32(c.r[6], c.r[29].w[0] + 416u);
    st32((c.r[29].w[0] + 352u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 20u));
    st32((c.r[29].w[0] + 356u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 24u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EAB4u); st32((c.r[29].w[0] + 360u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 59u, depth + 1u); else { c.pc = 0x0017C9C0u; return; } if (c.pc != 0x0017EAB4u) [[unlikely]] return; }
L_0017EAB4:
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EAC0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 194u, depth + 1u); else { c.pc = 0x0017E100u; return; } if (c.pc != 0x0017EAC0u) [[unlikely]] return; }
L_0017EAC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_0017EAE0; }
    set32(c.r[4], c.r[20].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 464u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EAD8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 56u, depth + 1u); else { c.pc = 0x0017C830u; return; } if (c.pc != 0x0017EAD8u) [[unlikely]] return; }
L_0017EAD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 400u), c.f[0]);  if (t) { goto L_0017EAE4; } }
L_0017EAE0:
    st32((c.r[29].w[0] + 400u), c.r[2].w[0]);
    c.budget -= 1;
L_0017EAE4:
    set32(c.r[16], 0u + 5u);
    set32(c.r[2], c.r[16].w[0] << 4);
    c.budget -= 2;
L_0017EAEC:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] - 76u));
    c.f[3] = ld32((c.r[21].w[0]));
    c.f[2] = ld32((c.r[2].w[0] - 80u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] - 72u));
    c.f[1] = ld32((c.r[21].w[0] + 8u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EB24u); c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x0017EB24u) [[unlikely]] return; }
L_0017EB24:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[2].w[0] + 384u), c.f[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0017EAECu | kUnwind; return; } goto L_0017EAEC; }
    c.budget -= 2;
    if (c.r[22].d[0] != 0ull) { set32(c.r[3], 0u + 7u);  goto L_0017EB54; }
    c.f[0] = ld32((c.r[29].w[0] + 412u));
    st32((c.r[18].w[0]), c.f[0]);
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
L_0017EB54:
    c.f[1] = 0u;
    set32(c.r[2], c.r[3].w[0] << 2);
    c.budget -= 2;
L_0017EB5C:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 384u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0017EB88; }
    c.f[0] = ld32((c.r[18].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017EB84; } }
    st32((c.r[18].w[0]), c.f[2]);
    c.budget -= 1;
L_0017EB84:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0017EB88:
    c.budget -= 2;
    if (c.r[3].sd[0] >= 0) { set32(c.r[2], c.r[3].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0017EB5Cu | kUnwind; return; } goto L_0017EB5C; }
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_0017EB94:
    c.r[2].d[0] = c.r[22].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[22].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E864u | kUnwind; return; } goto L_0017E864; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017EDA4; } }
L_0017EBA8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0017EDA4; } }
    c.f[3] = ld32((c.r[20].w[0]));
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.f[2] = ld32((c.r[29].w[0] + 592u));
    set32(c.r[5], c.r[29].w[0] + 464u);
    c.f[1] = ld32((c.r[29].w[0] + 596u));
    set32(c.r[6], c.r[29].w[0] + 336u);
    st32((c.r[29].w[0] + 272u), c.f[3]);
    c.f[3] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 600u));
    st32((c.r[29].w[0] + 276u), c.f[3]);
    c.f[3] = ld32((c.r[20].w[0] + 8u));
    st32((c.r[29].w[0] + 280u), c.f[3]);
    st32((c.r[29].w[0] + 288u), c.f[2]);
    st32((c.r[29].w[0] + 292u), c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EBF0u); st32((c.r[29].w[0] + 296u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 59u, depth + 1u); else { c.pc = 0x0017C9C0u; return; } if (c.pc != 0x0017EBF0u) [[unlikely]] return; }
L_0017EBF0:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EBFCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 194u, depth + 1u); else { c.pc = 0x0017E100u; return; } if (c.pc != 0x0017EBFCu) [[unlikely]] return; }
L_0017EBFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[20].w[0] + 16u));  goto L_0017EC20; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 464u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EC14u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 56u, depth + 1u); else { c.pc = 0x0017C830u; return; } if (c.pc != 0x0017EC14u) [[unlikely]] return; }
L_0017EC14:
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017EDA8; } }
L_0017EC20:
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], c.r[29].w[0] + 464u);
    set32(c.r[6], c.r[29].w[0] + 336u);
    st32((c.r[29].w[0] + 272u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 20u));
    st32((c.r[29].w[0] + 276u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 24u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EC44u); st32((c.r[29].w[0] + 280u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 59u, depth + 1u); else { c.pc = 0x0017C9C0u; return; } if (c.pc != 0x0017EC44u) [[unlikely]] return; }
L_0017EC44:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EC50u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 194u, depth + 1u); else { c.pc = 0x0017E100u; return; } if (c.pc != 0x0017EC50u) [[unlikely]] return; }
L_0017EC50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 304u);  goto L_0017EC74; }
    set32(c.r[4], c.r[20].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 464u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EC68u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 56u, depth + 1u); else { c.pc = 0x0017C830u; return; } if (c.pc != 0x0017EC68u) [[unlikely]] return; }
L_0017EC68:
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017EDA8; } }
L_0017EC74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EC7Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0017EC7Cu) [[unlikely]] return; }
L_0017EC7C:
    c.f[3] = ld32((c.r[19].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[19].w[0] + 8u));
    c.r[4].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[19].w[0] + 20u));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    set32(c.r[6], c.r[29].w[0] + 608u);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    set32(c.r[7], c.r[29].w[0] + 304u);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 16u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 332u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 324u), c.f[2]);
    st32((c.r[29].w[0] + 328u), c.f[3]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ECC8u); st32((c.r[29].w[0] + 320u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 72u, depth + 1u); else { c.pc = 0x0017CC60u; return; } if (c.pc != 0x0017ECC8u) [[unlikely]] return; }
L_0017ECC8:
    st32((c.r[18].w[0]), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ECD8u); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0017ECD8u) [[unlikely]] return; }
L_0017ECD8:
    c.f[3] = ld32((c.r[19].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[19].w[0] + 24u));
    c.r[4].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    set32(c.r[6], c.r[29].w[0] + 608u);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    set32(c.r[7], c.r[29].w[0] + 304u);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 332u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 324u), c.f[2]);
    st32((c.r[29].w[0] + 328u), c.f[3]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ED24u); st32((c.r[29].w[0] + 320u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 72u, depth + 1u); else { c.pc = 0x0017CC60u; return; } if (c.pc != 0x0017ED24u) [[unlikely]] return; }
L_0017ED24:
    c.f[1] = ld32((c.r[18].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 304u);  goto L_0017ED3C; }
    st32((c.r[18].w[0]), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 2;
L_0017ED3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ED44u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0017ED44u) [[unlikely]] return; }
L_0017ED44:
    c.f[3] = ld32((c.r[19].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[19].w[0] + 40u));
    c.r[4].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    set32(c.r[6], c.r[29].w[0] + 608u);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    set32(c.r[7], c.r[29].w[0] + 304u);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 332u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 324u), c.f[2]);
    st32((c.r[29].w[0] + 328u), c.f[3]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ED90u); st32((c.r[29].w[0] + 320u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 72u, depth + 1u); else { c.pc = 0x0017CC60u; return; } if (c.pc != 0x0017ED90u) [[unlikely]] return; }
L_0017ED90:
    c.f[1] = ld32((c.r[18].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017EDA4; } }
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 1;
L_0017EDA4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0017EDA8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 640u);  c.pc = t; return; }
L_0017EDE0:
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[3] = c.r[3].w[0];
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[2]);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0017EE44; } }
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0] + 20u), c.f[1]);
    st32((c.r[4].w[0] + 24u), c.f[2]);
    c.budget -= 8;
    { const bool t = c.r[7].d[0] == 0ull; st32((c.r[4].w[0] + 28u), c.f[3]);  if (t) { goto L_0017EE44; } }
    c.f[2] = ld32((c.r[7].w[0] + 8u));
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[1]);
    st32((c.r[4].w[0] + 40u), c.f[2]);
    st32((c.r[4].w[0] + 44u), c.f[3]);
    c.budget -= 7;
L_0017EE44:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017EE50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 28u), c.f[27]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[12] = ld32((c.r[4].w[0]));
    c.f[27] = 0u;
    c.f[26] = c.f[27];
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EEA8u); c.f[25] = c.f[27];  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0017EEA8u) [[unlikely]] return; }
L_0017EEA8:
    c.f[12] = ld32((c.r[18].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EEB4u); c.f[24] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0017EEB4u) [[unlikely]] return; }
L_0017EEB4:
    c.f[12] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EEC0u); c.f[23] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0017EEC0u) [[unlikely]] return; }
L_0017EEC0:
    c.f[12] = ld32((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EECCu); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0017EECCu) [[unlikely]] return; }
L_0017EECC:
    c.f[12] = ld32((c.r[17].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EED8u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0017EED8u) [[unlikely]] return; }
L_0017EED8:
    c.f[12] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EEE4u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0017EEE4u) [[unlikely]] return; }
L_0017EEE4:
    c.f[1] = ld32((c.r[28].w[0] - 32592u));
    fpu_compare(c, fp::key(c.f[24]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[4] = ld32((c.r[18].w[0]));  goto L_0017EF0C; }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[2] = c.f[27];
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_0017F124; }
    c.f[4] = ld32((c.r[18].w[0]));
    c.budget -= 1;
L_0017EF0C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[4]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[28].w[0] - 32592u));  goto L_0017EF34; }
    c.f[1] = ld32((c.r[28].w[0] - 32592u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017EFD0; } }
    c.f[1] = ld32((c.r[28].w[0] - 32592u));
    c.budget -= 1;
L_0017EF34:
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[1]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[3] = ld32((c.r[18].w[0] + 4u));  goto L_0017EF5C; }
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017EFD0; } }
    c.f[3] = ld32((c.r[18].w[0] + 4u));
    c.budget -= 1;
L_0017EF5C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[3]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[28].w[0] - 32592u));  goto L_0017EF84; }
    c.f[1] = ld32((c.r[28].w[0] - 32592u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017EFD0; } }
    c.f[1] = ld32((c.r[28].w[0] - 32592u));
    c.budget -= 1;
L_0017EF84:
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[1]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = ld32((c.r[18].w[0] + 8u));  goto L_0017EFAC; }
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017EFD0; } }
    c.f[2] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 1;
L_0017EFAC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[28].w[0] - 32592u));  goto L_0017EFE0; }
    c.f[1] = ld32((c.r[28].w[0] - 32592u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017EFDC; } }
L_0017EFD0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F124; } }
L_0017EFDC:
    c.f[1] = ld32((c.r[28].w[0] - 32592u));
    c.budget -= 1;
L_0017EFE0:
    fpu_compare(c, fp::key(c.f[24]) < fp::key(c.f[1]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[17].w[0]));  goto L_0017F00C; }
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017F008; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);  if (t) { goto L_0017F014; } }
L_0017F008:
    c.f[1] = ld32((c.r[17].w[0]));
    c.budget -= 1;
L_0017F00C:
    c.f[27] = fp::ee::div(c.fcr31, c.f[4], c.f[1]);
    c.budget -= 2;
L_0017F014:
    c.f[1] = ld32((c.r[28].w[0] - 32592u));
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[17].w[0] + 4u));  goto L_0017F044; }
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017F040; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);  if (t) { goto L_0017F04C; } }
L_0017F040:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.budget -= 1;
L_0017F044:
    c.f[26] = fp::ee::div(c.fcr31, c.f[3], c.f[1]);
    c.budget -= 2;
L_0017F04C:
    c.f[1] = ld32((c.r[28].w[0] - 32592u));
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[17].w[0] + 8u));  goto L_0017F07C; }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017F078; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);  if (t) { goto L_0017F084; } }
L_0017F078:
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 1;
L_0017F07C:
    c.f[25] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    c.budget -= 2;
L_0017F084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F08Cu); c.f[12] = fp::ee::sub(c.fcr31, c.f[27], c.f[26]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0017F08Cu) [[unlikely]] return; }
L_0017F08C:
    c.f[12] = fp::ee::sub(c.fcr31, c.f[26], c.f[25]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F098u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0017F098u) [[unlikely]] return; }
L_0017F098:
    c.f[12] = fp::ee::sub(c.fcr31, c.f[25], c.f[27]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F0A4u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0017F0A4u) [[unlikely]] return; }
L_0017F0A4:
    c.f[1] = ld32((c.r[28].w[0] - 32592u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = c.r[16].d[0] << 56;  goto L_0017F0CC; }
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017F0C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017F124; } }
L_0017F0C8:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.budget -= 1;
L_0017F0CC:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017F0E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017F124; } }
L_0017F0E4:
    c.budget -= 2;
    if (c.r[3].sd[0] <= 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_0017F124; }
    c.f[1] = ld32((c.r[28].w[0] - 32592u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 1u);  goto L_0017F124; }
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017F114; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017F120; } }
L_0017F114:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F124; } }
L_0017F120:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0017F124:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0017F160:
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[5].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[5] = ld32((c.r[4].w[0] + 8u));
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[4]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = c.f[0] & fp::kAbs;  c.pc = t; return; }
L_0017F190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F1ACu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0015(c, 383u, depth + 1u); else { c.pc = 0x001775E0u; return; } if (c.pc != 0x0017F1ACu) [[unlikely]] return; }
L_0017F1AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 9888u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 136u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 132u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 140u), 0u);
    st32((c.r[17].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 148u), c.r[2].w[0]);  if (t) { goto L_0017F1F0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[17].w[0] + 152u), 0u);  goto L_0017F1F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 152u), c.r[16].w[0]);  if (t) { goto L_0017F1F4; } }
L_0017F1F0:
    st32((c.r[17].w[0] + 152u), 0u);
    c.budget -= 1;
L_0017F1F4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017F210:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F23Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0015(c, 383u, depth + 1u); else { c.pc = 0x001775E0u; return; } if (c.pc != 0x0017F23Cu) [[unlikely]] return; }
L_0017F23C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 9888u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 136u), 0u);
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[16].w[0] + 148u), c.r[17].w[0]);  if (t) { goto L_0017F26C; } }
    st32((c.r[16].w[0] + 140u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 144u), c.r[2].w[0]);  if (t) { goto L_0017F288; } }
L_0017F26C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 140u), 0u);
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 7;
L_0017F288:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0017F2B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0017F300; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 9888u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F2DCu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 265u, depth + 1u); else { c.pc = 0x0017F320u; return; } if (c.pc != 0x0017F2DCu) [[unlikely]] return; }
L_0017F2DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F2E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0015(c, 388u, depth + 1u); else { c.pc = 0x00177710u; return; } if (c.pc != 0x0017F2E8u) [[unlikely]] return; }
L_0017F2E8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0017F304; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F300u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0017F300u) [[unlikely]] return; }
L_0017F300:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0017F304:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017F320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 136u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0017F35C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F344u);  if (depth < kMaxDepth) unit_008E(c, 28u, depth + 1u); else { c.pc = 0x00358318u; return; } if (c.pc != 0x0017F344u) [[unlikely]] return; }
L_0017F344:
    st32((c.r[16].w[0] + 136u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F358u); st16((c.r[16].w[0] + 22u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0017(c, 373u, depth + 1u); else { c.pc = 0x0017FFE0u; return; } if (c.pc != 0x0017F358u) [[unlikely]] return; }
L_0017F358:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0017F35C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017F370:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0017F480; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0017F400; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 140u)));  goto L_0017F3B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F3B0u);  if (depth < kMaxDepth) unit_0015(c, 407u, depth + 1u); else { c.pc = 0x00177B00u; return; } if (c.pc != 0x0017F3B0u) [[unlikely]] return; }
L_0017F3B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0017F504; } }
L_0017F3B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 136u)));  goto L_0017F3E8; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017F3E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F3DCu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0015(c, 407u, depth + 1u); else { c.pc = 0x00177B00u; return; } if (c.pc != 0x0017F3DCu) [[unlikely]] return; }
L_0017F3DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F500; } }
L_0017F3E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 1;
L_0017F3E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 56u)));  goto L_0017F3F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017F500; } }
L_0017F3F8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 2;
L_0017F400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F408u);  if (depth < kMaxDepth) unit_0017(c, 371u, depth + 1u); else { c.pc = 0x0017FFC0u; return; } if (c.pc != 0x0017F408u) [[unlikely]] return; }
L_0017F408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F410u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 3u, depth + 1u); else { c.pc = 0x00180020u; return; } if (c.pc != 0x0017F410u) [[unlikely]] return; }
L_0017F410:
    c.r[1].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0017F430; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F428u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0015(c, 407u, depth + 1u); else { c.pc = 0x00177B00u; return; } if (c.pc != 0x0017F428u) [[unlikely]] return; }
L_0017F428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F500; } }
L_0017F430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F438u);  if (depth < kMaxDepth) unit_0017(c, 371u, depth + 1u); else { c.pc = 0x0017FFC0u; return; } if (c.pc != 0x0017F438u) [[unlikely]] return; }
L_0017F438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F440u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 1u, depth + 1u); else { c.pc = 0x00180000u; return; } if (c.pc != 0x0017F440u) [[unlikely]] return; }
L_0017F440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F448u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 3u, depth + 1u); else { c.pc = 0x00180020u; return; } if (c.pc != 0x0017F448u) [[unlikely]] return; }
L_0017F448:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  goto L_0017F470; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F460u);  if (depth < kMaxDepth) unit_0017(c, 372u, depth + 1u); else { c.pc = 0x0017FFD0u; return; } if (c.pc != 0x0017F460u) [[unlikely]] return; }
L_0017F460:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_0017F480; } }
L_0017F470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F478u);  if (depth < kMaxDepth) unit_0015(c, 275u, depth + 1u); else { c.pc = 0x00176680u; return; } if (c.pc != 0x0017F478u) [[unlikely]] return; }
L_0017F478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017F500; } }
L_0017F480:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  goto L_0017F4C8; }
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 144u)));  goto L_0017F4B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F4A4u);  if (depth < kMaxDepth) unit_0017(c, 373u, depth + 1u); else { c.pc = 0x0017FFE0u; return; } if (c.pc != 0x0017F4A4u) [[unlikely]] return; }
L_0017F4A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F4B0u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0015(c, 407u, depth + 1u); else { c.pc = 0x00177B00u; return; } if (c.pc != 0x0017F4B0u) [[unlikely]] return; }
L_0017F4B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F500; } }
L_0017F4B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F4C0u);  if (depth < kMaxDepth) unit_008E(c, 15u, depth + 1u); else { c.pc = 0x003581C0u; return; } if (c.pc != 0x0017F4C0u) [[unlikely]] return; }
L_0017F4C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 136u), c.r[2].w[0]);  if (t) { goto L_0017F4D4; } }
L_0017F4C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F4D0u); set32(c.r[5], ld32((c.r[16].w[0] + 152u)));  if (depth < kMaxDepth) unit_008D(c, 277u, depth + 1u); else { c.pc = 0x00357E58u; return; } if (c.pc != 0x0017F4D0u) [[unlikely]] return; }
L_0017F4D0:
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    c.budget -= 1;
L_0017F4D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0017F4FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F4E8u);  if (depth < kMaxDepth) unit_0017(c, 373u, depth + 1u); else { c.pc = 0x0017FFE0u; return; } if (c.pc != 0x0017F4E8u) [[unlikely]] return; }
L_0017F4E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F4F4u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0015(c, 407u, depth + 1u); else { c.pc = 0x00177B00u; return; } if (c.pc != 0x0017F4F4u) [[unlikely]] return; }
L_0017F4F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F500; } }
L_0017F4FC:
    st16((c.r[16].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0017F500:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0017F504:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0017F520:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0017F530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0017F5AC; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 140u)));  goto L_0017F564; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F55Cu);  if (depth < kMaxDepth) unit_0015(c, 407u, depth + 1u); else { c.pc = 0x00177B00u; return; } if (c.pc != 0x0017F55Cu) [[unlikely]] return; }
L_0017F55C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0017F5DC; } }
L_0017F564:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_0017F594; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017F590; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F588u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0015(c, 407u, depth + 1u); else { c.pc = 0x00177B00u; return; } if (c.pc != 0x0017F588u) [[unlikely]] return; }
L_0017F588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F5D8; } }
L_0017F590:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_0017F594:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], ld32((c.r[16].w[0] + 56u)));  goto L_0017F5A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017F5D8; } }
L_0017F5A4:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 2;
L_0017F5AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F5B4u); set32(c.r[4], ld32((c.r[16].w[0] + 136u)));  if (depth < kMaxDepth) unit_008E(c, 135u, depth + 1u); else { c.pc = 0x00358EB0u; return; } if (c.pc != 0x0017F5B4u) [[unlikely]] return; }
L_0017F5B4:
    set32(c.r[2], c.r[2].w[0] << 11);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_0017F5D4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F5CCu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0015(c, 407u, depth + 1u); else { c.pc = 0x00177B00u; return; } if (c.pc != 0x0017F5CCu) [[unlikely]] return; }
L_0017F5CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F5D8; } }
L_0017F5D4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0017F5D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0017F5DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017F5F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0017F690; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 140u)));  goto L_0017F624; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F61Cu);  if (depth < kMaxDepth) unit_0015(c, 407u, depth + 1u); else { c.pc = 0x00177B00u; return; } if (c.pc != 0x0017F61Cu) [[unlikely]] return; }
L_0017F61C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0017F698; } }
L_0017F624:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 80u)));  goto L_0017F654; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017F650; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F648u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0015(c, 407u, depth + 1u); else { c.pc = 0x00177B00u; return; } if (c.pc != 0x0017F648u) [[unlikely]] return; }
L_0017F648:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F694; } }
L_0017F650:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_0017F654:
    c.r[2].d[0] = c.r[2].d[0] & 2047ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 80u)));  goto L_0017F670; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F66Cu); set32(c.r[4], c.r[4].w[0] - 14480u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x0017F66Cu) [[unlikely]] return; }
L_0017F66C:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_0017F670:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] + 2047u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F684u); set32(c.r[5], c.r[2].w[0] >> 11);  if (depth < kMaxDepth) unit_008E(c, 119u, depth + 1u); else { c.pc = 0x00358CD8u; return; } if (c.pc != 0x0017F684u) [[unlikely]] return; }
L_0017F684:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 3;
L_0017F690:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0017F694:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0017F698:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017F6B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0017F758; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_0017F6E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F6DCu);  if (depth < kMaxDepth) unit_0015(c, 407u, depth + 1u); else { c.pc = 0x00177B00u; return; } if (c.pc != 0x0017F6DCu) [[unlikely]] return; }
L_0017F6DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0017F7D8; } }
L_0017F6E4:
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 84u)));  goto L_0017F71C; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017F718; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F710u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0015(c, 407u, depth + 1u); else { c.pc = 0x00177B00u; return; } if (c.pc != 0x0017F710u) [[unlikely]] return; }
L_0017F710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F7D4; } }
L_0017F718:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_0017F71C:
    c.r[2].d[0] = c.r[2].d[0] & 2047ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 84u)));  goto L_0017F738; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F734u); set32(c.r[4], c.r[4].w[0] - 14400u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x0017F734u) [[unlikely]] return; }
L_0017F734:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_0017F738:
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + 2047u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F74Cu); set32(c.r[5], c.r[2].w[0] >> 11);  if (depth < kMaxDepth) unit_008E(c, 79u, depth + 1u); else { c.pc = 0x003588C8u; return; } if (c.pc != 0x0017F74Cu) [[unlikely]] return; }
L_0017F74C:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 3;
L_0017F758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F760u); set32(c.r[4], ld32((c.r[16].w[0] + 136u)));  if (depth < kMaxDepth) unit_008E(c, 162u, depth + 1u); else { c.pc = 0x003590D8u; return; } if (c.pc != 0x0017F760u) [[unlikely]] return; }
L_0017F760:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 132u), c.r[3].w[0]);  goto L_0017F7C8; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 132u), c.r[3].w[0]);  goto L_0017F7C0; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 132u), c.r[3].w[0]);  goto L_0017F7B8; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 132u), c.r[3].w[0]);  goto L_0017F7B0; }
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[5], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F7A8u);  if (depth < kMaxDepth) unit_0015(c, 407u, depth + 1u); else { c.pc = 0x00177B00u; return; } if (c.pc != 0x0017F7A8u) [[unlikely]] return; }
L_0017F7A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F7D4; } }
L_0017F7B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0017F7D4; } }
L_0017F7B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017F7D4; } }
L_0017F7C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017F7D4; } }
L_0017F7C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F7D4u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0015(c, 407u, depth + 1u); else { c.pc = 0x00177B00u; return; } if (c.pc != 0x0017F7D4u) [[unlikely]] return; }
L_0017F7D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0017F7D8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017F7F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0017F800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0017F8F0; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 140u)));  goto L_0017F83C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F834u);  if (depth < kMaxDepth) unit_0015(c, 407u, depth + 1u); else { c.pc = 0x00177B00u; return; } if (c.pc != 0x0017F834u) [[unlikely]] return; }
L_0017F834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0017F98C; } }
L_0017F83C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_0017F86C; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017F868; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F860u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0015(c, 407u, depth + 1u); else { c.pc = 0x00177B00u; return; } if (c.pc != 0x0017F860u) [[unlikely]] return; }
L_0017F860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F988; } }
L_0017F868:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0017F86C:
    st32((c.r[17].w[0] + 132u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 56u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  goto L_0017F888; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017F988; } }
L_0017F888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F890u);  if (depth < kMaxDepth) unit_0016(c, 135u, depth + 1u); else { c.pc = 0x00179BA0u; return; } if (c.pc != 0x0017F890u) [[unlikely]] return; }
L_0017F890:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0017F988; }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_0017F8B0; }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_0017F8B0:
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_0017F8C4; }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_0017F8C4:
    set32(c.r[3], c.r[2].w[0] + 2047u);
    set32(c.r[5], c.r[3].w[0] >> 11);
    set32(c.r[3], c.r[4].w[0] - c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F8E4u); set32(c.r[6], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_008E(c, 79u, depth + 1u); else { c.pc = 0x003588C8u; return; } if (c.pc != 0x0017F8E4u) [[unlikely]] return; }
L_0017F8E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 3;
L_0017F8F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F8F8u); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_008E(c, 162u, depth + 1u); else { c.pc = 0x003590D8u; return; } if (c.pc != 0x0017F8F8u) [[unlikely]] return; }
L_0017F8F8:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[17].w[0] + 132u), c.r[3].w[0]);  goto L_0017F970; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[17].w[0] + 132u), c.r[3].w[0]);  goto L_0017F958; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[17].w[0] + 132u), c.r[3].w[0]);  goto L_0017F950; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[17].w[0] + 132u), c.r[3].w[0]);  goto L_0017F948; }
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[5], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F940u);  if (depth < kMaxDepth) unit_0015(c, 407u, depth + 1u); else { c.pc = 0x00177B00u; return; } if (c.pc != 0x0017F940u) [[unlikely]] return; }
L_0017F940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F988; } }
L_0017F948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0017F988; } }
L_0017F950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017F988; } }
L_0017F958:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F968u); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0016(c, 132u, depth + 1u); else { c.pc = 0x00179AB0u; return; } if (c.pc != 0x0017F968u) [[unlikely]] return; }
L_0017F968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 56u), 0u);  if (t) { goto L_0017F984; } }
L_0017F970:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F97Cu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0015(c, 407u, depth + 1u); else { c.pc = 0x00177B00u; return; } if (c.pc != 0x0017F97Cu) [[unlikely]] return; }
L_0017F97C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F988; } }
L_0017F984:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0017F988:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0017F98C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017F9A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0017FA1C; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 140u)));  goto L_0017F9D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F9CCu);  if (depth < kMaxDepth) unit_0015(c, 407u, depth + 1u); else { c.pc = 0x00177B00u; return; } if (c.pc != 0x0017F9CCu) [[unlikely]] return; }
L_0017F9CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0017FAC0; } }
L_0017F9D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 136u)));  goto L_0017FA04; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017FA00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F9F8u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0015(c, 407u, depth + 1u); else { c.pc = 0x00177B00u; return; } if (c.pc != 0x0017F9F8u) [[unlikely]] return; }
L_0017F9F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017FABC; } }
L_0017FA00:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 1;
L_0017FA04:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 56u)));  goto L_0017FA14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017FABC; } }
L_0017FA14:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 2;
L_0017FA1C:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  goto L_0017FA5C; }
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 144u)));  goto L_0017FA4C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FA44u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0015(c, 407u, depth + 1u); else { c.pc = 0x00177B00u; return; } if (c.pc != 0x0017FA44u) [[unlikely]] return; }
L_0017FA44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017FABC; } }
L_0017FA4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FA54u);  if (depth < kMaxDepth) unit_008E(c, 15u, depth + 1u); else { c.pc = 0x003581C0u; return; } if (c.pc != 0x0017FA54u) [[unlikely]] return; }
L_0017FA54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 136u), c.r[2].w[0]);  if (t) { goto L_0017FA68; } }
L_0017FA5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FA64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 277u, depth + 1u); else { c.pc = 0x00357E58u; return; } if (c.pc != 0x0017FA64u) [[unlikely]] return; }
L_0017FA64:
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    c.budget -= 1;
L_0017FA68:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0017FA88; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FA80u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0015(c, 407u, depth + 1u); else { c.pc = 0x00177B00u; return; } if (c.pc != 0x0017FA80u) [[unlikely]] return; }
L_0017FA80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017FABC; } }
L_0017FA88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FA90u); st16((c.r[16].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 16u, depth + 1u); else { c.pc = 0x0035C230u; return; } if (c.pc != 0x0017FA90u) [[unlikely]] return; }
L_0017FA90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FA98u);  if (depth < kMaxDepth) unit_0018(c, 25u, depth + 1u); else { c.pc = 0x001802B0u; return; } if (c.pc != 0x0017FA98u) [[unlikely]] return; }
L_0017FA98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0017FAB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FAA8u);  if (depth < kMaxDepth) unit_008F(c, 27u, depth + 1u); else { c.pc = 0x0035C378u; return; } if (c.pc != 0x0017FAA8u) [[unlikely]] return; }
L_0017FAA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017FABC; } }
L_0017FAB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FAB8u);  if (depth < kMaxDepth) unit_0000(c, 372u, depth + 1u); else { c.pc = 0x001237F0u; return; } if (c.pc != 0x0017FAB8u) [[unlikely]] return; }
L_0017FAB8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0017FABC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0017FAC0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017FAD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0017FAE0:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x0017C000u < 16384u) { entry = entries_0017[(t - 0x0017C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0017FAF0:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x0017C000u < 16384u) { entry = entries_0017[(t - 0x0017C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0017FB00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0017FBB0; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_0017FB3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FB34u);  if (depth < kMaxDepth) unit_0015(c, 407u, depth + 1u); else { c.pc = 0x00177B00u; return; } if (c.pc != 0x0017FB34u) [[unlikely]] return; }
L_0017FB34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0017FC5C; } }
L_0017FB3C:
    st32((c.r[17].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 84u)));  goto L_0017FB74; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017FB70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FB68u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0015(c, 407u, depth + 1u); else { c.pc = 0x00177B00u; return; } if (c.pc != 0x0017FB68u) [[unlikely]] return; }
L_0017FB68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017FC58; } }
L_0017FB70:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 1;
L_0017FB74:
    c.r[2].d[0] = c.r[2].d[0] & 2047ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 84u)));  goto L_0017FB90; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FB8Cu); set32(c.r[4], c.r[4].w[0] - 14400u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x0017FB8Cu) [[unlikely]] return; }
L_0017FB8C:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 1;
L_0017FB90:
    set32(c.r[4], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + 2047u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FBA4u); set32(c.r[5], c.r[2].w[0] >> 11);  if (depth < kMaxDepth) unit_008E(c, 79u, depth + 1u); else { c.pc = 0x003588C8u; return; } if (c.pc != 0x0017FBA4u) [[unlikely]] return; }
L_0017FBA4:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 3;
L_0017FBB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FBB8u); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_008E(c, 162u, depth + 1u); else { c.pc = 0x003590D8u; return; } if (c.pc != 0x0017FBB8u) [[unlikely]] return; }
L_0017FBB8:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[17].w[0] + 132u), c.r[3].w[0]);  goto L_0017FC10; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[17].w[0] + 132u), c.r[3].w[0]);  goto L_0017FC08; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[17].w[0] + 132u), c.r[3].w[0]);  goto L_0017FC24; }
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[16].d[0]) { st32((c.r[17].w[0] + 132u), c.r[16].w[0]);  goto L_0017FC24; }
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[5], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FC00u);  if (depth < kMaxDepth) unit_0015(c, 407u, depth + 1u); else { c.pc = 0x00177B00u; return; } if (c.pc != 0x0017FC00u) [[unlikely]] return; }
L_0017FC00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017FC58; } }
L_0017FC08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0017FC24; } }
L_0017FC10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FC1Cu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0015(c, 407u, depth + 1u); else { c.pc = 0x00177B00u; return; } if (c.pc != 0x0017FC1Cu) [[unlikely]] return; }
L_0017FC1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017FC58; } }
L_0017FC24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FC2Cu);  if (depth < kMaxDepth) unit_008F(c, 16u, depth + 1u); else { c.pc = 0x0035C230u; return; } if (c.pc != 0x0017FC2Cu) [[unlikely]] return; }
L_0017FC2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FC34u);  if (depth < kMaxDepth) unit_0018(c, 25u, depth + 1u); else { c.pc = 0x001802B0u; return; } if (c.pc != 0x0017FC34u) [[unlikely]] return; }
L_0017FC34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0017FC4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FC44u);  if (depth < kMaxDepth) unit_008F(c, 27u, depth + 1u); else { c.pc = 0x0035C378u; return; } if (c.pc != 0x0017FC44u) [[unlikely]] return; }
L_0017FC44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0017FC58; } }
L_0017FC4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FC54u);  if (depth < kMaxDepth) unit_0000(c, 372u, depth + 1u); else { c.pc = 0x001237F0u; return; } if (c.pc != 0x0017FC54u) [[unlikely]] return; }
L_0017FC54:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0017FC58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0017FC5C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017FC70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0017FC80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { const bool t = c.r[19].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0017FCB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017FED4; } }
L_0017FCB4:
    set32(c.r[2], ld32((c.r[28].w[0] - 31220u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_0017FCD4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FCCCu); set32(c.r[4], c.r[4].w[0] - 14336u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x0017FCCCu) [[unlikely]] return; }
L_0017FCCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017FED4; } }
L_0017FCD4:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 16448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FCE4u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0017FCE4u) [[unlikely]] return; }
L_0017FCE4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15936u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FCF8u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0017FCF8u) [[unlikely]] return; }
L_0017FCF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 16192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FD0Cu); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0017FD0Cu) [[unlikely]] return; }
L_0017FD0C:
    set32(c.r[4], 0u + 28u);
    st32((c.r[28].w[0] - 31208u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FD1Cu); st32((c.r[28].w[0] - 31204u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0017FD1Cu) [[unlikely]] return; }
L_0017FD1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 31212u), c.r[2].w[0]);  goto L_0017FD30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FD2Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 6u, depth + 1u); else { c.pc = 0x00180060u; return; } if (c.pc != 0x0017FD2Cu) [[unlikely]] return; }
L_0017FD2C:
    st32((c.r[28].w[0] - 31212u), c.r[2].w[0]);
    c.budget -= 1;
L_0017FD30:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 16448u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[10], ld32((c.r[19].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[9].w[0] + 16452u), c.r[10].w[0]);
    set32(c.r[9], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[8].w[0] + 16456u), c.r[9].w[0]);
    set32(c.r[8], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[7].w[0] + 16460u), c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[6].w[0] + 16464u), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[4].w[0] + 16468u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    st32((c.r[3].w[0] + 16472u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 25;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[2].w[0] + 16476u), c.r[3].w[0]);  if (t) { goto L_0017FDA8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FDA0u); set32(c.r[4], c.r[4].w[0] + 15936u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x001477A8u; return; } if (c.pc != 0x0017FDA0u) [[unlikely]] return; }
L_0017FDA0:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[17], c.r[17].w[0] + 15936u);
    c.budget -= 2;
L_0017FDA8:
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[7], ld32((c.r[19].w[0] + 28u)));  goto L_0017FDCC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FDC0u); set32(c.r[4], c.r[4].w[0] + 16192u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x001477A8u; return; } if (c.pc != 0x0017FDC0u) [[unlikely]] return; }
L_0017FDC0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] + 16192u);
    set32(c.r[7], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 3;
L_0017FDCC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FDDCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 31u, depth + 1u); else { c.pc = 0x00180340u; return; } if (c.pc != 0x0017FDDCu) [[unlikely]] return; }
L_0017FDDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FDE4u);  if (depth < kMaxDepth) unit_008E(c, 264u, depth + 1u); else { c.pc = 0x00359FD8u; return; } if (c.pc != 0x0017FDE4u) [[unlikely]] return; }
L_0017FDE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FDECu);  if (depth < kMaxDepth) unit_0018(c, 54u, depth + 1u); else { c.pc = 0x00180520u; return; } if (c.pc != 0x0017FDECu) [[unlikely]] return; }
L_0017FDEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FDFCu); set32(c.r[4], c.r[4].w[0] + 48u);  if (depth < kMaxDepth) unit_008E(c, 454u, depth + 1u); else { c.pc = 0x0035B8E0u; return; } if (c.pc != 0x0017FDFCu) [[unlikely]] return; }
L_0017FDFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FE04u); set32(c.r[4], 0u - 1u);  if (depth < kMaxDepth) unit_0090(c, 310u, depth + 1u); else { c.pc = 0x003625C8u; return; } if (c.pc != 0x0017FE04u) [[unlikely]] return; }
L_0017FE04:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_0017FEB4; }
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[29].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[29].w[0] + 84u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 24u)));
    st32((c.r[29].w[0] + 88u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] << 1);  goto L_0017FE44; }
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 31216u), c.r[2].w[0]);  if (t) { goto L_0017FE9C; } }
L_0017FE44:
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 76u);
    set32(c.r[3], c.r[3].w[0] << 2);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 4304u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[28].w[0] - 31216u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FE78u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x0017FE78u) [[unlikely]] return; }
L_0017FE78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_0017FE94; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FE8Cu); set32(c.r[4], c.r[4].w[0] - 14304u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x0017FE8Cu) [[unlikely]] return; }
L_0017FE8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017FED4; } }
L_0017FE94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 16460u), c.r[2].w[0]);
    c.budget -= 2;
L_0017FE9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FEA4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00A5(c, 179u, depth + 1u); else { c.pc = 0x003B6168u; return; } if (c.pc != 0x0017FEA4u) [[unlikely]] return; }
L_0017FEA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FEACu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 135u, depth + 1u); else { c.pc = 0x003568A8u; return; } if (c.pc != 0x0017FEACu) [[unlikely]] return; }
L_0017FEAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017FEB8; } }
L_0017FEB4:
    st32((c.r[2].w[0] + 16460u), 0u);
    c.budget -= 1;
L_0017FEB8:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0017FECC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FEC8u);  if (depth < kMaxDepth) unit_0018(c, 30u, depth + 1u); else { c.pc = 0x00180310u; return; } if (c.pc != 0x0017FEC8u) [[unlikely]] return; }
L_0017FEC8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0017FECC:
    st32((c.r[28].w[0] - 31932u), c.r[18].w[0]);
    st32((c.r[28].w[0] - 31220u), c.r[2].w[0]);
    c.budget -= 2;
L_0017FED4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0017FEF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 31220u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0017FF88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FF0Cu);  if (depth < kMaxDepth) unit_0018(c, 54u, depth + 1u); else { c.pc = 0x00180520u; return; } if (c.pc != 0x0017FF0Cu) [[unlikely]] return; }
L_0017FF0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FF14u);  if (depth < kMaxDepth) unit_008E(c, 287u, depth + 1u); else { c.pc = 0x0035A188u; return; } if (c.pc != 0x0017FF14u) [[unlikely]] return; }
L_0017FF14:
    set32(c.r[3], ld32((c.r[28].w[0] - 31932u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017FF28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FF28u);  if (depth < kMaxDepth) unit_008E(c, 468u, depth + 1u); else { c.pc = 0x0035BAD8u; return; } if (c.pc != 0x0017FF28u) [[unlikely]] return; }
L_0017FF28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16460u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31212u)));  goto L_0017FF68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FF40u);  if (depth < kMaxDepth) unit_008D(c, 139u, depth + 1u); else { c.pc = 0x00356900u; return; } if (c.pc != 0x0017FF40u) [[unlikely]] return; }
L_0017FF40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FF48u);  if (depth < kMaxDepth) unit_00A5(c, 58u, depth + 1u); else { c.pc = 0x003B4C68u; return; } if (c.pc != 0x0017FF48u) [[unlikely]] return; }
L_0017FF48:
    set32(c.r[3], ld32((c.r[28].w[0] - 31216u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0017FF64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 16460u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FF64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0017FF64u) [[unlikely]] return; }
L_0017FF64:
    set32(c.r[4], ld32((c.r[28].w[0] - 31212u)));
    c.budget -= 1;
L_0017FF68:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[28].w[0] - 31220u), 0u);  if (t) { goto L_0017FF80; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FF80u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017FF80u) [[unlikely]] return; }
L_0017FF80:
    st32((c.r[28].w[0] - 31212u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0017FF88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017FF90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FFA0u); set32(c.r[4], ld32((c.r[28].w[0] - 31212u)));  if (depth < kMaxDepth) unit_0018(c, 12u, depth + 1u); else { c.pc = 0x00180150u; return; } if (c.pc != 0x0017FFA0u) [[unlikely]] return; }
L_0017FFA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FFA8u);  if (depth < kMaxDepth) unit_008F(c, 16u, depth + 1u); else { c.pc = 0x0035C230u; return; } if (c.pc != 0x0017FFA8u) [[unlikely]] return; }
L_0017FFA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017FFC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 16464u)));  c.pc = t; return; }
L_0017FFD0:
    set32(c.r[3], ld32((c.r[28].w[0] - 31204u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 31204u), c.r[3].w[0]);  c.pc = t; return; }
L_0017FFE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 31204u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017FFF4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 31204u), c.r[3].w[0]);
    c.budget -= 2;
L_0017FFF4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
}

}
