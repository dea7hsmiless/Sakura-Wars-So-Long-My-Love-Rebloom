#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_000C[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0,
    0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 40,
    0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51,
    0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0,
    0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0,
    91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 114, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0,
    0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0,
    146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0,
    0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0,
    0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0,
    0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0,
    0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239,
    0, 240, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0,
    0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0,
    0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260,
    0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0,
    0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0,
    0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0,
    0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0,
    0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0,
    0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    328, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_000C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00150000;
    case 2u: goto L_00150024;
    case 3u: goto L_00150030;
    case 4u: goto L_00150084;
    case 5u: goto L_00150090;
    case 6u: goto L_001500E4;
    case 7u: goto L_001500F0;
    case 8u: goto L_00150144;
    case 9u: goto L_00150150;
    case 10u: goto L_001501A8;
    case 11u: goto L_001501C0;
    case 12u: goto L_00150218;
    case 13u: goto L_00150230;
    case 14u: goto L_00150284;
    case 15u: goto L_00150290;
    case 16u: goto L_001502EC;
    case 17u: goto L_00150308;
    case 18u: goto L_00150354;
    case 19u: goto L_001503B0;
    case 20u: goto L_001503E8;
    case 21u: goto L_0015042C;
    case 22u: goto L_0015044C;
    case 23u: goto L_001504B0;
    case 24u: goto L_00150504;
    case 25u: goto L_00150510;
    case 26u: goto L_00150564;
    case 27u: goto L_00150570;
    case 28u: goto L_001505C4;
    case 29u: goto L_001505D0;
    case 30u: goto L_00150624;
    case 31u: goto L_00150630;
    case 32u: goto L_00150684;
    case 33u: goto L_00150690;
    case 34u: goto L_00150700;
    case 35u: goto L_00150710;
    case 36u: goto L_001507A8;
    case 37u: goto L_001507C0;
    case 38u: goto L_001507E8;
    case 39u: goto L_001507F0;
    case 40u: goto L_001507FC;
    case 41u: goto L_00150808;
    case 42u: goto L_00150810;
    case 43u: goto L_0015086C;
    case 44u: goto L_0015087C;
    case 45u: goto L_001508CC;
    case 46u: goto L_0015092C;
    case 47u: goto L_0015093C;
    case 48u: goto L_0015098C;
    case 49u: goto L_001509B0;
    case 50u: goto L_001509E8;
    case 51u: goto L_001509FC;
    case 52u: goto L_00150A0C;
    case 53u: goto L_00150A40;
    case 54u: goto L_00150A7C;
    case 55u: goto L_00150A90;
    case 56u: goto L_00150AA4;
    case 57u: goto L_00150ABC;
    case 58u: goto L_00150AE0;
    case 59u: goto L_00150B50;
    case 60u: goto L_00150B80;
    case 61u: goto L_00150BB0;
    case 62u: goto L_00150C30;
    case 63u: goto L_00150C68;
    case 64u: goto L_00150C74;
    case 65u: goto L_00150C90;
    case 66u: goto L_00150CB8;
    case 67u: goto L_00150CBC;
    case 68u: goto L_00150CE0;
    case 69u: goto L_00150CE8;
    case 70u: goto L_00150D00;
    case 71u: goto L_00150D20;
    case 72u: goto L_00150D74;
    case 73u: goto L_00150D98;
    case 74u: goto L_00150DCC;
    case 75u: goto L_00150DD8;
    case 76u: goto L_00150E00;
    case 77u: goto L_00150E54;
    case 78u: goto L_00150E84;
    case 79u: goto L_00150EA0;
    case 80u: goto L_00150EE8;
    case 81u: goto L_00150F2C;
    case 82u: goto L_00150F60;
    case 83u: goto L_00150F80;
    case 84u: goto L_00150FF0;
    case 85u: goto L_0015103C;
    case 86u: goto L_00151040;
    case 87u: goto L_00151060;
    case 88u: goto L_00151080;
    case 89u: goto L_001510C0;
    case 90u: goto L_001510E8;
    case 91u: goto L_00151100;
    case 92u: goto L_00151140;
    case 93u: goto L_0015114C;
    case 94u: goto L_00151170;
    case 95u: goto L_00151180;
    case 96u: goto L_001511E8;
    case 97u: goto L_00151238;
    case 98u: goto L_00151260;
    case 99u: goto L_001512D0;
    case 100u: goto L_00151334;
    case 101u: goto L_00151350;
    case 102u: goto L_001513C0;
    case 103u: goto L_0015143C;
    case 104u: goto L_001514B4;
    case 105u: goto L_001514D0;
    case 106u: goto L_00151540;
    case 107u: goto L_00151620;
    case 108u: goto L_00151654;
    case 109u: goto L_00151670;
    case 110u: goto L_001516D8;
    case 111u: goto L_001517AC;
    case 112u: goto L_001517D0;
    case 113u: goto L_00151838;
    case 114u: goto L_0015183C;
    case 115u: goto L_00151840;
    case 116u: goto L_00151880;
    case 117u: goto L_001518A4;
    case 118u: goto L_001518C0;
    case 119u: goto L_001518D0;
    case 120u: goto L_00151900;
    case 121u: goto L_00151940;
    case 122u: goto L_001519B0;
    case 123u: goto L_001519E0;
    case 124u: goto L_00151A08;
    case 125u: goto L_00151A20;
    case 126u: goto L_00151A40;
    case 127u: goto L_00151A74;
    case 128u: goto L_00151AF8;
    case 129u: goto L_00151B30;
    case 130u: goto L_00151B50;
    case 131u: goto L_00151B70;
    case 132u: goto L_00151BA0;
    case 133u: goto L_00151BB0;
    case 134u: goto L_00151BE0;
    case 135u: goto L_00151BF0;
    case 136u: goto L_00151C1C;
    case 137u: goto L_00151C30;
    case 138u: goto L_00151C78;
    case 139u: goto L_00151C94;
    case 140u: goto L_00151CC0;
    case 141u: goto L_00151CE4;
    case 142u: goto L_00151CF0;
    case 143u: goto L_00151D24;
    case 144u: goto L_00151D50;
    case 145u: goto L_00151D74;
    case 146u: goto L_00151D80;
    case 147u: goto L_00151DAC;
    case 148u: goto L_00151DD0;
    case 149u: goto L_00151E24;
    case 150u: goto L_00151E50;
    case 151u: goto L_00151E7C;
    case 152u: goto L_00151E90;
    case 153u: goto L_00151ECC;
    case 154u: goto L_00151EF0;
    case 155u: goto L_00151EF8;
    case 156u: goto L_00151F04;
    case 157u: goto L_00151F40;
    case 158u: goto L_00151FA0;
    case 159u: goto L_00151FC8;
    case 160u: goto L_00151FE8;
    case 161u: goto L_00152008;
    case 162u: goto L_0015201C;
    case 163u: goto L_0015202C;
    case 164u: goto L_00152034;
    case 165u: goto L_0015203C;
    case 166u: goto L_00152078;
    case 167u: goto L_00152108;
    case 168u: goto L_00152128;
    case 169u: goto L_001521E0;
    case 170u: goto L_001521F4;
    case 171u: goto L_0015220C;
    case 172u: goto L_00152270;
    case 173u: goto L_00152284;
    case 174u: goto L_001522A0;
    case 175u: goto L_001522B4;
    case 176u: goto L_001522E0;
    case 177u: goto L_001522F4;
    case 178u: goto L_00152320;
    case 179u: goto L_00152364;
    case 180u: goto L_001523A8;
    case 181u: goto L_001523B8;
    case 182u: goto L_001523E4;
    case 183u: goto L_001523F8;
    case 184u: goto L_00152410;
    case 185u: goto L_00152428;
    case 186u: goto L_00152460;
    case 187u: goto L_00152484;
    case 188u: goto L_0015248C;
    case 189u: goto L_001524B0;
    case 190u: goto L_001524C4;
    case 191u: goto L_001524DC;
    case 192u: goto L_001524F4;
    case 193u: goto L_00152530;
    case 194u: goto L_0015255C;
    case 195u: goto L_00152580;
    case 196u: goto L_001525B8;
    case 197u: goto L_00152634;
    case 198u: goto L_00152694;
    case 199u: goto L_001526AC;
    case 200u: goto L_001526C8;
    case 201u: goto L_00152708;
    case 202u: goto L_00152734;
    case 203u: goto L_0015275C;
    case 204u: goto L_00152790;
    case 205u: goto L_001527A0;
    case 206u: goto L_00152840;
    case 207u: goto L_00152860;
    case 208u: goto L_001528CC;
    case 209u: goto L_001528F0;
    case 210u: goto L_00152900;
    case 211u: goto L_00152920;
    case 212u: goto L_00152988;
    case 213u: goto L_0015299C;
    case 214u: goto L_001529BC;
    case 215u: goto L_00152A20;
    case 216u: goto L_00152A5C;
    case 217u: goto L_00152A94;
    case 218u: goto L_00152AB0;
    case 219u: goto L_00152B04;
    case 220u: goto L_00152B60;
    case 221u: goto L_00152B88;
    case 222u: goto L_00152BD0;
    case 223u: goto L_00152C10;
    case 224u: goto L_00152C64;
    case 225u: goto L_00152CA0;
    case 226u: goto L_00152CF0;
    case 227u: goto L_00152D1C;
    case 228u: goto L_00152D2C;
    case 229u: goto L_00152D70;
    case 230u: goto L_00152D90;
    case 231u: goto L_00152DDC;
    case 232u: goto L_00152E90;
    case 233u: goto L_00152EB8;
    case 234u: goto L_00152F20;
    case 235u: goto L_00152F44;
    case 236u: goto L_00152F80;
    case 237u: goto L_00152FB0;
    case 238u: goto L_00152FD0;
    case 239u: goto L_00152FFC;
    case 240u: goto L_00153004;
    case 241u: goto L_0015300C;
    case 242u: goto L_00153028;
    case 243u: goto L_00153040;
    case 244u: goto L_00153068;
    case 245u: goto L_00153078;
    case 246u: goto L_00153084;
    case 247u: goto L_001530A4;
    case 248u: goto L_001530D4;
    case 249u: goto L_001530F0;
    case 250u: goto L_001530F8;
    case 251u: goto L_00153110;
    case 252u: goto L_0015317C;
    case 253u: goto L_001531AC;
    case 254u: goto L_001531BC;
    case 255u: goto L_001531F4;
    case 256u: goto L_00153204;
    case 257u: goto L_00153218;
    case 258u: goto L_0015325C;
    case 259u: goto L_0015326C;
    case 260u: goto L_0015327C;
    case 261u: goto L_00153294;
    case 262u: goto L_001532A4;
    case 263u: goto L_001532BC;
    case 264u: goto L_001532CC;
    case 265u: goto L_001532E4;
    case 266u: goto L_001532FC;
    case 267u: goto L_0015334C;
    case 268u: goto L_00153354;
    case 269u: goto L_00153370;
    case 270u: goto L_0015339C;
    case 271u: goto L_001533C0;
    case 272u: goto L_001533C8;
    case 273u: goto L_001533E4;
    case 274u: goto L_00153410;
    case 275u: goto L_00153434;
    case 276u: goto L_0015343C;
    case 277u: goto L_00153458;
    case 278u: goto L_00153484;
    case 279u: goto L_001534A8;
    case 280u: goto L_001534B0;
    case 281u: goto L_001534CC;
    case 282u: goto L_001534F8;
    case 283u: goto L_0015351C;
    case 284u: goto L_00153524;
    case 285u: goto L_00153534;
    case 286u: goto L_00153568;
    case 287u: goto L_00153578;
    case 288u: goto L_00153620;
    case 289u: goto L_00153644;
    case 290u: goto L_00153658;
    case 291u: goto L_00153690;
    case 292u: goto L_001536C0;
    case 293u: goto L_001536E0;
    case 294u: goto L_00153718;
    case 295u: goto L_00153748;
    case 296u: goto L_00153770;
    case 297u: goto L_0015379C;
    case 298u: goto L_00153800;
    case 299u: goto L_00153830;
    case 300u: goto L_0015383C;
    case 301u: goto L_00153854;
    case 302u: goto L_00153868;
    case 303u: goto L_001538A0;
    case 304u: goto L_001538F8;
    case 305u: goto L_00153904;
    case 306u: goto L_00153944;
    case 307u: goto L_00153970;
    case 308u: goto L_001539A8;
    case 309u: goto L_001539F0;
    case 310u: goto L_00153A10;
    case 311u: goto L_00153A44;
    case 312u: goto L_00153A70;
    case 313u: goto L_00153A98;
    case 314u: goto L_00153AC8;
    case 315u: goto L_00153AF0;
    case 316u: goto L_00153B14;
    case 317u: goto L_00153B28;
    case 318u: goto L_00153B60;
    case 319u: goto L_00153BC4;
    case 320u: goto L_00153BF4;
    case 321u: goto L_00153C04;
    case 322u: goto L_00153C3C;
    case 323u: goto L_00153C48;
    case 324u: goto L_00153C54;
    case 325u: goto L_00153C78;
    case 326u: goto L_00153CA4;
    case 327u: goto L_00153CFC;
    case 328u: goto L_00153D80;
    case 329u: goto L_00153D90;
    case 330u: goto L_00153DA0;
    case 331u: goto L_00153DAC;
    case 332u: goto L_00153DE8;
    case 333u: goto L_00153E30;
    case 334u: goto L_00153E70;
    case 335u: goto L_00153EA4;
    case 336u: goto L_00153F70;
    default: bad_entry(c, 0x00150000u); return;
    }
L_00150000:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0015001C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_00150024; } }
L_0015001C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150024u);  if (depth < kMaxDepth) unit_000C(c, 71u, depth + 1u); else { c.pc = 0x00150D20u; return; } if (c.pc != 0x00150024u) [[unlikely]] return; }
L_00150024:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00150030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12804u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_00150058; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_00150084; } }
L_00150058:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 12500u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0015007C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_00150084; } }
L_0015007C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150084u);  if (depth < kMaxDepth) unit_000C(c, 76u, depth + 1u); else { c.pc = 0x00150E00u; return; } if (c.pc != 0x00150084u) [[unlikely]] return; }
L_00150084:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00150090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12804u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_001500B8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_001500E4; } }
L_001500B8:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 12500u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001500DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_001500E4; } }
L_001500DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001500E4u);  if (depth < kMaxDepth) unit_000C(c, 79u, depth + 1u); else { c.pc = 0x00150EA0u; return; } if (c.pc != 0x001500E4u) [[unlikely]] return; }
L_001500E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001500F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12804u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_00150118; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_00150144; } }
L_00150118:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 12500u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0015013C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_00150144; } }
L_0015013C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150144u);  if (depth < kMaxDepth) unit_000C(c, 83u, depth + 1u); else { c.pc = 0x00150F80u; return; } if (c.pc != 0x00150144u) [[unlikely]] return; }
L_00150144:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00150150:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12804u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[9].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00150178; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_001501A8; } }
L_00150178:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 12500u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    if (c.r[4].d[0] != 0ull) { c.r[5].d[0] = c.r[8].d[0] + 0ull;  goto L_001501A0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_001501A8; } }
L_001501A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001501A8u); c.r[8].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 87u, depth + 1u); else { c.pc = 0x00151060u; return; } if (c.pc != 0x001501A8u) [[unlikely]] return; }
L_001501A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001501C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12804u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001501E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_00150218; } }
L_001501E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 12500u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    if (c.r[4].d[0] != 0ull) { c.r[5].d[0] = c.r[6].d[0] + 0ull;  goto L_00150210; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_00150218; } }
L_00150210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150218u); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 94u, depth + 1u); else { c.pc = 0x00151170u; return; } if (c.pc != 0x00150218u) [[unlikely]] return; }
L_00150218:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00150230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12804u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_00150258; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_00150284; } }
L_00150258:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 12500u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0015027C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_00150284; } }
L_0015027C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150284u);  if (depth < kMaxDepth) unit_000C(c, 98u, depth + 1u); else { c.pc = 0x00151260u; return; } if (c.pc != 0x00150284u) [[unlikely]] return; }
L_00150284:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00150290:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12804u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_001502BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00150390; } }
L_001502BC:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 12500u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[17].d[0] = c.r[4].d[0] + 0ull;  goto L_001502DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00150390; } }
L_001502DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12496u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001502ECu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 60u, depth + 1u); else { c.pc = 0x00150B80u; return; } if (c.pc != 0x001502ECu) [[unlikely]] return; }
L_001502EC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_00150348; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12496u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150308u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 59u, depth + 1u); else { c.pc = 0x00150B50u; return; } if (c.pc != 0x00150308u) [[unlikely]] return; }
L_00150308:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] + 10640u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00150390; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 58u));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015033C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00150390; } }
L_0015033C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00150390; } }
L_00150348:
    set32(c.r[4], ld32((c.r[2].w[0] + 12496u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150354u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 59u, depth + 1u); else { c.pc = 0x00150B50u; return; } if (c.pc != 0x00150354u) [[unlikely]] return; }
L_00150354:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] + 10656u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00150390; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 58u));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015038C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00150390; } }
L_0015038C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00150390:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001503B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12804u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_001503DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00150498; } }
L_001503DC:
    set32(c.r[4], ld32((c.r[2].w[0] + 12496u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001503E8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 60u, depth + 1u); else { c.pc = 0x00150B80u; return; } if (c.pc != 0x001503E8u) [[unlikely]] return; }
L_001503E8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_00150440; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 12500u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 58u));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_00150420; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00150498; } }
L_00150420:
    set32(c.r[4], ld32((c.r[2].w[0] + 12496u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015042Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 59u, depth + 1u); else { c.pc = 0x00150B50u; return; } if (c.pc != 0x0015042Cu) [[unlikely]] return; }
L_0015042C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] + 10640u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0]));  if (t) { goto L_00150498; } }
L_00150440:
    set32(c.r[4], ld32((c.r[2].w[0] + 12496u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015044Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 59u, depth + 1u); else { c.pc = 0x00150B50u; return; } if (c.pc != 0x0015044Cu) [[unlikely]] return; }
L_0015044C:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] + 10656u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 2u);  goto L_00150498; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 12500u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 58u));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00150494; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00150498; } }
L_00150494:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00150498:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001504B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12804u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_001504D8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_00150504; } }
L_001504D8:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 12500u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001504FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_00150504; } }
L_001504FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150504u);  if (depth < kMaxDepth) unit_000C(c, 101u, depth + 1u); else { c.pc = 0x00151350u; return; } if (c.pc != 0x00150504u) [[unlikely]] return; }
L_00150504:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00150510:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12804u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_00150538; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_00150564; } }
L_00150538:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 12500u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0015055C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_00150564; } }
L_0015055C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150564u);  if (depth < kMaxDepth) unit_000C(c, 105u, depth + 1u); else { c.pc = 0x001514D0u; return; } if (c.pc != 0x00150564u) [[unlikely]] return; }
L_00150564:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00150570:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12804u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_00150598; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_001505C4; } }
L_00150598:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 12500u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001505BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_001505C4; } }
L_001505BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001505C4u);  if (depth < kMaxDepth) unit_000C(c, 109u, depth + 1u); else { c.pc = 0x00151670u; return; } if (c.pc != 0x001505C4u) [[unlikely]] return; }
L_001505C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001505D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12804u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_001505F8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_00150624; } }
L_001505F8:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 12500u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0015061C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_00150624; } }
L_0015061C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150624u);  if (depth < kMaxDepth) unit_000C(c, 112u, depth + 1u); else { c.pc = 0x001517D0u; return; } if (c.pc != 0x00150624u) [[unlikely]] return; }
L_00150624:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00150630:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12804u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_00150658; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_00150684; } }
L_00150658:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 12500u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0015067C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_00150684; } }
L_0015067C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150684u);  if (depth < kMaxDepth) unit_000C(c, 119u, depth + 1u); else { c.pc = 0x001518D0u; return; } if (c.pc != 0x00150684u) [[unlikely]] return; }
L_00150684:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00150690:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[6].sd[0] < 0; c.f[20] = c.f[12];  if (t) { goto L_001506C0; } }
    c.f[0] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001506DC; } }
L_001506C0:
    set32(c.r[3], c.r[6].w[0] >> 1);
    c.r[2].d[0] = c.r[6].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_001506DC:
    c.f[1] = ld32((c.r[28].w[0] - 32052u));
    c.f[0] = 0u;
    c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00150708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150700u); c.f[12] = c.f[12] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x00150700u) [[unlikely]] return; }
L_00150700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_00150710; } }
L_00150708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150710u);  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x00150710u) [[unlikely]] return; }
L_00150710:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  goto L_00150738; }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);  if (t) { goto L_00150750; } }
L_00150738:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.budget -= 6;
L_00150750:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_00150784; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[7], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[7].d[0] & 255ull;  if (t) { goto L_0015079C; } }
L_00150784:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 6;
L_0015079C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001507A8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 29u, depth + 1u); else { c.pc = 0x001505D0u; return; } if (c.pc != 0x001507A8u) [[unlikely]] return; }
L_001507A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001507C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001507E8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001507E8u) [[unlikely]] return; }
L_001507E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001507F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 132u, depth + 1u); else { c.pc = 0x00137248u; return; } if (c.pc != 0x001507F0u) [[unlikely]] return; }
L_001507F0:
    c.r[4].d[0] = ld64((c.r[28].w[0] - 32712u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001507FCu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 132u, depth + 1u); else { c.pc = 0x00137248u; return; } if (c.pc != 0x001507FCu) [[unlikely]] return; }
L_001507FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150808u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0014E6F0u; return; } if (c.pc != 0x00150808u) [[unlikely]] return; }
L_00150808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150810u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 90u, depth + 1u); else { c.pc = 0x0014EA58u; return; } if (c.pc != 0x00150810u) [[unlikely]] return; }
L_00150810:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_001508D4; } }
    c.budget -= 2;
    if (c.r[17].sd[0] < 0) { set32(c.r[3], c.r[17].w[0] >> 1);  goto L_00150830; }
    c.f[0] = c.r[17].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00150848; } }
L_00150830:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 6;
L_00150848:
    c.f[1] = ld32((c.r[28].w[0] - 32052u));
    c.f[0] = 0u;
    c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00150874; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015086Cu); c.f[12] = c.f[12] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x0015086Cu) [[unlikely]] return; }
L_0015086C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_0015087C; } }
L_00150874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015087Cu);  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x0015087Cu) [[unlikely]] return; }
L_0015087C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  goto L_001508A4; }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001508BC; } }
L_001508A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
L_001508BC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001508CCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 31u, depth + 1u); else { c.pc = 0x00150630u; return; } if (c.pc != 0x001508CCu) [[unlikely]] return; }
L_001508CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00150990; } }
L_001508D4:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_0015098C; }
    c.budget -= 2;
    if (c.r[17].sd[0] < 0) { set32(c.r[3], c.r[17].w[0] >> 1);  goto L_001508F0; }
    c.f[0] = c.r[17].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00150908; } }
L_001508F0:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 6;
L_00150908:
    c.f[1] = ld32((c.r[28].w[0] - 32052u));
    c.f[0] = 0u;
    c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00150934; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015092Cu); c.f[12] = c.f[12] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x0015092Cu) [[unlikely]] return; }
L_0015092C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_0015093C; } }
L_00150934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015093Cu);  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x0015093Cu) [[unlikely]] return; }
L_0015093C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  goto L_00150964; }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u - c.r[16].w[0]);  if (t) { goto L_0015097C; } }
L_00150964:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[7], 0u - c.r[16].w[0]);
    c.budget -= 6;
L_0015097C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015098Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_000C(c, 31u, depth + 1u); else { c.pc = 0x00150630u; return; } if (c.pc != 0x0015098Cu) [[unlikely]] return; }
L_0015098C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00150990:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001509B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8440u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[4].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00150A14; } }
    set32(c.r[4], c.r[17].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001509E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x001509E8u) [[unlikely]] return; }
L_001509E8:
    set32(c.r[16], c.r[17].w[0] << 1);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001509FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x001509FCu) [[unlikely]] return; }
L_001509FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150A0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x00150A0Cu) [[unlikely]] return; }
L_00150A0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00150A20; } }
L_00150A14:
    st32((c.r[18].w[0] + 4u), 0u);
    st32((c.r[18].w[0] + 8u), 0u);
    st32((c.r[18].w[0] + 12u), 0u);
    c.budget -= 3;
L_00150A20:
    st32((c.r[18].w[0]), c.r[17].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00150A40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00150ABC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8440u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_00150A80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150A7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00150A7Cu) [[unlikely]] return; }
L_00150A7C:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_00150A80:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  goto L_00150A94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150A90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00150A90u) [[unlikely]] return; }
L_00150A90:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_00150A94:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00150AA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150AA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00150AA4u) [[unlikely]] return; }
L_00150AA4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00150AA8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00150AC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150ABCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00150ABCu) [[unlikely]] return; }
L_00150ABC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00150AC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00150AE0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00150B3C; } }
    c.r[1].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00150B3C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[8], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 12808u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00150B3C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[8], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 8;
L_00150B3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00150B50:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_00150B70; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_00150B70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00150B80:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_00150BA0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 4;
L_00150BA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00150BB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[12], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].d[0] = c.r[2].d[0] | 16706ull;
    set32(c.r[11], c.r[11].w[0] + 8408u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[10], 0u + 256u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[9], 0u + 64u);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[8], 0u + 120u);
    st32((c.r[4].w[0] + 12u), c.r[12].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 16u), c.r[11].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 31;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 58u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_00150C30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00150C78; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].d[0] = c.r[5].d[0] << 48;
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44410000u);
    c.r[3].d[0] = c.r[3].d[0] | 17732ull;
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00150C74; } }
    goto L_00150C6C;
L_00150C68:
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_00150C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150C74u);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00150C74u) [[unlikely]] return; }
L_00150C74:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00150C78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00150C90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00150CEC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8408u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00150CD0; } }
L_00150CB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 1;
L_00150CBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_00150CD0:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00150CE8; } }
L_00150CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150CE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00150CE8u) [[unlikely]] return; }
L_00150CE8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00150CEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00150D00:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 58u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00150D14; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 58u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00150D14:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00150D20:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[2].w[0] + 12484u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00150D60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12480u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00150D6C; } }
L_00150D60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65530ull;  if (t) { goto L_00150DE0; } }
L_00150D6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150D74u);  if (depth < kMaxDepth) unit_000C(c, 174u, depth + 1u); else { c.pc = 0x001522A0u; return; } if (c.pc != 0x00150D74u) [[unlikely]] return; }
L_00150D74:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_00150D8C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65530ull;  if (t) { goto L_00150DE0; } }
L_00150D8C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150D98u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00150D98u) [[unlikely]] return; }
L_00150D98:
    st16((c.r[29].w[0] + 80u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[6], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12480u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    st8((c.r[29].w[0] + 82u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[29].w[0] + 83u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[29].w[0] + 84u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[17].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 4u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150DCCu); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 218u, depth + 1u); else { c.pc = 0x00152AB0u; return; } if (c.pc != 0x00150DCCu) [[unlikely]] return; }
L_00150DCC:
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150DD8u); set32(c.r[4], ld32((c.r[19].w[0] + 28u)));  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0014FE60u; return; } if (c.pc != 0x00150DD8u) [[unlikely]] return; }
L_00150DD8:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00150DE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00150E00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 12484u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00150E3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12480u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_00150E48; }
L_00150E3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65530ull;  if (t) { goto L_00150E88; } }
L_00150E48:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150E54u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00150E54u) [[unlikely]] return; }
L_00150E54:
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], 0u + 2u);
    st16((c.r[29].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], ld32((c.r[18].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12480u)));
    st8((c.r[29].w[0] + 66u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[29].w[0] + 67u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[29].w[0] + 68u), c.r[17].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150E84u); st32((c.r[29].w[0] + 72u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_000C(c, 218u, depth + 1u); else { c.pc = 0x00152AB0u; return; } if (c.pc != 0x00150E84u) [[unlikely]] return; }
L_00150E84:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00150E88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00150EA0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 12484u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00150ED4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12480u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00150EE0; } }
L_00150ED4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65530ull;  if (t) { goto L_00150F64; } }
L_00150EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150EE8u);  if (depth < kMaxDepth) unit_000C(c, 174u, depth + 1u); else { c.pc = 0x001522A0u; return; } if (c.pc != 0x00150EE8u) [[unlikely]] return; }
L_00150EE8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));  goto L_00150EFC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65530ull;  if (t) { goto L_00150F64; } }
L_00150EFC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_00150F20; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00150F1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_00150F64; } }
L_00150F1C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_00150F20:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150F2Cu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00150F2Cu) [[unlikely]] return; }
L_00150F2C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 2u);
    st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12480u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    st8((c.r[29].w[0] + 50u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 51u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[29].w[0] + 52u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150F60u); st32((c.r[29].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 218u, depth + 1u); else { c.pc = 0x00152AB0u; return; } if (c.pc != 0x00150F60u) [[unlikely]] return; }
L_00150F60:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00150F64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00150F80:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 12484u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00150FB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12480u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  goto L_00150FC0; }
L_00150FB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65530ull;  if (t) { goto L_00151040; } }
L_00150FC0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_00150FE4; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00150FE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_00151040; } }
L_00150FE0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_00150FE4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150FF0u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00150FF0u) [[unlikely]] return; }
L_00150FF0:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 20487u);  goto L_0015100C; }
    set32(c.r[2], 0u + 12294u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00151010; } }
L_0015100C:
    st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00151010:
    set32(c.r[6], ld32((c.r[17].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12480u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st8((c.r[29].w[0] + 50u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[29].w[0] + 51u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[29].w[0] + 52u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015103Cu); st32((c.r[29].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 218u, depth + 1u); else { c.pc = 0x00152AB0u; return; } if (c.pc != 0x0015103Cu) [[unlikely]] return; }
L_0015103C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00151040:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00151060:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
L_00151080:
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 12484u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_001510AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12480u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 20u)));  goto L_001510B8; }
L_001510AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65530ull;  if (t) { goto L_00151150; } }
L_001510B8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_001510DC; }
L_001510C0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001510D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_00151150; } }
L_001510D8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_001510DC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001510E8u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x001510E8u) [[unlikely]] return; }
L_001510E8:
    set32(c.r[5], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[4], 0u + 4u);
    c.r[3].d[0] = c.r[19].d[0] & 65535ull;
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    st8((c.r[29].w[0] + 98u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[29].w[0] + 99u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_00151100:
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    st32((c.r[29].w[0] + 100u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] & 255ull;  goto L_00151130; }
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[3], 0u + 12291u);
    st16((c.r[29].w[0] + 96u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 112u), c.r[2].w[0]);  if (t) { goto L_0015113C; } }
L_00151130:
    set32(c.r[3], 0u + 20483u);
    st16((c.r[29].w[0] + 96u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 3;
L_0015113C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 1;
L_00151140:
    set32(c.r[4], ld32((c.r[2].w[0] + 12480u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015114Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000C(c, 218u, depth + 1u); else { c.pc = 0x00152AB0u; return; } if (c.pc != 0x0015114Cu) [[unlikely]] return; }
L_0015114C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00151150:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00151170:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 4;
L_00151180:
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 12484u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001511AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12480u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  goto L_001511B8; }
L_001511AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65530ull;  if (t) { goto L_00151244; } }
L_001511B8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_001511DC; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001511D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_00151244; } }
L_001511D8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_001511DC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001511E8u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x001511E8u) [[unlikely]] return; }
L_001511E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 20480u);  goto L_00151200; }
    set32(c.r[2], 0u + 12288u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00151204; } }
L_00151200:
    st16((c.r[29].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00151204:
    set32(c.r[7], ld32((c.r[18].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12480u)));
    set32(c.r[6], 0u + 3u);
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    st8((c.r[29].w[0] + 66u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 67u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151238u); st32((c.r[29].w[0] + 76u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_000C(c, 218u, depth + 1u); else { c.pc = 0x00152AB0u; return; } if (c.pc != 0x00151238u) [[unlikely]] return; }
L_00151238:
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = 0ull + 0ull;
    st16((c.r[18].w[0] + 58u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00151244:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00151260:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 12484u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00151294; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12480u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  goto L_001512A0; }
L_00151294:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65530ull;  if (t) { goto L_00151338; } }
L_001512A0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_001512C4; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001512C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_00151338; } }
L_001512C0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_001512C4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001512D0u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x001512D0u) [[unlikely]] return; }
L_001512D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[16].d[0] & 65535ull;  goto L_001512E8; }
    set32(c.r[2], 0u + 12289u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00151304; } }
L_001512E8:
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 20481u);  goto L_00151300; }
    set32(c.r[2], 0u + 20482u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00151304; } }
L_00151300:
    st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00151304:
    set32(c.r[7], ld32((c.r[17].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12480u)));
    set32(c.r[6], 0u + 2u);
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    st8((c.r[29].w[0] + 50u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 51u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151334u); st32((c.r[29].w[0] + 56u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000C(c, 218u, depth + 1u); else { c.pc = 0x00152AB0u; return; } if (c.pc != 0x00151334u) [[unlikely]] return; }
L_00151334:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00151338:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00151350:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 12484u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_00151384; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12480u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  goto L_00151390; }
L_00151384:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65530ull;  if (t) { goto L_001514B8; } }
L_00151390:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_001513B4; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001513B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_001514B8; } }
L_001513B0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_001513B4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001513C0u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x001513C0u) [[unlikely]] return; }
L_001513C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x42FE0000u);  goto L_0015142C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_00151404; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_0015141C; } }
L_00151404:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
L_0015141C:
    set32(c.r[2], 0u + 12292u);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00151484; } }
L_0015142C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 4;
L_0015143C:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_00151460; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_00151478; } }
L_00151460:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
L_00151478:
    set32(c.r[2], 0u + 20484u);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00151484:
    set32(c.r[7], ld32((c.r[16].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12480u)));
    set32(c.r[6], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    st8((c.r[29].w[0] + 50u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 51u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001514B4u); st32((c.r[29].w[0] + 56u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000C(c, 218u, depth + 1u); else { c.pc = 0x00152AB0u; return; } if (c.pc != 0x001514B4u) [[unlikely]] return; }
L_001514B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001514B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001514D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 12484u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_00151504; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12480u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  goto L_00151510; }
L_00151504:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65530ull;  if (t) { goto L_00151658; } }
L_00151510:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_00151534; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00151530; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_00151658; } }
L_00151530:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_00151534:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151540u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00151540u) [[unlikely]] return; }
L_00151540:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);  goto L_001515AC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_00151584; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_0015159C; } }
L_00151584:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 6;
L_0015159C:
    set32(c.r[2], 0u + 12293u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00151604; } }
L_001515AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_001515E0; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001515F8; } }
L_001515E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 6;
L_001515F8:
    set32(c.r[2], 0u + 20486u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00151604:
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[16].w[0] + 24u)));  goto L_00151628; }
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151620u); set32(c.r[4], c.r[4].w[0] - 25744u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x00151620u) [[unlikely]] return; }
L_00151620:
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[7], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 2;
L_00151628:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12480u)));
    set32(c.r[6], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    st8((c.r[29].w[0] + 50u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 51u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151654u); st32((c.r[29].w[0] + 56u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000C(c, 218u, depth + 1u); else { c.pc = 0x00152AB0u; return; } if (c.pc != 0x00151654u) [[unlikely]] return; }
L_00151654:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00151658:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00151670:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 12480u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001516A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_001517B0; } }
L_001516A0:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_001516CC; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001516C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_001517B0; } }
L_001516C8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_001516CC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001516D8u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x001516D8u) [[unlikely]] return; }
L_001516D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], 0u + 11u);
    set32(c.r[2], 0u + 4096u);
    st8((c.r[29].w[0] + 50u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[29].w[0] + 51u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    st32((c.r[29].w[0] + 68u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 5u));
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6u));
    st32((c.r[29].w[0] + 76u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    st32((c.r[29].w[0] + 80u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    st32((c.r[29].w[0] + 84u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9u));
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 27;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 16384u);  goto L_00151758; }
    set32(c.r[2], 0u + 12288u);
    st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_0015179C; } }
L_00151758:
    c.r[2].d[0] = 0ull | 65535ull;
    st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[29].w[0] + 56u), c.r[3].w[0]);  goto L_0015179C; }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 56u));
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 32767u);
    st16((c.r[17].w[0] + 56u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 56u));
    c.r[1].d[0] = c.r[2].sd[0] < 32767ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0015179C; } }
    st16((c.r[17].w[0] + 56u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0015179C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12480u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001517ACu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000C(c, 218u, depth + 1u); else { c.pc = 0x00152AB0u; return; } if (c.pc != 0x001517ACu) [[unlikely]] return; }
L_001517AC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001517B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001517D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 12480u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00151810; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_001518A8; } }
L_00151810:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_0015182C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_001518A8; } }
L_0015182C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151838u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00151838u) [[unlikely]] return; }
L_00151838:
    set32(c.r[2], 0u + 16388u);
    c.budget -= 1;
L_0015183C:
    set32(c.r[6], 0u + 9u);
    c.budget -= 1;
L_00151840:
    st16((c.r[29].w[0] + 80u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[7], ld32((c.r[19].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12480u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    st8((c.r[29].w[0] + 82u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 83u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 2u));
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 3u));
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 16;
L_00151880:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 4u));
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 5u));
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 6u));
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001518A4u); st32((c.r[29].w[0] + 112u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_000C(c, 218u, depth + 1u); else { c.pc = 0x00152AB0u; return; } if (c.pc != 0x001518A4u) [[unlikely]] return; }
L_001518A4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001518A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001518C0:
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 1;
    c.pc = 0x001518C4u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_001518D0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
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
    c.budget -= 12;
L_00151900:
    set32(c.r[2], ld32((c.r[2].w[0] + 12480u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00151918; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_001519B4; } }
L_00151918:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_00151934; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_001519B4; } }
L_00151934:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151940u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00151940u) [[unlikely]] return; }
L_00151940:
    set32(c.r[2], 0u + 16389u);
    set32(c.r[6], 0u + 10u);
    st16((c.r[29].w[0] + 96u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[7], ld32((c.r[20].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12480u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    st8((c.r[29].w[0] + 98u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 99u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[19].w[0]));
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 2u));
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 3u));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 4u));
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 5u));
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 6u));
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 136u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 128u), c.r[18].w[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001519B0u); st32((c.r[29].w[0] + 132u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_000C(c, 218u, depth + 1u); else { c.pc = 0x00152AB0u; return; } if (c.pc != 0x001519B0u) [[unlikely]] return; }
L_001519B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001519B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001519E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[2].w[0] + 12484u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00151A0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151A08u);  if (depth < kMaxDepth) unit_000C(c, 157u, depth + 1u); else { c.pc = 0x00151F40u; return; } if (c.pc != 0x00151A08u) [[unlikely]] return; }
L_00151A08:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00151A0C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00151A24; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151A20u); set32(c.r[4], c.r[4].w[0] - 25664u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x00151A20u) [[unlikely]] return; }
L_00151A20:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00151A24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00151A40:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    if (c.r[16].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41520000u);  goto L_00151A68; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_00151B50; } }
L_00151A68:
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151A74u); c.r[4].d[0] = c.r[2].d[0] | 18008ull;  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00182360u; return; } if (c.pc != 0x00151A74u) [[unlikely]] return; }
L_00151A74:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_00151A84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00151B50; } }
L_00151A84:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12800u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00151AB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 22u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 12836u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00151AB0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00151AB0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00151AD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 23u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 12837u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00151AD0; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_00151AD0:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 18u)));  goto L_00151B40; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12480u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);  goto L_00151B38; }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151AF8u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00151AF8u) [[unlikely]] return; }
L_00151AF8:
    set32(c.r[2], 0u + 24576u);
    set32(c.r[3], 0u + 255u);
    st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 48u);
    st8((c.r[29].w[0] + 50u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[29].w[0] + 51u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 18u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12480u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151B30u); st32((c.r[29].w[0] + 56u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000C(c, 218u, depth + 1u); else { c.pc = 0x00152AB0u; return; } if (c.pc != 0x00151B30u) [[unlikely]] return; }
L_00151B30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00151B50; } }
L_00151B38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_00151B50; } }
L_00151B40:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 22u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 23u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151B50u); c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_000D(c, 47u, depth + 1u); else { c.pc = 0x00154670u; return; } if (c.pc != 0x00151B50u) [[unlikely]] return; }
L_00151B50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00151B70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12484u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00151B98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65530ull;  if (t) { goto L_00151BA4; } }
L_00151B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151BA0u);  if (depth < kMaxDepth) unit_000C(c, 176u, depth + 1u); else { c.pc = 0x001522E0u; return; } if (c.pc != 0x00151BA0u) [[unlikely]] return; }
L_00151BA0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00151BA4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00151BB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12484u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00151BD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65530ull;  if (t) { goto L_00151BE4; } }
L_00151BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151BE0u);  if (depth < kMaxDepth) unit_000C(c, 178u, depth + 1u); else { c.pc = 0x00152320u; return; } if (c.pc != 0x00151BE0u) [[unlikely]] return; }
L_00151BE0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00151BE4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00151BF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 12484u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00151C14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65530ull;  if (t) { goto L_00151C20; } }
L_00151C14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151C1Cu);  if (depth < kMaxDepth) unit_000C(c, 186u, depth + 1u); else { c.pc = 0x00152460u; return; } if (c.pc != 0x00151C1Cu) [[unlikely]] return; }
L_00151C1C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00151C20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00151C30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 12484u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00151C68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65530ull;  if (t) { goto L_00151CA8; } }
L_00151C68:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00151C78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151C78u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 172u, depth + 1u); else { c.pc = 0x00152270u; return; } if (c.pc != 0x00151C78u) [[unlikely]] return; }
L_00151C78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 12484u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151C94u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_000C(c, 195u, depth + 1u); else { c.pc = 0x00152580u; return; } if (c.pc != 0x00151C94u) [[unlikely]] return; }
L_00151C94:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00151CA8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[2].d[0] = c.r[2].d[0] | 65530ull;
    c.budget -= 2;
L_00151CA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00151CC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12484u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00151CE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151CE4u);  if (depth < kMaxDepth) unit_000C(c, 204u, depth + 1u); else { c.pc = 0x00152790u; return; } if (c.pc != 0x00151CE4u) [[unlikely]] return; }
L_00151CE4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00151CF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12484u)));
    c.budget -= 8;
    if (c.r[4].d[0] != 0ull) { set32(c.r[7], 0u + 1u);  goto L_00151D1C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65530ull;  if (t) { goto L_00151D3C; } }
L_00151D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151D24u);  if (depth < kMaxDepth) unit_000C(c, 206u, depth + 1u); else { c.pc = 0x00152840u; return; } if (c.pc != 0x00151D24u) [[unlikely]] return; }
L_00151D24:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00151D3C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65530ull;  if (t) { goto L_00151D3C; } }
L_00151D3C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00151D50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12484u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00151D74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151D74u);  if (depth < kMaxDepth) unit_000C(c, 209u, depth + 1u); else { c.pc = 0x001528F0u; return; } if (c.pc != 0x00151D74u) [[unlikely]] return; }
L_00151D74:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00151D80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12484u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00151DA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00151DBC; } }
L_00151DA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151DACu);  if (depth < kMaxDepth) unit_000C(c, 174u, depth + 1u); else { c.pc = 0x001522A0u; return; } if (c.pc != 0x00151DACu) [[unlikely]] return; }
L_00151DAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00151DBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));  if (t) { goto L_00151DBC; } }
L_00151DBC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00151DD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[7], c.r[31].w[0] - 8u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[3].d[0] = c.r[3].d[0] | 16706ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 8456u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[6], 0u + 32u);
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151E24u); set32(c.r[4], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00151E24u) [[unlikely]] return; }
L_00151E24:
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00151E50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00151ECC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8456u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151E7Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 186u, depth + 1u); else { c.pc = 0x00152460u; return; } if (c.pc != 0x00151E7Cu) [[unlikely]] return; }
L_00151E7C:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00151E94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151E90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00151E90u) [[unlikely]] return; }
L_00151E90:
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 1;
L_00151E94:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_00151EB8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 7;
L_00151EB8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00151ED0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151ECCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00151ECCu) [[unlikely]] return; }
L_00151ECC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00151ED0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00151EF0:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    c.budget -= 2;
L_00151EF8:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 20u)));  if (t) { goto L_00151F08; } }
L_00151F04:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_00151F08:
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00151F04u | kUnwind; return; } goto L_00151F04; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[5].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00151EF8u | kUnwind; return; } goto L_00151EF8; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00151F40:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const bool t = c.r[21].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00151F90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00152238; } }
L_00151F90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53440000u);
    set32(c.r[16], ld32((c.r[21].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151FA0u); c.r[4].d[0] = c.r[2].d[0] | 16968ull;  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00182360u; return; } if (c.pc != 0x00151FA0u) [[unlikely]] return; }
L_00151FA0:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[21].w[0] + 8u)));  goto L_00151FB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00152238; } }
L_00151FB0:
    set32(c.r[4], 0u + 72u);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151FC8u); set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x00151FC8u) [[unlikely]] return; }
L_00151FC8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00151FDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00152238; } }
L_00151FDC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151FE8u); set32(c.r[6], 0u + 72u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00151FE8u) [[unlikely]] return; }
L_00151FE8:
    st32((c.r[19].w[0] + 60u), c.r[21].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[21].w[0] + 27u));
    st32((c.r[19].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152008u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x00152008u) [[unlikely]] return; }
L_00152008:
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015201Cu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x0015201Cu) [[unlikely]] return; }
L_0015201C:
    st32((c.r[19].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_001520F8; } }
L_0015202C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152034u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00182360u; return; } if (c.pc != 0x00152034u) [[unlikely]] return; }
L_00152034:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41520000u);
    c.r[3].d[0] = c.r[4].d[0] | 16964ull;
    c.budget -= 2;
L_0015203C:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_001520C8; }
    c.r[3].d[0] = c.r[4].d[0] | 18500ull;
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_001520B0; }
    c.r[3].d[0] = c.r[4].d[0] | 21329ull;
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 56u)));  goto L_00152080; }
    c.r[3].d[0] = c.r[4].d[0] | 18008ull;
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00152070; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_001520EC; } }
L_00152070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152078u);  if (depth < kMaxDepth) unit_000C(c, 126u, depth + 1u); else { c.pc = 0x00151A40u; return; } if (c.pc != 0x00152078u) [[unlikely]] return; }
L_00152078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001520E8; } }
L_00152080:
    set32(c.r[4], c.r[20].w[0] << 2);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_001520E8; } }
L_001520B0:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[19].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_001520E8; } }
L_001520C8:
    st32((c.r[19].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[19].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[22].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001520E8; } }
    st32((c.r[19].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 1;
L_001520E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_001520EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_001520F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x454F0000u);
    set32(c.r[23], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152108u); c.r[4].d[0] = c.r[2].d[0] | 17987ull;  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00182360u; return; } if (c.pc != 0x00152108u) [[unlikely]] return; }
L_00152108:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015202Cu | kUnwind; return; } goto L_0015202C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[21].w[0] + 25u));  goto L_00152154; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152128u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00152128u) [[unlikely]] return; }
L_00152128:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00152238; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00152148; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_00152148; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00152238; } }
L_00152148:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00152238; } }
L_00152154:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[2], 0u + 4u);  goto L_001521A4; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 64u)));  goto L_0015218C; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 64u)));  goto L_0015217C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[21].w[0] + 24u));  if (t) { goto L_001521AC; } }
L_0015217C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st16((c.r[19].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  goto L_001521A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 6u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001521A8; } }
L_0015218C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_0015219C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 6u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_001521A8; } }
L_0015219C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001521A8; } }
L_001521A4:
    st16((c.r[19].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001521A8:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 24u));
    c.budget -= 1;
L_001521AC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st16((c.r[19].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));  goto L_001521BC; }
    st16((c.r[19].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_001521BC:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = c.r[4].d[0] & 7ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[30].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 20u);  if (t) { goto L_00152230; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001521FC; } }
L_001521E0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[5], ld32((c.r[5].w[0])));  goto L_001521FC; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001521F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001521F4u) [[unlikely]] return; }
L_001521F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00152238; } }
L_001521FC:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001521E0u | kUnwind; return; } goto L_001521E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0])));  if (t) { goto L_00152214; } }
L_0015220C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_00152214:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015220Cu | kUnwind; return; } goto L_0015220C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[19].w[0]);  if (t) { goto L_00152234; } }
L_00152230:
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_00152234:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_00152238:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00152270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152284u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 174u, depth + 1u); else { c.pc = 0x001522A0u; return; } if (c.pc != 0x00152284u) [[unlikely]] return; }
L_00152284:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00152294; }
    st32((c.r[2].w[0] + 44u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_00152294:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001522A0:
    c.r[2].d[0] = c.r[5].d[0] & 7ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20u)));  if (t) { goto L_001522C4; } }
L_001522B4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[2], ld32((c.r[2].w[0])));  goto L_001522C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001522D0; } }
L_001522C4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001522B4u | kUnwind; return; } goto L_001522B4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001522D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001522E0:
    c.r[3].d[0] = c.r[5].d[0] & 7ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0] + 20u)));  if (t) { goto L_00152304; } }
L_001522F4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_00152304; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 60u), 0u);  if (t) { goto L_0015230C; } }
L_00152304:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001522F4u | kUnwind; return; } goto L_001522F4; }
L_0015230C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00152320:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[17].d[0] & 7ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 12480u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] + 20u);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00152438; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00152444; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_00152364:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[17].d[0]) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00152434; }
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[16].d[0]) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_00152384; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_00152388; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00152384:
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00152388:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_001523AC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12488u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001523A8u); set32(c.r[5], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_000D(c, 78u, depth + 1u); else { c.pc = 0x00154D80u; return; } if (c.pc != 0x001523A8u) [[unlikely]] return; }
L_001523A8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_001523AC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001523B8u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x001523B8u) [[unlikely]] return; }
L_001523B8:
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 255u);
    st8((c.r[29].w[0] + 50u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 51u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12480u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001523E4u); st32((c.r[29].w[0] + 52u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_000C(c, 218u, depth + 1u); else { c.pc = 0x00152AB0u; return; } if (c.pc != 0x001523E4u) [[unlikely]] return; }
L_001523E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  goto L_00152400; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001523F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001523F8u) [[unlikely]] return; }
L_001523F8:
    st32((c.r[16].w[0] + 40u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 2;
L_00152400:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00152414; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152410u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00152410u) [[unlikely]] return; }
L_00152410:
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 1;
L_00152414:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00152440; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152428u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00152428u) [[unlikely]] return; }
L_00152428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00152440; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00152434:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00152438:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00152364u | kUnwind; return; } goto L_00152364; }
L_00152440:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00152444:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00152460:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00152504; } }
L_00152484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[19].w[0] + c.r[3].w[0]);  if (t) { goto L_001524F4; } }
L_0015248C:
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 40u)));  goto L_001524B4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12488u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001524B0u); set32(c.r[5], ld32((c.r[17].w[0] + 44u)));  if (depth < kMaxDepth) unit_000D(c, 78u, depth + 1u); else { c.pc = 0x00154D80u; return; } if (c.pc != 0x001524B0u) [[unlikely]] return; }
L_001524B0:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_001524B4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 56u)));  goto L_001524CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001524C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001524C4u) [[unlikely]] return; }
L_001524C4:
    st32((c.r[17].w[0] + 40u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 2;
L_001524CC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001524E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001524DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001524DCu) [[unlikely]] return; }
L_001524DC:
    st32((c.r[17].w[0] + 56u), 0u);
    c.budget -= 1;
L_001524E0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 20u)));  goto L_001524F8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001524F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001524F4u) [[unlikely]] return; }
L_001524F4:
    set32(c.r[17], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_001524F8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015248Cu | kUnwind; return; } goto L_0015248C; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00152504:
    c.r[3].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00152484u | kUnwind; return; } goto L_00152484; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 12480u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00152560; }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152530u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00152530u) [[unlikely]] return; }
L_00152530:
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st16((c.r[29].w[0] + 80u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 255u);
    st8((c.r[29].w[0] + 82u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 83u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12480u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015255Cu); st32((c.r[29].w[0] + 84u), 0u);  if (depth < kMaxDepth) unit_000C(c, 218u, depth + 1u); else { c.pc = 0x00152AB0u; return; } if (c.pc != 0x0015255Cu) [[unlikely]] return; }
L_0015255C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00152560:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00152580:
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
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001525B8u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 174u, depth + 1u); else { c.pc = 0x001522A0u; return; } if (c.pc != 0x001525B8u) [[unlikely]] return; }
L_001525B8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 68u)));  goto L_001525CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00152764; } }
L_001525CC:
    c.r[2].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 4096ull;  goto L_001525E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00152764; } }
L_001525E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  goto L_00152600; }
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001525FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00152764; } }
L_001525FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_00152600:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00152610; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00152764; } }
L_00152610:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 56u)));  goto L_00152620; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00152674; } }
L_00152620:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 44u)));  goto L_00152674; }
    set32(c.r[4], ld32((c.r[21].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00152654; } }
L_00152634:
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[20].d[0] != c.r[2].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_00152654; }
    set32(c.r[17], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_00152654:
    c.r[1].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00152668; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], c.r[6].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00152634u | kUnwind; return; } goto L_00152634; }
L_00152668:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00152674; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_00152674:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001526D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12488u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152694u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_000D(c, 68u, depth + 1u); else { c.pc = 0x00154B40u; return; } if (c.pc != 0x00152694u) [[unlikely]] return; }
L_00152694:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 48u)));  goto L_001526B4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001526ACu); set32(c.r[4], c.r[4].w[0] - 25616u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x001526ACu) [[unlikely]] return; }
L_001526AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00152764; } }
L_001526B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] - 25552u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001526C8u); set32(c.r[7], c.r[17].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x001526C8u) [[unlikely]] return; }
L_001526C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[17].w[0]);
    c.budget -= 4;
L_001526D8:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[8].d[0] = c.r[17].d[0] + 0ull;  goto L_00152710; }
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[17].d[0] = ld16((c.r[16].w[0] + 6u));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12776u)));
    set32(c.r[10], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152708u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 230u, depth + 1u); else { c.pc = 0x00152D90u; return; } if (c.pc != 0x00152708u) [[unlikely]] return; }
L_00152708:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00152738; } }
L_00152710:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[17].d[0] = ld16((c.r[16].w[0] + 6u));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12776u)));
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152734u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 230u, depth + 1u); else { c.pc = 0x00152D90u; return; } if (c.pc != 0x00152734u) [[unlikely]] return; }
L_00152734:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_00152738:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[9], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12776u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[16].w[0] + 52u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015275Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 230u, depth + 1u); else { c.pc = 0x00152D90u; return; } if (c.pc != 0x0015275Cu) [[unlikely]] return; }
L_0015275C:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00152764:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00152790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001527A0u);  if (depth < kMaxDepth) unit_000C(c, 174u, depth + 1u); else { c.pc = 0x001522A0u; return; } if (c.pc != 0x001527A0u) [[unlikely]] return; }
L_001527A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[2].w[0] + 20u)));  goto L_001527B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015282C; } }
L_001527B0:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[4].d[0]) { set32(c.r[4], 0u + 4u);  goto L_001527D4; }
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001527D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0015282C; } }
L_001527D0:
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_001527D4:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0015282C; }
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[2], 0u + 2u);  goto L_001527F4; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015282C; } }
L_001527F4:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0015282C; }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_00152810; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015282C; } }
L_00152810:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0015282C; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00152828; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015282C; } }
L_00152828:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0015282C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00152840:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152860u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 174u, depth + 1u); else { c.pc = 0x001522A0u; return; } if (c.pc != 0x00152860u) [[unlikely]] return; }
L_00152860:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  goto L_00152874; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001528D4; } }
L_00152874:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 64u)));  goto L_00152884; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001528D4; } }
L_00152884:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_00152898; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001528D4; } }
L_00152898:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12776u)));
    set32(c.r[10], c.r[17].w[0] << 2);
    c.r[7].d[0] = ld16((c.r[16].w[0] + 6u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[9], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[10], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001528CCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 230u, depth + 1u); else { c.pc = 0x00152D90u; return; } if (c.pc != 0x001528CCu) [[unlikely]] return; }
L_001528CC:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001528D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001528F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152900u);  if (depth < kMaxDepth) unit_000C(c, 174u, depth + 1u); else { c.pc = 0x001522A0u; return; } if (c.pc != 0x00152900u) [[unlikely]] return; }
L_00152900:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 28u)));  goto L_0015290C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0015290C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00152920:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[6], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[2].d[0] | 16706ull;
    set32(c.r[3], c.r[3].w[0] + 8488u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[17].w[0] << 4);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[16], c.r[2].w[0] << 2);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152988u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x00152988u) [[unlikely]] return; }
L_00152988:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001529B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015299Cu); set32(c.r[4], c.r[4].w[0] - 25488u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x0015299Cu) [[unlikely]] return; }
L_0015299C:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001529F8; } }
L_001529B0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull | 65535ull;  if (t) { goto L_001529D4; } }
L_001529BC:
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[3].w[0] + 64u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 6;
L_001529D4:
    c.r[3].d[0] = c.r[5].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[5].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001529BCu | kUnwind; return; } goto L_001529BC; }
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0] - 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 24u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 26u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 30u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 6;
L_001529F8:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00152A20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00152A94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8488u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00152A5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152A5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00152A5Cu) [[unlikely]] return; }
L_00152A5C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_00152A80; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 7;
L_00152A80:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00152A98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152A94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00152A94u) [[unlikely]] return; }
L_00152A94:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00152A98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00152AB0:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 30u));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 24u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { c.r[9].d[0] = ld16((c.r[4].w[0] + 28u));  goto L_00152ACC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00152B50; } }
L_00152ACC:
    set32(c.r[7], c.r[5].w[0] + 4u);
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], 0u + 15u);
    c.r[2].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[8], c.r[9].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[6].w[0] + c.r[8].w[0]);
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[8].w[0] + 4u);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 2u));
    st8((c.r[8].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 3u));
    st8((c.r[8].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
L_00152B04:
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00152B04u | kUnwind; return; } goto L_00152B04; } }
    c.r[5].d[0] = ld16((c.r[4].w[0] + 28u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 64u)));
    st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 12;
L_00152B50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00152B60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[6], 0u + 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152B88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00152B88u) [[unlikely]] return; }
L_00152B88:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 24u));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { set32(c.r[6], c.r[29].w[0] + 48u);  goto L_00152C60; }
    c.r[6].d[0] = ld16((c.r[16].w[0] + 26u));
    set32(c.r[4], c.r[29].w[0] + 52u);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], 0u + 15u);
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[5], c.r[6].w[0] + 4u);
    st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 2u));
    st8((c.r[29].w[0] + 50u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 3u));
    st8((c.r[29].w[0] + 51u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 15;
L_00152BD0:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00152BD0u | kUnwind; return; } goto L_00152BD0; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 26u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[6], 0u + 64u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152C10u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00152C10u) [[unlikely]] return; }
L_00152C10:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 26u));
    c.r[6].d[0] = 0ull | 65535ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 26u));
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 64u)));
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.budget -= 20;
L_00152C60:
    set32(c.r[5], 0u + 8u);
    c.budget -= 1;
L_00152C64:
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00152C64u | kUnwind; return; } goto L_00152C64; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00152CA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[6], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[2].d[0] | 16706ull;
    set32(c.r[3], c.r[3].w[0] + 8472u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), 0u);  c.pc = t; return; }
L_00152CF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00152D70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8472u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00152D2C; } }
L_00152D1C:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152D2Cu); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00152D2Cu) [[unlikely]] return; }
L_00152D2C:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00152D1Cu | kUnwind; return; } goto L_00152D1C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 24u), 0u);  if (t) { goto L_00152D58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_00152D58:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00152D74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152D70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00152D70u) [[unlikely]] return; }
L_00152D70:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00152D74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00152D90:
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
    c.r[16].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[4], 0u + 36u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152DDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x00152DDCu) [[unlikely]] return; }
L_00152DDC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00152E68; }
    set32(c.r[3], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[21].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_00152DFC; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[21].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 2;
L_00152DFC:
    set32(c.r[4], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[21].w[0] + 28u), c.r[4].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[19].w[0]));
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[18].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[20].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[22].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 32u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    c.budget -= 18;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 24u)));  goto L_00152E5C; }
    set32(c.r[3], ld32((c.r[21].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00152E58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00152E60; } }
L_00152E58:
    set32(c.r[3], ld32((c.r[21].w[0] + 24u)));
    c.budget -= 1;
L_00152E5C:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00152E60:
    st32((c.r[21].w[0] + 24u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_00152E68:
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
L_00152E90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152EB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00152EB8u) [[unlikely]] return; }
L_00152EB8:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 48u);  goto L_00152F40; }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 8u));
    st16((c.r[29].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 10u));
    st16((c.r[29].w[0] + 54u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152F20u); st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00152F20u) [[unlikely]] return; }
L_00152F20:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00152F3C; } }
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 1;
L_00152F3C:
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_00152F40:
    set32(c.r[5], 0u + 4u);
    c.budget -= 1;
L_00152F44:
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00152F44u | kUnwind; return; } goto L_00152F44; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00152F80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12792u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00152FFC; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00152FE0; } }
L_00152FB0:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1536u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 11028u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00152FE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152FD0u);  if (depth < kMaxDepth) unit_000D(c, 192u, depth + 1u); else { c.pc = 0x00156030u; return; } if (c.pc != 0x00152FD0u) [[unlikely]] return; }
L_00152FD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00152FDC; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00152FDC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00152FE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12824u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00152FB0u | kUnwind; return; } goto L_00152FB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152FFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 2u, depth + 1u); else { c.pc = 0x00180010u; return; } if (c.pc != 0x00152FFCu) [[unlikely]] return; }
L_00152FFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153004u);  if (depth < kMaxDepth) unit_000C(c, 296u, depth + 1u); else { c.pc = 0x00153770u; return; } if (c.pc != 0x00153004u) [[unlikely]] return; }
L_00153004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015300Cu);  if (depth < kMaxDepth) unit_000C(c, 312u, depth + 1u); else { c.pc = 0x00153A70u; return; } if (c.pc != 0x0015300Cu) [[unlikely]] return; }
L_0015300C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12792u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015303C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153028u);  if (depth < kMaxDepth) unit_000C(c, 251u, depth + 1u); else { c.pc = 0x00153110u; return; } if (c.pc != 0x00153028u) [[unlikely]] return; }
L_00153028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015303C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65534ull;  if (t) { goto L_001530FC; } }
L_0015303C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 1;
L_00153040:
    set32(c.r[3], ld32((c.r[2].w[0] + 12792u)));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[3].d[0] & 16ull;  goto L_00153058; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001530FC; } }
L_00153058:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_001530A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153068u);  if (depth < kMaxDepth) unit_000C(c, 303u, depth + 1u); else { c.pc = 0x001538A0u; return; } if (c.pc != 0x00153068u) [[unlikely]] return; }
L_00153068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00153078; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153078u);  if (depth < kMaxDepth) unit_000C(c, 309u, depth + 1u); else { c.pc = 0x001539F0u; return; } if (c.pc != 0x00153078u) [[unlikely]] return; }
L_00153078:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001530A8; } }
L_00153084:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1536u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 10964u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001530A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001530A4u);  if (depth < kMaxDepth) unit_000C(c, 70u, depth + 1u); else { c.pc = 0x00150D00u; return; } if (c.pc != 0x001530A4u) [[unlikely]] return; }
L_001530A4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001530A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12804u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00153084u | kUnwind; return; } goto L_00153084; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12492u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001530D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001530D4u);  if (depth < kMaxDepth) unit_000D(c, 85u, depth + 1u); else { c.pc = 0x00154EF0u; return; } if (c.pc != 0x001530D4u) [[unlikely]] return; }
L_001530D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12792u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001530FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001530F0u);  if (depth < kMaxDepth) unit_000C(c, 334u, depth + 1u); else { c.pc = 0x00153E70u; return; } if (c.pc != 0x001530F0u) [[unlikely]] return; }
L_001530F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001530F8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 318u, depth + 1u); else { c.pc = 0x00153B60u; return; } if (c.pc != 0x001530F8u) [[unlikely]] return; }
L_001530F8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001530FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00153110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12796u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001531D4; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[5].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_00153194; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_00153150; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00153608; } }
L_00153150:
    set32(c.r[3], ld32((c.r[2].w[0] + 12792u)));
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[3].d[0] & 128ull;  goto L_0015316C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12796u), c.r[4].w[0]);  if (t) { goto L_00153604; } }
L_0015316C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00153604; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015317Cu);  if (depth < kMaxDepth) unit_000C(c, 293u, depth + 1u); else { c.pc = 0x001536E0u; return; } if (c.pc != 0x0015317Cu) [[unlikely]] return; }
L_0015317C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 12796u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12796u), c.r[3].w[0]);  if (t) { goto L_00153604; } }
L_00153194:
    set32(c.r[2], ld32((c.r[2].w[0] + 12792u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00153604; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001531ACu);  if (depth < kMaxDepth) unit_000C(c, 298u, depth + 1u); else { c.pc = 0x00153800u; return; } if (c.pc != 0x001531ACu) [[unlikely]] return; }
L_001531AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001531BCu); st32((c.r[3].w[0] + 12780u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 293u, depth + 1u); else { c.pc = 0x001536E0u; return; } if (c.pc != 0x001531BCu) [[unlikely]] return; }
L_001531BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 12796u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12796u), c.r[3].w[0]);  if (t) { goto L_00153604; } }
L_001531D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12792u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00153604; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001531F4u);  if (depth < kMaxDepth) unit_000C(c, 298u, depth + 1u); else { c.pc = 0x00153800u; return; } if (c.pc != 0x001531F4u) [[unlikely]] return; }
L_001531F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153204u); st32((c.r[3].w[0] + 12784u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00153204u) [[unlikely]] return; }
L_00153204:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00153218; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153218u); set32(c.r[5], 0u + 320u);  if (depth < kMaxDepth) unit_000C(c, 211u, depth + 1u); else { c.pc = 0x00152920u; return; } if (c.pc != 0x00153218u) [[unlikely]] return; }
L_00153218:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 12480u), c.r[2].w[0]);  if (t) { goto L_0015322C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00153260; } }
L_0015322C:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[4], 0u + 64u);  goto L_00153264; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_00153260; }
    set32(c.r[25], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015325Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015325Cu) [[unlikely]] return; }
L_0015325C:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_00153260:
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_00153264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015326Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0015326Cu) [[unlikely]] return; }
L_0015326C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015327C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015327Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 148u, depth + 1u); else { c.pc = 0x00151DD0u; return; } if (c.pc != 0x0015327Cu) [[unlikely]] return; }
L_0015327C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 12484u), c.r[2].w[0]);  if (t) { goto L_0015328C; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_0015328C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153294u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00153294u) [[unlikely]] return; }
L_00153294:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001532A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001532A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 52u, depth + 1u); else { c.pc = 0x00154810u; return; } if (c.pc != 0x001532A4u) [[unlikely]] return; }
L_001532A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 12488u), c.r[2].w[0]);  if (t) { goto L_001532B4; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_001532B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001532BCu); set32(c.r[4], 0u + 25020u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001532BCu) [[unlikely]] return; }
L_001532BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001532CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001532CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 112u, depth + 1u); else { c.pc = 0x00155280u; return; } if (c.pc != 0x001532CCu) [[unlikely]] return; }
L_001532CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 12492u), c.r[2].w[0]);  if (t) { goto L_001532DC; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_001532DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001532E4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001532E4u) [[unlikely]] return; }
L_001532E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001532FC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001532FCu); set32(c.r[5], ld32((c.r[2].w[0] + 12804u)));  if (depth < kMaxDepth) unit_000C(c, 49u, depth + 1u); else { c.pc = 0x001509B0u; return; } if (c.pc != 0x001532FCu) [[unlikely]] return; }
L_001532FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 12496u), c.r[2].w[0]);  if (t) { goto L_0015330C; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_0015330C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00153344; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 12792u)));
    set32(c.r[4], 0u - 1025u);
    st32((c.r[3].w[0] + 12796u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFD0000u);
    c.r[4].d[0] = c.r[4].d[0] | 2048ull;
    c.r[2].d[0] = c.r[2].d[0] | 65534ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12792u), c.r[4].w[0]);  if (t) { goto L_00153608; } }
L_00153344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001533A4; } }
L_0015334C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153354u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00153354u) [[unlikely]] return; }
L_00153354:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00153370; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153370u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 61u, depth + 1u); else { c.pc = 0x00150BB0u; return; } if (c.pc != 0x00153370u) [[unlikely]] return; }
L_00153370:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 1536u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[4].w[0] + 10964u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 12496u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015339Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 58u, depth + 1u); else { c.pc = 0x00150AE0u; return; } if (c.pc != 0x0015339Cu) [[unlikely]] return; }
L_0015339C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_001533A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12808u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015334Cu | kUnwind; return; } goto L_0015334C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00153418; } }
L_001533C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001533C8u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001533C8u) [[unlikely]] return; }
L_001533C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001533E4; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001533E4u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 61u, depth + 1u); else { c.pc = 0x00150BB0u; return; } if (c.pc != 0x001533E4u) [[unlikely]] return; }
L_001533E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 1536u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[4].w[0] + 10964u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 12496u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153410u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_000C(c, 58u, depth + 1u); else { c.pc = 0x00150AE0u; return; } if (c.pc != 0x00153410u) [[unlikely]] return; }
L_00153410:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_00153418:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12812u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001533C0u | kUnwind; return; } goto L_001533C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0015348C; } }
L_00153434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015343Cu); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0015343Cu) [[unlikely]] return; }
L_0015343C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00153458; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153458u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 61u, depth + 1u); else { c.pc = 0x00150BB0u; return; } if (c.pc != 0x00153458u) [[unlikely]] return; }
L_00153458:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 1536u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[4].w[0] + 10964u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 12496u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153484u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_000C(c, 58u, depth + 1u); else { c.pc = 0x00150AE0u; return; } if (c.pc != 0x00153484u) [[unlikely]] return; }
L_00153484:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_0015348C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12816u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00153434u | kUnwind; return; } goto L_00153434; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00153500; } }
L_001534A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001534B0u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001534B0u) [[unlikely]] return; }
L_001534B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001534CC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001534CCu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 61u, depth + 1u); else { c.pc = 0x00150BB0u; return; } if (c.pc != 0x001534CCu) [[unlikely]] return; }
L_001534CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 1536u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[4].w[0] + 10964u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 12496u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001534F8u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_000C(c, 58u, depth + 1u); else { c.pc = 0x00150AE0u; return; } if (c.pc != 0x001534F8u) [[unlikely]] return; }
L_001534F8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_00153500:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12820u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001534A8u | kUnwind; return; } goto L_001534A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0015354C; } }
L_0015351C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153524u); set32(c.r[4], 0u + 100u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00153524u) [[unlikely]] return; }
L_00153524:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00153534; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153534u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 144u, depth + 1u); else { c.pc = 0x00155860u; return; } if (c.pc != 0x00153534u) [[unlikely]] return; }
L_00153534:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 1536u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 11028u), c.r[2].w[0]);
    c.budget -= 6;
L_0015354C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12824u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015351Cu | kUnwind; return; } goto L_0015351C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153568u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00153568u) [[unlikely]] return; }
L_00153568:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00153578; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153578u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 225u, depth + 1u); else { c.pc = 0x00152CA0u; return; } if (c.pc != 0x00153578u) [[unlikely]] return; }
L_00153578:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 12776u), c.r[2].w[0]);  if (t) { goto L_001535B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 12792u)));
    set32(c.r[4], 0u - 1025u);
    st32((c.r[3].w[0] + 12796u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFD0000u);
    c.r[4].d[0] = c.r[4].d[0] | 2048ull;
    c.r[2].d[0] = c.r[2].d[0] | 65534ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12792u), c.r[4].w[0]);  if (t) { goto L_00153608; } }
L_001535B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12792u)));
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001535D8; } }
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[2].w[0] + 12792u), c.r[3].w[0]);
    c.budget -= 4;
L_001535D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12792u)));
    st32((c.r[3].w[0] + 12796u), 0u);
    set32(c.r[3], 0u - 1025u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    st32((c.r[2].w[0] + 12792u), c.r[3].w[0]);
    c.budget -= 11;
L_00153604:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00153608:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00153620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 8192u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[16], c.r[16].w[0] + 12644u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153644u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 85u, depth + 1u); else { c.pc = 0x00128CC8u; return; } if (c.pc != 0x00153644u) [[unlikely]] return; }
L_00153644:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_00153664; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153658u); set32(c.r[4], c.r[4].w[0] - 25424u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x00153658u) [[unlikely]] return; }
L_00153658:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_00153678; } }
L_00153664:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);  goto L_00153674; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00153678; } }
L_00153674:
    c.r[2].d[0] = c.r[2].d[0] | 65534ull;
    c.budget -= 1;
L_00153678:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00153690:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_001536B8; } }
    c.r[1].d[0] = c.r[4].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001536B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 12352u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 5;
L_001536B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001536C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12352u);
    c.budget -= 5;
    { set32(c.r[6], 0u + 64u);  [[clang::musttail]] return unit_0018(c, 176u, depth); }
L_001536E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12792u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00153708; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00153760; } }
L_00153708:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153718u); st32((c.r[2].w[0] + 12764u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0001(c, 147u, depth + 1u); else { c.pc = 0x001251E0u; return; } if (c.pc != 0x00153718u) [[unlikely]] return; }
L_00153718:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[7], c.r[7].w[0] + 12352u);
    set32(c.r[8], 0u + 64u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12644u);
    set32(c.r[6], 0u + 1u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153748u); st64((c.r[29].w[0]), 0ull);  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x00153748u) [[unlikely]] return; }
L_00153748:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12792u)));
    c.r[4].d[0] = c.r[4].d[0] | 128ull;
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 12792u), c.r[4].w[0]);
    c.budget -= 6;
L_00153760:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00153770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12792u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_00153794; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001537E8; } }
L_00153794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015379Cu); set32(c.r[4], c.r[4].w[0] + 12644u);  if (depth < kMaxDepth) unit_0002(c, 113u, depth + 1u); else { c.pc = 0x001290A8u; return; } if (c.pc != 0x0015379Cu) [[unlikely]] return; }
L_0015379C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].d[0] = c.r[3].d[0] + 0ull;  goto L_001537E8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], 0u - 129u);
    set32(c.r[6], ld32((c.r[2].w[0] + 12792u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], 0u + 5u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    set32(c.r[2], ld32((c.r[2].w[0] + 12764u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; st32((c.r[3].w[0] + 12792u), c.r[5].w[0]);  if (t) { goto L_001537E4; } }
    set32(c.r[3], 0u - 4097u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[2].w[0] + 12792u), c.r[3].w[0]);
    c.budget -= 5;
L_001537E4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001537E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00153800:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12792u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_0015381C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00153820; } }
L_0015381C:
    set32(c.r[2], ld32((c.r[2].w[0] + 12352u)));
    c.budget -= 1;
L_00153820:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00153830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 8193u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 3;
L_0015383C:
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[16], c.r[16].w[0] + 12684u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153854u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 85u, depth + 1u); else { c.pc = 0x00128CC8u; return; } if (c.pc != 0x00153854u) [[unlikely]] return; }
L_00153854:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_00153874; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153868u); set32(c.r[4], c.r[4].w[0] - 25360u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x00153868u) [[unlikely]] return; }
L_00153868:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_00153888; } }
L_00153874:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);  goto L_00153884; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00153888; } }
L_00153884:
    c.r[2].d[0] = c.r[2].d[0] | 65534ull;
    c.budget -= 1;
L_00153888:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001538A0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12480u)));
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_001538CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001539D0; } }
L_001538CC:
    set32(c.r[2], ld32((c.r[2].w[0] + 12792u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld16((c.r[3].w[0] + 24u));  goto L_001538E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001539D0; } }
L_001538E4:
    c.budget -= 2;
    if (c.r[16].sd[0] <= 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_001539D0; }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001539AC; } }
L_001538F8:
    set32(c.r[5], ld32((c.r[2].w[0] + 12480u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153904u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000C(c, 220u, depth + 1u); else { c.pc = 0x00152B60u; return; } if (c.pc != 0x00153904u) [[unlikely]] return; }
L_00153904:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 64u));
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[4].d[0] = ld8((c.r[29].w[0] + 66u));
    c.r[8].d[0] = ld8((c.r[29].w[0] + 67u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].d[0] = ld16((c.r[29].w[0] + 64u));  if (t) { goto L_00153994; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[17].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + 1536u);
    set32(c.r[6], c.r[29].w[0] + 68u);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[7].w[0] + 16u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[7].w[0] + 18u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], c.r[29].w[0] + 132u);
    set32(c.r[4], 0u + 30u);
    st8((c.r[7].w[0] + 19u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 10;
L_00153944:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00153944u | kUnwind; return; } goto L_00153944; } }
    set32(c.r[4], c.r[7].w[0] + 20u);
    set32(c.r[5], c.r[29].w[0] + 132u);
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
L_00153970:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00153970u | kUnwind; return; } goto L_00153970; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_001539A8; } }
L_00153994:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 25296u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001539A8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x001539A8u) [[unlikely]] return; }
L_001539A8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001539AC:
    c.r[1].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001539C4; } }
    c.r[2].d[0] = c.r[17].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001538F8u | kUnwind; return; } goto L_001538F8; }
L_001539C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[2].w[0] + 1536u), c.r[17].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_001539D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001539F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 1536u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00153A5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153A10u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 147u, depth + 1u); else { c.pc = 0x001251E0u; return; } if (c.pc != 0x00153A10u) [[unlikely]] return; }
L_00153A10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 12684u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + 1536u);
    set32(c.r[8], 0u + 8208u);
    set32(c.r[9], c.r[9].w[0] + 12416u);
    set32(c.r[10], 0u + 64u);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153A44u); st64((c.r[29].w[0]), 0ull);  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x00153A44u) [[unlikely]] return; }
L_00153A44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 12792u)));
    c.r[4].d[0] = c.r[4].d[0] | 512ull;
    st32((c.r[3].w[0] + 12792u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_00153A5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00153A70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12792u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00153AE4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153A98u); set32(c.r[4], c.r[4].w[0] + 12684u);  if (depth < kMaxDepth) unit_0002(c, 113u, depth + 1u); else { c.pc = 0x001290A8u; return; } if (c.pc != 0x00153A98u) [[unlikely]] return; }
L_00153A98:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00153AE0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 12416u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00153AC8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153AC8u); set32(c.r[6], 0u + 8208u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00153AC8u) [[unlikely]] return; }
L_00153AC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], 0u - 513u);
    set32(c.r[5], ld32((c.r[3].w[0] + 12792u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[3].w[0] + 12792u), c.r[4].w[0]);
    c.budget -= 6;
L_00153AE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00153AE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00153AF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 8194u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[16], c.r[16].w[0] + 12724u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153B14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 85u, depth + 1u); else { c.pc = 0x00128CC8u; return; } if (c.pc != 0x00153B14u) [[unlikely]] return; }
L_00153B14:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_00153B34; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153B28u); set32(c.r[4], c.r[4].w[0] - 25232u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x00153B28u) [[unlikely]] return; }
L_00153B28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_00153B48; } }
L_00153B34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);  goto L_00153B44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00153B48; } }
L_00153B44:
    c.r[2].d[0] = c.r[2].d[0] | 65534ull;
    c.budget -= 1;
L_00153B48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00153B60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 12792u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[16], c.r[16].w[0] + 9792u);
    c.r[3].d[0] = c.r[4].d[0] & 256ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 12724u);  if (t) { goto L_00153E58; } }
    c.r[2].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_00153CC4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 10377u));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_00153C70; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 10376u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 1536u);
    c.budget -= 5;
L_00153BC4:
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 8824u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00153BC4u | kUnwind; return; } goto L_00153BC4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 255u);
    set32(c.r[5], c.r[5].w[0] + 1536u);
    set32(c.r[2], c.r[6].w[0] << 1);
    c.budget -= 5;
L_00153BF4:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00153C04:
    set32(c.r[2], c.r[4].w[0] + c.r[7].w[0]);
    st8((c.r[2].w[0] + 8776u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(24ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00153C04u | kUnwind; return; } goto L_00153C04; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[6].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00153BF4u | kUnwind; return; } goto L_00153BF4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153C3Cu); set32(c.r[4], c.r[4].w[0] - 25168u);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x00153C3Cu) [[unlikely]] return; }
L_00153C3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153C48u); set32(c.r[4], c.r[4].w[0] - 25120u);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x00153C48u) [[unlikely]] return; }
L_00153C48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153C54u); set32(c.r[4], c.r[4].w[0] - 25168u);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x00153C54u) [[unlikely]] return; }
L_00153C54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], 0u - 102u);
    set32(c.r[5], ld32((c.r[3].w[0] + 12792u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12792u), c.r[4].w[0]);  if (t) { goto L_00153CBC; } }
L_00153C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153C78u);  if (depth < kMaxDepth) unit_0001(c, 147u, depth + 1u); else { c.pc = 0x001251E0u; return; } if (c.pc != 0x00153C78u) [[unlikely]] return; }
L_00153C78:
    set32(c.r[5], 0u + 1u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], 0u + 512u);
    set32(c.r[9], c.r[9].w[0] + 10304u);
    set32(c.r[10], 0u + 2048u);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153CA4u); st64((c.r[29].w[0]), 0ull);  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x00153CA4u) [[unlikely]] return; }
L_00153CA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 12792u)));
    c.r[4].d[0] = c.r[4].d[0] | 256ull;
    c.r[4].d[0] = c.r[4].d[0] | 16384ull;
    st32((c.r[3].w[0] + 12792u), c.r[4].w[0]);
    c.budget -= 6;
L_00153CBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00153E5C; } }
L_00153CC4:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00153CEC; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00153CEC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00153CEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00153DA4; } }
L_00153CEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 12776u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153CFCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000C(c, 232u, depth + 1u); else { c.pc = 0x00152E90u; return; } if (c.pc != 0x00153CFCu) [[unlikely]] return; }
L_00153CFC:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 68u));
    set32(c.r[4], 0u + 1u);
    c.r[2].d[0] = ld16((c.r[29].w[0] + 70u));
    set32(c.r[7], ld32((c.r[29].w[0] + 64u)));
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    st32((c.r[16].w[0]), c.r[7].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 20;
    { const bool t = c.r[7].d[0] != c.r[4].d[0]; st32((c.r[16].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_00153DA0; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 4u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_00153D98; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_00153D88; }
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[4].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_00153D78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00153DA0; } }
L_00153D78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153D80u); set32(c.r[4], c.r[4].w[0] - 25072u);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x00153D80u) [[unlikely]] return; }
L_00153D80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00153DA0; } }
L_00153D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153D90u); set32(c.r[4], c.r[4].w[0] - 25008u);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x00153D90u) [[unlikely]] return; }
L_00153D90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00153DA0; } }
L_00153D98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153DA0u); set32(c.r[4], c.r[4].w[0] - 24944u);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x00153DA0u) [[unlikely]] return; }
L_00153DA0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00153DA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153DACu);  if (depth < kMaxDepth) unit_0001(c, 147u, depth + 1u); else { c.pc = 0x001251E0u; return; } if (c.pc != 0x00153DACu) [[unlikely]] return; }
L_00153DAC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_00153E04; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + 9792u);
    set32(c.r[8], 0u + 512u);
    set32(c.r[9], c.r[9].w[0] + 10304u);
    set32(c.r[10], 0u + 2048u);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153DE8u); st64((c.r[29].w[0]), 0ull);  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x00153DE8u) [[unlikely]] return; }
L_00153DE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], 0u - 16385u);
    set32(c.r[5], ld32((c.r[3].w[0] + 12792u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12792u), c.r[4].w[0]);  if (t) { goto L_00153E44; } }
L_00153E04:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 9792u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], 0u + 512u);
    set32(c.r[9], c.r[9].w[0] + 10304u);
    set32(c.r[10], 0u + 2048u);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153E30u); st64((c.r[29].w[0]), 0ull);  if (depth < kMaxDepth) unit_0002(c, 97u, depth + 1u); else { c.pc = 0x00128EA8u; return; } if (c.pc != 0x00153E30u) [[unlikely]] return; }
L_00153E30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 12792u)));
    c.r[4].d[0] = c.r[4].d[0] | 16384ull;
    st32((c.r[3].w[0] + 12792u), c.r[4].w[0]);
    c.budget -= 5;
L_00153E44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 12792u)));
    c.r[4].d[0] = c.r[4].d[0] | 256ull;
    st32((c.r[3].w[0] + 12792u), c.r[4].w[0]);
    c.budget -= 5;
L_00153E58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00153E5C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00153E70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12792u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 9792u);  if (t) { [[clang::musttail]] return unit_000D(c, 6u, depth); } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153EA4u); set32(c.r[4], c.r[4].w[0] + 12724u);  if (depth < kMaxDepth) unit_0002(c, 113u, depth + 1u); else { c.pc = 0x001290A8u; return; } if (c.pc != 0x00153EA4u) [[unlikely]] return; }
L_00153EA4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  [[clang::musttail]] return unit_000D(c, 7u, depth); }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], 0u - 257u);
    set32(c.r[5], ld32((c.r[3].w[0] + 12792u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[3].w[0] + 12792u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_000D(c, 6u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[7], ld32((c.r[2].w[0] + 10760u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[4].w[0] + 9792u), c.r[7].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 10764u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[8], ld32((c.r[4].w[0] + 10768u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st16((c.r[3].w[0] + 9796u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[7].d[0] = ld16((c.r[2].w[0] + 10766u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[3].w[0] + 9800u), c.r[8].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st16((c.r[6].w[0] + 9798u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[5], ld32((c.r[2].w[0] + 10772u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[9], ld32((c.r[3].w[0] + 10780u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[4].w[0] + 9804u), c.r[5].w[0]);
    set32(c.r[10], ld32((c.r[2].w[0] + 10776u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 10788u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[6].w[0] + 9812u), c.r[9].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[7].w[0] + 9808u), c.r[10].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0] + 10784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[4].w[0] + 9816u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 9820u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153F70u); set32(c.r[4], ld32((c.r[2].w[0] + 12484u)));  if (depth < kMaxDepth) unit_000C(c, 174u, depth + 1u); else { c.pc = 0x001522A0u; return; } if (c.pc != 0x00153F70u) [[unlikely]] return; }
L_00153F70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_000D(c, 5u, depth); } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[17].d[0] = c.r[3].d[0] + 0ull;  goto L_00153FF0; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[17].d[0] = c.r[3].d[0] + 0ull;  goto L_00153FF0; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[17].d[0] = c.r[3].d[0] + 0ull;  goto L_00153FF0; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[17].d[0] = c.r[3].d[0] + 0ull;  goto L_00153FF0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00153FF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00153FF0; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00153FF0; } }
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00153FF0; } }
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00153FF0; } }
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00153FF0; } }
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_00153FF0:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 4u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 4u);  [[clang::musttail]] return unit_000D(c, 4u, depth); }
    [[clang::musttail]] return unit_000D(c, 1u, depth);
}

}
