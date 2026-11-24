#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003F[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0,
    5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36,
    0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0,
    0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0,
    0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0,
    0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78,
    0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0,
    0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 89, 0,
    90, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0,
    0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0,
    0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    122, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125,
    0, 0, 126, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135,
    0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0,
    0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0,
    0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0,
    0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235,
    0, 236, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0,
    0, 241, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0,
    0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271,
    0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0,
    0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0,
    303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0,
    0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0,
    0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_003F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0021C000;
    case 2u: goto L_0021C02C;
    case 3u: goto L_0021C038;
    case 4u: goto L_0021C060;
    case 5u: goto L_0021C080;
    case 6u: goto L_0021C094;
    case 7u: goto L_0021C0B0;
    case 8u: goto L_0021C0E0;
    case 9u: goto L_0021C0F0;
    case 10u: goto L_0021C10C;
    case 11u: goto L_0021C120;
    case 12u: goto L_0021C134;
    case 13u: goto L_0021C148;
    case 14u: goto L_0021C170;
    case 15u: goto L_0021C194;
    case 16u: goto L_0021C1C0;
    case 17u: goto L_0021C1DC;
    case 18u: goto L_0021C200;
    case 19u: goto L_0021C220;
    case 20u: goto L_0021C240;
    case 21u: goto L_0021C2A8;
    case 22u: goto L_0021C2D4;
    case 23u: goto L_0021C2F0;
    case 24u: goto L_0021C35C;
    case 25u: goto L_0021C3B8;
    case 26u: goto L_0021C3E4;
    case 27u: goto L_0021C3F8;
    case 28u: goto L_0021C468;
    case 29u: goto L_0021C480;
    case 30u: goto L_0021C4C0;
    case 31u: goto L_0021C4D8;
    case 32u: goto L_0021C530;
    case 33u: goto L_0021C548;
    case 34u: goto L_0021C5A0;
    case 35u: goto L_0021C5B8;
    case 36u: goto L_0021C5FC;
    case 37u: goto L_0021C614;
    case 38u: goto L_0021C66C;
    case 39u: goto L_0021C684;
    case 40u: goto L_0021C6D0;
    case 41u: goto L_0021C738;
    case 42u: goto L_0021C740;
    case 43u: goto L_0021C760;
    case 44u: goto L_0021C768;
    case 45u: goto L_0021C788;
    case 46u: goto L_0021C7E0;
    case 47u: goto L_0021C804;
    case 48u: goto L_0021C83C;
    case 49u: goto L_0021C844;
    case 50u: goto L_0021C880;
    case 51u: goto L_0021C8C4;
    case 52u: goto L_0021C8F8;
    case 53u: goto L_0021C908;
    case 54u: goto L_0021CA0C;
    case 55u: goto L_0021CA18;
    case 56u: goto L_0021CA4C;
    case 57u: goto L_0021CAA4;
    case 58u: goto L_0021CAFC;
    case 59u: goto L_0021CB74;
    case 60u: goto L_0021CBB0;
    case 61u: goto L_0021CBD4;
    case 62u: goto L_0021CC24;
    case 63u: goto L_0021CC48;
    case 64u: goto L_0021CC64;
    case 65u: goto L_0021CCB0;
    case 66u: goto L_0021CD14;
    case 67u: goto L_0021CDA4;
    case 68u: goto L_0021CE58;
    case 69u: goto L_0021CE9C;
    case 70u: goto L_0021CEF0;
    case 71u: goto L_0021CFA4;
    case 72u: goto L_0021CFF4;
    case 73u: goto L_0021D028;
    case 74u: goto L_0021D054;
    case 75u: goto L_0021D084;
    case 76u: goto L_0021D090;
    case 77u: goto L_0021D0C4;
    case 78u: goto L_0021D0FC;
    case 79u: goto L_0021D108;
    case 80u: goto L_0021D13C;
    case 81u: goto L_0021D178;
    case 82u: goto L_0021D184;
    case 83u: goto L_0021D1B8;
    case 84u: goto L_0021D1F0;
    case 85u: goto L_0021D1FC;
    case 86u: goto L_0021D230;
    case 87u: goto L_0021D25C;
    case 88u: goto L_0021D270;
    case 89u: goto L_0021D278;
    case 90u: goto L_0021D280;
    case 91u: goto L_0021D288;
    case 92u: goto L_0021D2A4;
    case 93u: goto L_0021D2D8;
    case 94u: goto L_0021D310;
    case 95u: goto L_0021D31C;
    case 96u: goto L_0021D350;
    case 97u: goto L_0021D38C;
    case 98u: goto L_0021D398;
    case 99u: goto L_0021D3C0;
    case 100u: goto L_0021D3F8;
    case 101u: goto L_0021D41C;
    case 102u: goto L_0021D438;
    case 103u: goto L_0021D49C;
    case 104u: goto L_0021D4D0;
    case 105u: goto L_0021D4DC;
    case 106u: goto L_0021D550;
    case 107u: goto L_0021D55C;
    case 108u: goto L_0021D5C0;
    case 109u: goto L_0021D628;
    case 110u: goto L_0021D710;
    case 111u: goto L_0021D7F4;
    case 112u: goto L_0021D804;
    case 113u: goto L_0021D80C;
    case 114u: goto L_0021D840;
    case 115u: goto L_0021D850;
    case 116u: goto L_0021D890;
    case 117u: goto L_0021D8B8;
    case 118u: goto L_0021D8D0;
    case 119u: goto L_0021D900;
    case 120u: goto L_0021D940;
    case 121u: goto L_0021D960;
    case 122u: goto L_0021D980;
    case 123u: goto L_0021D984;
    case 124u: goto L_0021D9E0;
    case 125u: goto L_0021D9FC;
    case 126u: goto L_0021DA08;
    case 127u: goto L_0021DA18;
    case 128u: goto L_0021DA20;
    case 129u: goto L_0021DA60;
    case 130u: goto L_0021DA8C;
    case 131u: goto L_0021DA9C;
    case 132u: goto L_0021DAA8;
    case 133u: goto L_0021DAE0;
    case 134u: goto L_0021DB60;
    case 135u: goto L_0021DB7C;
    case 136u: goto L_0021DB84;
    case 137u: goto L_0021DBB4;
    case 138u: goto L_0021DBEC;
    case 139u: goto L_0021DC24;
    case 140u: goto L_0021DC44;
    case 141u: goto L_0021DC68;
    case 142u: goto L_0021DC94;
    case 143u: goto L_0021DCD0;
    case 144u: goto L_0021DD00;
    case 145u: goto L_0021DD34;
    case 146u: goto L_0021DD80;
    case 147u: goto L_0021DD8C;
    case 148u: goto L_0021DDB0;
    case 149u: goto L_0021DDD0;
    case 150u: goto L_0021DE10;
    case 151u: goto L_0021DE48;
    case 152u: goto L_0021DE80;
    case 153u: goto L_0021DEA0;
    case 154u: goto L_0021DED4;
    case 155u: goto L_0021DEE0;
    case 156u: goto L_0021DF30;
    case 157u: goto L_0021DF4C;
    case 158u: goto L_0021DF54;
    case 159u: goto L_0021DF80;
    case 160u: goto L_0021DF88;
    case 161u: goto L_0021DFB0;
    case 162u: goto L_0021DFD0;
    case 163u: goto L_0021E030;
    case 164u: goto L_0021E05C;
    case 165u: goto L_0021E08C;
    case 166u: goto L_0021E0C0;
    case 167u: goto L_0021E0EC;
    case 168u: goto L_0021E11C;
    case 169u: goto L_0021E150;
    case 170u: goto L_0021E184;
    case 171u: goto L_0021E1B8;
    case 172u: goto L_0021E1F0;
    case 173u: goto L_0021E21C;
    case 174u: goto L_0021E24C;
    case 175u: goto L_0021E280;
    case 176u: goto L_0021E2AC;
    case 177u: goto L_0021E2DC;
    case 178u: goto L_0021E310;
    case 179u: goto L_0021E33C;
    case 180u: goto L_0021E36C;
    case 181u: goto L_0021E3A0;
    case 182u: goto L_0021E3DC;
    case 183u: goto L_0021E40C;
    case 184u: goto L_0021E440;
    case 185u: goto L_0021E484;
    case 186u: goto L_0021E4B8;
    case 187u: goto L_0021E4F0;
    case 188u: goto L_0021E52C;
    case 189u: goto L_0021E55C;
    case 190u: goto L_0021E590;
    case 191u: goto L_0021E5CC;
    case 192u: goto L_0021E600;
    case 193u: goto L_0021E640;
    case 194u: goto L_0021E6D8;
    case 195u: goto L_0021E6F0;
    case 196u: goto L_0021E73C;
    case 197u: goto L_0021E774;
    case 198u: goto L_0021E790;
    case 199u: goto L_0021E7C0;
    case 200u: goto L_0021E7D4;
    case 201u: goto L_0021E7F0;
    case 202u: goto L_0021E830;
    case 203u: goto L_0021E840;
    case 204u: goto L_0021E888;
    case 205u: goto L_0021E8A4;
    case 206u: goto L_0021E8CC;
    case 207u: goto L_0021E900;
    case 208u: goto L_0021E938;
    case 209u: goto L_0021E968;
    case 210u: goto L_0021E974;
    case 211u: goto L_0021E98C;
    case 212u: goto L_0021E9A8;
    case 213u: goto L_0021E9D0;
    case 214u: goto L_0021EA00;
    case 215u: goto L_0021EAD0;
    case 216u: goto L_0021EB28;
    case 217u: goto L_0021EB40;
    case 218u: goto L_0021EB6C;
    case 219u: goto L_0021EC0C;
    case 220u: goto L_0021EC30;
    case 221u: goto L_0021EC4C;
    case 222u: goto L_0021EC64;
    case 223u: goto L_0021EC8C;
    case 224u: goto L_0021ECA0;
    case 225u: goto L_0021ED08;
    case 226u: goto L_0021ED30;
    case 227u: goto L_0021EDB0;
    case 228u: goto L_0021EDD4;
    case 229u: goto L_0021EDF8;
    case 230u: goto L_0021EE1C;
    case 231u: goto L_0021EE2C;
    case 232u: goto L_0021EE34;
    case 233u: goto L_0021EE50;
    case 234u: goto L_0021EE68;
    case 235u: goto L_0021EE7C;
    case 236u: goto L_0021EE84;
    case 237u: goto L_0021EE90;
    case 238u: goto L_0021EE98;
    case 239u: goto L_0021EEB0;
    case 240u: goto L_0021EEF0;
    case 241u: goto L_0021EF04;
    case 242u: goto L_0021EF18;
    case 243u: goto L_0021EF20;
    case 244u: goto L_0021EF34;
    case 245u: goto L_0021EF48;
    case 246u: goto L_0021EF54;
    case 247u: goto L_0021EF5C;
    case 248u: goto L_0021EF74;
    case 249u: goto L_0021F094;
    case 250u: goto L_0021F0A4;
    case 251u: goto L_0021F0C0;
    case 252u: goto L_0021F0E0;
    case 253u: goto L_0021F0F4;
    case 254u: goto L_0021F10C;
    case 255u: goto L_0021F144;
    case 256u: goto L_0021F160;
    case 257u: goto L_0021F1BC;
    case 258u: goto L_0021F1C4;
    case 259u: goto L_0021F21C;
    case 260u: goto L_0021F260;
    case 261u: goto L_0021F2C4;
    case 262u: goto L_0021F2CC;
    case 263u: goto L_0021F328;
    case 264u: goto L_0021F370;
    case 265u: goto L_0021F3BC;
    case 266u: goto L_0021F40C;
    case 267u: goto L_0021F480;
    case 268u: goto L_0021F4E0;
    case 269u: goto L_0021F534;
    case 270u: goto L_0021F58C;
    case 271u: goto L_0021F5FC;
    case 272u: goto L_0021F620;
    case 273u: goto L_0021F680;
    case 274u: goto L_0021F6F4;
    case 275u: goto L_0021F75C;
    case 276u: goto L_0021F7BC;
    case 277u: goto L_0021F7F0;
    case 278u: goto L_0021F838;
    case 279u: goto L_0021F89C;
    case 280u: goto L_0021F940;
    case 281u: goto L_0021F980;
    case 282u: goto L_0021F9A0;
    case 283u: goto L_0021F9B8;
    case 284u: goto L_0021F9C8;
    case 285u: goto L_0021F9F0;
    case 286u: goto L_0021FA14;
    case 287u: goto L_0021FA90;
    case 288u: goto L_0021FAB0;
    case 289u: goto L_0021FAC8;
    case 290u: goto L_0021FAE8;
    case 291u: goto L_0021FB00;
    case 292u: goto L_0021FB20;
    case 293u: goto L_0021FB58;
    case 294u: goto L_0021FB78;
    case 295u: goto L_0021FBA0;
    case 296u: goto L_0021FBEC;
    case 297u: goto L_0021FBFC;
    case 298u: goto L_0021FC28;
    case 299u: goto L_0021FC80;
    case 300u: goto L_0021FCD8;
    case 301u: goto L_0021FD2C;
    case 302u: goto L_0021FD70;
    case 303u: goto L_0021FD80;
    case 304u: goto L_0021FDAC;
    case 305u: goto L_0021FE08;
    case 306u: goto L_0021FE48;
    case 307u: goto L_0021FE84;
    case 308u: goto L_0021FEC8;
    case 309u: goto L_0021FEF4;
    case 310u: goto L_0021FF18;
    case 311u: goto L_0021FF74;
    case 312u: goto L_0021FF88;
    case 313u: goto L_0021FFA0;
    default: bad_entry(c, 0x0021C000u); return;
    }
L_0021C000:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF7FF0000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0021C04C; } }
L_0021C02C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C038u); set32(c.r[4], c.r[4].w[0] + 31136u);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x0021C038u) [[unlikely]] return; }
L_0021C038:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_0021C04C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021C060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 76u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C080u); st32((c.r[4].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 14u, depth + 1u); else { c.pc = 0x0021C170u; return; } if (c.pc != 0x0021C080u) [[unlikely]] return; }
L_0021C080:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  goto L_0021C0D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C094u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 11u, depth + 1u); else { c.pc = 0x0021C120u; return; } if (c.pc != 0x0021C094u) [[unlikely]] return; }
L_0021C094:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 20u), 0u);  goto L_0021C0B4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C0B0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021C0B0u) [[unlikely]] return; }
L_0021C0B0:
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 1;
L_0021C0B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 9;
L_0021C0D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C0E0u);  if (depth < kMaxDepth) unit_003F(c, 220u, depth + 1u); else { c.pc = 0x0021EC30u; return; } if (c.pc != 0x0021C0E0u) [[unlikely]] return; }
L_0021C0E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C0F0u); st32((c.r[2].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_003F(c, 156u, depth + 1u); else { c.pc = 0x0021DF30u; return; } if (c.pc != 0x0021C0F0u) [[unlikely]] return; }
L_0021C0F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 5u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] + 31184u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C10Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x0021C10Cu) [[unlikely]] return; }
L_0021C10C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021C120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C134u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 14u, depth + 1u); else { c.pc = 0x0021C170u; return; } if (c.pc != 0x0021C134u) [[unlikely]] return; }
L_0021C134:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C148u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 46u, depth + 1u); else { c.pc = 0x0021C7E0u; return; } if (c.pc != 0x0021C148u) [[unlikely]] return; }
L_0021C148:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021C170:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0021C1E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021C1C4; } }
L_0021C194:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0021C1C4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021C1C0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C1C0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021C1C0u) [[unlikely]] return; }
L_0021C1C0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0021C1C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 120u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 116u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C194u | kUnwind; return; } goto L_0021C194; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C1DCu); set32(c.r[4], ld32((c.r[17].w[0] + 116u)));  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0021C1DCu) [[unlikely]] return; }
L_0021C1DC:
    st32((c.r[17].w[0] + 116u), 0u);
    c.budget -= 1;
L_0021C1E0:
    st32((c.r[17].w[0] + 120u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021C200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C220u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 46u, depth + 1u); else { c.pc = 0x0021C7E0u; return; } if (c.pc != 0x0021C220u) [[unlikely]] return; }
L_0021C220:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021C240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0021C260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021C28C; } }
L_0021C260:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 28u)));  goto L_0021C280; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021C28C; } }
L_0021C280:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021C28C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u - 1u);  goto L_0021C29C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 2;
L_0021C29C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C2A8u); set32(c.r[4], c.r[4].w[0] + 31216u);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x0021C2A8u) [[unlikely]] return; }
L_0021C2A8:
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 8;
    if (c.r[6].sd[0] < 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0021C2D8; }
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C2D4u); set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  if (depth < kMaxDepth) unit_003F(c, 256u, depth + 1u); else { c.pc = 0x0021F160u; return; } if (c.pc != 0x0021C2D4u) [[unlikely]] return; }
L_0021C2D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0021C2D8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021C2F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] >= 0; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0021C324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0021C6A0; } }
L_0021C324:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_0021C344; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0021C354; } }
L_0021C344:
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_0021C354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0021C688; } }
L_0021C35C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 24u)));  goto L_0021C36C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0021C378; } }
L_0021C36C:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021C378:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 24u)));  goto L_0021C3A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021C3AC; } }
L_0021C3A0:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021C3AC:
    set32(c.r[5], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C3B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 293u, depth + 1u); else { c.pc = 0x0021A9B0u; return; } if (c.pc != 0x0021C3B8u) [[unlikely]] return; }
L_0021C3B8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 24u)));  goto L_0021C3C8; }
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 2;
L_0021C3C8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 24u)));  goto L_0021C400; }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021C3FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C3E4u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x0021C3E4u) [[unlikely]] return; }
L_0021C3E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  goto L_0021C3FC; }
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C3F8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 44u, depth + 1u); else { c.pc = 0x003C4650u; return; } if (c.pc != 0x0021C3F8u) [[unlikely]] return; }
L_0021C3F8:
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 1;
L_0021C3FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_0021C400:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0021C688; }
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 60u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], ld32((c.r[5].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], ld32((c.r[3].w[0])));  if (t) { goto L_0021C5C0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 28u)));  goto L_0021C484; }
    set32(c.r[2], ld32((c.r[5].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_0021C450; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021C454; } }
L_0021C450:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0021C454:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021C480; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C468u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 243u, depth + 1u); else { c.pc = 0x0021A2B0u; return; } if (c.pc != 0x0021C468u) [[unlikely]] return; }
L_0021C468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021C480; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C480u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 279u, depth + 1u); else { c.pc = 0x0021A720u; return; } if (c.pc != 0x0021C480u) [[unlikely]] return; }
L_0021C480:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_0021C484:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021C4D8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_0021C4A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021C4AC; } }
L_0021C4A8:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_0021C4AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021C4D8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C4C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 249u, depth + 1u); else { c.pc = 0x0021A380u; return; } if (c.pc != 0x0021C4C0u) [[unlikely]] return; }
L_0021C4C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021C4D8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C4D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 284u, depth + 1u); else { c.pc = 0x0021A7E0u; return; } if (c.pc != 0x0021C4D8u) [[unlikely]] return; }
L_0021C4D8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0021C548; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[20].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021C548; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_0021C514; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021C51C; } }
L_0021C514:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_0021C51C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021C548; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C530u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 243u, depth + 1u); else { c.pc = 0x0021A2B0u; return; } if (c.pc != 0x0021C530u) [[unlikely]] return; }
L_0021C530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021C548; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C548u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 279u, depth + 1u); else { c.pc = 0x0021A720u; return; } if (c.pc != 0x0021C548u) [[unlikely]] return; }
L_0021C548:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0021C684; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[20].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021C684; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_0021C584; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021C58C; } }
L_0021C584:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 2;
L_0021C58C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021C684; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C5A0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 249u, depth + 1u); else { c.pc = 0x0021A380u; return; } if (c.pc != 0x0021C5A0u) [[unlikely]] return; }
L_0021C5A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021C684; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C5B8u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_003E(c, 284u, depth + 1u); else { c.pc = 0x0021A7E0u; return; } if (c.pc != 0x0021C5B8u) [[unlikely]] return; }
L_0021C5B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021C684; } }
L_0021C5C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021C614; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_0021C5E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021C5E8; } }
L_0021C5E4:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0021C5E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021C614; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C5FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 255u, depth + 1u); else { c.pc = 0x0021A450u; return; } if (c.pc != 0x0021C5FCu) [[unlikely]] return; }
L_0021C5FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021C614; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C614u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 288u, depth + 1u); else { c.pc = 0x0021A880u; return; } if (c.pc != 0x0021C614u) [[unlikely]] return; }
L_0021C614:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0021C684; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[20].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021C684; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_0021C650; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021C658; } }
L_0021C650:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_0021C658:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021C684; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C66Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 255u, depth + 1u); else { c.pc = 0x0021A450u; return; } if (c.pc != 0x0021C66Cu) [[unlikely]] return; }
L_0021C66C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021C684; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C684u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_003E(c, 288u, depth + 1u); else { c.pc = 0x0021A880u; return; } if (c.pc != 0x0021C684u) [[unlikely]] return; }
L_0021C684:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0021C688:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C35Cu | kUnwind; return; } goto L_0021C35C; }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0021C6A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0021C6D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    st32((c.r[4].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 16;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 28u)));  goto L_0021C718; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021C724; } }
L_0021C718:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021C724:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C738u); set32(c.r[4], c.r[4].w[0] + 31248u);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x0021C738u) [[unlikely]] return; }
L_0021C738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C740u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 133u, depth + 1u); else { c.pc = 0x0021DAE0u; return; } if (c.pc != 0x0021C740u) [[unlikely]] return; }
L_0021C740:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0021C750; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021C7C0; } }
L_0021C750:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C760u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_003F(c, 46u, depth + 1u); else { c.pc = 0x0021C7E0u; return; } if (c.pc != 0x0021C760u) [[unlikely]] return; }
L_0021C760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021C78C; } }
L_0021C768:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[7].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0021C78C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C788u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 260u, depth + 1u); else { c.pc = 0x0021F260u; return; } if (c.pc != 0x0021C788u) [[unlikely]] return; }
L_0021C788:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0021C78C:
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 32u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C768u | kUnwind; return; } goto L_0021C768; }
    st32((c.r[17].w[0] + 92u), 0u);
    set32(c.r[3], 0u - 5u);
    st32((c.r[17].w[0] + 84u), 0u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
L_0021C7C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021C7E0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.budget -= 9;
L_0021C804:
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021CC80; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C83Cu); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0021C83Cu) [[unlikely]] return; }
L_0021C83C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021C8C8; } }
L_0021C844:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 24u)));  goto L_0021C85C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0021C868; } }
L_0021C85C:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021C868:
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C880u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0021C880u) [[unlikely]] return; }
L_0021C880:
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 24u)));  goto L_0021C8A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0021C8AC; } }
L_0021C8A0:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021C8AC:
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C8C4u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0021C8C4u) [[unlikely]] return; }
L_0021C8C4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0021C8C8:
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C844u | kUnwind; return; } goto L_0021C844; }
    set32(c.r[5], ld32((c.r[21].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[5].sd[0] < 0) { set32(c.r[5], ld32((c.r[21].w[0] + 72u)));  goto L_0021C9F0; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C8F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 108u, depth + 1u); else { c.pc = 0x0021D5C0u; return; } if (c.pc != 0x0021C8F8u) [[unlikely]] return; }
L_0021C8F8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_0021CC68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0021C9D8; } }
L_0021C908:
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_0021C9D8; }
    set32(c.r[6], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[9], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[8], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[9].w[0] + 20u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[9].w[0] + 32u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 60u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 14;
    { const bool t = c.r[7].d[0] == 0ull; st32((c.r[6].w[0]), c.r[5].w[0]);  if (t) { goto L_0021C96C; } }
    set32(c.r[5], ld32((c.r[9].w[0] + 32u)));
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.budget -= 6;
L_0021C96C:
    set32(c.r[5], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[21].w[0] + 100u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 20u)));
    set32(c.r[9], c.r[6].w[0] + 1u);
    set32(c.r[7], ld32((c.r[7].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[8].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], ld32((c.r[6].w[0])));  if (t) { goto L_0021C9AC; } }
    st32((c.r[5].w[0]), c.r[9].w[0]);
    c.budget -= 1;
L_0021C9AC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0021C9D4; } }
    set32(c.r[3], ld32((c.r[8].w[0] + 36u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0021C9D4; } }
    st32((c.r[5].w[0]), c.r[9].w[0]);
    c.budget -= 1;
L_0021C9D4:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0021C9D8:
    set32(c.r[3], ld32((c.r[21].w[0] + 120u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 116u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C908u | kUnwind; return; } goto L_0021C908; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021CA0C; } }
L_0021C9F0:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_0021CA0C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0021CA0C; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CA0Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 108u, depth + 1u); else { c.pc = 0x0021D5C0u; return; } if (c.pc != 0x0021CA0Cu) [[unlikely]] return; }
L_0021CA0C:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021CC68; } }
L_0021CA18:
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.r[3].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 24u)));  goto L_0021CA30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0021CA3C; } }
L_0021CA30:
    set32(c.r[4], c.r[20].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[19], ld32((c.r[3].w[0])));
    c.budget -= 3;
L_0021CA3C:
    c.r[23].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0021CBE4; } }
L_0021CA4C:
    set32(c.r[16], c.r[17].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 28u)));  goto L_0021CAA8; }
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[5], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0021CA9C; }
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 100u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], 0u + 1u);  goto L_0021CAA4; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0021CA9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CAA4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 261u, depth + 1u); else { c.pc = 0x0021A510u; return; } if (c.pc != 0x0021CAA4u) [[unlikely]] return; }
L_0021CAA4:
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 1;
L_0021CAA8:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 32u)));  goto L_0021CB00; }
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[5], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0021CAF4; }
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 100u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], 0u + 1u);  goto L_0021CAFC; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0021CAF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CAFCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 267u, depth + 1u); else { c.pc = 0x0021A5B0u; return; } if (c.pc != 0x0021CAFCu) [[unlikely]] return; }
L_0021CAFC:
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 1;
L_0021CB00:
    set32(c.r[5], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 20u)));  goto L_0021CB3C; }
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { set32(c.r[23], 0u + 1u);  goto L_0021CBE0; }
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 100u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0021CBDC; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 1;
L_0021CB3C:
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 44u)));  goto L_0021CB54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0021CB5C; } }
L_0021CB54:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_0021CB5C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 20u)));  goto L_0021CB78; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[21].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CB74u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 279u, depth + 1u); else { c.pc = 0x0021A720u; return; } if (c.pc != 0x0021CB74u) [[unlikely]] return; }
L_0021CB74:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 1;
L_0021CB78:
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 44u)));  goto L_0021CB90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0021CB98; } }
L_0021CB90:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 2;
L_0021CB98:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021CBB0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[21].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CBB0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 284u, depth + 1u); else { c.pc = 0x0021A7E0u; return; } if (c.pc != 0x0021CBB0u) [[unlikely]] return; }
L_0021CBB0:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0021CBE4; }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[6], 0u + 2u);  goto L_0021CBC4; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_0021CBC4:
    set32(c.r[4], ld32((c.r[21].w[0] + 124u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CBD4u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 280u, depth + 1u); else { c.pc = 0x0021F940u; return; } if (c.pc != 0x0021CBD4u) [[unlikely]] return; }
L_0021CBD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021CBE0; } }
L_0021CBDC:
    set32(c.r[23], 0u + 1u);
    c.budget -= 1;
L_0021CBE0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0021CBE4:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021CA4Cu | kUnwind; return; } goto L_0021CA4C; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0021CC28; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021CC28; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 24u), 0u);  goto L_0021CC28; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CC24u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021CC24u) [[unlikely]] return; }
L_0021CC24:
    st32((c.r[19].w[0] + 24u), 0u);
    c.budget -= 1;
L_0021CC28:
    c.budget -= 2;
    if (c.r[23].d[0] != 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_0021CC68; }
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021CC48; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CC48u); set32(c.r[5], c.r[21].w[0] + 24u);  if (depth < kMaxDepth) unit_003E(c, 275u, depth + 1u); else { c.pc = 0x0021A6B0u; return; } if (c.pc != 0x0021CC48u) [[unlikely]] return; }
L_0021CC48:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_0021CC64; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 124u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CC64u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 280u, depth + 1u); else { c.pc = 0x0021F940u; return; } if (c.pc != 0x0021CC64u) [[unlikely]] return; }
L_0021CC64:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0021CC68:
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.r[3].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021CA18u | kUnwind; return; } goto L_0021CA18; }
L_0021CC80:
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
L_0021CCB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] >= 0; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0021CCE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0021CED0; } }
L_0021CCE0:
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 28u)));  goto L_0021CD00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0021CD0C; } }
L_0021CD00:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021CD0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0021CEB8; } }
L_0021CD14:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 28u)));  goto L_0021CD24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021CD30; } }
L_0021CD24:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021CD30:
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0021CE4C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_0021CE18; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[6].w[0] + 24u));  goto L_0021CE00; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_0021CDDC; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 24u)));  goto L_0021CD78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021CE5C; } }
L_0021CD78:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 24u)));  goto L_0021CD90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0021CD9C; } }
L_0021CD90:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021CD9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CDA4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 106u, depth + 1u); else { c.pc = 0x0021D550u; return; } if (c.pc != 0x0021CDA4u) [[unlikely]] return; }
L_0021CDA4:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[18], 0u + 1u);  goto L_0021CE5C; }
    set32(c.r[3], ld32((c.r[20].w[0] + 116u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021CE5C; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021CE5C; } }
L_0021CDDC:
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021CE5C; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021CE5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021CE5C; } }
L_0021CE00:
    c.f[1] = ld32((c.r[20].w[0] + 92u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0021CE5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_0021CE5C; } }
L_0021CE18:
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021CE5C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30448u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021CE5C; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30444u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021CE5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_0021CE5C; } }
L_0021CE4C:
    set32(c.r[5], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CE58u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 152u, depth + 1u); else { c.pc = 0x0021DE80u; return; } if (c.pc != 0x0021CE58u) [[unlikely]] return; }
L_0021CE58:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0021CE5C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0021CEB8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 80u), c.r[19].w[0]);  goto L_0021CE8C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021CEB4; } }
    st32((c.r[20].w[0] + 80u), c.r[19].w[0]);
    c.budget -= 1;
L_0021CE8C:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CE9Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 161u, depth + 1u); else { c.pc = 0x0021DFB0u; return; } if (c.pc != 0x0021CE9Cu) [[unlikely]] return; }
L_0021CE9C:
    st32((c.r[20].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0021CED0; } }
L_0021CEB4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0021CEB8:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021CD14u | kUnwind; return; } goto L_0021CD14; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021CED0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0021CEF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] < 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0021CF24; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  goto L_0021CF2C; }
L_0021CF24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0021D530; } }
L_0021CF2C:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 28u)));  goto L_0021CF48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0021CF54; } }
L_0021CF48:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021CF54:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[2], 0u + 1u);  goto L_0021D530; }
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021CF80; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021D530; } }
L_0021CF80:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 28u)));  goto L_0021CF90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0021CF9C; } }
L_0021CF90:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021CF9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_0021D518; } }
L_0021CFA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0021CFB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0021CFC4; } }
L_0021CFB4:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_0021CFC4:
    set32(c.r[6], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0021D4E8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 31280u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0021C000u < 16384u) { entry = entries_003F[(t - 0x0021C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0021CFF4:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 24u)));  goto L_0021D014; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0021D020; } }
L_0021D014:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021D020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D028u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 106u, depth + 1u); else { c.pc = 0x0021D550u; return; } if (c.pc != 0x0021D028u) [[unlikely]] return; }
L_0021D028:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[17], 0u + 1u);  goto L_0021D4E8; }
    set32(c.r[17], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021D084; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D054u);  if (depth < kMaxDepth) unit_00A8(c, 232u, depth + 1u); else { c.pc = 0x003C2BB0u; return; } if (c.pc != 0x0021D054u) [[unlikely]] return; }
L_0021D054:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021D084; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D084u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021D084u) [[unlikely]] return; }
L_0021D084:
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021D4E8; } }
L_0021D090:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 24u)));  goto L_0021D0B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0021D0BC; } }
L_0021D0B0:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021D0BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D0C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 106u, depth + 1u); else { c.pc = 0x0021D550u; return; } if (c.pc != 0x0021D0C4u) [[unlikely]] return; }
L_0021D0C4:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[17], 0u + 1u);  goto L_0021D4E8; }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021D0FC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D0FCu); set32(c.r[5], ld32((c.r[2].w[0] + 24u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021D0FCu) [[unlikely]] return; }
L_0021D0FC:
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021D4E8; } }
L_0021D108:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 24u)));  goto L_0021D128; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0021D134; } }
L_0021D128:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021D134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D13Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 106u, depth + 1u); else { c.pc = 0x0021D550u; return; } if (c.pc != 0x0021D13Cu) [[unlikely]] return; }
L_0021D13C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[17], 0u + 1u);  goto L_0021D4E8; }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021D178; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D178u); set32(c.r[5], ld32((c.r[2].w[0] + 24u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021D178u) [[unlikely]] return; }
L_0021D178:
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021D4E8; } }
L_0021D184:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 24u)));  goto L_0021D1A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0021D1B0; } }
L_0021D1A4:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021D1B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D1B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 106u, depth + 1u); else { c.pc = 0x0021D550u; return; } if (c.pc != 0x0021D1B8u) [[unlikely]] return; }
L_0021D1B8:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[17], 0u + 1u);  goto L_0021D4E8; }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021D1F0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D1F0u); set32(c.r[5], ld32((c.r[2].w[0] + 24u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021D1F0u) [[unlikely]] return; }
L_0021D1F0:
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021D4E8; } }
L_0021D1FC:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 24u)));  goto L_0021D21C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0021D228; } }
L_0021D21C:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021D228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D230u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 106u, depth + 1u); else { c.pc = 0x0021D550u; return; } if (c.pc != 0x0021D230u) [[unlikely]] return; }
L_0021D230:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[17], 0u + 1u);  goto L_0021D4E8; }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021D264; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D25Cu);  if (depth < kMaxDepth) unit_00A8(c, 232u, depth + 1u); else { c.pc = 0x003C2BB0u; return; } if (c.pc != 0x0021D25Cu) [[unlikely]] return; }
L_0021D25C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021D4E8; } }
L_0021D264:
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021D4E8; } }
L_0021D270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D278u);  if (depth < kMaxDepth) unit_0013(c, 317u, depth + 1u); else { c.pc = 0x0016F560u; return; } if (c.pc != 0x0021D278u) [[unlikely]] return; }
L_0021D278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D280u);  if (depth < kMaxDepth) unit_0010(c, 72u, depth + 1u); else { c.pc = 0x00160B70u; return; } if (c.pc != 0x0021D280u) [[unlikely]] return; }
L_0021D280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0021D4E8; } }
L_0021D288:
    c.f[0] = ld32((c.r[6].w[0] + 20u));
    c.f[1] = ld32((c.r[16].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0021D4E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0021D4E8; } }
L_0021D2A4:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 24u)));  goto L_0021D2C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0021D2D0; } }
L_0021D2C4:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021D2D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D2D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 106u, depth + 1u); else { c.pc = 0x0021D550u; return; } if (c.pc != 0x0021D2D8u) [[unlikely]] return; }
L_0021D2D8:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[17], 0u + 1u);  goto L_0021D4E8; }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021D310; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D310u); set32(c.r[5], ld32((c.r[2].w[0] + 24u)));  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0021D310u) [[unlikely]] return; }
L_0021D310:
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021D4E8; } }
L_0021D31C:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 24u)));  goto L_0021D33C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0021D348; } }
L_0021D33C:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021D348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D350u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 106u, depth + 1u); else { c.pc = 0x0021D550u; return; } if (c.pc != 0x0021D350u) [[unlikely]] return; }
L_0021D350:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[17], 0u + 1u);  goto L_0021D4E8; }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021D38C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D38Cu); set32(c.r[5], ld32((c.r[2].w[0] + 24u)));  if (depth < kMaxDepth) unit_00A8(c, 238u, depth + 1u); else { c.pc = 0x003C2D20u; return; } if (c.pc != 0x0021D38Cu) [[unlikely]] return; }
L_0021D38C:
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021D4E8; } }
L_0021D398:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021D4E8; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021D4E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0021D4E8; } }
L_0021D3C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021D4E8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30448u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021D4E8; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30444u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021D4E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0021D4E8; } }
L_0021D3F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_0021D424; }
    set32(c.r[4], ld32((c.r[6].w[0] + 20u)));
    c.f[12] = ld32((c.r[6].w[0] + 24u));
    set32(c.r[5], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D41Cu); set32(c.r[6], ld32((c.r[6].w[0] + 32u)));  if (depth < kMaxDepth) unit_003F(c, 116u, depth + 1u); else { c.pc = 0x0021D890u; return; } if (c.pc != 0x0021D41Cu) [[unlikely]] return; }
L_0021D41C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021D4E8; } }
L_0021D424:
    set32(c.r[2], 0u - 129u);
    set32(c.r[17], 0u + 1u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0021D4E8; } }
L_0021D438:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[6].w[0] + 20u)));  if (t) { goto L_0021D45C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0021D46C; } }
L_0021D45C:
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_0021D46C:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 24u)));  goto L_0021D488; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0021D494; } }
L_0021D488:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021D494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D49Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 106u, depth + 1u); else { c.pc = 0x0021D550u; return; } if (c.pc != 0x0021D49Cu) [[unlikely]] return; }
L_0021D49C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[17], 0u + 1u);  goto L_0021D4E8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[17], 0u + 1u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021D4E8; } }
L_0021D4D0:
    set32(c.r[5], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D4DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 152u, depth + 1u); else { c.pc = 0x0021DE80u; return; } if (c.pc != 0x0021D4DCu) [[unlikely]] return; }
L_0021D4DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021D4E8; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_0021D4E8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 84u)));  goto L_0021D508; }
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.r[2].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.f[0]);  if (t) { goto L_0021D530; } }
L_0021D508:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 4;
L_0021D518:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021CFA4u | kUnwind; return; } goto L_0021CFA4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0021D530:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0021D550:
    set32(c.r[9], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021D5A8; } }
L_0021D55C:
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_0021D5A8; }
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[8], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[7].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0021D5A4; } }
    set32(c.r[6], ld32((c.r[7].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0021D5A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021D5B8; } }
L_0021D5A4:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_0021D5A8:
    c.r[3].d[0] = c.r[2].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 116u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D55Cu | kUnwind; return; } goto L_0021D55C; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0021D5B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021D5C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[5].sd[0] < 0; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0021D868; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 100u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0021D86C; }
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0021D614; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021D620; } }
L_0021D614:
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 3;
L_0021D620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0021D6C0; } }
L_0021D628:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  goto L_0021D638; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0021D644; } }
L_0021D638:
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 3;
L_0021D644:
    set32(c.r[8], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[7], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[8].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[7].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.r[4].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[4].d[0] != 0ull) { set32(c.r[4], ld32((c.r[7].w[0] + 24u)));  goto L_0021D66C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0021D678; } }
L_0021D66C:
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[9], ld32((c.r[4].w[0])));
    c.budget -= 3;
L_0021D678:
    set32(c.r[7], ld32((c.r[9].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[8].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[9].w[0] + 32u)));
    set32(c.r[7], ld32((c.r[7].w[0] + 60u)));
    set32(c.r[8], c.r[4].w[0] << 2);
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 11;
    { const bool t = c.r[7].d[0] == 0ull; st32((c.r[6].w[0]), c.r[4].w[0]);  if (t) { goto L_0021D6BC; } }
    set32(c.r[4], ld32((c.r[9].w[0] + 32u)));
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_0021D6BC:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0021D6C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    c.r[4].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[4].d[0] != 0ull) { c.r[4].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D628u | kUnwind; return; } goto L_0021D628; }
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 32u)));  goto L_0021D700; }
    c.r[1].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0021D868; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 1;
L_0021D700:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[18].w[0]);  if (t) { goto L_0021D7C4; } }
L_0021D710:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  goto L_0021D720; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0021D72C; } }
L_0021D720:
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 3;
L_0021D72C:
    set32(c.r[7], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.r[4].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[4].d[0] != 0ull) { set32(c.r[4], ld32((c.r[6].w[0] + 24u)));  goto L_0021D754; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0021D760; } }
L_0021D754:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[9], ld32((c.r[4].w[0])));
    c.budget -= 3;
L_0021D760:
    set32(c.r[4], ld32((c.r[7].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[9].w[0] + 20u)));
    set32(c.r[8], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[7], c.r[4].w[0] << 2);
    set32(c.r[5], ld32((c.r[9].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 60u)));
    set32(c.r[4], c.r[8].w[0] - c.r[18].w[0]);
    set32(c.r[8], c.r[4].w[0] + 1u);
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = c.r[4].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], ld32((c.r[6].w[0])));  if (t) { goto L_0021D798; } }
    st32((c.r[5].w[0]), c.r[8].w[0]);
    c.budget -= 1;
L_0021D798:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_0021D7C4; }
    set32(c.r[4], ld32((c.r[9].w[0] + 36u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[1].d[0] = c.r[4].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0021D7C0; } }
    st32((c.r[5].w[0]), c.r[8].w[0]);
    c.budget -= 1;
L_0021D7C0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0021D7C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.r[4].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[4].d[0] != 0ull) { c.r[4].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D710u | kUnwind; return; } goto L_0021D710; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0021D854; }
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D7F4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 161u, depth + 1u); else { c.pc = 0x0021DFB0u; return; } if (c.pc != 0x0021D7F4u) [[unlikely]] return; }
L_0021D7F4:
    set32(c.r[6], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D804u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 108u, depth + 1u); else { c.pc = 0x0021D5C0u; return; } if (c.pc != 0x0021D804u) [[unlikely]] return; }
L_0021D804:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021D868; } }
L_0021D80C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 28u)));  goto L_0021D81C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0021D828; } }
L_0021D81C:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
L_0021D828:
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    if (c.r[5].sd[0] < 0) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0021D854; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D840u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 161u, depth + 1u); else { c.pc = 0x0021DFB0u; return; } if (c.pc != 0x0021D840u) [[unlikely]] return; }
L_0021D840:
    set32(c.r[6], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D850u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 108u, depth + 1u); else { c.pc = 0x0021D5C0u; return; } if (c.pc != 0x0021D850u) [[unlikely]] return; }
L_0021D850:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0021D854:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[17].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D80Cu | kUnwind; return; } goto L_0021D80C; }
L_0021D868:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0021D86C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0021D890:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[28].w[0] - 30440u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30452u)));
    st32((c.r[28].w[0] - 30448u), c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[28].w[0] - 30444u), c.r[6].w[0]);  if (t) { goto L_0021D8B8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D8B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021D8B8u) [[unlikely]] return; }
L_0021D8B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021D8D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0021D8F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021D940; } }
L_0021D8F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D900u);  if (depth < kMaxDepth) unit_003F(c, 161u, depth + 1u); else { c.pc = 0x0021DFB0u; return; } if (c.pc != 0x0021D900u) [[unlikely]] return; }
L_0021D900:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0021D910; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021D940; } }
L_0021D910:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 2);  goto L_0021D92C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0021D938; } }
L_0021D92C:
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021D938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D940u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 313u, depth + 1u); else { c.pc = 0x0021AF10u; return; } if (c.pc != 0x0021D940u) [[unlikely]] return; }
L_0021D940:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021D960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0021D9CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D980u);  if (depth < kMaxDepth) unit_003F(c, 161u, depth + 1u); else { c.pc = 0x0021DFB0u; return; } if (c.pc != 0x0021D980u) [[unlikely]] return; }
L_0021D980:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0021D9D0; }
    goto L_0021D988;
L_0021D984:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0021D988:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0021D9A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0021D9B4; } }
L_0021D9A8:
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 3;
L_0021D9B4:
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u - 2u);
    st32((c.r[5].w[0] + 32u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
L_0021D9CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0021D9D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021D9E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D9FCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 14u, depth + 1u); else { c.pc = 0x0021C170u; return; } if (c.pc != 0x0021D9FCu) [[unlikely]] return; }
L_0021D9FC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DA08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 161u, depth + 1u); else { c.pc = 0x0021DFB0u; return; } if (c.pc != 0x0021DA08u) [[unlikely]] return; }
L_0021DA08:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DA18u); st32((c.r[16].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 20u, depth + 1u); else { c.pc = 0x0021C240u; return; } if (c.pc != 0x0021DA18u) [[unlikely]] return; }
L_0021DA18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DA20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 156u, depth + 1u); else { c.pc = 0x0021DF30u; return; } if (c.pc != 0x0021DA20u) [[unlikely]] return; }
L_0021DA20:
    set32(c.r[4], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF7FF0000u);
    st32((c.r[16].w[0] + 80u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[16].w[0] + 84u), c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021DA60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] >= 0; st32((c.r[4].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_0021DA94; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DA8Cu); set32(c.r[5], ld32((c.r[2].w[0] + 32u)));  if (depth < kMaxDepth) unit_003F(c, 161u, depth + 1u); else { c.pc = 0x0021DFB0u; return; } if (c.pc != 0x0021DA8Cu) [[unlikely]] return; }
L_0021DA8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_0021DAA0; } }
L_0021DA94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DA9Cu);  if (depth < kMaxDepth) unit_003F(c, 161u, depth + 1u); else { c.pc = 0x0021DFB0u; return; } if (c.pc != 0x0021DA9Cu) [[unlikely]] return; }
L_0021DA9C:
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 1;
L_0021DAA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DAA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 20u, depth + 1u); else { c.pc = 0x0021C240u; return; } if (c.pc != 0x0021DAA8u) [[unlikely]] return; }
L_0021DAA8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[4].d[0] | 4ull;
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021DAE0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0021DB30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0021DB40; } }
L_0021DB30:
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_0021DB40:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  goto L_0021DB50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021DC98; } }
L_0021DB50:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[22], ld32((c.r[2].w[0] + 20u)));  if (t) { goto L_0021DC60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DB60u); set32(c.r[4], c.r[22].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x0021DB60u) [[unlikely]] return; }
L_0021DB60:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0021DC84; } }
    set32(c.r[6], c.r[22].w[0] << 2);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DB7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0021DB7Cu) [[unlikely]] return; }
L_0021DB7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0021DC54; } }
L_0021DB84:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 24u)));  goto L_0021DB9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0021DBA8; } }
L_0021DB9C:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021DBA8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DBB4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 106u, depth + 1u); else { c.pc = 0x0021D550u; return; } if (c.pc != 0x0021DBB4u) [[unlikely]] return; }
L_0021DBB4:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[23].sd[0] < 0) { c.r[16].d[0] = 0ull + 0ull;  goto L_0021DBD0; }
    set32(c.r[2], ld32((c.r[21].w[0] + 116u)));
    set32(c.r[3], c.r[23].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_0021DBD0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], 0u + 36u);  goto L_0021DC1C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021DC18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DBECu);  if (depth < kMaxDepth) unit_00A8(c, 232u, depth + 1u); else { c.pc = 0x003C2BB0u; return; } if (c.pc != 0x0021DBECu) [[unlikely]] return; }
L_0021DBEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021DC18; } }
    set32(c.r[2], c.r[19].w[0] << 2);
    st32((c.r[16].w[0] + 24u), c.r[18].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[23].w[0] << 2);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_0021DC50; } }
L_0021DC18:
    set32(c.r[4], 0u + 36u);
    c.budget -= 1;
L_0021DC1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DC24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0021DC24u) [[unlikely]] return; }
L_0021DC24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  goto L_0021DC48; }
    set32(c.r[5], ld32((c.r[21].w[0] + 20u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DC44u); set32(c.r[7], c.r[7].w[0] - 10096u);  if (depth < kMaxDepth) unit_003F(c, 193u, depth + 1u); else { c.pc = 0x0021E640u; return; } if (c.pc != 0x0021DC44u) [[unlikely]] return; }
L_0021DC44:
    set32(c.r[3], c.r[19].w[0] << 2);
    c.budget -= 1;
L_0021DC48:
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0021DC50:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0021DC54:
    c.r[2].d[0] = c.r[19].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DB84u | kUnwind; return; } goto L_0021DB84; }
L_0021DC60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DC68u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 14u, depth + 1u); else { c.pc = 0x0021C170u; return; } if (c.pc != 0x0021DC68u) [[unlikely]] return; }
L_0021DC68:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; st32((c.r[21].w[0] + 116u), c.r[20].w[0]);  if (t) { goto L_0021DC78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0021DC98; } }
L_0021DC78:
    st32((c.r[21].w[0] + 120u), c.r[22].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0021DC98; } }
L_0021DC84:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0021DC98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DC94u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0021DC94u) [[unlikely]] return; }
L_0021DC94:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021DC98:
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
L_0021DCD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DD00u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0021DD00u) [[unlikely]] return; }
L_0021DD00:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0]), c.r[17].w[0]);  goto L_0021DD14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021DD58; } }
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_0021DD14:
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 108u)));
    c.budget -= 6;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 12u)));  goto L_0021DD3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_0021DD54; } }
L_0021DD34:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 2;
L_0021DD3C:
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DD34u | kUnwind; return; } goto L_0021DD34; } }
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_0021DD54:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0021DD58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0021DD80:
    set32(c.r[4], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0021DD9C; } }
L_0021DD8C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 12u)));  goto L_0021DD9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021DDA8; } }
L_0021DD9C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DD8Cu | kUnwind; return; } goto L_0021DD8C; }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0021DDA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021DDB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 112u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021DDE0; } }
L_0021DDD0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_0021DDF0; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 1;
L_0021DDE0:
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DDD0u | kUnwind; return; } goto L_0021DDD0; } }
L_0021DDF0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], 0u + 20u);  goto L_0021DE08; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0] + 12u)));  if (t) { goto L_0021DE6C; } }
L_0021DE08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DE10u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0021DE10u) [[unlikely]] return; }
L_0021DE10:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0]), c.r[16].w[0]);  goto L_0021DE20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021DE6C; } }
L_0021DE20:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 112u), c.r[2].w[0]);  goto L_0021DE68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 16u)));  if (t) { goto L_0021DE50; } }
L_0021DE48:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 2;
L_0021DE50:
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DE48u | kUnwind; return; } goto L_0021DE48; } }
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 1;
L_0021DE68:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021DE6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021DE80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 112u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021DEB0; } }
L_0021DEA0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_0021DEC0; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 1;
L_0021DEB0:
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DEA0u | kUnwind; return; } goto L_0021DEA0; } }
L_0021DEC0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], 0u + 20u);  goto L_0021DED8; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0] + 12u)));  if (t) { goto L_0021DF10; } }
    goto L_0021DED8;
L_0021DED4:
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 1;
L_0021DED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DEE0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0021DEE0u) [[unlikely]] return; }
L_0021DEE0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0]), c.r[16].w[0]);  goto L_0021DEF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021DF10; } }
L_0021DEF0:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 8;
L_0021DF10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021DF30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 112u)));  if (t) { goto L_0021DF58; } }
L_0021DF4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DF54u); set32(c.r[16], ld32((c.r[4].w[0] + 16u)));  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0021DF54u) [[unlikely]] return; }
L_0021DF54:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0021DF58:
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DF4Cu | kUnwind; return; } goto L_0021DF4C; } }
    st32((c.r[17].w[0] + 112u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021DF80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 112u)));  if (t) { goto L_0021DF98; } }
L_0021DF88:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[3].w[0] + 16u)));  goto L_0021DF98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0021DFA4; } }
L_0021DF98:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DF88u | kUnwind; return; } goto L_0021DF88; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021DFA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021DFB0:
    c.budget -= 2;
    if (c.r[5].sd[0] >= 0) { set32(c.r[3], ld32((c.r[4].w[0] + 20u)));  goto L_0021DFC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0021E020; } }
L_0021DFC0:
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021E010; } }
L_0021DFD0:
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 28u)));  goto L_0021DFEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0021DFF8; } }
L_0021DFEC:
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
L_0021DFF8:
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_0021E010; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021E020; } }
L_0021E010:
    c.r[3].d[0] = c.r[2].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], ld32((c.r[4].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DFD0u | kUnwind; return; } goto L_0021DFD0; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0021E020:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021E030:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0021E090; } }
L_0021E05C:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0021E090; }
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021E08C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E08Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E08Cu) [[unlikely]] return; }
L_0021E08C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0021E090:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 116u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E05Cu | kUnwind; return; } goto L_0021E05C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0021E0C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0021E120; } }
L_0021E0EC:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0021E120; }
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021E11C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E11Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E11Cu) [[unlikely]] return; }
L_0021E11C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0021E120:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 116u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E0ECu | kUnwind; return; } goto L_0021E0EC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0021E150:
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
    set32(c.r[16], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0021E1BC; } }
L_0021E184:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0021E1BC; }
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021E1B8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E1B8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E1B8u) [[unlikely]] return; }
L_0021E1B8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0021E1BC:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 116u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E184u | kUnwind; return; } goto L_0021E184; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0021E1F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0021E250; } }
L_0021E21C:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0021E250; }
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021E24C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E24Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E24Cu) [[unlikely]] return; }
L_0021E24C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0021E250:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 116u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E21Cu | kUnwind; return; } goto L_0021E21C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0021E280:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0021E2E0; } }
L_0021E2AC:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0021E2E0; }
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021E2DC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E2DCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E2DCu) [[unlikely]] return; }
L_0021E2DC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0021E2E0:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 116u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E2ACu | kUnwind; return; } goto L_0021E2AC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0021E310:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0021E370; } }
L_0021E33C:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0021E370; }
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021E36C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E36Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E36Cu) [[unlikely]] return; }
L_0021E36C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0021E370:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 116u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E33Cu | kUnwind; return; } goto L_0021E33C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0021E3A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0021E410; } }
L_0021E3DC:
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0021E410; }
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021E40C; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E40Cu); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0021E40Cu) [[unlikely]] return; }
L_0021E40C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0021E410:
    c.r[3].d[0] = c.r[19].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 116u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E3DCu | kUnwind; return; } goto L_0021E3DC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0021E440:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[21], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0021E4BC; } }
L_0021E484:
    set32(c.r[4], c.r[22].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_0021E4BC; }
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021E4B8; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E4B8u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 238u, depth + 1u); else { c.pc = 0x003C2D20u; return; } if (c.pc != 0x0021E4B8u) [[unlikely]] return; }
L_0021E4B8:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_0021E4BC:
    c.r[3].d[0] = c.r[22].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 116u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E484u | kUnwind; return; } goto L_0021E484; }
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
L_0021E4F0:
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
    set32(c.r[16], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0021E560; } }
L_0021E52C:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0021E560; }
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021E55C; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E55Cu); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 249u, depth + 1u); else { c.pc = 0x003C2ED0u; return; } if (c.pc != 0x0021E55Cu) [[unlikely]] return; }
L_0021E55C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0021E560:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 116u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E52Cu | kUnwind; return; } goto L_0021E52C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0021E590:
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
    set32(c.r[16], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0021E604; } }
L_0021E5CC:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0021E604; }
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021E600; } }
    c.r[7].d[0] = c.r[18].d[0] << 56;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E600u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x0021E600u) [[unlikely]] return; }
L_0021E600:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0021E604:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 116u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E5CCu | kUnwind; return; } goto L_0021E5CC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0021E640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[9], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[8].d[0] = c.r[2].d[0] | 16706ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[4].w[0]), c.r[8].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x54530000u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] + 18664u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 16961ull;
    st32((c.r[4].w[0] + 12u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 28;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 24u)));  goto L_0021E6B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021E6C4; } }
L_0021E6B8:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021E6C4:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 32u), c.r[7].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E6D8u); st32((c.r[16].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_003F(c, 207u, depth + 1u); else { c.pc = 0x0021E900u; return; } if (c.pc != 0x0021E6D8u) [[unlikely]] return; }
L_0021E6D8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021E6F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021E774; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 18664u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021E73C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021E73C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E73Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E73Cu) [[unlikely]] return; }
L_0021E73C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_0021E760; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 7;
L_0021E760:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0021E778; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E774u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0021E774u) [[unlikely]] return; }
L_0021E774:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0021E778:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021E790:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_0021E7C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E7C0u);  if (depth < kMaxDepth) unit_003F(c, 207u, depth + 1u); else { c.pc = 0x0021E900u; return; } if (c.pc != 0x0021E7C0u) [[unlikely]] return; }
L_0021E7C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0021E7D8; }
L_0021E7C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E7D4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00A8(c, 148u, depth + 1u); else { c.pc = 0x003C1B70u; return; } if (c.pc != 0x0021E7D4u) [[unlikely]] return; }
L_0021E7D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0021E7D8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021E7F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0021E834; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 28u)));  goto L_0021E828; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021E830; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_0021E828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E830u);  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x0021E830u) [[unlikely]] return; }
L_0021E830:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0021E834:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021E840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0021E8E8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  goto L_0021E880; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021E8E4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_0021E880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E888u);  if (depth < kMaxDepth) unit_00A8(c, 168u, depth + 1u); else { c.pc = 0x003C1EF0u; return; } if (c.pc != 0x0021E888u) [[unlikely]] return; }
L_0021E888:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF7FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E8A4u); set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_00A8(c, 232u, depth + 1u); else { c.pc = 0x003C2BB0u; return; } if (c.pc != 0x0021E8A4u) [[unlikely]] return; }
L_0021E8A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021E8E4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0021E8D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E8CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 207u, depth + 1u); else { c.pc = 0x0021E900u; return; } if (c.pc != 0x0021E8CCu) [[unlikely]] return; }
L_0021E8CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021E8E4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0021E8D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_0021E8E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0021E8E8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021E900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E938u); set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  if (depth < kMaxDepth) unit_003E(c, 292u, depth + 1u); else { c.pc = 0x0021A920u; return; } if (c.pc != 0x0021E938u) [[unlikely]] return; }
L_0021E938:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  goto L_0021E948; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021E9E4; } }
L_0021E948:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 272u);  goto L_0021E96C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021E968; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E968u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E968u) [[unlikely]] return; }
L_0021E968:
    set32(c.r[4], 0u + 272u);
    c.budget -= 1;
L_0021E96C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E974u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x0021E974u) [[unlikely]] return; }
L_0021E974:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 28u), c.r[2].w[0]);  goto L_0021E990; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E98Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 96u, depth + 1u); else { c.pc = 0x003C12F0u; return; } if (c.pc != 0x0021E98Cu) [[unlikely]] return; }
L_0021E98C:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 1;
L_0021E990:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 32u)));  goto L_0021E9A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021E9E4; } }
L_0021E9A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E9A8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 231u, depth + 1u); else { c.pc = 0x003C2BA0u; return; } if (c.pc != 0x0021E9A8u) [[unlikely]] return; }
L_0021E9A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E9D0u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 178u, depth + 1u); else { c.pc = 0x003C20D0u; return; } if (c.pc != 0x0021E9D0u) [[unlikely]] return; }
L_0021E9D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_0021E9E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021EA00:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[7], c.r[7].w[0] + 8424u);
    st32((c.r[4].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[8], c.r[31].w[0] - 8u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].d[0] = c.r[3].d[0] | 16706ull;
    set32(c.r[2], c.r[2].w[0] + 18680u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[10], c.r[4].w[0] + 40u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 56u), c.r[7].w[0]);
    set32(c.r[2], c.r[31].w[0] - 8u);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[4].w[0] + 44u), 0u);
    set32(c.r[9], c.r[9].w[0] + 18696u);
    st32((c.r[4].w[0] + 48u), 0u);
    set32(c.r[8], c.r[4].w[0] + 84u);
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 56u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 100u), c.r[7].w[0]);
    set32(c.r[11], c.r[31].w[0] - 8u);
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x464C0000u);
    st32((c.r[4].w[0] + 88u), 0u);
    c.r[7].d[0] = c.r[2].d[0] | 21313ull;
    st32((c.r[4].w[0] + 92u), 0u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[4].w[0] + 96u), c.r[11].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 100u), c.r[9].w[0]);
    st32((c.r[4].w[0]), c.r[7].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 204u), 0u);
    st32((c.r[4].w[0] + 208u), 0u);
    st8((c.r[4].w[0] + 160u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 128u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 80u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 120u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 212u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 192u), 0u);
    st32((c.r[4].w[0] + 196u), 0u);
    c.budget -= 52;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 200u), 0u);  c.pc = t; return; }
L_0021EAD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0021EB2C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 18696u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0021EB10; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_0021EB10:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0021EB28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EB28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0021EB28u) [[unlikely]] return; }
L_0021EB28:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0021EB2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021EB40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021EC0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 18680u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EB6Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 220u, depth + 1u); else { c.pc = 0x0021EC30u; return; } if (c.pc != 0x0021EB6Cu) [[unlikely]] return; }
L_0021EB6C:
    set32(c.r[3], c.r[17].w[0] + 84u);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[17].w[0] + 40u);  goto L_0021EBA4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 18696u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_0021EBA0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 6;
L_0021EBA0:
    set32(c.r[3], c.r[17].w[0] + 40u);
    c.budget -= 1;
L_0021EBA4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021EBD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 18696u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_0021EBD4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 6;
L_0021EBD4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0021EBF8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 7;
L_0021EBF8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0021EC10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EC0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0021EC0Cu) [[unlikely]] return; }
L_0021EC0C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0021EC10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021EC30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 80u)));  if (t) { goto L_0021EC68; } }
L_0021EC4C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 40u)));  if (t) { goto L_0021EC64; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EC64u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021EC64u) [[unlikely]] return; }
L_0021EC64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0021EC68:
    set32(c.r[2], c.r[17].w[0] + 84u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021EC4Cu | kUnwind; return; } goto L_0021EC4C; } }
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + 40u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EC8Cu); st32((c.r[17].w[0] + 120u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 292u, depth + 1u); else { c.pc = 0x0021FB20u; return; } if (c.pc != 0x0021EC8Cu) [[unlikely]] return; }
L_0021EC8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021ECA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0021F148; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  goto L_0021ECE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F144; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_0021ECE0:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0021F144; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 31616u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0021C000u < 16384u) { entry = entries_003F[(t - 0x0021C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0021ED08:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021F144; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[4], c.r[16].w[0] + 84u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0021F144; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 192u), c.r[5].w[0]);  if (t) { goto L_0021ED4C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 192u)));
    c.budget -= 1;
L_0021ED30:
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[5].w[0] + 40u)));  goto L_0021ED4C; }
    st32((c.r[16].w[0] + 192u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 40u)));
    c.budget -= 2;
L_0021ED4C:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[4].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 192u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021ED30u | kUnwind; return; } goto L_0021ED30; }
    set32(c.r[3], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[16].w[0] + 196u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 8;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 32u)));  goto L_0021EE04; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 32u)));  goto L_0021EDE0; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 32u)));  goto L_0021EDBC; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 28u)));  goto L_0021EDA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021EE1C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_0021EDA0:
    st32((c.r[16].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EDB0u); set32(c.r[5], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_003E(c, 228u, depth + 1u); else { c.pc = 0x0021A0F0u; return; } if (c.pc != 0x0021EDB0u) [[unlikely]] return; }
L_0021EDB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021EE1C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 1;
L_0021EDBC:
    st32((c.r[16].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EDD4u); set32(c.r[5], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_003E(c, 231u, depth + 1u); else { c.pc = 0x0021A130u; return; } if (c.pc != 0x0021EDD4u) [[unlikely]] return; }
L_0021EDD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021EE1C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 1;
L_0021EDE0:
    st32((c.r[16].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EDF8u); set32(c.r[5], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_003E(c, 235u, depth + 1u); else { c.pc = 0x0021A1B0u; return; } if (c.pc != 0x0021EDF8u) [[unlikely]] return; }
L_0021EDF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021EE1C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 1;
L_0021EE04:
    st32((c.r[16].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EE1Cu); set32(c.r[5], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_003E(c, 239u, depth + 1u); else { c.pc = 0x0021A230u; return; } if (c.pc != 0x0021EE1Cu) [[unlikely]] return; }
L_0021EE1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[16].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EE2Cu); set32(c.r[4], c.r[4].w[0] + 31344u);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x0021EE2Cu) [[unlikely]] return; }
L_0021EE2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EE34u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0021EE34u) [[unlikely]] return; }
L_0021EE34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  goto L_0021EE54; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 160u);
    set32(c.r[6], c.r[16].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EE50u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 87u, depth + 1u); else { c.pc = 0x001809E0u; return; } if (c.pc != 0x0021EE50u) [[unlikely]] return; }
L_0021EE50:
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 1;
L_0021EE54:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_0021EE74; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EE68u); set32(c.r[4], c.r[4].w[0] + 31376u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x0021EE68u) [[unlikely]] return; }
L_0021EE68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_0021F0C4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_0021EE74:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_0021EE7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EE84u); set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_0018(c, 108u, depth + 1u); else { c.pc = 0x00180D10u; return; } if (c.pc != 0x0021EE84u) [[unlikely]] return; }
L_0021EE84:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_0021EE90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EE98u); set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x0021EE98u) [[unlikely]] return; }
L_0021EE98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  goto L_0021EEC0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[16].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EEB0u); set32(c.r[4], c.r[4].w[0] + 31440u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x0021EEB0u) [[unlikely]] return; }
L_0021EEB0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0021F144; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_0021EEC0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0021EEE0; }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];  if (t) { goto L_0021EEE0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021EEE0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0021F144; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EEF0u);  if (depth < kMaxDepth) unit_0018(c, 116u, depth + 1u); else { c.pc = 0x00180DD0u; return; } if (c.pc != 0x0021EEF0u) [[unlikely]] return; }
L_0021EEF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 208u), c.r[2].w[0]);  if (t) { goto L_0021EF0C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EF04u); set32(c.r[4], c.r[4].w[0] + 31488u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x0021EF04u) [[unlikely]] return; }
L_0021EF04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F0C0; } }
L_0021EF0C:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_0021EF18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EF20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 295u, depth + 1u); else { c.pc = 0x0021FBA0u; return; } if (c.pc != 0x0021EF20u) [[unlikely]] return; }
L_0021EF20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 204u), c.r[2].w[0]);  if (t) { goto L_0021F144; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_0021EF34:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 204u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EF48u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 110u, depth + 1u); else { c.pc = 0x00180D40u; return; } if (c.pc != 0x0021EF48u) [[unlikely]] return; }
L_0021EF48:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_0021EF54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EF5Cu); set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x0021EF5Cu) [[unlikely]] return; }
L_0021EF5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 24u)));  goto L_0021EF84; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[16].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EF74u); set32(c.r[4], c.r[4].w[0] + 31536u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x0021EF74u) [[unlikely]] return; }
L_0021EF74:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0021F144; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_0021EF84:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0021EFA4; }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];  if (t) { goto L_0021EFA4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021EFA4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0021F144; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 196u)));  goto L_0021F03C; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 24u)));  goto L_0021F01C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 24u)));  goto L_0021EFFC; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 204u)));  goto L_0021EFEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 204u), 0u);  if (t) { goto L_0021F058; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 1;
L_0021EFEC:
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_0021F054; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 1;
L_0021EFFC:
    set32(c.r[5], ld32((c.r[16].w[0] + 204u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[5].w[0]);  if (t) { goto L_0021F054; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 1;
L_0021F01C:
    set32(c.r[5], ld32((c.r[16].w[0] + 204u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[5].w[0]);  if (t) { goto L_0021F054; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 1;
L_0021F03C:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 204u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 6;
L_0021F054:
    st32((c.r[16].w[0] + 204u), 0u);
    c.budget -= 1;
L_0021F058:
    set32(c.r[2], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 192u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021F094; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F094u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021F094u) [[unlikely]] return; }
L_0021F094:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[16].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F0A4u); set32(c.r[4], c.r[4].w[0] + 31584u);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x0021F0A4u) [[unlikely]] return; }
L_0021F0A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 7;
L_0021F0C0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0021F0C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0021F0EC; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F0E0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003F(c, 292u, depth + 1u); else { c.pc = 0x0021FB20u; return; } if (c.pc != 0x0021F0E0u) [[unlikely]] return; }
L_0021F0E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_0021F0F8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0021F0EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F0F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 292u, depth + 1u); else { c.pc = 0x0021FB20u; return; } if (c.pc != 0x0021F0F4u) [[unlikely]] return; }
L_0021F0F4:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0021F0F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF7FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0021F144; } }
L_0021F10C:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0021F130; }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];  if (t) { goto L_0021F130; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021F130:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0021F144; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F144u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003F(c, 292u, depth + 1u); else { c.pc = 0x0021FB20u; return; } if (c.pc != 0x0021F144u) [[unlikely]] return; }
L_0021F144:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0021F148:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021F160:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021F198; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021F1A8; } }
L_0021F198:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_0021F1A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F1BCu); set32(c.r[4], c.r[4].w[0] + 31648u);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x0021F1BCu) [[unlikely]] return; }
L_0021F1BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0021F220; } }
L_0021F1C4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 24u)));  goto L_0021F1D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021F1E0; } }
L_0021F1D4:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021F1E0:
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 24u)));  goto L_0021F208; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0021F214; } }
L_0021F208:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021F214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F21Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 264u, depth + 1u); else { c.pc = 0x0021F370u; return; } if (c.pc != 0x0021F21Cu) [[unlikely]] return; }
L_0021F21C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0021F220:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F1C4u | kUnwind; return; } goto L_0021F1C4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0021F260:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0021F2A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021F2B0; } }
L_0021F2A0:
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_0021F2B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F2C4u); set32(c.r[4], c.r[4].w[0] + 31696u);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x0021F2C4u) [[unlikely]] return; }
L_0021F2C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0021F32C; } }
L_0021F2CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 24u)));  goto L_0021F2DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021F2E8; } }
L_0021F2DC:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021F2E8:
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 24u)));  goto L_0021F310; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0021F31C; } }
L_0021F310:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021F31C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F328u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 268u, depth + 1u); else { c.pc = 0x0021F4E0u; return; } if (c.pc != 0x0021F328u) [[unlikely]] return; }
L_0021F328:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0021F32C:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F2CCu | kUnwind; return; } goto L_0021F2CC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0021F370:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[6], c.r[6].w[0] << 2);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], 0u + 3u);  if (t) { goto L_0021F3C0; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F3BCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 272u, depth + 1u); else { c.pc = 0x0021F620u; return; } if (c.pc != 0x0021F3BCu) [[unlikely]] return; }
L_0021F3BC:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021F3C0:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021F41C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 44u)));  goto L_0021F3EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021F3F0; } }
L_0021F3EC:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0021F3F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021F41C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F40Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 272u, depth + 1u); else { c.pc = 0x0021F620u; return; } if (c.pc != 0x0021F40Cu) [[unlikely]] return; }
L_0021F40C:
    c.r[1].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0021F41C; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_0021F41C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 192u)));  goto L_0021F494; }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021F490; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 44u)));  goto L_0021F45C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021F464; } }
L_0021F45C:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_0021F464:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021F490; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F480u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_003F(c, 272u, depth + 1u); else { c.pc = 0x0021F620u; return; } if (c.pc != 0x0021F480u) [[unlikely]] return; }
L_0021F480:
    c.r[1].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0021F490; } }
    set32(c.r[17], 0u + 2u);
    c.budget -= 1;
L_0021F490:
    set32(c.r[2], ld32((c.r[19].w[0] + 192u)));
    c.budget -= 1;
L_0021F494:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0021F4B8; }
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0021F4B4; } }
    set32(c.r[2], 0u + 7u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_0021F4B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0021F4B8:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0021F4E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[6], c.r[6].w[0] << 2);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0021F534; } }
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F534u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003F(c, 272u, depth + 1u); else { c.pc = 0x0021F620u; return; } if (c.pc != 0x0021F534u) [[unlikely]] return; }
L_0021F534:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021F58C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 44u)));  goto L_0021F560; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021F564; } }
L_0021F560:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0021F564:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021F58C; } }
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F58Cu); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003F(c, 272u, depth + 1u); else { c.pc = 0x0021F620u; return; } if (c.pc != 0x0021F58Cu) [[unlikely]] return; }
L_0021F58C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0021F600; }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021F5FC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 44u)));  goto L_0021F5CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021F5D4; } }
L_0021F5CC:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_0021F5D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021F5FC; } }
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F5FCu); set32(c.r[6], c.r[2].w[0] + 2u);  if (depth < kMaxDepth) unit_003F(c, 272u, depth + 1u); else { c.pc = 0x0021F620u; return; } if (c.pc != 0x0021F5FCu) [[unlikely]] return; }
L_0021F5FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0021F600:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0021F620:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::div(c, 0, c.r[18].w[0], c.r[3].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0021F688; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0021F7C8; }
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021F7C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F680u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 277u, depth + 1u); else { c.pc = 0x0021F7F0u; return; } if (c.pc != 0x0021F680u) [[unlikely]] return; }
L_0021F680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0021F7CC; } }
L_0021F688:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 28u)));  goto L_0021F764; }
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[16], c.r[17].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0021F6F4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 44u)));  goto L_0021F6CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0021F6D4; } }
L_0021F6CC:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_0021F6D4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0021F6F4; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F6F4u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_003F(c, 277u, depth + 1u); else { c.pc = 0x0021F7F0u; return; } if (c.pc != 0x0021F6F4u) [[unlikely]] return; }
L_0021F6F4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 28u)));  goto L_0021F704; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021F7C8; } }
L_0021F704:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021F7C4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 44u)));  goto L_0021F734; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021F73C; } }
L_0021F734:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 2;
L_0021F73C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021F7C4; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F75Cu); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_003F(c, 277u, depth + 1u); else { c.pc = 0x0021F7F0u; return; } if (c.pc != 0x0021F75Cu) [[unlikely]] return; }
L_0021F75C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F7C8; } }
L_0021F764:
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021F7C4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 44u)));  goto L_0021F794; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021F79C; } }
L_0021F794:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_0021F79C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021F7C4; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F7BCu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_003F(c, 277u, depth + 1u); else { c.pc = 0x0021F7F0u; return; } if (c.pc != 0x0021F7BCu) [[unlikely]] return; }
L_0021F7BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F7C8; } }
L_0021F7C4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0021F7C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0021F7CC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0021F7F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::div(c, 0, c.r[18].w[0], c.r[6].w[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 80u)));
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.r[5].d[0] = c.hi.d[0];
    c.budget -= 18;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[20].w[0] + 84u);  if (t) { goto L_0021F88C; } }
L_0021F838:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[19].d[0]) { set32(c.r[7], ld32((c.r[7].w[0] + 40u)));  goto L_0021F88C; }
    set32(c.r[3], ld32((c.r[7].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_0021F888; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_0021F888; } }
    set32(c.r[4], ld32((c.r[7].w[0] + 28u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0021F888; } }
    c.r[1].d[0] = c.r[18].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0021F914; }
    st32((c.r[7].w[0] + 28u), c.r[18].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F914; } }
L_0021F888:
    set32(c.r[7], ld32((c.r[7].w[0] + 40u)));
    c.budget -= 1;
L_0021F88C:
    c.budget -= 2;
    if (c.r[7].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[7].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F838u | kUnwind; return; } goto L_0021F838; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F89Cu); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0021F89Cu) [[unlikely]] return; }
L_0021F89C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021F8D8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[5], c.r[31].w[0] - 8u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[4].d[0] | 16706ull;
    set32(c.r[3], c.r[3].w[0] + 18696u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 13;
L_0021F8D8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0] + 20u), c.r[19].w[0]);  goto L_0021F8E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021F914; } }
L_0021F8E8:
    set32(c.r[3], c.r[20].w[0] + 40u);
    st32((c.r[2].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 32u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 80u)));
    st32((c.r[2].w[0] + 40u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 40u)));
    st32((c.r[3].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 11;
L_0021F914:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0021F940:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::div(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0021F988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F980u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 285u, depth + 1u); else { c.pc = 0x0021F9F0u; return; } if (c.pc != 0x0021F980u) [[unlikely]] return; }
L_0021F980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0021F9CC; } }
L_0021F988:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], 0u + 1u);  goto L_0021F9C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F9A0u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_003F(c, 285u, depth + 1u); else { c.pc = 0x0021F9F0u; return; } if (c.pc != 0x0021F9A0u) [[unlikely]] return; }
L_0021F9A0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F9B8u); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_003F(c, 285u, depth + 1u); else { c.pc = 0x0021F9F0u; return; } if (c.pc != 0x0021F9B8u) [[unlikely]] return; }
L_0021F9B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F9C8; } }
L_0021F9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F9C8u);  if (depth < kMaxDepth) unit_003F(c, 285u, depth + 1u); else { c.pc = 0x0021F9F0u; return; } if (c.pc != 0x0021F9C8u) [[unlikely]] return; }
L_0021F9C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0021F9CC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0021F9F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[10], 0u + 3u);
    mmi::div(c, 0, c.r[6].w[0], c.r[10].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 80u)));
    c.r[9].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] + 84u);  if (t) { goto L_0021FA9C; } }
    set32(c.r[6], ld32((c.r[11].w[0] + 20u)));
    c.budget -= 1;
L_0021FA14:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[5].d[0]) { set32(c.r[11], ld32((c.r[11].w[0] + 40u)));  goto L_0021FA9C; }
    set32(c.r[6], ld32((c.r[11].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[7].d[0];  if (t) { goto L_0021FA98; } }
    set32(c.r[6], ld32((c.r[11].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[8].d[0];  if (t) { goto L_0021FA98; } }
    set32(c.r[6], ld32((c.r[11].w[0] + 28u)));
    mmi::div(c, 0, c.r[6].w[0], c.r[10].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != c.r[6].d[0];  if (t) { goto L_0021FA98; } }
    set32(c.r[5], ld32((c.r[11].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[11].w[0] + 36u)));
    st32((c.r[3].w[0] + 40u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[11].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[11].w[0] + 40u)));
    st32((c.r[3].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 192u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[11].d[0];  if (t) { goto L_0021FA74; } }
    set32(c.r[3], 0u + 6u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 2;
L_0021FA74:
    c.budget -= 2;
    if (c.r[11].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0021FAA8; }
    set32(c.r[25], ld32((c.r[11].w[0] + 16u)));
    c.r[4].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FA90u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021FA90u) [[unlikely]] return; }
L_0021FA90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021FAA4; } }
L_0021FA98:
    set32(c.r[11], ld32((c.r[11].w[0] + 40u)));
    c.budget -= 1;
L_0021FA9C:
    c.budget -= 2;
    if (c.r[11].d[0] != c.r[3].d[0]) { set32(c.r[6], ld32((c.r[11].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FA14u | kUnwind; return; } goto L_0021FA14; }
L_0021FAA4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0021FAA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021FAB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FAC8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 292u, depth + 1u); else { c.pc = 0x0021FB20u; return; } if (c.pc != 0x0021FAC8u) [[unlikely]] return; }
L_0021FAC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] + 31744u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FAE8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x0021FAE8u) [[unlikely]] return; }
L_0021FAE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021FB00:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 7;
    { set32(c.r[4], c.r[4].w[0] + 31792u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001714F0u | kUnwind; return; } [[clang::musttail]] return unit_0014(c, 165u, depth); }
L_0021FB20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021FB5C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 24u), 0u);  goto L_0021FB5C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FB58u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021FB58u) [[unlikely]] return; }
L_0021FB58:
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 1;
L_0021FB5C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 196u), 0u);  goto L_0021FB80; }
    set32(c.r[5], ld32((c.r[17].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0021FB7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FB78u); set32(c.r[4], ld32((c.r[17].w[0] + 200u)));  if (depth < kMaxDepth) unit_0040(c, 38u, depth + 1u); else { c.pc = 0x00220470u; return; } if (c.pc != 0x0021FB78u) [[unlikely]] return; }
L_0021FB78:
    st32((c.r[17].w[0] + 204u), 0u);
    c.budget -= 1;
L_0021FB7C:
    st32((c.r[17].w[0] + 196u), 0u);
    c.budget -= 1;
L_0021FB80:
    st32((c.r[17].w[0] + 192u), 0u);
    st32((c.r[17].w[0] + 200u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021FBA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 192u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 200u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FBECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0040(c, 34u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x0021FBECu) [[unlikely]] return; }
L_0021FBEC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_0021FD48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { [[clang::musttail]] return unit_0040(c, 21u, depth); } }
L_0021FBFC:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 24u)));  goto L_0021FC14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0021FC20; } }
L_0021FC14:
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021FC20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0021FD30; } }
L_0021FC28:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;  goto L_0021FCE0; }
    c.r[2].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 44u)));  goto L_0021FC44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021FC50; } }
L_0021FC44:
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021FC50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 20u)));  goto L_0021FC84; }
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021FC80; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FC80u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 279u, depth + 1u); else { c.pc = 0x0021A720u; return; } if (c.pc != 0x0021FC80u) [[unlikely]] return; }
L_0021FC80:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 1;
L_0021FC84:
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 44u)));  goto L_0021FC9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021FCA8; } }
L_0021FC9C:
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
L_0021FCA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0021FD30; }
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021FD2C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FCD8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 284u, depth + 1u); else { c.pc = 0x0021A7E0u; return; } if (c.pc != 0x0021FCD8u) [[unlikely]] return; }
L_0021FCD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021FD2C; } }
L_0021FCE0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 44u)));  goto L_0021FCF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021FCFC; } }
L_0021FCF0:
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021FCFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021FD2C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021FD2C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FD2Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 288u, depth + 1u); else { c.pc = 0x0021A880u; return; } if (c.pc != 0x0021FD2Cu) [[unlikely]] return; }
L_0021FD2C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0021FD30:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 64u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FC28u | kUnwind; return; } goto L_0021FC28; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0021FD48:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FBFCu | kUnwind; return; } goto L_0021FBFC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 200u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FD70u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0040(c, 34u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x0021FD70u) [[unlikely]] return; }
L_0021FD70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_0021FECC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0040(c, 20u, depth); } }
L_0021FD80:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 24u)));  goto L_0021FD98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0021FDA4; } }
L_0021FD98:
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021FDA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0021FE88; } }
L_0021FDAC:
    set32(c.r[5], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0021FE88; }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;  goto L_0021FE50; }
    c.r[2].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 44u)));  goto L_0021FDE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021FDF0; } }
L_0021FDE4:
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021FDF0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 20u)));  goto L_0021FE0C; }
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FE08u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 279u, depth + 1u); else { c.pc = 0x0021A720u; return; } if (c.pc != 0x0021FE08u) [[unlikely]] return; }
L_0021FE08:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 1;
L_0021FE0C:
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 44u)));  goto L_0021FE24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021FE30; } }
L_0021FE24:
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
L_0021FE30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021FE84; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FE48u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 284u, depth + 1u); else { c.pc = 0x0021A7E0u; return; } if (c.pc != 0x0021FE48u) [[unlikely]] return; }
L_0021FE48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021FE84; } }
L_0021FE50:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 44u)));  goto L_0021FE60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021FE6C; } }
L_0021FE60:
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021FE6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021FE84; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FE84u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 288u, depth + 1u); else { c.pc = 0x0021A880u; return; } if (c.pc != 0x0021FE84u) [[unlikely]] return; }
L_0021FE84:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0021FE88:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FDACu | kUnwind; return; } goto L_0021FDAC; }
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_0021FECC; }
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0021FEC8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FEC8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 275u, depth + 1u); else { c.pc = 0x0021A6B0u; return; } if (c.pc != 0x0021FEC8u) [[unlikely]] return; }
L_0021FEC8:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0021FECC:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FD80u | kUnwind; return; } goto L_0021FD80; }
    set32(c.r[4], ld32((c.r[16].w[0] + 200u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FEF4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0040(c, 34u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x0021FEF4u) [[unlikely]] return; }
L_0021FEF4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 212u)));  goto L_0021FF04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0040(c, 20u, depth); } }
L_0021FF04:
    c.r[1].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[20].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_0040(c, 16u, depth); }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0040(c, 20u, depth); } }
L_0021FF18:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 24u)));  goto L_0021FF30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0021FF3C; } }
L_0021FF30:
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0021FF3C:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  [[clang::musttail]] return unit_0040(c, 16u, depth); }
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 24u)));  goto L_0021FF90; }
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021FF8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FF74u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x0021FF74u) [[unlikely]] return; }
L_0021FF74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 24u), c.r[2].w[0]);  goto L_0021FF8C; }
    set32(c.r[5], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FF88u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 44u, depth + 1u); else { c.pc = 0x003C4650u; return; } if (c.pc != 0x0021FF88u) [[unlikely]] return; }
L_0021FF88:
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 1;
L_0021FF8C:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 1;
L_0021FF90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0040(c, 15u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0040(c, 13u, depth); } }
L_0021FFA0:
    set32(c.r[6], c.r[18].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  [[clang::musttail]] return unit_0040(c, 13u, depth); }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 28u)));  [[clang::musttail]] return unit_0040(c, 9u, depth); }
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[17], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 28u)));  [[clang::musttail]] return unit_0040(c, 5u, depth); }
    c.r[2].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 44u)));  goto L_0021FFF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021FFFC; } }
L_0021FFF4:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_0021FFFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0040(c, 4u, depth); } }
    [[clang::musttail]] return unit_0040(c, 2u, depth);
}

}
