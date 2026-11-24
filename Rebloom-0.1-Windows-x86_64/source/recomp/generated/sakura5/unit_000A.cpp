#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_000A[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 34, 0, 35, 36,
    0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 42, 0, 0,
    0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0,
    62, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 68, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79,
    0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0,
    0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0,
    0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0,
    134, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 140, 0, 0, 141, 142, 0, 0, 0, 0, 0,
    0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 159,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 167, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 174, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    186, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0,
    0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 240, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252, 0,
    0, 0, 0, 0, 253, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0,
    0, 0, 260, 0, 261, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0,
    277, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 281,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 284, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0,
    0, 0, 0, 0, 287, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0,
    0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0,
    0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0,
    0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 323, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0,
    0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0,
};

void unit_000A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00148000;
    case 2u: goto L_00148018;
    case 3u: goto L_00148020;
    case 4u: goto L_00148038;
    case 5u: goto L_00148040;
    case 6u: goto L_00148058;
    case 7u: goto L_001480A0;
    case 8u: goto L_001480C0;
    case 9u: goto L_00148130;
    case 10u: goto L_00148180;
    case 11u: goto L_001481A0;
    case 12u: goto L_001482D8;
    case 13u: goto L_00148324;
    case 14u: goto L_0014839C;
    case 15u: goto L_001483D8;
    case 16u: goto L_001483F8;
    case 17u: goto L_00148428;
    case 18u: goto L_0014843C;
    case 19u: goto L_00148454;
    case 20u: goto L_00148464;
    case 21u: goto L_00148474;
    case 22u: goto L_001484AC;
    case 23u: goto L_001484CC;
    case 24u: goto L_00148508;
    case 25u: goto L_00148524;
    case 26u: goto L_00148578;
    case 27u: goto L_00148608;
    case 28u: goto L_00148640;
    case 29u: goto L_0014865C;
    case 30u: goto L_001486A4;
    case 31u: goto L_001486B8;
    case 32u: goto L_001486D0;
    case 33u: goto L_001486E0;
    case 34u: goto L_001486F0;
    case 35u: goto L_001486F8;
    case 36u: goto L_001486FC;
    case 37u: goto L_00148718;
    case 38u: goto L_00148724;
    case 39u: goto L_00148734;
    case 40u: goto L_00148758;
    case 41u: goto L_00148768;
    case 42u: goto L_00148774;
    case 43u: goto L_00148784;
    case 44u: goto L_00148798;
    case 45u: goto L_00148840;
    case 46u: goto L_00148870;
    case 47u: goto L_00148880;
    case 48u: goto L_00148894;
    case 49u: goto L_001488B0;
    case 50u: goto L_001488C8;
    case 51u: goto L_0014893C;
    case 52u: goto L_0014896C;
    case 53u: goto L_00148980;
    case 54u: goto L_001489A0;
    case 55u: goto L_001489C0;
    case 56u: goto L_001489D4;
    case 57u: goto L_00148A1C;
    case 58u: goto L_00148A2C;
    case 59u: goto L_00148A3C;
    case 60u: goto L_00148AD8;
    case 61u: goto L_00148AF4;
    case 62u: goto L_00148B00;
    case 63u: goto L_00148B08;
    case 64u: goto L_00148B24;
    case 65u: goto L_00148B34;
    case 66u: goto L_00148B44;
    case 67u: goto L_00148B54;
    case 68u: goto L_00148B84;
    case 69u: goto L_00148B8C;
    case 70u: goto L_00148B9C;
    case 71u: goto L_00148BD0;
    case 72u: goto L_00148BEC;
    case 73u: goto L_00148C14;
    case 74u: goto L_00148C28;
    case 75u: goto L_00148C34;
    case 76u: goto L_00148C40;
    case 77u: goto L_00148C4C;
    case 78u: goto L_00148C5C;
    case 79u: goto L_00148C7C;
    case 80u: goto L_00148C90;
    case 81u: goto L_00148CA0;
    case 82u: goto L_00148D48;
    case 83u: goto L_00148D5C;
    case 84u: goto L_00148D6C;
    case 85u: goto L_00148D84;
    case 86u: goto L_00148D9C;
    case 87u: goto L_00148DB4;
    case 88u: goto L_00148DD0;
    case 89u: goto L_00148DE4;
    case 90u: goto L_00148DFC;
    case 91u: goto L_00148E30;
    case 92u: goto L_00148E3C;
    case 93u: goto L_00148E48;
    case 94u: goto L_00148E54;
    case 95u: goto L_00148E60;
    case 96u: goto L_00148E8C;
    case 97u: goto L_00148EC0;
    case 98u: goto L_00148F10;
    case 99u: goto L_00148F58;
    case 100u: goto L_0014901C;
    case 101u: goto L_00149030;
    case 102u: goto L_00149040;
    case 103u: goto L_00149080;
    case 104u: goto L_00149148;
    case 105u: goto L_00149178;
    case 106u: goto L_001491C0;
    case 107u: goto L_00149280;
    case 108u: goto L_00149294;
    case 109u: goto L_001492A8;
    case 110u: goto L_001492C0;
    case 111u: goto L_001492E8;
    case 112u: goto L_001493A8;
    case 113u: goto L_001493D8;
    case 114u: goto L_00149414;
    case 115u: goto L_00149438;
    case 116u: goto L_0014943C;
    case 117u: goto L_00149470;
    case 118u: goto L_00149490;
    case 119u: goto L_001494C0;
    case 120u: goto L_00149510;
    case 121u: goto L_00149544;
    case 122u: goto L_00149594;
    case 123u: goto L_00149648;
    case 124u: goto L_00149678;
    case 125u: goto L_00149690;
    case 126u: goto L_001496F4;
    case 127u: goto L_00149708;
    case 128u: goto L_00149748;
    case 129u: goto L_00149794;
    case 130u: goto L_001497C0;
    case 131u: goto L_00149800;
    case 132u: goto L_00149830;
    case 133u: goto L_0014986C;
    case 134u: goto L_00149880;
    case 135u: goto L_00149890;
    case 136u: goto L_00149898;
    case 137u: goto L_001498B8;
    case 138u: goto L_00149918;
    case 139u: goto L_00149954;
    case 140u: goto L_00149958;
    case 141u: goto L_00149964;
    case 142u: goto L_00149968;
    case 143u: goto L_00149988;
    case 144u: goto L_001499A0;
    case 145u: goto L_001499A8;
    case 146u: goto L_001499C4;
    case 147u: goto L_001499D0;
    case 148u: goto L_001499E0;
    case 149u: goto L_00149A20;
    case 150u: goto L_00149A60;
    case 151u: goto L_00149A68;
    case 152u: goto L_00149A70;
    case 153u: goto L_00149AA0;
    case 154u: goto L_00149AA8;
    case 155u: goto L_00149AB0;
    case 156u: goto L_00149AC4;
    case 157u: goto L_00149AD8;
    case 158u: goto L_00149AF8;
    case 159u: goto L_00149AFC;
    case 160u: goto L_00149B50;
    case 161u: goto L_00149B9C;
    case 162u: goto L_00149BB4;
    case 163u: goto L_00149BE4;
    case 164u: goto L_00149C20;
    case 165u: goto L_00149C8C;
    case 166u: goto L_00149D30;
    case 167u: goto L_00149D90;
    case 168u: goto L_00149D94;
    case 169u: goto L_00149DD8;
    case 170u: goto L_00149E00;
    case 171u: goto L_00149E2C;
    case 172u: goto L_00149E58;
    case 173u: goto L_00149E60;
    case 174u: goto L_00149E64;
    case 175u: goto L_00149EA8;
    case 176u: goto L_00149EB8;
    case 177u: goto L_00149F68;
    case 178u: goto L_00149F70;
    case 179u: goto L_00149FB0;
    case 180u: goto L_00149FB8;
    case 181u: goto L_00149FD4;
    case 182u: goto L_0014A000;
    case 183u: goto L_0014A038;
    case 184u: goto L_0014A040;
    case 185u: goto L_0014A0C8;
    case 186u: goto L_0014A100;
    case 187u: goto L_0014A104;
    case 188u: goto L_0014A16C;
    case 189u: goto L_0014A1C4;
    case 190u: goto L_0014A22C;
    case 191u: goto L_0014A278;
    case 192u: goto L_0014A2B4;
    case 193u: goto L_0014A31C;
    case 194u: goto L_0014A358;
    case 195u: goto L_0014A394;
    case 196u: goto L_0014A3FC;
    case 197u: goto L_0014A43C;
    case 198u: goto L_0014A450;
    case 199u: goto L_0014A49C;
    case 200u: goto L_0014A508;
    case 201u: goto L_0014A540;
    case 202u: goto L_0014A578;
    case 203u: goto L_0014A61C;
    case 204u: goto L_0014A680;
    case 205u: goto L_0014A6B8;
    case 206u: goto L_0014A6F0;
    case 207u: goto L_0014A754;
    case 208u: goto L_0014A7A4;
    case 209u: goto L_0014A800;
    case 210u: goto L_0014A840;
    case 211u: goto L_0014A878;
    case 212u: goto L_0014A8DC;
    case 213u: goto L_0014A96C;
    case 214u: goto L_0014A980;
    case 215u: goto L_0014A9C8;
    case 216u: goto L_0014AA28;
    case 217u: goto L_0014AAAC;
    case 218u: goto L_0014AACC;
    case 219u: goto L_0014AB1C;
    case 220u: goto L_0014AB58;
    case 221u: goto L_0014AB90;
    case 222u: goto L_0014ABF4;
    case 223u: goto L_0014AC40;
    case 224u: goto L_0014AC90;
    case 225u: goto L_0014ACD8;
    case 226u: goto L_0014AD10;
    case 227u: goto L_0014AD70;
    case 228u: goto L_0014ADAC;
    case 229u: goto L_0014ADDC;
    case 230u: goto L_0014AE30;
    case 231u: goto L_0014AEC4;
    case 232u: goto L_0014AEF0;
    case 233u: goto L_0014AF3C;
    case 234u: goto L_0014AF64;
    case 235u: goto L_0014AF88;
    case 236u: goto L_0014AFF0;
    case 237u: goto L_0014B038;
    case 238u: goto L_0014B080;
    case 239u: goto L_0014B0D0;
    case 240u: goto L_0014B118;
    case 241u: goto L_0014B11C;
    case 242u: goto L_0014B158;
    case 243u: goto L_0014B184;
    case 244u: goto L_0014B1C8;
    case 245u: goto L_0014B1F0;
    case 246u: goto L_0014B1F8;
    case 247u: goto L_0014B210;
    case 248u: goto L_0014B258;
    case 249u: goto L_0014B260;
    case 250u: goto L_0014B268;
    case 251u: goto L_0014B270;
    case 252u: goto L_0014B278;
    case 253u: goto L_0014B290;
    case 254u: goto L_0014B294;
    case 255u: goto L_0014B2A8;
    case 256u: goto L_0014B2C0;
    case 257u: goto L_0014B2C4;
    case 258u: goto L_0014B2E0;
    case 259u: goto L_0014B2F8;
    case 260u: goto L_0014B308;
    case 261u: goto L_0014B310;
    case 262u: goto L_0014B318;
    case 263u: goto L_0014B328;
    case 264u: goto L_0014B340;
    case 265u: goto L_0014B350;
    case 266u: goto L_0014B370;
    case 267u: goto L_0014B3C8;
    case 268u: goto L_0014B3D0;
    case 269u: goto L_0014B410;
    case 270u: goto L_0014B430;
    case 271u: goto L_0014B45C;
    case 272u: goto L_0014B4A8;
    case 273u: goto L_0014B4C0;
    case 274u: goto L_0014B4F0;
    case 275u: goto L_0014B548;
    case 276u: goto L_0014B568;
    case 277u: goto L_0014B580;
    case 278u: goto L_0014B584;
    case 279u: goto L_0014B5C8;
    case 280u: goto L_0014B5F8;
    case 281u: goto L_0014B5FC;
    case 282u: goto L_0014B64C;
    case 283u: goto L_0014B680;
    case 284u: goto L_0014B698;
    case 285u: goto L_0014B69C;
    case 286u: goto L_0014B6EC;
    case 287u: goto L_0014B710;
    case 288u: goto L_0014B714;
    case 289u: goto L_0014B770;
    case 290u: goto L_0014B798;
    case 291u: goto L_0014B7C0;
    case 292u: goto L_0014B7F0;
    case 293u: goto L_0014B818;
    case 294u: goto L_0014B838;
    case 295u: goto L_0014B860;
    case 296u: goto L_0014B878;
    case 297u: goto L_0014B890;
    case 298u: goto L_0014B8E4;
    case 299u: goto L_0014B8F8;
    case 300u: goto L_0014B920;
    case 301u: goto L_0014B94C;
    case 302u: goto L_0014B980;
    case 303u: goto L_0014BA20;
    case 304u: goto L_0014BA50;
    case 305u: goto L_0014BA78;
    case 306u: goto L_0014BA90;
    case 307u: goto L_0014BAA0;
    case 308u: goto L_0014BAB8;
    case 309u: goto L_0014BAD0;
    case 310u: goto L_0014BB58;
    case 311u: goto L_0014BB6C;
    case 312u: goto L_0014BBA0;
    case 313u: goto L_0014BBAC;
    case 314u: goto L_0014BBF8;
    case 315u: goto L_0014BC1C;
    case 316u: goto L_0014BC70;
    case 317u: goto L_0014BCA8;
    case 318u: goto L_0014BCBC;
    case 319u: goto L_0014BD00;
    case 320u: goto L_0014BD60;
    case 321u: goto L_0014BD90;
    case 322u: goto L_0014BDC8;
    case 323u: goto L_0014BDCC;
    case 324u: goto L_0014BDD4;
    case 325u: goto L_0014BE28;
    case 326u: goto L_0014BE60;
    case 327u: goto L_0014BEB0;
    case 328u: goto L_0014BED0;
    case 329u: goto L_0014BF18;
    case 330u: goto L_0014BF38;
    case 331u: goto L_0014BF78;
    case 332u: goto L_0014BF90;
    case 333u: goto L_0014BFD0;
    case 334u: goto L_0014BFE8;
    default: bad_entry(c, 0x00148000u); return;
    }
L_00148000:
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 31760u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00148000u < 16384u) { entry = entries_000A[(t - 0x00148000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00148018:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_00148020:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[22].w[0]));  if (t) { goto L_00148040; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00148E60; } }
L_00148038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[22].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00147FF0u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 241u, depth); } }
L_00148040:
    set32(c.r[2], c.r[4].w[0] << 24);
    set32(c.r[3], 0u + 48u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[4].w[0] << 24);  if (t) { goto L_0014807C; } }
    set32(c.r[10], 0u + 1u);
    c.budget -= 1;
L_00148058:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = ld8((c.r[22].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148058u | kUnwind; return; } goto L_00148058; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] << 24);  if (t) { goto L_00148E60; } }
L_0014807C:
    st32((c.r[29].w[0] + 24u), c.r[22].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 32u), 0u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001480F4; } }
    c.budget -= 1;
L_001480A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[18].sd[0] < 16ll ? 1ull : 0ull;  if (t) { goto L_001480C8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 48u);
    c.budget -= 6;
L_001480C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_001480E4; } }
L_001480C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_001480E8; }
    c.r[2].d[0] = c.r[17].d[0] << 2;
    c.r[2].d[0] = c.r[2].d[0] + c.r[17].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 1;
    c.r[2].d[0] = c.r[4].d[0] + c.r[2].d[0];
    c.r[17].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-48ll);
    c.budget -= 5;
L_001480E4:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_001480E8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    c.r[2].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
L_001480F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 46u);  if (t) { goto L_0014810C; } }
    c.r[2].d[0] = c.r[4].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[18].sd[0] < 9ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001480A0u | kUnwind; return; } goto L_001480A0; } }
    set32(c.r[2], 0u + 46u);
    c.budget -= 1;
L_0014810C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[23].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00148254; } }
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));  if (t) { goto L_00148170; } }
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[4].w[0] - 49u);  goto L_00148150; }
    c.budget -= 1;
L_00148130:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148130u | kUnwind; return; } goto L_00148130; } }
    set32(c.r[2], c.r[4].w[0] - 49u);
    c.budget -= 1;
L_00148150:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 101u);  if (t) { goto L_00148258; } }
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[4].w[0] - 48u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 24u), c.r[22].w[0]);  if (t) { goto L_00148180; } }
L_00148170:
    set32(c.r[6], c.r[4].w[0] - 48u);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 101u);  if (t) { goto L_00148258; } }
L_00148180:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_00148238; } }
    set32(c.r[4], 0u + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], c.r[8].w[0] + c.r[7].w[0]);  if (t) { goto L_001481EC; } }
    set32(c.r[4], c.r[7].w[0] - 1u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_001481A0:
    c.r[2].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_001481C8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_001481E0; } }
    c.budget -= 1;
L_001481C8:
    c.r[2].d[0] = c.r[18].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] - 1u);  goto L_001481E4; }
    c.r[2].d[0] = c.r[17].d[0] << 2;
    c.r[2].d[0] = c.r[2].d[0] + c.r[17].d[0];
    c.r[17].d[0] = c.r[2].d[0] << 1;
    c.budget -= 3;
L_001481E0:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 1;
L_001481E4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001481A0u | kUnwind; return; } goto L_001481A0; } }
L_001481EC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_00148218; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_00148234; } }
L_00148218:
    c.r[2].d[0] = c.r[18].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00148238; } }
    c.r[2].d[0] = c.r[17].d[0] << 2;
    c.r[2].d[0] = c.r[2].d[0] + c.r[17].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 1;
    c.r[17].d[0] = c.r[6].d[0] + c.r[2].d[0];
    c.budget -= 4;
L_00148234:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00148238:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    set32(c.r[2], c.r[4].w[0] - 48u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148180u | kUnwind; return; } goto L_00148180; } }
L_00148254:
    set32(c.r[2], 0u + 101u);
    c.budget -= 1;
L_00148258:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; st64((c.r[29].w[0] + 16u), 0ull);  if (t) { goto L_0014826C; } }
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00148384; } }
L_0014826C:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[5].d[0] = c.r[22].d[0] + 0ull;  goto L_00148288; }
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { c.r[5].d[0] = c.r[22].d[0] + 0ull;  goto L_00148288; }
    c.budget -= 2;
    if (c.r[10].d[0] == 0ull) { c.r[22].d[0] = c.r[5].d[0] + 0ull;  goto L_00148E60; }
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_00148288:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    set32(c.r[2], 0u + 43u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_001482AC; } }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[4].w[0] - 48u);  if (t) { goto L_001482B8; } }
    set32(c.r[9], 0u + 1u);
    c.budget -= 1;
L_001482AC:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    set32(c.r[2], c.r[4].w[0] - 48u);
    c.budget -= 3;
L_001482B8:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[22].d[0] = c.r[5].d[0] + 0ull;  goto L_00148384; }
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[4].w[0] - 49u);  goto L_001482F8; }
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 2;
L_001482D8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    c.budget -= 7;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[22], c.r[22].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001482D8u | kUnwind; return; } goto L_001482D8; }
    set32(c.r[2], c.r[4].w[0] - 49u);
    c.budget -= 1;
L_001482F8:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st64((c.r[29].w[0] + 16u), 0ull);  goto L_00148384; }
    set32(c.r[4], c.r[4].w[0] - 48u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[4].d[0]);
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    c.r[2].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00148360; }
L_00148324:
    c.r[2].d[0] = c.r[4].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00148360; }
    c.r[3].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[2].d[0] = c.r[3].d[0] << 2;
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 1;
    c.r[2].d[0] = c.r[4].d[0] + c.r[2].d[0];
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-48ll);
    c.r[3].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[2].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148324u | kUnwind; return; } goto L_00148324; } }
    c.r[4].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00148360:
    set32(c.r[2], c.r[22].w[0] - c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00980000u);
    c.r[3].d[0] = c.r[3].d[0] | 38527ull;
    c.r[2].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[9].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[4].d[0]);  if (t) { goto L_00148384; } }
    c.r[4].d[0] = 0ull - c.r[4].d[0];
    st64((c.r[29].w[0] + 16u), c.r[4].d[0]);
    c.budget -= 2;
L_00148384:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[2].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001483A8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_00148E64; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_00148E64; } }
L_0014839C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00148E60; } }
    c.budget -= 1;
L_001483A8:
    set32(c.r[20], 0u + 16u);
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    if (c.r[23].d[0] == 0) c.r[23].d[0] = c.r[18].d[0];
    c.r[2].d[0] = c.r[2].d[0] - c.r[8].d[0];
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    c.r[2].d[0] = c.r[18].sd[0] < 17ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[20].d[0] = c.r[18].d[0];
    c.r[3].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001483D8u); st32((c.r[29].w[0] + 72u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000B(c, 87u, depth + 1u); else { c.pc = 0x0014E9A0u; return; } if (c.pc != 0x001483D8u) [[unlikely]] return; }
L_001483D8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], ld32((c.r[29].w[0] + 72u)));  if (t) { goto L_001483FC; } }
    c.r[5].d[0] = 0ull | 33760ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001483F8u);  if (depth < kMaxDepth) unit_000B(c, 57u, depth + 1u); else { c.pc = 0x0014E3A8u; return; } if (c.pc != 0x001483F8u) [[unlikely]] return; }
L_001483F8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001483FC:
    c.r[2].d[0] = c.r[20].sd[0] < 10ll ? 1ull : 0ull;
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] - c.r[20].w[0]);  if (t) { goto L_0014847C; } }
    set32(c.r[2], c.r[20].w[0] << 3);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld64((c.r[4].w[0] + 31408u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148428u);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x00148428u) [[unlikely]] return; }
L_00148428:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].sd[0] < 0) { c.r[2].d[0] = c.r[17].d[0] >> 1;  goto L_00148448; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014843Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 13u, depth + 1u); else { c.pc = 0x0014D9E0u; return; } if (c.pc != 0x0014843Cu) [[unlikely]] return; }
L_0014843C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00148464; } }
    c.budget -= 1;
L_00148448:
    c.r[4].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148454u); c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_000B(c, 13u, depth + 1u); else { c.pc = 0x0014D9E0u; return; } if (c.pc != 0x00148454u) [[unlikely]] return; }
L_00148454:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148464u);  if (depth < kMaxDepth) unit_000B(c, 57u, depth + 1u); else { c.pc = 0x0014E3A8u; return; } if (c.pc != 0x00148464u) [[unlikely]] return; }
L_00148464:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148474u);  if (depth < kMaxDepth) unit_000B(c, 57u, depth + 1u); else { c.pc = 0x0014E3A8u; return; } if (c.pc != 0x00148474u) [[unlikely]] return; }
L_00148474:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] - c.r[20].w[0]);
    c.budget -= 2;
L_0014847C:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0; st32((c.r[29].w[0] + 56u), 0u);  if (t) { goto L_001485D8; } }
    c.r[4].d[0] = c.r[16].d[0] & 15ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] << 3);  if (t) { goto L_001484B0; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld64((c.r[4].w[0] + 31480u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001484ACu);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x001484ACu) [[unlikely]] return; }
L_001484AC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001484B0:
    set32(c.r[2], 0u - 16u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].sd[0] < 309ll ? 1ull : 0ull;  if (t) { goto L_00148740; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 4));  goto L_001484F0; }
    set32(c.r[2], 0u + 34u);
    c.budget -= 1;
L_001484CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.r[19].d[0] = ld64((c.r[3].w[0] + 25480u));
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_00148E64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_00148E28; } }
    c.budget -= 1;
L_001484F0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_00148740; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00148540; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[17], c.r[21].w[0] + 31680u);
    c.budget -= 2;
L_00148508:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));  if (t) { goto L_00148528; } }
    c.r[4].d[0] = ld64((c.r[17].w[0]));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148524u);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x00148524u) [[unlikely]] return; }
L_00148524:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00148528:
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148508u | kUnwind; return; } goto L_00148508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[21].w[0] + 31680u);  if (t) { goto L_00148548; } }
L_00148540:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[21].w[0] + 31680u);
    c.budget -= 2;
L_00148548:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFCB00000u);
    set32(c.r[3], c.r[20].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[16].d[0] = c.r[16].d[0] >> 32;
    c.r[4].d[0] = ld64((c.r[3].w[0]));
    c.r[19].d[0] = c.r[19].d[0] & c.r[16].d[0];
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148578u); c.r[5].d[0] = c.r[19].d[0] | c.r[5].d[0];  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x00148578u) [[unlikely]] return; }
L_00148578:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7CA00000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[17].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 34u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001484CCu | kUnwind; return; } goto L_001484CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7C900000u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[19].d[0] & c.r[16].d[0];  if (t) { goto L_001485C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FEF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[19].d[0] | c.r[16].d[0];  if (t) { goto L_00148740; } }
L_001485C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x03500000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];  if (t) { goto L_00148740; } }
    c.budget -= 1;
L_001485D8:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[5], ld32((c.r[29].w[0] + 24u)));  if (t) { goto L_00148744; } }
    set32(c.r[16], 0u - c.r[16].w[0]);
    c.r[4].d[0] = c.r[16].d[0] & 15ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] << 3);  if (t) { goto L_0014860C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[5].w[0] + 31480u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148608u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0014E6F0u; return; } if (c.pc != 0x00148608u) [[unlikely]] return; }
L_00148608:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0014860C:
    set32(c.r[2], 0u - 16u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 4));  if (t) { goto L_00148740; } }
    c.r[2].d[0] = c.r[16].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 34u);  if (t) { goto L_001486FC; } }
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00148678; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[17], c.r[21].w[0] + 31720u);
    c.budget -= 3;
L_00148640:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));  if (t) { goto L_00148660; } }
    c.r[4].d[0] = ld64((c.r[17].w[0]));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014865Cu);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x0014865Cu) [[unlikely]] return; }
L_0014865C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00148660:
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148640u | kUnwind; return; } goto L_00148640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[21].w[0] + 31720u);  if (t) { goto L_00148680; } }
L_00148678:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[21].w[0] + 31720u);
    c.budget -= 2;
L_00148680:
    set32(c.r[3], c.r[20].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[3].w[0]));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[20].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001486A4u);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x001486A4u) [[unlikely]] return; }
L_001486A4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001486B8u);  if (depth < kMaxDepth) unit_000B(c, 83u, depth + 1u); else { c.pc = 0x0014E950u; return; } if (c.pc != 0x001486B8u) [[unlikely]] return; }
L_001486B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 24u)));  if (t) { goto L_00148744; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001486D0u);  if (depth < kMaxDepth) unit_000B(c, 57u, depth + 1u); else { c.pc = 0x0014E3A8u; return; } if (c.pc != 0x001486D0u) [[unlikely]] return; }
L_001486D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001486E0u);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x001486E0u) [[unlikely]] return; }
L_001486E0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001486F0u);  if (depth < kMaxDepth) unit_000B(c, 83u, depth + 1u); else { c.pc = 0x0014E950u; return; } if (c.pc != 0x001486F0u) [[unlikely]] return; }
L_001486F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_00148740; } }
L_001486F8:
    set32(c.r[2], 0u + 34u);
    c.budget -= 1;
L_001486FC:
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[30].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_00148E64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_00148E28; } }
L_00148718:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148724u);  if (depth < kMaxDepth) unit_0009(c, 140u, depth + 1u); else { c.pc = 0x001461D8u; return; } if (c.pc != 0x00148724u) [[unlikely]] return; }
L_00148724:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148734u);  if (depth < kMaxDepth) unit_000B(c, 57u, depth + 1u); else { c.pc = 0x0014E3A8u; return; } if (c.pc != 0x00148734u) [[unlikely]] return; }
L_00148734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00148E24; } }
    c.budget -= 1;
L_00148740:
    set32(c.r[5], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 1;
L_00148744:
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 32u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148758u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 98u, depth + 1u); else { c.pc = 0x001458D0u; return; } if (c.pc != 0x00148758u) [[unlikely]] return; }
L_00148758:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_00148C4C; } }
L_00148768:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148774u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 123u, depth + 1u); else { c.pc = 0x00145E88u; return; } if (c.pc != 0x00148774u) [[unlikely]] return; }
L_00148774:
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148784u); st32((c.r[29].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 130u, depth + 1u); else { c.pc = 0x00145FE0u; return; } if (c.pc != 0x00148784u) [[unlikely]] return; }
L_00148784:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_00148E28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00148804; } }
    c.budget -= 1;
L_00148798:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 60u)));  if (t) { goto L_001488A8; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_001487F0; } }
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 12;
    c.r[2].d[0] = c.r[19].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x7FF00000u);  if (t) { goto L_00148848; } }
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[19].d[0] = c.r[19].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] + c.r[4].d[0];
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[19].d[0] & c.r[3].d[0];  if (t) { goto L_00148E24; } }
L_001487F0:
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 12;
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00148848; } }
L_00148804:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 44;
    c.r[3].d[0] = c.r[3].d[0] >> 12;
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[19].d[0] = c.r[19].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[19].d[0] = c.r[19].d[0] | c.r[3].d[0];
    c.budget -= 16;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[19].d[0] | c.r[5].d[0];  if (t) { goto L_00148E24; } }
    goto L_00148844;
L_00148840:
    c.r[19].d[0] = c.r[19].d[0] | c.r[5].d[0];
    c.budget -= 1;
L_00148844:
    c.budget -= 1;
L_00148848:
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_00148E28; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148718u | kUnwind; return; } goto L_00148718; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148870u);  if (depth < kMaxDepth) unit_0009(c, 140u, depth + 1u); else { c.pc = 0x001461D8u; return; } if (c.pc != 0x00148870u) [[unlikely]] return; }
L_00148870:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148880u);  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0014E400u; return; } if (c.pc != 0x00148880u) [[unlikely]] return; }
L_00148880:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148894u);  if (depth < kMaxDepth) unit_000B(c, 83u, depth + 1u); else { c.pc = 0x0014E950u; return; } if (c.pc != 0x00148894u) [[unlikely]] return; }
L_00148894:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001486F8u | kUnwind; return; } goto L_001486F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00148E28; } }
    c.budget -= 1;
L_001488A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001488B0u); set32(c.r[4], ld32((c.r[29].w[0] + 64u)));  if (depth < kMaxDepth) unit_0009(c, 148u, depth + 1u); else { c.pc = 0x001465C8u; return; } if (c.pc != 0x001488B0u) [[unlikely]] return; }
L_001488B0:
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001488C8u);  if (depth < kMaxDepth) unit_000B(c, 83u, depth + 1u); else { c.pc = 0x0014E950u; return; } if (c.pc != 0x001488C8u) [[unlikely]] return; }
L_001488C8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00148988; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_001488F0; } }
    c.r[16].d[0] = 0ull | 65472ull;
    c.r[16].d[0] = c.r[16].d[0] << 46;
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001489D8; } }
    c.budget -= 1;
L_001488F0:
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 12;
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00148928; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 34u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001486FCu | kUnwind; return; } goto L_001486FC; } }
    c.r[16].d[0] = 0ull | 65472ull;
    c.r[16].d[0] = c.r[16].d[0] << 46;
    c.r[17].d[0] = 0ull | 49136ull;
    c.r[17].d[0] = c.r[17].d[0] << 48;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001489D8; } }
    c.budget -= 1;
L_00148928:
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014893Cu);  if (depth < kMaxDepth) unit_000B(c, 83u, depth + 1u); else { c.pc = 0x0014E950u; return; } if (c.pc != 0x0014893Cu) [[unlikely]] return; }
L_0014893C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00148958; } }
    c.r[16].d[0] = 0ull | 65408ull;
    c.r[16].d[0] = c.r[16].d[0] << 46;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00148970; } }
    c.budget -= 1;
L_00148958:
    c.r[5].d[0] = 0ull | 65408ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014896Cu);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x0014896Cu) [[unlikely]] return; }
L_0014896C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00148970:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148980u);  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0014E400u; return; } if (c.pc != 0x00148980u) [[unlikely]] return; }
L_00148980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001489D4; } }
L_00148988:
    c.r[18].d[0] = 0ull | 65408ull;
    c.r[18].d[0] = c.r[18].d[0] << 46;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001489A0u);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x001489A0u) [[unlikely]] return; }
L_001489A0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_001489C4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001489C0u);  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0014E400u; return; } if (c.pc != 0x001489C0u) [[unlikely]] return; }
L_001489C0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001489C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001489D4u);  if (depth < kMaxDepth) unit_000B(c, 57u, depth + 1u); else { c.pc = 0x0014E3A8u; return; } if (c.pc != 0x001489D4u) [[unlikely]] return; }
L_001489D4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001489D8:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    c.r[4].d[0] = c.r[3].d[0] & c.r[23].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FE00000u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 32u), c.r[4].w[0]);  if (t) { goto L_00148AB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFCB00000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[18].d[0] = c.r[18].d[0] >> 32;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[20].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[19].d[0] = c.r[19].d[0] & c.r[18].d[0];
    c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148A1Cu);  if (depth < kMaxDepth) unit_0009(c, 140u, depth + 1u); else { c.pc = 0x001461D8u; return; } if (c.pc != 0x00148A1Cu) [[unlikely]] return; }
L_00148A1C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148A2Cu);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x00148A2Cu) [[unlikely]] return; }
L_00148A2C:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148A3Cu);  if (depth < kMaxDepth) unit_000B(c, 57u, depth + 1u); else { c.pc = 0x0014E3A8u; return; } if (c.pc != 0x00148A3Cu) [[unlikely]] return; }
L_00148A3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7C9F0000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[2].d[0] = c.r[4].d[0] & c.r[23].d[0];
    c.r[3].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = c.r[19].d[0] & c.r[18].d[0];  if (t) { goto L_00148A98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FEF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 8;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 34u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001484CCu | kUnwind; return; } goto L_001484CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FEF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[19].d[0] | c.r[18].d[0];  if (t) { goto L_00148C1C; } }
    c.budget -= 1;
L_00148A98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x03500000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];  if (t) { goto L_00148B58; } }
    c.budget -= 1;
L_00148AB0:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x03400000u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00148B28; } }
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148AD8u);  if (depth < kMaxDepth) unit_000B(c, 83u, depth + 1u); else { c.pc = 0x0014E950u; return; } if (c.pc != 0x00148AD8u) [[unlikely]] return; }
L_00148AD8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00148B28; } }
    c.r[5].d[0] = 0ull | 65408ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148AF4u);  if (depth < kMaxDepth) unit_000B(c, 57u, depth + 1u); else { c.pc = 0x0014E3A8u; return; } if (c.pc != 0x00148AF4u) [[unlikely]] return; }
L_00148AF4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148B00u);  if (depth < kMaxDepth) unit_000B(c, 90u, depth + 1u); else { c.pc = 0x0014EA58u; return; } if (c.pc != 0x00148B00u) [[unlikely]] return; }
L_00148B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148B08u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 87u, depth + 1u); else { c.pc = 0x0014E9A0u; return; } if (c.pc != 0x00148B08u) [[unlikely]] return; }
L_00148B08:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_00148B28; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148B24u);  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0014E400u; return; } if (c.pc != 0x00148B24u) [[unlikely]] return; }
L_00148B24:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00148B28:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148B34u);  if (depth < kMaxDepth) unit_0009(c, 140u, depth + 1u); else { c.pc = 0x001461D8u; return; } if (c.pc != 0x00148B34u) [[unlikely]] return; }
L_00148B34:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148B44u);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x00148B44u) [[unlikely]] return; }
L_00148B44:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148B54u);  if (depth < kMaxDepth) unit_000B(c, 57u, depth + 1u); else { c.pc = 0x0014E3A8u; return; } if (c.pc != 0x00148B54u) [[unlikely]] return; }
L_00148B54:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00148B58:
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[17].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_00148C20; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148B84u);  if (depth < kMaxDepth) unit_000B(c, 40u, depth + 1u); else { c.pc = 0x0014DC88u; return; } if (c.pc != 0x00148B84u) [[unlikely]] return; }
L_00148B84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148B8Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 13u, depth + 1u); else { c.pc = 0x0014D9E0u; return; } if (c.pc != 0x00148B8Cu) [[unlikely]] return; }
L_00148B8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148B9Cu);  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0014E400u; return; } if (c.pc != 0x00148B9Cu) [[unlikely]] return; }
L_00148B9C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_00148BBC; } }
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 12;
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00148C00; } }
L_00148BBC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 31944u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148BD0u);  if (depth < kMaxDepth) unit_000B(c, 83u, depth + 1u); else { c.pc = 0x0014E950u; return; } if (c.pc != 0x00148BD0u) [[unlikely]] return; }
L_00148BD0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_00148E28; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 31952u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148BECu);  if (depth < kMaxDepth) unit_000B(c, 83u, depth + 1u); else { c.pc = 0x0014E950u; return; } if (c.pc != 0x00148BECu) [[unlikely]] return; }
L_00148BEC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_00148E28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00148C20; } }
    c.budget -= 1;
L_00148C00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 31960u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148C14u);  if (depth < kMaxDepth) unit_000B(c, 83u, depth + 1u); else { c.pc = 0x0014E950u; return; } if (c.pc != 0x00148C14u) [[unlikely]] return; }
L_00148C14:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_00148E28; } }
L_00148C1C:
    set32(c.r[5], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_00148C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148C28u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00145798u; return; } if (c.pc != 0x00148C28u) [[unlikely]] return; }
L_00148C28:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148C34u); set32(c.r[5], ld32((c.r[29].w[0] + 52u)));  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00145798u; return; } if (c.pc != 0x00148C34u) [[unlikely]] return; }
L_00148C34:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148C40u); set32(c.r[5], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00145798u; return; } if (c.pc != 0x00148C40u) [[unlikely]] return; }
L_00148C40:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148C4Cu); set32(c.r[5], ld32((c.r[29].w[0] + 64u)));  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00145798u; return; } if (c.pc != 0x00148C4Cu) [[unlikely]] return; }
L_00148C4C:
    set32(c.r[2], ld32((c.r[29].w[0] + 56u)));
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148C5Cu); set32(c.r[5], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_0009(c, 89u, depth + 1u); else { c.pc = 0x001456F0u; return; } if (c.pc != 0x00148C5Cu) [[unlikely]] return; }
L_00148C5C:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 12u);
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148C7Cu); set32(c.r[6], c.r[6].w[0] + 8u);  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x00148C7Cu) [[unlikely]] return; }
L_00148C7C:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148C90u); set32(c.r[7], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 143u, depth + 1u); else { c.pc = 0x00146440u; return; } if (c.pc != 0x00148C90u) [[unlikely]] return; }
L_00148C90:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148CA0u); st32((c.r[29].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 107u, depth + 1u); else { c.pc = 0x00145B40u; return; } if (c.pc != 0x00148CA0u) [[unlikely]] return; }
L_00148CA0:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0; st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_00148CC0; } }
    set32(c.r[17], ld32((c.r[29].w[0] + 72u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00148CD4; } }
L_00148CC0:
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    c.r[23].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[18], 0u - c.r[2].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
L_00148CD4:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[17], c.r[17].w[0] - c.r[2].w[0]);  goto L_00148CE4; }
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_00148CE4:
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[20], c.r[2].w[0] + 1075u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[4].sd[0] < -1022ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[21].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00148D08; } }
    set32(c.r[2], 0u + 54u);
    set32(c.r[20], c.r[2].w[0] - c.r[5].w[0]);
    c.budget -= 2;
L_00148D08:
    set32(c.r[4], c.r[17].w[0] + c.r[20].w[0]);
    set32(c.r[18], c.r[18].w[0] + c.r[20].w[0]);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[18].d[0];
    c.r[2].d[0] = c.r[21].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[21].d[0];
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_00148D38; } }
    set32(c.r[21], c.r[21].w[0] - c.r[4].w[0]);
    set32(c.r[18], c.r[18].w[0] - c.r[4].w[0]);
    set32(c.r[17], c.r[17].w[0] - c.r[4].w[0]);
    c.budget -= 3;
L_00148D38:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] <= 0; set32(c.r[5], ld32((c.r[29].w[0] + 60u)));  if (t) { goto L_00148D70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148D48u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x00145D88u; return; } if (c.pc != 0x00148D48u) [[unlikely]] return; }
L_00148D48:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 48u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148D5Cu); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 109u, depth + 1u); else { c.pc = 0x00145B78u; return; } if (c.pc != 0x00148D5Cu) [[unlikely]] return; }
L_00148D5C:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148D6Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00145798u; return; } if (c.pc != 0x00148D6Cu) [[unlikely]] return; }
L_00148D6C:
    st32((c.r[29].w[0] + 48u), c.r[16].w[0]);
    c.budget -= 1;
L_00148D70:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_00148D88; } }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148D84u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 123u, depth + 1u); else { c.pc = 0x00145E88u; return; } if (c.pc != 0x00148D84u) [[unlikely]] return; }
L_00148D84:
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 1;
L_00148D88:
    c.budget -= 2;
    { const bool t = c.r[23].sd[0] <= 0; set32(c.r[5], ld32((c.r[29].w[0] + 52u)));  if (t) { goto L_00148DA0; } }
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148D9Cu); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x00145D88u; return; } if (c.pc != 0x00148D9Cu) [[unlikely]] return; }
L_00148D9C:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_00148DA0:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; set32(c.r[5], ld32((c.r[29].w[0] + 52u)));  if (t) { goto L_00148DB8; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148DB4u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 123u, depth + 1u); else { c.pc = 0x00145E88u; return; } if (c.pc != 0x00148DB4u) [[unlikely]] return; }
L_00148DB4:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_00148DB8:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] <= 0; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_00148DD8; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148DD0u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 123u, depth + 1u); else { c.pc = 0x00145E88u; return; } if (c.pc != 0x00148DD0u) [[unlikely]] return; }
L_00148DD0:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 2;
L_00148DD8:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148DE4u); set32(c.r[6], ld32((c.r[29].w[0] + 52u)));  if (depth < kMaxDepth) unit_0009(c, 132u, depth + 1u); else { c.pc = 0x00146048u; return; } if (c.pc != 0x00148DE4u) [[unlikely]] return; }
L_00148DE4:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[21], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148DFCu); st32((c.r[4].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0009(c, 130u, depth + 1u); else { c.pc = 0x00145FE0u; return; } if (c.pc != 0x00148DFCu) [[unlikely]] return; }
L_00148DFC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148798u | kUnwind; return; } goto L_00148798; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_00148E28; } }
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 12;
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 64u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148768u | kUnwind; return; } goto L_00148768; } }
L_00148E24:
    set32(c.r[5], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_00148E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148E30u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00145798u; return; } if (c.pc != 0x00148E30u) [[unlikely]] return; }
L_00148E30:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148E3Cu); set32(c.r[5], ld32((c.r[29].w[0] + 52u)));  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00145798u; return; } if (c.pc != 0x00148E3Cu) [[unlikely]] return; }
L_00148E3C:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148E48u); set32(c.r[5], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00145798u; return; } if (c.pc != 0x00148E48u) [[unlikely]] return; }
L_00148E48:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148E54u); set32(c.r[5], ld32((c.r[29].w[0] + 56u)));  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00145798u; return; } if (c.pc != 0x00148E54u) [[unlikely]] return; }
L_00148E54:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148E60u); set32(c.r[5], ld32((c.r[29].w[0] + 64u)));  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00145798u; return; } if (c.pc != 0x00148E60u) [[unlikely]] return; }
L_00148E60:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 1;
L_00148E64:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { st32((c.r[3].w[0]), c.r[22].w[0]);  goto L_00148E6C; }
L_00148E6C:
    set32(c.r[4], ld32((c.r[29].w[0] + 12u)));
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00148E90; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148E8Cu);  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0014E400u; return; } if (c.pc != 0x00148E8Cu) [[unlikely]] return; }
L_00148E8C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00148E90:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 136u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 152u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00148EC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 9040u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00147FA8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 240u, depth); }
L_00148F10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    c.r[23].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 18;
L_00148F58:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 31033u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148F58u | kUnwind; return; } goto L_00148F58; } }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 43u);  if (t) { goto L_00148F98; } }
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[23], 0u + 1u);  if (t) { goto L_00148FA8; } }
L_00148F98:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00148FA8; } }
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_00148FA8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_00148FB8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00148FE4; } }
L_00148FB8:
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 120u);  if (t) { goto L_00148FE4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 88u);  if (t) { goto L_00148FD8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00148FE4; } }
L_00148FD8:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[18], c.r[18].w[0] + 2u);
    set32(c.r[19], 0u + 16u);
    c.budget -= 3;
L_00148FE4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_00148FF8; } }
    set32(c.r[19], 0u + 8u);
    c.r[2].d[0] = c.r[17].d[0] ^ 48ull;
    if (c.r[2].d[0] != 0) c.r[19].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_00148FF8:
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 1;
    c.r[20].d[0] = 0ull | 32768ull;
    c.r[20].d[0] = c.r[20].d[0] << 48;
    if (c.r[23].d[0] == 0) c.r[20].d[0] = c.r[2].d[0];
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014901Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 12u, depth + 1u); else { c.pc = 0x0014D478u; return; } if (c.pc != 0x0014901Cu) [[unlikely]] return; }
L_0014901C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[22].d[0] = c.r[2].d[0] << 32;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149030u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 11u, depth + 1u); else { c.pc = 0x0014CEF8u; return; } if (c.pc != 0x00149030u) [[unlikely]] return; }
L_00149030:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00149090; } }
L_00149040:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001490D0; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0; c.r[2].d[0] = c.r[20].d[0] < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_00149070; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], 0u - 1u);  goto L_00149088; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[20].d[0]; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00149078; } }
    c.r[2].d[0] = c.r[22].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00149078; } }
L_00149070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u - 1u);  if (t) { goto L_00149088; } }
L_00149078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149080u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 7u, depth + 1u); else { c.pc = 0x0014C158u; return; } if (c.pc != 0x00149080u) [[unlikely]] return; }
L_00149080:
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = c.r[17].d[0] + c.r[2].d[0];
    c.budget -= 2;
L_00149088:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_00149090:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 31033u));
    c.r[2].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] & 3ull;  if (t) { goto L_001490B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149040u | kUnwind; return; } goto L_00149040; } }
L_001490B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] - 55u);  if (t) { goto L_001490D0; } }
    set32(c.r[3], c.r[17].w[0] - 87u);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] == 0) c.r[17].d[0] = c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149040u | kUnwind; return; } goto L_00149040; } }
    c.budget -= 1;
L_001490D0:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; c.r[2].d[0] = 0ull - c.r[5].d[0];  if (t) { goto L_00149100; } }
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 1;
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 48;
    if (c.r[23].d[0] == 0) c.r[5].d[0] = c.r[3].d[0];
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u + 34u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_00149104; } }
    c.budget -= 1;
L_00149100:
    if (c.r[23].d[0] != 0) c.r[5].d[0] = c.r[2].d[0];
    c.budget -= 1;
L_00149104:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] - 1u);  if (t) { goto L_00149114; } }
    if (c.r[6].d[0] != 0) c.r[21].d[0] = c.r[2].d[0];
    st32((c.r[30].w[0]), c.r[21].w[0]);
    c.budget -= 2;
L_00149114:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00149148:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] - 9040u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00148F10u | kUnwind; return; } goto L_00148F10; }
L_00149178:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 4u), 0u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 18;
L_001491C0:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 31033u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001491C0u | kUnwind; return; } goto L_001491C0; } }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 43u);  if (t) { goto L_00149208; } }
    set32(c.r[2], 0u + 1u);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00149218; } }
    c.budget -= 1;
L_00149208:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00149218; } }
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_00149218:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_00149228; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00149254; } }
L_00149228:
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 120u);  if (t) { goto L_00149254; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 88u);  if (t) { goto L_00149248; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00149254; } }
L_00149248:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[18], c.r[18].w[0] + 2u);
    set32(c.r[19], 0u + 16u);
    c.budget -= 3;
L_00149254:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { c.r[16].d[0] = c.r[19].d[0] + 0ull;  goto L_00149270; }
    set32(c.r[3], 0u + 10u);
    set32(c.r[19], 0u + 8u);
    c.r[2].d[0] = c.r[17].d[0] ^ 48ull;
    if (c.r[2].d[0] != 0) c.r[19].d[0] = c.r[3].d[0];
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
L_00149270:
    set32(c.r[4], 0u - 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149280u); c.r[23].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 11u, depth + 1u); else { c.pc = 0x0014CEF8u; return; } if (c.pc != 0x00149280u) [[unlikely]] return; }
L_00149280:
    set32(c.r[4], 0u - 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149294u); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 12u, depth + 1u); else { c.pc = 0x0014D478u; return; } if (c.pc != 0x00149294u) [[unlikely]] return; }
L_00149294:
    c.r[22].d[0] = c.r[2].d[0] << 32;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001492F8; } }
    c.budget -= 1;
L_001492A8:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00149338; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; c.r[2].d[0] = c.r[20].d[0] < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_001492D8; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], 0u - 1u);  goto L_001492F0; }
    goto L_001492C4;
L_001492C0:
    set32(c.r[16], 0u - 1u);
    c.budget -= 1;
L_001492C4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[20].d[0]; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001492E0; } }
    c.r[2].d[0] = c.r[22].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001492E0; } }
L_001492D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_001492F0; } }
L_001492E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001492E8u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 7u, depth + 1u); else { c.pc = 0x0014C158u; return; } if (c.pc != 0x001492E8u) [[unlikely]] return; }
L_001492E8:
    set32(c.r[16], 0u + 1u);
    c.r[5].d[0] = c.r[17].d[0] + c.r[2].d[0];
    c.budget -= 2;
L_001492F0:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_001492F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 31033u));
    c.r[2].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] & 3ull;  if (t) { goto L_00149318; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001492A8u | kUnwind; return; } goto L_001492A8; } }
L_00149318:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] - 55u);  if (t) { goto L_00149338; } }
    set32(c.r[3], c.r[17].w[0] - 87u);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] == 0) c.r[17].d[0] = c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001492A8u | kUnwind; return; } goto L_001492A8; } }
    c.budget -= 1;
L_00149338:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[3], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_00149358; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u + 34u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_00149360; } }
    c.budget -= 1;
L_00149358:
    c.r[2].d[0] = 0ull - c.r[5].d[0];
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[2].d[0];
    c.budget -= 2;
L_00149360:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] - 1u);  if (t) { goto L_00149370; } }
    if (c.r[16].d[0] != 0) c.r[21].d[0] = c.r[2].d[0];
    st32((c.r[30].w[0]), c.r[21].w[0]);
    c.budget -= 2;
L_00149370:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001493A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] - 9040u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00149178u | kUnwind; return; } goto L_00149178; }
L_001493D8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[18].w[0] + 64u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 12;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[19], ld32((c.r[18].w[0] + 52u)));  goto L_00149460; }
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149414u); set32(c.r[5], 0u + 1024u);  if (depth < kMaxDepth) unit_0009(c, 51u, depth + 1u); else { c.pc = 0x00144AD0u; return; } if (c.pc != 0x00149414u) [[unlikely]] return; }
L_00149414:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001494A0; } }
    set32(c.r[2], 0u + 1024u);
    st32((c.r[18].w[0] + 48u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[19], 0u + 2u);
    set32(c.r[17], c.r[17].w[0] + 1021u);
    set32(c.r[4], c.r[18].w[0] + 66u);
    c.budget -= 6;
L_00149438:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 1;
L_0014943C:
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[17].w[0] + c.r[19].w[0]);
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[19].sd[0] >= 0; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149438u | kUnwind; return; } goto L_00149438; } }
    st32((c.r[18].w[0]), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001494A0; } }
L_00149460:
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[20], c.r[19].w[0] << 1);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149470u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00146838u; return; } if (c.pc != 0x00149470u) [[unlikely]] return; }
L_00149470:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001494A0; } }
    set32(c.r[16], c.r[17].w[0] + c.r[19].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149490u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x00149490u) [[unlikely]] return; }
L_00149490:
    st32((c.r[18].w[0]), c.r[16].w[0]);
    st32((c.r[18].w[0] + 52u), c.r[20].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 48u), c.r[17].w[0]);
    c.budget -= 4;
L_001494A0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001494C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_00149634; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 56u)));  goto L_00149500; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 9040u)));
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 4;
L_00149500:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_00149514; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149510u); c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 338u, depth + 1u); else { c.pc = 0x00143AE8u; return; } if (c.pc != 0x00149510u) [[unlikely]] return; }
L_00149510:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    c.budget -= 1;
L_00149514:
    c.r[4].d[0] = c.r[2].d[0] & 65503ull;
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0014956C; } }
    c.r[3].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00149634; } }
    c.r[2].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_00149564; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149544u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 322u, depth + 1u); else { c.pc = 0x001437C0u; return; } if (c.pc != 0x00149544u) [[unlikely]] return; }
L_00149544:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00149634; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[2].d[0] & 65527ull;
    st32((c.r[16].w[0] + 24u), 0u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    c.budget -= 6;
L_00149564:
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0014956C:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[17].d[0] & 255ull;  if (t) { goto L_001495C0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_001495A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149594u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 113u, depth + 1u); else { c.pc = 0x001493D8u; return; } if (c.pc != 0x00149594u) [[unlikely]] return; }
L_00149594:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_001495A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00149634; } }
    c.budget -= 1;
L_001495A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_001495F0; } }
L_001495C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], ld32((c.r[16].w[0])));  if (t) { goto L_00149600; } }
    c.r[2].d[0] = c.r[2].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_00149604; } }
    c.r[2].d[0] = ld8((c.r[7].w[0] - 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_00149604; } }
    set32(c.r[2], c.r[7].w[0] - 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_001495F0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00149634; } }
    c.budget -= 1;
L_00149600:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_00149604:
    set32(c.r[4], c.r[16].w[0] + 64u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], c.r[16].w[0] + 66u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[5].w[0]);
    st32((c.r[16].w[0]), c.r[6].w[0]);
    st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 12;
L_00149634:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00149648:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00149670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_00149680; } }
    c.budget -= 1;
L_00149670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149678u);  if (depth < kMaxDepth) unit_0009(c, 11u, depth + 1u); else { c.pc = 0x00144160u; return; } if (c.pc != 0x00149678u) [[unlikely]] return; }
L_00149678:
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 2;
L_00149680:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00149690:
    set32(c.r[29], c.r[29].w[0] - 1152u);
    set32(c.r[10], 0u + 1024u);
    st64((c.r[29].w[0] + 1120u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 1128u), c.r[17].d[0]);
    set32(c.r[11], c.r[29].w[0] + 96u);
    st64((c.r[29].w[0] + 1136u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[11].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[9].d[0] = ld16((c.r[16].w[0] + 14u));
    set32(c.r[8], ld32((c.r[16].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 36u)));
    st32((c.r[29].w[0] + 84u), c.r[8].w[0]);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[29].w[0] + 14u), static_cast<std::uint16_t>(c.r[9].w[0]));
    st32((c.r[29].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[10].w[0]);
    st32((c.r[29].w[0]), c.r[11].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[10].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001496F4u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_000A(c, 128u, depth + 1u); else { c.pc = 0x00149748u; return; } if (c.pc != 0x001496F4u) [[unlikely]] return; }
L_001496F4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] < 0; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_00149710; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149708u);  if (depth < kMaxDepth) unit_0008(c, 322u, depth + 1u); else { c.pc = 0x001437C0u; return; } if (c.pc != 0x00149708u) [[unlikely]] return; }
L_00149708:
    set32(c.r[3], 0u - 1u);
    if (c.r[2].d[0] != 0) c.r[17].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_00149710:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00149730; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_00149730:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 1120u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 1128u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1136u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1152u);  c.pc = t; return; }
L_00149748:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00149780; } }
    set32(c.r[2], ld32((c.r[2].w[0] - 9040u)));
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_00149780:
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0014979C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149794u);  if (depth < kMaxDepth) unit_0008(c, 338u, depth + 1u); else { c.pc = 0x00143AE8u; return; } if (c.pc != 0x00149794u) [[unlikely]] return; }
L_00149794:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0014979C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_001497C0; }
L_001497C0:
    set32(c.r[29], c.r[29].w[0] - 656u);
    st64((c.r[29].w[0] + 576u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 624u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 484u), c.r[4].w[0]);
    st64((c.r[29].w[0] + 584u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 592u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 600u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 608u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 616u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 632u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 640u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 648u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149800u); st32((c.r[29].w[0] + 488u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x001446A0u; return; } if (c.pc != 0x00149800u) [[unlikely]] return; }
L_00149800:
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 12u));
    st32((c.r[29].w[0] + 500u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 472u), 0u);  if (t) { goto L_00149828; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[3].d[0] & 26ull;  goto L_00149844; }
L_00149828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149830u); set32(c.r[4], ld32((c.r[29].w[0] + 488u)));  if (depth < kMaxDepth) unit_000B(c, 3u, depth + 1u); else { c.pc = 0x0014C048u; return; } if (c.pc != 0x00149830u) [[unlikely]] return; }
L_00149830:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0014AE00; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 488u)));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] & 26ull;
    c.budget -= 3;
L_00149844:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[29].w[0] + 32u);  if (t) { goto L_00149878; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 488u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 14u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00149878; } }
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014986Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 125u, depth + 1u); else { c.pc = 0x00149690u; return; } if (c.pc != 0x0014986Cu) [[unlikely]] return; }
L_0014986C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 576u));  if (t) { goto L_0014AE04; } }
    c.budget -= 1;
L_00149878:
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 16u), c.r[19].w[0]);
    c.budget -= 2;
L_00149880:
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 492u), 0u);
    c.budget -= 4;
L_00149890:
    c.r[21].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], 0u + 37u);
    c.budget -= 2;
L_00149898:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 9040u)));
    set32(c.r[5], c.r[29].w[0] + 468u);
    set32(c.r[7], ld32((c.r[3].w[0] - 9032u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001498B8u); set32(c.r[8], c.r[29].w[0] + 472u);  if (depth < kMaxDepth) unit_0009(c, 65u, depth + 1u); else { c.pc = 0x001451F8u; return; } if (c.pc != 0x001498B8u) [[unlikely]] return; }
L_001498B8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].sd[0] <= 0) { set32(c.r[17], c.r[18].w[0] - c.r[21].w[0]);  goto L_001498D8; }
    set32(c.r[2], ld32((c.r[29].w[0] + 468u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[18], c.r[18].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149898u | kUnwind; return; } goto L_00149898; } }
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[17], c.r[18].w[0] - c.r[21].w[0]);
    c.budget -= 2;
L_001498D8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00149934; } }
    st32((c.r[19].w[0] + 4u), c.r[17].w[0]);
    st32((c.r[19].w[0]), c.r[21].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00149928; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149918u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x00149918u) [[unlikely]] return; }
L_00149918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_0014ADEC; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_00149928:
    set32(c.r[5], ld32((c.r[29].w[0] + 492u)));
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[29].w[0] + 492u), c.r[5].w[0]);
    c.budget -= 3;
L_00149934:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[2], ld32((c.r[29].w[0] + 24u)));  if (t) { goto L_0014ADCC; } }
    st8((c.r[29].w[0] + 465u), static_cast<std::uint8_t>(0u));
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[29].w[0] + 516u), 0u);
    c.r[23].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 496u), 0u);
    set32(c.r[20], 0u - 1u);
    c.budget -= 6;
L_00149954:
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 1;
L_00149958:
    set32(c.r[2], c.r[4].w[0] << 24);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 3;
L_00149964:
    set32(c.r[3], c.r[17].w[0] - 32u);
    c.budget -= 1;
L_00149968:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(89ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_0014A038; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 32128u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00148000u < 16384u) { entry = entries_000A[(t - 0x00148000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00149988:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 465u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[18].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00149958u | kUnwind; return; } goto L_00149958; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 32u);  if (t) { goto L_001499D4; } }
    c.budget -= 1;
L_001499A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[23].d[0] | 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149954u | kUnwind; return; } goto L_00149954; } }
L_001499A8:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[22], c.r[22].w[0] + 8u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[29].w[0] + 496u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149954u | kUnwind; return; } goto L_00149954; } }
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[29].w[0] + 496u), c.r[2].w[0]);
    c.budget -= 2;
L_001499C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[23].d[0] | 4ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149954u | kUnwind; return; } goto L_00149954; } }
    c.budget -= 1;
L_001499D0:
    set32(c.r[2], 0u + 43u);
    c.budget -= 1;
L_001499D4:
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 465u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149958u | kUnwind; return; } goto L_00149958; } }
L_001499E0:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[2], 0u + 42u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_00149A10; } }
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[20].sd[0] < -1ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[22], c.r[22].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149954u | kUnwind; return; } goto L_00149954; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149954u | kUnwind; return; } goto L_00149954; } }
L_00149A10:
    set32(c.r[2], c.r[17].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00149A48; } }
L_00149A20:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[16], c.r[2].w[0] - 48u);
    set32(c.r[2], c.r[17].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149A20u | kUnwind; return; } goto L_00149A20; } }
L_00149A48:
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[20].sd[0] < -1ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[20], 0u - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00149964u | kUnwind; return; } goto L_00149964; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[17].w[0] - 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149968u | kUnwind; return; } goto L_00149968; } }
L_00149A60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[23].d[0] | 128ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149954u | kUnwind; return; } goto L_00149954; } }
L_00149A68:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00149A70:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[16], c.r[2].w[0] - 48u);
    set32(c.r[2], c.r[17].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149A70u | kUnwind; return; } goto L_00149A70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 496u), c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149964u | kUnwind; return; } goto L_00149964; } }
L_00149AA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[23].d[0] | 8ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149954u | kUnwind; return; } goto L_00149954; } }
L_00149AA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[23].d[0] | 64ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149954u | kUnwind; return; } goto L_00149954; } }
L_00149AB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[2], 0u + 108u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = ld8((c.r[18].w[0]));  if (t) { goto L_00149AD0; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00149AC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[23].d[0] | 32ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149954u | kUnwind; return; } goto L_00149954; } }
    c.budget -= 1;
L_00149AD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[23].d[0] | 16ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149958u | kUnwind; return; } goto L_00149958; } }
L_00149AD8:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[22], c.r[22].w[0] + 8u);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[21], c.r[29].w[0] + 96u);
    set32(c.r[30], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0014A048; } }
    c.budget -= 1;
L_00149AF8:
    c.r[23].d[0] = c.r[23].d[0] | 16ull;
    c.budget -= 1;
L_00149AFC:
    c.r[2].d[0] = c.r[23].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00149B18; } }
    set32(c.r[22], c.r[22].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[2].w[0]));  if (t) { goto L_00149B38; } }
    c.budget -= 1;
L_00149B18:
    c.r[2].d[0] = c.r[23].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00149B30; } }
    set32(c.r[22], c.r[22].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (t) { goto L_00149B38; } }
L_00149B30:
    set32(c.r[22], c.r[22].w[0] + 8u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_00149B38:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_00149F18; } }
    set32(c.r[2], 0u + 45u);
    c.r[16].d[0] = 0ull - c.r[16].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 465u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00149F18; } }
L_00149B50:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 103u);  if (t) { goto L_00149B68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 6u);  if (t) { goto L_00149B80; } }
    c.budget -= 1;
L_00149B68:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 71u);  if (t) { goto L_00149B78; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[23].d[0] & 8ull;  if (t) { goto L_00149B84; } }
L_00149B78:
    set32(c.r[2], 0u + 1u);
    if (c.r[20].d[0] == 0) c.r[20].d[0] = c.r[2].d[0];
    c.budget -= 2;
L_00149B80:
    c.r[2].d[0] = c.r[23].d[0] & 8ull;
    c.budget -= 1;
L_00149B84:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[29].w[0] + 504u), c.r[2].d[0]);
    c.r[4].d[0] = ld64((c.r[29].w[0] + 504u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149B9Cu); set32(c.r[22], c.r[22].w[0] + 8u);  if (depth < kMaxDepth) unit_0005(c, 107u, depth + 1u); else { c.pc = 0x00136978u; return; } if (c.pc != 0x00149B9Cu) [[unlikely]] return; }
L_00149B9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00149BD8; } }
    c.r[4].d[0] = ld64((c.r[29].w[0] + 504u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149BB4u);  if (depth < kMaxDepth) unit_000B(c, 83u, depth + 1u); else { c.pc = 0x0014E950u; return; } if (c.pc != 0x00149BB4u) [[unlikely]] return; }
L_00149BB4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00149BC8; } }
    set32(c.r[2], 0u + 45u);
    st8((c.r[29].w[0] + 465u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
L_00149BC8:
    set32(c.r[30], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[2].w[0] + 32000u);  if (t) { goto L_0014A04C; } }
    c.budget -= 1;
L_00149BD8:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 504u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149BE4u);  if (depth < kMaxDepth) unit_0005(c, 108u, depth + 1u); else { c.pc = 0x001369C0u; return; } if (c.pc != 0x00149BE4u) [[unlikely]] return; }
L_00149BE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00149BF8; } }
    set32(c.r[30], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[2].w[0] + 32008u);  if (t) { goto L_0014A04C; } }
L_00149BF8:
    c.r[23].d[0] = c.r[23].d[0] | 256ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 484u)));
    c.r[5].d[0] = ld64((c.r[29].w[0] + 504u));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 464u);
    set32(c.r[9], c.r[29].w[0] + 476u);
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149C20u); set32(c.r[11], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_000A(c, 230u, depth + 1u); else { c.pc = 0x0014AE30u; return; } if (c.pc != 0x00149C20u) [[unlikely]] return; }
L_00149C20:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 103u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 71u);  if (t) { goto L_00149C38; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[7], ld32((c.r[29].w[0] + 476u)));  if (t) { goto L_00149C68; } }
L_00149C38:
    set32(c.r[7], ld32((c.r[29].w[0] + 476u)));
    c.r[2].d[0] = c.r[7].sd[0] < -3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 101u);  if (t) { goto L_00149C58; } }
    c.r[2].d[0] = c.r[20].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], 0u + 103u);  goto L_00149C68; }
    set32(c.r[2], 0u + 101u);
    c.budget -= 1;
L_00149C58:
    c.r[4].d[0] = c.r[17].d[0] ^ 103ull;
    set32(c.r[3], 0u + 69u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    if (c.r[4].d[0] != 0) c.r[17].d[0] = c.r[3].d[0];
    c.budget -= 4;
L_00149C68:
    c.r[2].d[0] = c.r[17].sd[0] < 102ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 102u);  goto L_00149CB8; }
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149C8Cu); st32((c.r[29].w[0] + 476u), c.r[7].w[0]);  if (depth < kMaxDepth) unit_000A(c, 236u, depth + 1u); else { c.pc = 0x0014AFF0u; return; } if (c.pc != 0x00149C8Cu) [[unlikely]] return; }
L_00149C8C:
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 512u)));
    c.r[3].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[30], c.r[6].w[0] + c.r[2].w[0]);  if (t) { goto L_00149CB0; } }
    c.r[2].d[0] = c.r[23].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 464u)));  if (t) { goto L_00149D1C; } }
L_00149CB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[30].w[0] + 1u);  if (t) { goto L_00149D18; } }
L_00149CB8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[5], ld32((c.r[29].w[0] + 480u)));  if (t) { goto L_00149CE8; } }
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] <= 0; set32(c.r[30], c.r[20].w[0] + 2u);  if (t) { goto L_00149D18; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; c.r[30].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00149CDC; } }
    c.r[2].d[0] = c.r[23].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 464u)));  if (t) { goto L_00149D1C; } }
L_00149CDC:
    set32(c.r[2], c.r[7].w[0] + c.r[20].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[2].w[0] + 1u);  if (t) { goto L_00149D18; } }
L_00149CE8:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[23].d[0] & 1ull;  if (t) { goto L_00149D08; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[30].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00149D18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[7].w[0] + 1u);  if (t) { goto L_00149D18; } }
    c.budget -= 1;
L_00149D08:
    c.budget -= 2;
    if (c.r[7].sd[0] > 0) { set32(c.r[30], c.r[5].w[0] + 1u);  goto L_00149D18; }
    set32(c.r[2], c.r[5].w[0] - c.r[7].w[0]);
    set32(c.r[30], c.r[2].w[0] + 2u);
    c.budget -= 2;
L_00149D18:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 464u)));
    c.budget -= 1;
L_00149D1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 45u);  if (t) { goto L_0014A04C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 465u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0014A04C; } }
    c.budget -= 1;
L_00149D30:
    c.r[2].d[0] = c.r[23].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[23].d[0] & 64ull;  if (t) { goto L_00149D58; } }
    c.r[3].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[22], c.r[22].w[0] + 8u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 492u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st64((c.r[2].w[0]), c.r[3].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149890u | kUnwind; return; } goto L_00149890; } }
    c.budget -= 1;
L_00149D58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00149D78; } }
    set32(c.r[22], c.r[22].w[0] + 8u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 492u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149890u | kUnwind; return; } goto L_00149890; } }
    c.budget -= 1;
L_00149D78:
    set32(c.r[22], c.r[22].w[0] + 8u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 492u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149890u | kUnwind; return; } goto L_00149890; } }
    c.budget -= 1;
L_00149D90:
    c.r[23].d[0] = c.r[23].d[0] | 16ull;
    c.budget -= 1;
L_00149D94:
    c.r[2].d[0] = c.r[23].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00149DB0; } }
    set32(c.r[22], c.r[22].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[2].w[0]));  if (t) { goto L_00149DD0; } }
    c.budget -= 1;
L_00149DB0:
    c.r[2].d[0] = c.r[23].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00149DC8; } }
    set32(c.r[22], c.r[22].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[2].w[0]));  if (t) { goto L_00149DD0; } }
L_00149DC8:
    set32(c.r[22], c.r[22].w[0] + 8u);
    c.r[16].d[0] = ld32((c.r[2].w[0]));
    c.budget -= 2;
L_00149DD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00149F14; } }
L_00149DD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 32016u);
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[22], c.r[22].w[0] + 8u);
    c.r[23].d[0] = c.r[23].d[0] | 2ull;
    st32((c.r[29].w[0] + 524u), c.r[2].w[0]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 120u);  if (t) { goto L_00149F14; } }
L_00149E00:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[21].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 8u);  if (t) { goto L_00149E18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[21], c.r[2].w[0] + 32040u);
    c.budget -= 2;
L_00149E18:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00149E50; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149E2Cu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 66u, depth + 1u); else { c.pc = 0x00145230u; return; } if (c.pc != 0x00149E2Cu) [[unlikely]] return; }
L_00149E2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[30].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0014A048; } }
    set32(c.r[30], c.r[2].w[0] - c.r[21].w[0]);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st8((c.r[29].w[0] + 465u), static_cast<std::uint8_t>(0u));  goto L_0014A04C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0014A048; } }
    c.budget -= 1;
L_00149E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149E58u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x00149E58u) [[unlikely]] return; }
L_00149E58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0014A048; } }
L_00149E60:
    c.r[23].d[0] = c.r[23].d[0] | 16ull;
    c.budget -= 1;
L_00149E64:
    c.r[2].d[0] = c.r[23].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00149E80; } }
    set32(c.r[22], c.r[22].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[2].w[0]));  if (t) { goto L_00149EA0; } }
    c.budget -= 1;
L_00149E80:
    c.r[2].d[0] = c.r[23].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00149E98; } }
    set32(c.r[22], c.r[22].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[2].w[0]));  if (t) { goto L_00149EA0; } }
L_00149E98:
    set32(c.r[22], c.r[22].w[0] + 8u);
    c.r[16].d[0] = ld32((c.r[2].w[0]));
    c.budget -= 2;
L_00149EA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00149F14; } }
L_00149EA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 32048u);  if (t) { goto L_00149EC0; } }
    c.budget -= 1;
L_00149EB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] + 32016u);
    c.budget -= 2;
L_00149EC0:
    st32((c.r[29].w[0] + 524u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[23].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00149EE0; } }
    set32(c.r[22], c.r[22].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[2].w[0]));  if (t) { goto L_00149F00; } }
    c.budget -= 1;
L_00149EE0:
    c.r[2].d[0] = c.r[23].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00149EF8; } }
    set32(c.r[22], c.r[22].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[2].w[0]));  if (t) { goto L_00149F00; } }
L_00149EF8:
    set32(c.r[22], c.r[22].w[0] + 8u);
    c.r[16].d[0] = ld32((c.r[2].w[0]));
    c.budget -= 2;
L_00149F00:
    c.r[2].d[0] = c.r[23].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00149F14; } }
    c.r[2].d[0] = c.r[23].d[0] | 2ull;
    if (c.r[16].d[0] != 0) c.r[23].d[0] = c.r[2].d[0];
    c.budget -= 2;
L_00149F14:
    st8((c.r[29].w[0] + 465u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00149F18:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0; st32((c.r[29].w[0] + 516u), c.r[20].w[0]);  if (t) { goto L_00149F28; } }
    set32(c.r[2], 0u - 129u);
    c.r[23].d[0] = c.r[23].d[0] & c.r[2].d[0];
    c.budget -= 2;
L_00149F28:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[21], c.r[29].w[0] + 444u);  if (t) { goto L_00149F3C; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 516u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], c.r[29].w[0] - c.r[21].w[0]);  if (t) { goto L_0014A02C; } }
L_00149F3C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;  if (t) { goto L_00149FDC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 7u);  if (t) { goto L_00149F70; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00149FF8; } }
    set32(c.r[21], c.r[2].w[0] + 32072u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149F68u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x00149F68u) [[unlikely]] return; }
L_00149F68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0014A04C; } }
L_00149F70:
    c.r[2].d[0] = c.r[16].d[0] & c.r[4].d[0];
    c.r[16].d[0] = c.r[16].d[0] >> 3;
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    set32(c.r[21], c.r[21].w[0] - 1u);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149F70u | kUnwind; return; } goto L_00149F70; } }
    c.r[2].d[0] = c.r[23].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_0014A028; } }
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[29].w[0] - c.r[21].w[0]);  goto L_0014A02C; }
    set32(c.r[21], c.r[21].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0014A028; } }
    c.budget -= 1;
L_00149FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149FB8u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_000B(c, 12u, depth + 1u); else { c.pc = 0x0014D478u; return; } if (c.pc != 0x00149FB8u) [[unlikely]] return; }
L_00149FB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    set32(c.r[21], c.r[21].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149FD4u); st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 11u, depth + 1u); else { c.pc = 0x0014CEF8u; return; } if (c.pc != 0x00149FD4u) [[unlikely]] return; }
L_00149FD4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00149FDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149FB0u | kUnwind; return; } goto L_00149FB0; } }
    c.r[2].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(48ll);
    set32(c.r[21], c.r[21].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0014A028; } }
L_00149FF8:
    set32(c.r[4], 0u + 15u);
    c.budget -= 2;
L_0014A000:
    set32(c.r[3], ld32((c.r[29].w[0] + 524u)));
    c.r[2].d[0] = c.r[16].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[21], c.r[21].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = c.r[16].d[0] >> 4;
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014A000u | kUnwind; return; } goto L_0014A000; } }
L_0014A028:
    set32(c.r[2], c.r[29].w[0] - c.r[21].w[0]);
    c.budget -= 1;
L_0014A02C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[2].w[0] + 444u);  if (t) { goto L_0014A04C; } }
    c.budget -= 1;
L_0014A038:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[21], c.r[29].w[0] + 96u);  if (t) { goto L_0014ADC8; } }
L_0014A040:
    set32(c.r[30], 0u + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 2;
L_0014A048:
    st8((c.r[29].w[0] + 465u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0014A04C:
    set32(c.r[5], ld32((c.r[29].w[0] + 516u)));
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 465u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = ld8((c.r[29].w[0] + 465u));
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[6].d[0];
    st32((c.r[29].w[0] + 520u), c.r[30].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 520u), c.r[5].w[0]);  if (t) { goto L_0014A080; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 520u), c.r[5].w[0]);  if (t) { goto L_0014A090; } }
L_0014A080:
    set32(c.r[3], ld32((c.r[29].w[0] + 520u)));
    c.r[2].d[0] = c.r[23].d[0] & 2ull;
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 520u), c.r[3].w[0]);
    c.budget -= 4;
L_0014A090:
    c.r[5].d[0] = c.r[23].d[0] & 132ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[29].w[0] + 528u), c.r[5].w[0]);  if (t) { goto L_0014A180; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 496u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 520u)));
    set32(c.r[16], c.r[6].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;  if (t) { goto L_0014A180; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_0014A130; } }
    set32(c.r[6], 0u + 16u);
    set32(c.r[20], c.r[7].w[0] + 31968u);
    st32((c.r[19].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 4;
L_0014A0C8:
    st32((c.r[19].w[0]), c.r[20].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0014A118; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[6]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A104u); st128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014A104u) [[unlikely]] return; }
    goto L_0014A104;
L_0014A100:
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);
    c.budget -= 1;
L_0014A104:
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[6]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (t) { goto L_0014ADE8; } }
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0014A118:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 4u), c.r[6].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014A0C8u | kUnwind; return; } goto L_0014A0C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_0014A134; } }
L_0014A130:
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_0014A134:
    set32(c.r[2], c.r[7].w[0] + 31968u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0014A17C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A16Cu); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014A16Cu) [[unlikely]] return; }
L_0014A16C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_0014ADEC; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_0014A17C:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 465u));
    c.budget -= 1;
L_0014A180:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0014A1D8; } }
    set32(c.r[3], c.r[29].w[0] + 465u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0014A23C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A1C4u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014A1C4u) [[unlikely]] return; }
L_0014A1C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_0014ADEC; } }
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0014A23C; } }
L_0014A1D8:
    c.r[2].d[0] = c.r[23].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_0014A23C; } }
    set32(c.r[4], 0u + 2u);
    st8((c.r[29].w[0] + 448u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 448u);
    st8((c.r[29].w[0] + 449u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[19].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0014A23C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A22Cu); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014A22Cu) [[unlikely]] return; }
L_0014A22C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_0014ADEC; } }
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_0014A23C:
    set32(c.r[3], ld32((c.r[29].w[0] + 528u)));
    set32(c.r[2], 0u + 128u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[29].w[0] + 516u)));  if (t) { goto L_0014A330; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 496u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 520u)));
    set32(c.r[16], c.r[4].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[4], ld32((c.r[29].w[0] + 516u)));  if (t) { goto L_0014A330; } }
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_0014A2E0; } }
    set32(c.r[6], 0u + 16u);
    set32(c.r[20], c.r[7].w[0] + 31984u);
    st32((c.r[19].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 3;
L_0014A278:
    st32((c.r[19].w[0]), c.r[20].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0014A2C8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[6]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A2B4u); st128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014A2B4u) [[unlikely]] return; }
L_0014A2B4:
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[6]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (t) { goto L_0014ADE8; } }
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0014A2C8:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 4u), c.r[6].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014A278u | kUnwind; return; } goto L_0014A278; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_0014A2E4; } }
L_0014A2E0:
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_0014A2E4:
    set32(c.r[2], c.r[7].w[0] + 31984u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0014A32C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A31Cu); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014A31Cu) [[unlikely]] return; }
L_0014A31C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_0014ADEC; } }
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0014A32C:
    set32(c.r[4], ld32((c.r[29].w[0] + 516u)));
    c.budget -= 1;
L_0014A330:
    set32(c.r[16], c.r[4].w[0] - c.r[30].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = c.r[23].d[0] & 256ull;  if (t) { goto L_0014A410; } }
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_0014A3C0; } }
    set32(c.r[6], 0u + 16u);
    set32(c.r[20], c.r[7].w[0] + 31984u);
    st32((c.r[19].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 4;
L_0014A358:
    st32((c.r[19].w[0]), c.r[20].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0014A3A8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[6]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A394u); st128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014A394u) [[unlikely]] return; }
L_0014A394:
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[6]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (t) { goto L_0014ADE8; } }
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_0014A3A8:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 4u), c.r[6].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014A358u | kUnwind; return; } goto L_0014A358; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_0014A3C4; } }
L_0014A3C0:
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_0014A3C4:
    set32(c.r[2], c.r[7].w[0] + 31984u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0014A40C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A3FCu); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014A3FCu) [[unlikely]] return; }
L_0014A3FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_0014ADEC; } }
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_0014A40C:
    c.r[2].d[0] = c.r[23].d[0] & 256ull;
    c.budget -= 1;
L_0014A410:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].sd[0] < 102ll ? 1ull : 0ull;  goto L_0014A438; }
    st32((c.r[19].w[0] + 4u), c.r[30].w[0]);
    st32((c.r[19].w[0]), c.r[21].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[30].w[0]);  if (t) { goto L_0014AC70; } }
L_0014A438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 480u)));  if (t) { goto L_0014AA40; } }
    goto L_0014A440;
L_0014A43C:
    set32(c.r[2], ld32((c.r[29].w[0] + 480u)));
    c.budget -= 1;
L_0014A440:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 504u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A450u);  if (depth < kMaxDepth) unit_000B(c, 83u, depth + 1u); else { c.pc = 0x0014E950u; return; } if (c.pc != 0x0014A450u) [[unlikely]] return; }
L_0014A450:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 476u)));  if (t) { goto L_0014A5D0; } }
    set32(c.r[16], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32104u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 14;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0014A4AC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A49Cu); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014A49Cu) [[unlikely]] return; }
L_0014A49C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_0014ADEC; } }
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0014A4AC:
    set32(c.r[2], ld32((c.r[29].w[0] + 476u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 480u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { st32((c.r[19].w[0] + 4u), c.r[16].w[0]);  goto L_0014A4D0; }
    c.r[2].d[0] = c.r[23].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[23].d[0] & 4ull;  if (t) { goto L_0014ACA4; } }
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_0014A4D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0]), c.r[4].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0014A518; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A508u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014A508u) [[unlikely]] return; }
L_0014A508:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_0014ADEC; } }
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_0014A518:
    set32(c.r[2], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[16], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = c.r[23].d[0] & 4ull;  if (t) { goto L_0014ACA4; } }
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_0014A5A0; } }
    set32(c.r[20], 0u + 16u);
    set32(c.r[17], c.r[7].w[0] + 31984u);
    st32((c.r[19].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 3;
L_0014A540:
    st32((c.r[19].w[0]), c.r[17].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0014A588; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A578u); st128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014A578u) [[unlikely]] return; }
L_0014A578:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (t) { goto L_0014ADE8; } }
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_0014A588:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 4u), c.r[20].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014A540u | kUnwind; return; } goto L_0014A540; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_0014A5A4; } }
L_0014A5A0:
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_0014A5A4:
    set32(c.r[2], c.r[7].w[0] + 31984u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0014AC7C; } }
L_0014A5D0:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[2], ld32((c.r[29].w[0] + 480u)));  if (t) { goto L_0014A7B8; } }
    set32(c.r[16], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32104u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 14;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0014A62C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A61Cu); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014A61Cu) [[unlikely]] return; }
L_0014A61C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_0014ADEC; } }
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0014A62C:
    set32(c.r[2], ld32((c.r[29].w[0] + 476u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[19].w[0] + 4u), c.r[16].w[0]);  goto L_0014A648; }
    set32(c.r[2], ld32((c.r[29].w[0] + 480u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[23].d[0] & 4ull;  if (t) { goto L_0014ACA4; } }
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_0014A648:
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0]), c.r[4].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0014A690; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A680u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014A680u) [[unlikely]] return; }
L_0014A680:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_0014ADEC; } }
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_0014A690:
    set32(c.r[2], ld32((c.r[29].w[0] + 476u)));
    set32(c.r[16], 0u - c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[16].sd[0] <= 0) { st32((c.r[19].w[0]), c.r[21].w[0]);  goto L_0014A768; }
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_0014A718; } }
    set32(c.r[20], 0u + 16u);
    set32(c.r[17], c.r[7].w[0] + 31984u);
    st32((c.r[19].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 3;
L_0014A6B8:
    st32((c.r[19].w[0]), c.r[17].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0014A700; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A6F0u); st128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014A6F0u) [[unlikely]] return; }
L_0014A6F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (t) { goto L_0014ADE8; } }
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_0014A700:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 4u), c.r[20].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014A6B8u | kUnwind; return; } goto L_0014A6B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_0014A71C; } }
L_0014A718:
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_0014A71C:
    set32(c.r[2], c.r[7].w[0] + 31984u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0014A764; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A754u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014A754u) [[unlikely]] return; }
L_0014A754:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_0014ADEC; } }
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0014A764:
    st32((c.r[19].w[0]), c.r[21].w[0]);
    c.budget -= 1;
L_0014A768:
    set32(c.r[2], ld32((c.r[29].w[0] + 480u)));
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[5].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[29].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0014ACA0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A7A4u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014A7A4u) [[unlikely]] return; }
L_0014A7A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_0014ADEC; } }
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0014ACA0; } }
L_0014A7B8:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), c.r[21].w[0]);  if (t) { goto L_0014A930; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 480u)));
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0014A814; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A800u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014A800u) [[unlikely]] return; }
L_0014A800:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_0014ADEC; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], ld32((c.r[29].w[0] + 480u)));
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
L_0014A814:
    set32(c.r[2], ld32((c.r[29].w[0] + 476u)));
    set32(c.r[16], c.r[2].w[0] - c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = c.r[23].d[0] & 1ull;  if (t) { goto L_0014A8F0; } }
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_0014A8A0; } }
    set32(c.r[20], 0u + 16u);
    set32(c.r[17], c.r[7].w[0] + 31984u);
    st32((c.r[19].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 4;
L_0014A840:
    st32((c.r[19].w[0]), c.r[17].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0014A888; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A878u); st128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014A878u) [[unlikely]] return; }
L_0014A878:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (t) { goto L_0014ADE8; } }
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_0014A888:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 4u), c.r[20].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014A840u | kUnwind; return; } goto L_0014A840; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_0014A8A4; } }
L_0014A8A0:
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_0014A8A4:
    set32(c.r[2], c.r[7].w[0] + 31984u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0014A8EC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A8DCu); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014A8DCu) [[unlikely]] return; }
L_0014A8DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_0014ADEC; } }
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_0014A8EC:
    c.r[2].d[0] = c.r[23].d[0] & 1ull;
    c.budget -= 1;
L_0014A8F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0014ACA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32112u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0014AC7C; } }
    c.budget -= 1;
L_0014A930:
    set32(c.r[2], ld32((c.r[29].w[0] + 476u)));
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 476u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0014A980; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A96Cu); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014A96Cu) [[unlikely]] return; }
L_0014A96C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_0014ADEC; } }
    set32(c.r[3], c.r[29].w[0] + 32u);
    set32(c.r[7], ld32((c.r[29].w[0] + 476u)));
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
L_0014A980:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32112u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[21], c.r[21].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0014A9D8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A9C8u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014A9C8u) [[unlikely]] return; }
L_0014A9C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_0014ADEC; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_0014A9D8:
    st32((c.r[19].w[0]), c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 476u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 476u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    c.r[6].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 17;
    { const bool t = c.r[6].d[0] != 0ull; st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0014ACA0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AA28u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014AA28u) [[unlikely]] return; }
L_0014AA28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_0014ADEC; } }
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0014ACA0; } }
    c.budget -= 1;
L_0014AA40:
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[21].w[0]));  goto L_0014AA5C; }
    c.r[2].d[0] = c.r[23].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0014AC08; } }
    c.r[3].d[0] = ld8((c.r[21].w[0]));
    c.budget -= 1;
L_0014AA5C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[4], 0u + 46u);
    set32(c.r[5], 0u + 2u);
    st8((c.r[29].w[0] + 448u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[29].w[0] + 448u);
    st8((c.r[29].w[0] + 449u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[19].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 17;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0014AABC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AAACu); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014AAACu) [[unlikely]] return; }
L_0014AAAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_0014ADEC; } }
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_0014AABC:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 504u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AACCu);  if (depth < kMaxDepth) unit_000B(c, 83u, depth + 1u); else { c.pc = 0x0014E950u; return; } if (c.pc != 0x0014AACCu) [[unlikely]] return; }
L_0014AACC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 480u)));  if (t) { goto L_0014AB30; } }
    st32((c.r[19].w[0]), c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[29].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0014AC50; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AB1Cu); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014AB1Cu) [[unlikely]] return; }
L_0014AB1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_0014ADEC; } }
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0014AC50; } }
L_0014AB30:
    set32(c.r[16], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[6], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_0014AC54; } }
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_0014ABB8; } }
    set32(c.r[20], 0u + 16u);
    set32(c.r[17], c.r[7].w[0] + 31984u);
    st32((c.r[19].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 4;
L_0014AB58:
    st32((c.r[19].w[0]), c.r[17].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0014ABA0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AB90u); st128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014AB90u) [[unlikely]] return; }
L_0014AB90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (t) { goto L_0014ADE8; } }
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0014ABA0:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 4u), c.r[20].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014AB58u | kUnwind; return; } goto L_0014AB58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_0014ABBC; } }
L_0014ABB8:
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_0014ABBC:
    set32(c.r[2], c.r[7].w[0] + 31984u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0014AC50; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ABF4u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014ABF4u) [[unlikely]] return; }
L_0014ABF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_0014ADEC; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0014AC50; } }
L_0014AC08:
    st32((c.r[19].w[0]), c.r[21].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0014AC50; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AC40u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014AC40u) [[unlikely]] return; }
L_0014AC40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_0014ADEC; } }
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_0014AC50:
    set32(c.r[6], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 1;
L_0014AC54:
    st32((c.r[19].w[0]), c.r[29].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 7;
L_0014AC70:
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_0014AC7C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = c.r[23].d[0] & 4ull;  if (t) { goto L_0014ACA4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AC90u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014AC90u) [[unlikely]] return; }
L_0014AC90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_0014ADEC; } }
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0014ACA0:
    c.r[2].d[0] = c.r[23].d[0] & 4ull;
    c.budget -= 1;
L_0014ACA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 496u)));  if (t) { goto L_0014AD78; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 520u)));
    set32(c.r[16], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[6], ld32((c.r[29].w[0] + 520u)));  if (t) { goto L_0014AD80; } }
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_0014AD38; } }
    set32(c.r[20], 0u + 16u);
    set32(c.r[17], c.r[7].w[0] + 31968u);
    st32((c.r[19].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 4;
L_0014ACD8:
    st32((c.r[19].w[0]), c.r[17].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0014AD20; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AD10u); st128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014AD10u) [[unlikely]] return; }
L_0014AD10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (t) { goto L_0014ADE8; } }
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_0014AD20:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 4u), c.r[20].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014ACD8u | kUnwind; return; } goto L_0014ACD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_0014AD3C; } }
L_0014AD38:
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_0014AD3C:
    set32(c.r[2], c.r[7].w[0] + 31968u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0014AD78; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AD70u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014AD70u) [[unlikely]] return; }
L_0014AD70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_0014ADEC; } }
L_0014AD78:
    set32(c.r[6], ld32((c.r[29].w[0] + 520u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 496u)));
    c.budget -= 2;
L_0014AD80:
    set32(c.r[4], ld32((c.r[29].w[0] + 496u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 492u)));
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[6].d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 492u), c.r[5].w[0]);  if (t) { goto L_0014ADB4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ADACu); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014ADACu) [[unlikely]] return; }
L_0014ADAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_0014ADEC; } }
L_0014ADB4:
    set32(c.r[6], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 20u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149890u | kUnwind; return; } goto L_00149890; } }
    c.budget -= 1;
L_0014ADC8:
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 1;
L_0014ADCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_0014ADE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ADDCu); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000A(c, 123u, depth + 1u); else { c.pc = 0x00149648u; return; } if (c.pc != 0x0014ADDCu) [[unlikely]] return; }
L_0014ADDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_0014ADEC; } }
L_0014ADE4:
    st32((c.r[29].w[0] + 20u), 0u);
    c.budget -= 1;
L_0014ADE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 1;
L_0014ADEC:
    set32(c.r[4], ld32((c.r[29].w[0] + 492u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 12u));
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    c.budget -= 5;
L_0014AE00:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 576u));
    c.budget -= 1;
L_0014AE04:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 584u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 592u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 600u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 608u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 616u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 624u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 632u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 640u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 648u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 656u);  c.pc = t; return; }
L_0014AE30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 102u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    set32(c.r[20], 0u + 3u);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 22;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st64((c.r[29].w[0] + 88u), c.r[31].d[0]);  if (t) { goto L_0014AEA4; } }
    set32(c.r[2], 0u + 101u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 69u);  if (t) { goto L_0014AE9C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[20], 0u + 2u);  if (t) { goto L_0014AEA4; } }
L_0014AE9C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[20], 0u + 2u);
    c.budget -= 2;
L_0014AEA4:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[2].sd[0] >= 0) { st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  goto L_0014AED0; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AEC4u);  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0014E400u; return; } if (c.pc != 0x0014AEC4u) [[unlikely]] return; }
L_0014AEC4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 45u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0014AED0:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.r[9].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AEF0u); set32(c.r[10], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_0008(c, 191u, depth + 1u); else { c.pc = 0x00142498u; return; } if (c.pc != 0x0014AEF0u) [[unlikely]] return; }
L_0014AEF0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 103u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 71u);  if (t) { goto L_0014AF08; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 102u);  if (t) { goto L_0014AF14; } }
L_0014AF08:
    c.r[2].d[0] = c.r[23].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 102u);  if (t) { goto L_0014AFB0; } }
L_0014AF14:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[20].w[0] + c.r[19].w[0]);  if (t) { goto L_0014AF54; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[2], 0u + 48u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[21].w[0])));  goto L_0014AF50; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AF3Cu);  if (depth < kMaxDepth) unit_000B(c, 83u, depth + 1u); else { c.pc = 0x0014E950u; return; } if (c.pc != 0x0014AF3Cu) [[unlikely]] return; }
L_0014AF3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0014AF4C; } }
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0014AF4C:
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_0014AF50:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_0014AF54:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AF64u);  if (depth < kMaxDepth) unit_000B(c, 83u, depth + 1u); else { c.pc = 0x0014E950u; return; } if (c.pc != 0x0014AF64u) [[unlikely]] return; }
L_0014AF64:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = c.r[16].d[0];
    c.r[2].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0014AFB4; } }
    set32(c.r[5], 0u + 48u);
    c.budget -= 2;
L_0014AF88:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014AF88u | kUnwind; return; } goto L_0014AF88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - c.r[20].w[0]);  if (t) { goto L_0014AFB8; } }
    c.budget -= 1;
L_0014AFB0:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_0014AFB4:
    set32(c.r[3], c.r[3].w[0] - c.r[20].w[0]);
    c.budget -= 1;
L_0014AFB8:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[30].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0014AFF0:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], c.r[4].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[29], c.r[29].w[0] - 320u);  if (t) { goto L_0014B010; } }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u - c.r[5].w[0]);  if (t) { goto L_0014B014; } }
    c.budget -= 1;
L_0014B010:
    set32(c.r[2], 0u + 43u);
    c.budget -= 1;
L_0014B014:
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[4].w[0] + 2u);
    set32(c.r[7], c.r[29].w[0] + 308u);
    c.r[2].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[9].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0014B0A8; } }
    set32(c.r[8], 0u + 10u);
    mmi::div(c, 0, c.r[5].w[0], c.r[8].w[0]);
    c.budget -= 3;
L_0014B038:
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 3;
    if (c.r[8].d[0] == 0ull) { breakpoint(c, 0x0014B040u);  goto L_0014B044; }
L_0014B044:
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.hi.d[0];
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 48u);
    c.r[3].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { mmi::div(c, 0, c.r[5].w[0], c.r[8].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B038u | kUnwind; return; } goto L_0014B038; }
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[2], c.r[5].w[0] + 48u);
    c.r[3].d[0] = c.r[7].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0014B0C0; } }
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 2;
L_0014B080:
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B080u | kUnwind; return; } goto L_0014B080; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[6].w[0] - c.r[4].w[0]);  if (t) { goto L_0014B0C4; } }
    c.budget -= 1;
L_0014B0A8:
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], c.r[5].w[0] + 48u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 6;
L_0014B0C0:
    set32(c.r[2], c.r[6].w[0] - c.r[4].w[0]);
    c.budget -= 1;
L_0014B0C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_0014B0D0:
    set32(c.r[29], c.r[29].w[0] - 752u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 672u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 680u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 696u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 704u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 720u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 744u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 612u), 0u);
    st32((c.r[29].w[0] + 608u), 0u);
    st64((c.r[29].w[0] + 688u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 712u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 728u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 736u), c.r[30].d[0]);
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 18;
L_0014B118:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.budget -= 1;
L_0014B11C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 608u)));  if (t) { goto L_0014BD2C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 37u);  if (t) { goto L_0014B1B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 31033u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 37u);  goto L_0014B1B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_0014B170; } }
    c.budget -= 1;
L_0014B158:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 6;
L_0014B170:
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], ld32((c.r[18].w[0])));  goto L_0014B190; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B184u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00146E10u; return; } if (c.pc != 0x0014B184u) [[unlikely]] return; }
L_0014B184:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { goto L_0014BD28; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_0014B190:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 31033u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B158u | kUnwind; return; } goto L_0014B158; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B11Cu | kUnwind; return; } goto L_0014B11C; } }
    c.budget -= 1;
L_0014B1B8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[17], c.r[21].w[0] - 1u);  if (t) { goto L_0014B1F4; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0014B1C8:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(121ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_0014B3D0; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 32544u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00148000u < 16384u) { entry = entries_000A[(t - 0x00148000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0014B1F0:
    set32(c.r[17], c.r[21].w[0] - 1u);
    c.budget -= 1;
L_0014B1F4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0014B1F8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], ld32((c.r[18].w[0])));  goto L_0014B21C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B210u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00146E10u; return; } if (c.pc != 0x0014B210u) [[unlikely]] return; }
L_0014B210:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { goto L_0014BD18; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_0014B21C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], ld32((c.r[29].w[0] + 608u)));  if (t) { goto L_0014BD2C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B1F8u | kUnwind; return; } goto L_0014B1F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B11Cu | kUnwind; return; } goto L_0014B11C; } }
L_0014B258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] | 8ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B1C8u | kUnwind; return; } goto L_0014B1C8; } }
L_0014B260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] | 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B1C8u | kUnwind; return; } goto L_0014B1C8; } }
L_0014B268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] | 2ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B1C8u | kUnwind; return; } goto L_0014B1C8; } }
L_0014B270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] | 4ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B1C8u | kUnwind; return; } goto L_0014B1C8; } }
L_0014B278:
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] - 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B1C8u | kUnwind; return; } goto L_0014B1C8; } }
L_0014B290:
    c.r[17].d[0] = c.r[17].d[0] | 1ull;
    c.budget -= 1;
L_0014B294:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00150000u);
    set32(c.r[16], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 28344u);  if (t) { goto L_0014B2EC; } }
    c.budget -= 1;
L_0014B2A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00150000u);
    set32(c.r[16], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] - 28344u);
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 612u), c.r[2].w[0]);  if (t) { goto L_0014B3F8; } }
L_0014B2C0:
    c.r[17].d[0] = c.r[17].d[0] | 1ull;
    c.budget -= 1;
L_0014B2C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00150000u);
    set32(c.r[16], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] - 27736u);
    set32(c.r[30], 0u + 8u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 612u), c.r[2].w[0]);  if (t) { goto L_0014B3F8; } }
    c.budget -= 1;
L_0014B2E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00150000u);
    set32(c.r[16], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] - 27736u);
    c.budget -= 3;
L_0014B2EC:
    set32(c.r[30], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 612u), c.r[2].w[0]);  if (t) { goto L_0014B3F8; } }
L_0014B2F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00150000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] | 256ull;  if (t) { goto L_0014B358; } }
    c.budget -= 1;
L_0014B308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 4u);  if (t) { goto L_0014B3F8; } }
L_0014B310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_0014B3F8; } }
L_0014B318:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B328u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_000A(c, 320u, depth + 1u); else { c.pc = 0x0014BD60u; return; } if (c.pc != 0x0014B328u) [[unlikely]] return; }
L_0014B328:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = c.r[17].d[0] | 32ull;
    set32(c.r[16], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { goto L_0014B3F8; } }
    c.budget -= 1;
L_0014B340:
    c.r[17].d[0] = c.r[17].d[0] | 32ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0014B3F8; } }
    c.budget -= 1;
L_0014B350:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00150000u);
    c.r[17].d[0] = c.r[17].d[0] | 272ull;
    c.budget -= 2;
L_0014B358:
    set32(c.r[2], c.r[2].w[0] - 27736u);
    set32(c.r[16], 0u + 3u);
    st32((c.r[29].w[0] + 612u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[30], 0u + 16u);  if (t) { goto L_0014B3F8; } }
    c.budget -= 1;
L_0014B370:
    c.r[2].d[0] = c.r[17].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B11Cu | kUnwind; return; } goto L_0014B11C; }
    c.r[2].d[0] = c.r[17].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] & 1ull;  goto L_0014B3A0; }
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B118u | kUnwind; return; } goto L_0014B118; } }
    c.budget -= 1;
L_0014B3A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_0014B3B8; } }
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[2].w[0]), c.r[8].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B118u | kUnwind; return; } goto L_0014B118; } }
L_0014B3B8:
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[8].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B118u | kUnwind; return; } goto L_0014B118; } }
L_0014B3C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0014BD2C; } }
L_0014B3D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 31033u));
    set32(c.r[16], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00150000u);
    set32(c.r[30], 0u + 10u);
    set32(c.r[3], c.r[3].w[0] - 28344u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    st32((c.r[29].w[0] + 612u), c.r[3].w[0]);
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 10;
L_0014B3F8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { c.r[2].d[0] = c.r[17].d[0] & 32ull;  goto L_0014B41C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B410u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00146E10u; return; } if (c.pc != 0x0014B410u) [[unlikely]] return; }
L_0014B410:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { goto L_0014BD18; } }
    c.r[2].d[0] = c.r[17].d[0] & 32ull;
    c.budget -= 1;
L_0014B41C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;  if (t) { goto L_0014B488; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0])));  if (t) { goto L_0014B468; } }
    c.budget -= 1;
L_0014B430:
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0014B450; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_0014B464; } }
    c.budget -= 1;
L_0014B450:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B45Cu); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00146E10u; return; } if (c.pc != 0x0014B45Cu) [[unlikely]] return; }
L_0014B45C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { goto L_0014BD18; } }
L_0014B464:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_0014B468:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 31033u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B430u | kUnwind; return; } goto L_0014B430; }
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 1;
L_0014B488:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B11Cu | kUnwind; return; } goto L_0014B11C; }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 32496u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00148000u < 16384u) { entry = entries_000A[(t - 0x00148000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0014B4A8:
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[17].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; if (c.r[20].d[0] == 0) c.r[20].d[0] = c.r[2].d[0];  if (t) { goto L_0014B528; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0014B4C0:
    set32(c.r[16], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0])));  goto L_0014B508; }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);
    set32(c.r[17], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[20], c.r[20].w[0] - c.r[16].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B4F0u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00146E10u; return; } if (c.pc != 0x0014B4F0u) [[unlikely]] return; }
L_0014B4F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B4C0u | kUnwind; return; } goto L_0014B4C0; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[8], c.r[8].w[0] + c.r[17].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B118u | kUnwind; return; } goto L_0014B118; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 608u)));  if (t) { goto L_0014BD1C; } }
L_0014B508:
    set32(c.r[2], c.r[16].w[0] - c.r[20].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + c.r[17].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B118u | kUnwind; return; } goto L_0014B118; } }
    c.budget -= 1;
L_0014B528:
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B548u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0008(c, 342u, depth + 1u); else { c.pc = 0x00143B78u; return; } if (c.pc != 0x0014B548u) [[unlikely]] return; }
L_0014B548:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { goto L_0014BD18; } }
    set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 608u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 608u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B118u | kUnwind; return; } goto L_0014B118; } }
    c.budget -= 1;
L_0014B568:
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[17].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; if (c.r[20].d[0] == 0) c.r[20].d[0] = c.r[2].d[0];  if (t) { goto L_0014B5E8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0014B580:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_0014B584:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] + 1u);  if (t) { goto L_0014B5D8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[20], c.r[20].w[0] - 1u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0014B5D8; } }
    c.budget -= 2;
    if (c.r[3].sd[0] > 0) { set32(c.r[5], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B584u | kUnwind; return; } goto L_0014B584; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B5C8u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00146E10u; return; } if (c.pc != 0x0014B5C8u) [[unlikely]] return; }
L_0014B5C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B580u | kUnwind; return; } goto L_0014B580; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 608u)));  if (t) { goto L_0014BD1C; } }
L_0014B5D8:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[8], c.r[8].w[0] + c.r[16].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B118u | kUnwind; return; } goto L_0014B118; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 608u)));  if (t) { goto L_0014BD2C; } }
L_0014B5E8:
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
L_0014B5F8:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_0014B5FC:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 1u);  if (t) { goto L_0014B65C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[20], c.r[20].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 9;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[18].w[0]), c.r[4].w[0]);  if (t) { goto L_0014B65C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B5FCu | kUnwind; return; } goto L_0014B5FC; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B64Cu); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00146E10u; return; } if (c.pc != 0x0014B64Cu) [[unlikely]] return; }
L_0014B64C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B5F8u | kUnwind; return; } goto L_0014B5F8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[16].d[0]; set32(c.r[4], ld32((c.r[29].w[0] + 608u)));  if (t) { goto L_0014BD1C; } }
L_0014B65C:
    set32(c.r[16], c.r[19].w[0] - c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 608u)));  if (t) { goto L_0014BD2C; } }
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[29].w[0] + 608u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 608u), c.r[3].w[0]);  if (t) { goto L_0014B6F4; } }
    c.budget -= 1;
L_0014B680:
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[17].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; if (c.r[20].d[0] == 0) c.r[20].d[0] = c.r[2].d[0];  if (t) { goto L_0014B700; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0014B698:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_0014B69C:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 31033u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[8], c.r[8].w[0] + c.r[16].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B118u | kUnwind; return; } goto L_0014B118; }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[4].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] - 1u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0014B6F4; } }
    c.budget -= 2;
    if (c.r[3].sd[0] > 0) { set32(c.r[4], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B69Cu | kUnwind; return; } goto L_0014B69C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B6ECu); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00146E10u; return; } if (c.pc != 0x0014B6ECu) [[unlikely]] return; }
L_0014B6EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B698u | kUnwind; return; } goto L_0014B698; } }
L_0014B6F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B118u | kUnwind; return; } goto L_0014B118; } }
    c.budget -= 1;
L_0014B700:
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
L_0014B710:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_0014B714:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 31033u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));  goto L_0014B77C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 10;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[18].w[0]), c.r[4].w[0]);  if (t) { goto L_0014B778; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B714u | kUnwind; return; } goto L_0014B714; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B770u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00146E10u; return; } if (c.pc != 0x0014B770u) [[unlikely]] return; }
L_0014B770:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B710u | kUnwind; return; } goto L_0014B710; } }
L_0014B778:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0014B77C:
    set32(c.r[2], c.r[19].w[0] - c.r[16].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 608u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 608u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B118u | kUnwind; return; } goto L_0014B118; } }
    c.budget -= 1;
L_0014B798:
    set32(c.r[20], c.r[20].w[0] - 1u);
    set32(c.r[3], 0u + 348u);
    c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(349ll) ? 1ull : 0ull;
    c.r[17].d[0] = c.r[17].d[0] | 704ull;
    if (c.r[2].d[0] == 0) c.r[20].d[0] = c.r[3].d[0];
    set32(c.r[2], c.r[29].w[0] + 256u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 9;
    { const bool t = c.r[20].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0014B8F8; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_0014B7C0:
    c.r[16].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], c.r[16].w[0] - 43u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(78ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] & 128ull;  if (t) { goto L_0014B8FC; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 32464u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00148000u < 16384u) { entry = entries_000A[(t - 0x00148000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0014B7F0:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull; c.r[2].d[0] = c.r[17].d[0] & 512ull;  if (t) { goto L_0014B804; } }
    set32(c.r[30], 0u + 8u);
    c.r[17].d[0] = c.r[17].d[0] | 256ull;
    c.r[2].d[0] = c.r[17].d[0] & 512ull;
    c.budget -= 3;
L_0014B804:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 449u);  goto L_0014B8AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 705u);  if (t) { goto L_0014B8AC; } }
    c.budget -= 1;
L_0014B818:
    set32(c.r[2], c.r[30].w[0] << 1);
    set32(c.r[3], 0u - 449u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[30], c.r[30].w[0] + c.r[2].w[0]);
    c.r[30].sd[0] = static_cast<std::int16_t>(ld16((c.r[30].w[0] + 32496u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] & c.r[3].d[0];  if (t) { goto L_0014B8B0; } }
    c.budget -= 1;
L_0014B838:
    set32(c.r[2], c.r[30].w[0] << 1);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[30], c.r[30].w[0] + c.r[2].w[0]);
    c.r[30].sd[0] = static_cast<std::int16_t>(ld16((c.r[30].w[0] + 32496u)));
    c.r[3].d[0] = c.r[30].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] & 128ull;  goto L_0014B8FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 449u);  if (t) { goto L_0014B8AC; } }
    c.budget -= 1;
L_0014B860:
    c.r[2].d[0] = c.r[30].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] & 128ull;  goto L_0014B8FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 449u);  if (t) { goto L_0014B8AC; } }
    c.budget -= 1;
L_0014B878:
    c.r[2].d[0] = c.r[17].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 65u);  if (t) { goto L_0014B8F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];  if (t) { goto L_0014B8B0; } }
    c.budget -= 1;
L_0014B890:
    c.r[2].d[0] = c.r[17].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[29].w[0] + 257u);  if (t) { goto L_0014B8F8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[17].d[0] & 128ull;  if (t) { goto L_0014B8FC; } }
    set32(c.r[2], 0u - 257u);
    set32(c.r[30], 0u + 16u);
    c.budget -= 2;
L_0014B8AC:
    c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 1;
L_0014B8B0:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0014B8D8; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_0014B8EC; } }
L_0014B8D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B8E4u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00146E10u; return; } if (c.pc != 0x0014B8E4u) [[unlikely]] return; }
L_0014B8E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { goto L_0014B8F8; } }
L_0014B8EC:
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.budget -= 3;
    if (c.r[20].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B7C0u | kUnwind; return; } goto L_0014B7C0; }
L_0014B8F8:
    c.r[2].d[0] = c.r[17].d[0] & 128ull;
    c.budget -= 1;
L_0014B8FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] - 1u)));  goto L_0014B928; }
    set32(c.r[3], c.r[29].w[0] + 256u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 608u)));  goto L_0014BD2C; }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] - 1u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B920u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 119u, depth + 1u); else { c.pc = 0x001494C0u; return; } if (c.pc != 0x0014B920u) [[unlikely]] return; }
L_0014B920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 608u)));  if (t) { goto L_0014BD2C; } }
L_0014B928:
    set32(c.r[2], 0u + 120u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 88u);  if (t) { goto L_0014B93C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[17].d[0] & 8ull;  if (t) { goto L_0014B958; } }
L_0014B93C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B94Cu); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_000A(c, 119u, depth + 1u); else { c.pc = 0x001494C0u; return; } if (c.pc != 0x0014B94Cu) [[unlikely]] return; }
L_0014B94C:
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.r[2].d[0] = c.r[17].d[0] & 8ull;
    c.budget -= 3;
L_0014B958:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[29].w[0] + 256u);  if (t) { goto L_0014BA10; } }
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[29].w[0] + 256u);
    st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 612u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B980u); c.r[6].d[0] = c.r[30].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014B980u) [[unlikely]] return; }
L_0014B980:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { goto L_0014B9B0; } }
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { goto L_0014BA00; } }
    c.budget -= 1;
L_0014B9B0:
    c.r[2].d[0] = c.r[17].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_0014B9D0; } }
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0014BA00; } }
L_0014B9D0:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[23], c.r[23].w[0] + 8u);  goto L_0014B9F0; }
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st64((c.r[2].w[0]), c.r[5].d[0]);  if (t) { goto L_0014BA00; } }
L_0014B9F0:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0014BA00:
    set32(c.r[4], ld32((c.r[29].w[0] + 608u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0] + 608u), c.r[4].w[0]);
    set32(c.r[3], c.r[29].w[0] + 256u);
    c.budget -= 4;
L_0014BA10:
    set32(c.r[2], c.r[19].w[0] - c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B118u | kUnwind; return; } goto L_0014B118; } }
    c.budget -= 1;
L_0014BA20:
    set32(c.r[20], c.r[20].w[0] - 1u);
    set32(c.r[3], 0u + 348u);
    c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(349ll) ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 256u);
    if (c.r[2].d[0] == 0) c.r[20].d[0] = c.r[3].d[0];
    c.r[17].d[0] = c.r[17].d[0] | 960ull;
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[22].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { const bool t = c.r[20].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0014BB6C; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_0014BA50:
    c.r[16].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], c.r[16].w[0] - 43u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(59ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_0014BB6C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 32144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00148000u < 16384u) { entry = entries_000A[(t - 0x00148000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0014BA78:
    c.r[2].d[0] = c.r[17].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 65u);  if (t) { goto L_0014BA90; } }
    c.r[22].d[0] = c.r[22].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];  if (t) { goto L_0014BB24; } }
L_0014BA90:
    set32(c.r[2], 0u - 193u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];  if (t) { goto L_0014BB18; } }
    c.budget -= 1;
L_0014BAA0:
    c.r[2].d[0] = c.r[17].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 65u);  if (t) { goto L_0014BB6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];  if (t) { goto L_0014BB18; } }
    c.budget -= 1;
L_0014BAB8:
    c.r[2].d[0] = c.r[17].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 321u);  if (t) { goto L_0014BB6C; } }
    st64((c.r[29].w[0] + 616u), c.r[22].d[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];  if (t) { goto L_0014BB18; } }
L_0014BAD0:
    c.r[3].d[0] = c.r[17].d[0] & 640ull;
    set32(c.r[2], 0u + 512u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[17].d[0] & 512ull;  if (t) { goto L_0014BAF0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014BB6C; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] & 128ull;  if (t) { goto L_0014BB7C; } }
L_0014BAF0:
    c.r[2].d[0] = c.r[17].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 769u);  if (t) { goto L_0014BB0C; } }
    c.r[2].d[0] = ld64((c.r[29].w[0] + 616u));
    st32((c.r[29].w[0] + 624u), c.r[19].w[0]);
    c.r[7].d[0] = c.r[22].d[0] - c.r[2].d[0];
    set32(c.r[2], 0u - 769u);
    c.budget -= 4;
L_0014BB0C:
    c.r[22].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.r[17].d[0] = c.r[2].d[0] | 192ull;
    c.budget -= 3;
L_0014BB18:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.budget -= 3;
L_0014BB24:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0014BB48; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_0014BB64; } }
L_0014BB48:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[7]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BB58u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00146E10u; return; } if (c.pc != 0x0014BB58u) [[unlikely]] return; }
L_0014BB58:
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[7]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { goto L_0014BB6C; } }
L_0014BB64:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014BA50u | kUnwind; return; } goto L_0014BA50; }
L_0014BB6C:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[2], 0u - 129u);  if (t) { goto L_0014BB78; } }
    c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 1;
L_0014BB78:
    c.r[2].d[0] = c.r[17].d[0] & 128ull;
    c.budget -= 1;
L_0014BB7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] & 512ull;  if (t) { goto L_0014BC24; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] - 1u);  goto L_0014BBC8; }
    set32(c.r[3], c.r[29].w[0] + 256u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 608u)));  if (t) { goto L_0014BD2C; } }
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 1;
L_0014BBA0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BBACu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));  if (depth < kMaxDepth) unit_000A(c, 119u, depth + 1u); else { c.pc = 0x001494C0u; return; } if (c.pc != 0x0014BBACu) [[unlikely]] return; }
L_0014BBAC:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.r[3].d[0] = c.r[4].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014BBA0u | kUnwind; return; } goto L_0014BBA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 608u)));  if (t) { goto L_0014BD2C; } }
    c.budget -= 1;
L_0014BBC8:
    set32(c.r[2], 0u + 101u);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[8], c.r[8].w[0] - 1u);  if (t) { goto L_0014BC08; } }
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0014BC08; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[7]);
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BBF8u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_000A(c, 119u, depth + 1u); else { c.pc = 0x001494C0u; return; } if (c.pc != 0x0014BBF8u) [[unlikely]] return; }
L_0014BBF8:
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[7]);
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.budget -= 4;
L_0014BC08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[7]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BC1Cu); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_000A(c, 119u, depth + 1u); else { c.pc = 0x001494C0u; return; } if (c.pc != 0x0014BC1Cu) [[unlikely]] return; }
L_0014BC1C:
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[7]);
    c.budget -= 2;
L_0014BC24:
    c.r[2].d[0] = c.r[17].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B11Cu | kUnwind; return; } goto L_0014B11C; }
    c.r[3].d[0] = c.r[17].d[0] & 768ull;
    set32(c.r[2], 0u + 512u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0014BC58; } }
    c.r[2].d[0] = ld64((c.r[29].w[0] + 616u));
    st32((c.r[29].w[0] + 624u), c.r[19].w[0]);
    c.r[7].d[0] = c.r[22].d[0] - c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull - c.r[7].d[0];  if (t) { goto L_0014BC7C; } }
    c.budget -= 1;
L_0014BC58:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 624u)));  if (t) { goto L_0014BCAC; } }
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[7]);
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BC70u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0008(c, 178u, depth + 1u); else { c.pc = 0x00142138u; return; } if (c.pc != 0x0014BC70u) [[unlikely]] return; }
L_0014BC70:
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[7]);
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);
    c.r[6].d[0] = c.r[2].d[0] - c.r[7].d[0];
    c.budget -= 3;
L_0014BC7C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[2], c.r[29].w[0] + 585u);  if (t) { goto L_0014BCAC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 624u)));
    set32(c.r[3], c.r[29].w[0] + 584u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 32536u);
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BCA8u); st32((c.r[29].w[0] + 624u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0009(c, 188u, depth + 1u); else { c.pc = 0x001471A8u; return; } if (c.pc != 0x0014BCA8u) [[unlikely]] return; }
L_0014BCA8:
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);
    c.budget -= 1;
L_0014BCAC:
    set32(c.r[2], c.r[29].w[0] + 256u);
    st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BCBCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 174u, depth + 1u); else { c.pc = 0x001420F8u; return; } if (c.pc != 0x0014BCBCu) [[unlikely]] return; }
L_0014BCBC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { goto L_0014BCD8; } }
    c.r[2].d[0] = c.r[17].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[23].d[0] + 0ull;  goto L_0014BCF0; }
L_0014BCD8:
    c.r[3].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    st64((c.r[2].w[0]), c.r[4].d[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[23].w[0] + 8u);  if (t) { goto L_0014BD08; } }
    c.budget -= 1;
L_0014BCF0:
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BD00u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_000B(c, 94u, depth + 1u); else { c.pc = 0x0014EB28u; return; } if (c.pc != 0x0014BD00u) [[unlikely]] return; }
L_0014BD00:
    st32((c.r[16].w[0]), c.f[0]);
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);
    c.budget -= 2;
L_0014BD08:
    set32(c.r[3], ld32((c.r[29].w[0] + 608u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 608u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B118u | kUnwind; return; } goto L_0014B118; } }
L_0014BD18:
    set32(c.r[4], ld32((c.r[29].w[0] + 608u)));
    c.budget -= 1;
L_0014BD1C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];  if (t) { goto L_0014BD2C; } }
L_0014BD28:
    set32(c.r[2], ld32((c.r[29].w[0] + 608u)));
    c.budget -= 1;
L_0014BD2C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 672u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 680u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 688u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 696u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 704u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 712u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 720u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 728u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 736u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 744u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 752u);  c.pc = t; return; }
L_0014BD60:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], 0u + 94u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_0014BD80; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 1u);  if (t) { goto L_0014BD84; } }
L_0014BD80:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0014BD84:
    set32(c.r[7], 0u + 255u);
    set32(c.r[2], c.r[4].w[0] + 255u);
    c.budget -= 3;
L_0014BD90:
    set32(c.r[7], c.r[7].w[0] - 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 7;
    { const bool t = c.r[7].sd[0] >= 0; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014BD90u | kUnwind; return; } goto L_0014BD90; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] - 1u);  if (t) { goto L_0014BE58; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[10], 0u + 45u);
    set32(c.r[8], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[9], 0u + 93u);
    c.budget -= 5;
L_0014BDC8:
    set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_0014BDCC:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 2;
L_0014BDD4:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[10].d[0]; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_0014BE08; } }
    c.r[2].d[0] = c.r[7].sd[0] < 46ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014BDF8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] - 1u);  if (t) { goto L_0014BE58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014BDC8u | kUnwind; return; } goto L_0014BDC8; } }
L_0014BDF8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[9].d[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0014BE58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0014BE50; } }
L_0014BE08:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[9].d[0]) { set32(c.r[6], 0u + 45u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014BDC8u | kUnwind; return; } goto L_0014BDC8; }
    c.r[2].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0014BE28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 45u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014BDC8u | kUnwind; return; } goto L_0014BDC8; } }
L_0014BE28:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014BE28u | kUnwind; return; } goto L_0014BE28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014BDD4u | kUnwind; return; } goto L_0014BDD4; } }
    c.budget -= 1;
L_0014BE50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014BDCCu | kUnwind; return; } goto L_0014BDCC; } }
L_0014BE58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014BE60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 96u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[2].w[0] - 9040u)));
    set32(c.r[2], 0u + 520u);
    set32(c.r[3], c.r[16].w[0] - 1u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    if (c.r[16].d[0] == 0) c.r[3].d[0] = 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 104u), c.r[31].d[0]);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 16u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[9].w[0]);
    st32((c.r[29].w[0]), c.r[8].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BEB0u); st32((c.r[29].w[0] + 8u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000A(c, 128u, depth + 1u); else { c.pc = 0x00149748u; return; } if (c.pc != 0x0014BEB0u) [[unlikely]] return; }
L_0014BEB0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0])));  if (t) { goto L_0014BEBC; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0014BEBC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 104u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0014BED0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 520u);
    st64((c.r[29].w[0] + 96u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] - 1u);
    st32((c.r[29].w[0] + 84u), c.r[4].w[0]);
    if (c.r[16].d[0] == 0) c.r[3].d[0] = 0ull;
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 104u), c.r[31].d[0]);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 16u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[29].w[0]), c.r[8].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BF18u); st32((c.r[29].w[0] + 8u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000A(c, 128u, depth + 1u); else { c.pc = 0x00149748u; return; } if (c.pc != 0x0014BF18u) [[unlikely]] return; }
L_0014BF18:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0])));  if (t) { goto L_0014BF24; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0014BF24:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 104u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0014BF38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[8], ld32((c.r[2].w[0] - 9040u)));
    set32(c.r[2], 0u + 520u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[8].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BF78u); st32((c.r[29].w[0]), c.r[7].w[0]);  if (depth < kMaxDepth) unit_000A(c, 128u, depth + 1u); else { c.pc = 0x00149748u; return; } if (c.pc != 0x0014BF78u) [[unlikely]] return; }
L_0014BF78:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0014BF90:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[29].w[0] + 84u), c.r[4].w[0]);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], 0u + 520u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 16u), c.r[8].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BFD0u); st32((c.r[29].w[0]), c.r[8].w[0]);  if (depth < kMaxDepth) unit_000A(c, 128u, depth + 1u); else { c.pc = 0x00149748u; return; } if (c.pc != 0x0014BFD0u) [[unlikely]] return; }
L_0014BFD0:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0014BFE8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[2].w[0] - 12320u);
    c.budget -= 6;
    [[clang::musttail]] return unit_000B(c, 1u, depth);
}

}
